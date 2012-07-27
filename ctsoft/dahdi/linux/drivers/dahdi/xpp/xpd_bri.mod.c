#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7d09bae2, "module_layout" },
	{ 0xce961a7c, "update_xpd_status" },
	{ 0x5106586d, "xpd_driver_register" },
	{ 0x34e0cec4, "xproto_unregister" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x875a34d3, "send_cmd_frame" },
	{ 0xd4066e90, "xpp_span_assigned" },
	{ 0xc3b63d8, "pcmtx_chan" },
	{ 0x524e15eb, "xpp_maint" },
	{ 0x7fb0229b, "report_bad_ioctl" },
	{ 0x583e7498, "xpd_byaddr" },
	{ 0xea3c5f2d, "xpp_hooksig" },
	{ 0x5d4115, "get_xframe" },
	{ 0xd049d26a, "xpp_echocan_name" },
	{ 0xd561671, "put_xframe" },
	{ 0xeebfd3f8, "dahdi_hdlc_finish" },
	{ 0xef97c22d, "remove_proc_entry" },
	{ 0xb6859c9f, "xpp_ioctl" },
	{ 0xff964b25, "param_set_int" },
	{ 0x58b9d9ea, "notify_bad_xpd" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xea12b4f9, "xpp_open" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xf908d7fe, "dahdi_hdlc_abort" },
	{ 0xb72397d5, "printk" },
	{ 0xa333615, "xpp_echocan_create" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xb4390f9a, "mcount" },
	{ 0x37897db7, "xproto_card_entry" },
	{ 0xaf457edd, "xproto_register" },
	{ 0x2ef28734, "pcmtx" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xe84dbdc1, "update_wanted_pcm_mask" },
	{ 0x71308b24, "xpd_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x6ffe5b08, "xpp_close" },
	{ 0x7c866d11, "create_proc_entry" },
	{ 0xc724fbe2, "dump_xframe" },
	{ 0xef23a29, "dahdi_sync_tick" },
	{ 0xb2cc48ff, "elect_syncer" },
	{ 0x1ec7673f, "xpd_alloc" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x4bdd0e74, "dahdi_hdlc_getbuf" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8d1bc52a, "dahdi_hdlc_putbuf" },
	{ 0x51917d3f, "xpp_register_request" },
	{ 0xbf8d1b8e, "xpd_driver_unregister" },
	{ 0x31b90dbc, "xframe_next_packet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xpp,dahdi";


MODULE_INFO(srcversion, "6B1A2D20A65E629769AAAC5");
