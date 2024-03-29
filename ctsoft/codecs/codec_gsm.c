/*
 * Asterisk -- An open source telephony toolkit.
 *
 * The GSM code is from TOAST.  Copyright information for that package is available
 * in the GSM directory.
 *
 * Copyright (C) 1999 - 2005, Digium, Inc.
 *
 * Mark Spencer <markster@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Translate between signed linear and Global System for Mobile Communications (GSM)
 *
 * \ingroup codecs
 */

/*** MODULEINFO
	<depend>gsm</depend>
 ***/

#include "asterisk.h"

ASTERISK_FILE_VERSION(__FILE__, "$Revision: 150729 $")

#include "asterisk/translate.h"
#include "asterisk/config.h"
#include "asterisk/module.h"
#include "asterisk/utils.h"

#ifdef HAVE_GSM_HEADER
#include "gsm.h"
#elif defined(HAVE_GSM_GSM_HEADER)
#include <gsm/gsm.h>
#endif

#include "../formats/msgsm.h"

#define BUFFER_SAMPLES	8000
#define GSM_SAMPLES	160
#define	GSM_FRAME_LEN	33
#define	MSGSM_FRAME_LEN	65

/* Sample frame data */
#include "asterisk/slin.h"
#include "ex_gsm.h"

struct gsm_translator_pvt {	/* both gsm2lin and lin2gsm */
	gsm gsm;
	int16_t buf[BUFFER_SAMPLES];	/* lin2gsm, temporary storage */
};

static int gsm_new(struct ast_trans_pvt *pvt)
{
	struct gsm_translator_pvt *tmp = pvt->pvt;
	
	return (tmp->gsm = gsm_create()) ? 0 : -1;
}

/*! \brief decode and store in outbuf. */
static int gsmtolin_framein(struct ast_trans_pvt *pvt, struct ast_frame *f)
{
	struct gsm_translator_pvt *tmp = pvt->pvt;
	int x;
	int16_t *dst = pvt->outbuf.i16;
	/* guess format from frame len. 65 for MSGSM, 33 for regular GSM */
	int flen = (f->datalen % MSGSM_FRAME_LEN == 0) ?
		MSGSM_FRAME_LEN : GSM_FRAME_LEN;

	for (x=0; x < f->datalen; x += flen) {
		unsigned char data[2 * GSM_FRAME_LEN];
		unsigned char *src;
		int len;
		if (flen == MSGSM_FRAME_LEN) {
			len = 2*GSM_SAMPLES;
			src = data;
			/* Translate MSGSM format to Real GSM format before feeding in */
			/* XXX what's the point here! we should just work
			 * on the full format.
			 */
			conv65(f->data.ptr + x, data);
		} else {
			len = GSM_SAMPLES;
			src = f->data.ptr + x;
		}
		/* XXX maybe we don't need to check */
		if (pvt->samples + len > BUFFER_SAMPLES) {	
			ast_log(LOG_WARNING, "Out of buffer space\n");
			return -1;
		}
		if (gsm_decode(tmp->gsm, src, dst + pvt->samples)) {
			ast_log(LOG_WARNING, "Invalid GSM data (1)\n");
			return -1;
		}
		pvt->samples += GSM_SAMPLES;
		pvt->datalen += 2 * GSM_SAMPLES;
		if (flen == MSGSM_FRAME_LEN) {
			if (gsm_decode(tmp->gsm, data + GSM_FRAME_LEN, dst + pvt->samples)) {
				ast_log(LOG_WARNING, "Invalid GSM data (2)\n");
				return -1;
			}
			pvt->samples += GSM_SAMPLES;
			pvt->datalen += 2 * GSM_SAMPLES;
		}
	}
	return 0;
}

/*! \brief store samples into working buffer for later decode */
static int lintogsm_framein(struct ast_trans_pvt *pvt, struct ast_frame *f)
{
	struct gsm_translator_pvt *tmp = pvt->pvt;

	/* XXX We should look at how old the rest of our stream is, and if it
	   is too old, then we should overwrite it entirely, otherwise we can
	   get artifacts of earlier talk that do not belong */
	if (pvt->samples + f->samples > BUFFER_SAMPLES) {
		ast_log(LOG_WARNING, "Out of buffer space\n");
		return -1;
	}
	memcpy(tmp->buf + pvt->samples, f->data.ptr, f->datalen);
	pvt->samples += f->samples;
	return 0;
}

