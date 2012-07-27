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
	{ 0xd5ebb50e, "kmem_cache_destroy" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xf56580da, "usb_buffer_alloc" },
	{ 0xf1a6691, "usb_altnum_to_altsetting" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0xad480056, "usb_init_urb" },
	{ 0x5d4115, "get_xframe" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xadcaa0e8, "usb_buffer_free" },
	{ 0xdc5d6042, "usb_deregister_dev" },
	{ 0xd561671, "put_xframe" },
	{ 0xef97c22d, "remove_proc_entry" },
	{ 0xa7931faa, "xframe_init" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x6ff4de02, "xbus_num" },
	{ 0x7a73f55f, "usb_deregister" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x310b8765, "usb_register_dev" },
	{ 0xa3b6e9f8, "kmem_cache_free" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xf6318c69, "usb_submit_urb" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0xb1274156, "usb_reset_device" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x84423978, "xbus_receive_xframe" },
	{ 0x7c866d11, "create_proc_entry" },
	{ 0xc724fbe2, "dump_xframe" },
	{ 0x5cfcd639, "kmem_cache_create" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x3f1899f1, "up" },
	{ 0x6840d3a6, "usb_register_driver" },
	{ 0xb7d265be, "xbus_disconnect" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xb47657cf, "xbus_new" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0x67e2f72e, "xbus_connect" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xpp";

MODULE_ALIAS("usb:vE4E4p1132d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vE4E4p1142d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vE4E4p1152d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vE4E4p1162d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "85AD6402F6BE95802B293E6");
