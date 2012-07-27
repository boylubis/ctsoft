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
	{ 0xdb6c1991, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7328df29, "dahdi_rbsbits" },
	{ 0x5106586d, "xpd_driver_register" },
	{ 0x34e0cec4, "xproto_unregister" },
	{ 0x349cba85, "strchr" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x875a34d3, "send_cmd_frame" },
	{ 0xd4066e90, "xpp_span_assigned" },
	{ 0xc3b63d8, "pcmtx_chan" },
	{ 0x524e15eb, "xpp_maint" },
	{ 0x28c9b161, "dump_packet" },
	{ 0x7fb0229b, "report_bad_ioctl" },
	{ 0x583e7498, "xpd_byaddr" },
	{ 0x5d4115, "get_xframe" },
	{ 0xd049d26a, "xpp_echocan_name" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xb6859c9f, "xpp_ioctl" },
	{ 0xff964b25, "param_set_int" },
	{ 0x58b9d9ea, "notify_bad_xpd" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xea12b4f9, "xpp_open" },
	{ 0xb72397d5, "printk" },
	{ 0xa333615, "xpp_echocan_create" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x37897db7, "xproto_card_entry" },
	{ 0xaf457edd, "xproto_register" },
	{ 0x2ef28734, "pcmtx" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x3e3f2d09, "device_create_file" },
	{ 0xe84dbdc1, "update_wanted_pcm_mask" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x6ffe5b08, "xpp_close" },
	{ 0xef23a29, "dahdi_sync_tick" },
	{ 0xb2cc48ff, "elect_syncer" },
	{ 0x1ec7673f, "xpd_alloc" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x64a6fdeb, "alarm2str" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0x2d52407f, "xpd_set_spanname" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x51917d3f, "xpp_register_request" },
	{ 0xbf8d1b8e, "xpd_driver_unregister" },
	{ 0x31b90dbc, "xframe_next_packet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi,xpp";


MODULE_INFO(srcversion, "291986490EE0033582E86A4");