/*! \brief encode and produce a frame */
static struct ast_frame *lintogsm_frameout(struct ast_trans_pvt *pvt)
{
	struct gsm_translator_pvt *tmp = pvt->pvt;
	int datalen = 0;
	int samples = 0;

	/* We can't work on anything less than a frame in size */
	if (pvt->samples < GSM_SAMPLES)
		return NULL;
	while (pvt->samples >= GSM_SAMPLES) {
		/* Encode a frame of data */
		gsm_encode(tmp->gsm, tmp->buf + samples, (gsm_byte *) pvt->outbuf.c + datalen);
		datalen += GSM_FRAME_LEN;
		samples += GSM_SAMPLES;
		pvt->samples -= GSM_SAMPLES;
	}

	/* Move the data at the end of the buffer to the front */
	if (pvt->samples)
		memmove(tmp->buf, tmp->buf + samples, pvt->samples * 2);

	return ast_trans_frameout(pvt, datalen, samples);
}

static void gsm_destroy_stuff(struct ast_trans_pvt *pvt)
{
	struct gsm_translator_pvt *tmp = pvt->pvt;
	if (tmp->gsm)
		gsm_destroy(tmp->gsm);
}

static struct ast_translator gsmtolin = {
	.name = "gsmtolin", 
	.srcfmt = AST_FORMAT_GSM,
	.dstfmt = AST_FORMAT_SLINEAR,
	.newpvt = gsm_new,
	.framein = gsmtolin_framein,
	.destroy = gsm_destroy_stuff,
	.sample = gsm_sample,
	.buffer_samples = BUFFER_SAMPLES,
	.buf_size = BUFFER_SAMPLES * 2,
	.desc_size = sizeof (struct gsm_translator_pvt ),
	.plc_samples = GSM_SAMPLES,
};

static struct ast_translator lintogsm = {
	.name = "lintogsm", 
	.srcfmt = AST_FORMAT_SLINEAR,
	.dstfmt = AST_FORMAT_GSM,
	.newpvt = gsm_new,
	.framein = lintogsm_framein,
	.frameout = lintogsm_frameout,
	.destroy = gsm_destroy_stuff,
	.sample = slin8_sample,
	.desc_size = sizeof (struct gsm_translator_pvt ),
	.buf_size = (BUFFER_SAMPLES * GSM_FRAME_LEN + GSM_SAMPLES - 1)/GSM_SAMPLES,
};


static int parse_config(int reload)
{
	struct ast_variable *var;
	struct ast_flags config_flags = { reload ? CONFIG_FLAG_FILEUNCHANGED : 0 };
	struct ast_config *cfg = ast_config_load("codecs.conf", config_flags);
	if (cfg == CONFIG_STATUS_FILEMISSING || cfg == CONFIG_STATUS_FILEUNCHANGED || cfg == CONFIG_STATUS_FILEINVALID)
		return 0;
	for (var = ast_variable_browse(cfg, "plc"); var; var = var->next) {
	       if (!strcasecmp(var->name, "genericplc")) {
		       gsmtolin.useplc = ast_true(var->value) ? 1 : 0;
			   //ast_verb(3, "codec_gsm: %susing generic PLC\n", gsmtolin.useplc ? "" : "not ");
	       }
	}
	ast_config_destroy(cfg);
	return 0;
}

/*! \brief standard module glue */
static int reload(void)
{
	if (parse_config(1)) {
		return AST_MODULE_LOAD_DECLINE;
	}
	return AST_MODULE_LOAD_SUCCESS;
}

static int unload_module(void)
{
	int res;

	res = ast_unregister_translator(&lintogsm);
	if (!res)
		res = ast_unregister_translator(&gsmtolin);

	return res;
}

static int load_module(void)
{
	int res;

	if (parse_config(0))
		return AST_MODULE_LOAD_DECLINE;
	res = ast_register_translator(&gsmtolin);
	if (!res) 
		res=ast_register_translator(&lintogsm);
	else
		ast_unregister_translator(&gsmtolin);
	if (res) 
		return AST_MODULE_LOAD_FAILURE;
	return AST_MODULE_LOAD_SUCCESS;
}

AST_MODULE_INFO(ASTERISK_GPL_KEY, AST_MODFLAG_DEFAULT, "GSM Coder/Decoder",
		.load = load_module,
		.unload = unload_module,
		.reload = reload,
	       );
