/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 1999 - 2008, Anthony Minessale and Digium, Inc.
 * Anthony Minessale (anthmct@yahoo.com)
 * Kevin P. Fleming <kpfleming@digium.com>
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
 * \brief RAW SLINEAR 16 Format
 * \arg File name extensions: sln16
 * \ingroup formats
 */
 
#include "asterisk.h"

ASTERISK_FILE_VERSION(__FILE__, "$Revision: 233694 $")

#include "asterisk/mod_format.h"
#include "asterisk/module.h"
#include "asterisk/endian.h"

#define BUF_SIZE	640		/* 640 bytes, 320 samples */
#define	SLIN_SAMPLES	320

static struct ast_frame *slinear_read(struct ast_filestream *s, int *whennext)
{
	int res;
	/* Send a frame from the file to the appropriate channel */

	s->fr.frametype = AST_FRAME_VOICE;
	s->fr.subclass = AST_FORMAT_SLINEAR16;
	s->fr.mallocd = 0;
	AST_FRAME_SET_BUFFER(&s->fr, s->buf, AST_FRIENDLY_OFFSET, BUF_SIZE);
	if ((res = fread(s->fr.data.ptr, 1, s->fr.datalen, s->f)) < 1) {
		if (res)
			ast_log(LOG_WARNING, "Short read (%d) (%s)!\n", res, strerror(errno));
		return NULL;
	}
	*whennext = s->fr.samples = res/2;
	s->fr.datalen = res;
	return &s->fr;
}

static int slinear_write(struct ast_filestream *fs, struct ast_frame *f)
{
	int res;

	if (f->frametype != AST_FRAME_VOICE) {
		ast_log(LOG_WARNING, "Asked to write non-voice frame!\n");
		return -1;
	}
	if (f->subclass != AST_FORMAT_SLINEAR16) {
		ast_log(LOG_WARNING, "Asked to write non-slinear16 frame (%d)!\n", f->subclass);
		return -1;
	}
	if ((res = fwrite(f->data.ptr, 1, f->datalen, fs->f)) != f->datalen) {
		ast_log(LOG_WARNING, "Bad write (%d/%d): %s\n", res, f->datalen, strerror(errno));
		return -1;
	}
	return 0;
}

static int slinear_seek(struct ast_filestream *fs, off_t sample_offset, int whence)
{
	off_t offset = 0, min = 0, cur, max;

	sample_offset <<= 1;

	cur = ftello(fs->f);

	fseeko(fs->f, 0, SEEK_END);

	max = ftello(fs->f);

	if (whence == SEEK_SET)
		offset = sample_offset;
	else if (whence == SEEK_CUR || whence == SEEK_FORCECUR)
		offset = sample_offset + cur;
	else if (whence == SEEK_END)
		offset = max - sample_offset;

	if (whence != SEEK_FORCECUR)
		offset = (offset > max) ? max : offset;

	/* always protect against seeking past begining. */
	offset = (offset < min) ? min : offset;

	return fseeko(fs->f, offset, SEEK_SET);
}

static int slinear_trunc(struct ast_filestream *fs)
{
	return ftruncate(fileno(fs->f), ftello(fs->f));
}

static off_t slinear_tell(struct ast_filestream *fs)
{
	return ftello(fs->f) / 2;
}

static const struct ast_format slin_f = {
	.name = "sln16",
	.exts = "sln16",
	.format = AST_FORMAT_SLINEAR16,
	.write = slinear_write,
	.seek = slinear_seek,
	.trunc = slinear_trunc,
	.tell = slinear_tell,
	.read = slinear_read,
	.buf_size = BUF_SIZE + AST_FRIENDLY_OFFSET,
};

static int load_module(void)
{
	if (ast_format_register(&slin_f))
		return AST_MODULE_LOAD_FAILURE;

	return AST_MODULE_LOAD_SUCCESS;
}

static int unload_module(void)
{
	return ast_format_unregister(slin_f.name);
}	

AST_MODULE_INFO(ASTERISK_GPL_KEY, AST_MODFLAG_LOAD_ORDER, "Raw Signed Linear 16KHz Audio support (SLN16)",
	.load = load_module,
	.unload = unload_module,
	.load_pri = 10,
);
