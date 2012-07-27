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
	{ 0x5106586d, "xpd_driver_register" },
	{ 0x34e0cec4, "xproto_unregister" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x875a34d3, "send_cmd_frame" },
	{ 0x583e7498, "xpd_byaddr" },
	{ 0x5d4115, "get_xframe" },
	{ 0xff964b25, "param_set_int" },
	{ 0x58b9d9ea, "notify_bad_xpd" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x37897db7, "xproto_card_entry" },
	{ 0xaf457edd, "xproto_register" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x1ec7673f, "xpd_alloc" },
	{ 0xbf8d1b8e, "xpd_driver_unregister" },
	{ 0x31b90dbc, "xframe_next_packet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xpp";


MODULE_INFO(srcversion, "31191ABD5EA08247CE3B738");
