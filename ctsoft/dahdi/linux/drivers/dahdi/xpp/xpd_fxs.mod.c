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
	{ 0xf9a482f9, "msleep" },
	{ 0x5106586d, "xpd_driver_register" },
	{ 0x34e0cec4, "xproto_unregister" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xb07837de, "notify_rxsig" },
	{ 0x9cc70361, "generic_card_pcm_recompute" },
	{ 0x7fb0229b, "report_bad_ioctl" },
	{ 0xef97c22d, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xf0608da9, "oht_pcm" },
	{ 0xb72397d5, "printk" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x37897db7, "xproto_card_entry" },
	{ 0xaf457edd, "xproto_register" },
	{ 0x38d8f291, "dahdi_qevent_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x71308b24, "xpd_free" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x30db808f, "generic_card_pcm_fromspan" },
	{ 0x7c866d11, "create_proc_entry" },
	{ 0xfa26b969, "generic_card_pcm_tospan" },
	{ 0xf1e66db0, "generic_echocancel_timeslot" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x915ed688, "generic_timing_priority" },
	{ 0x1ec7673f, "xpd_alloc" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0xf5ee4a88, "generic_echocancel_setmask" },
	{ 0x3e4751de, "hookstate_changed" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x51917d3f, "xpp_register_request" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xbf8d1b8e, "xpd_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xpp,dahdi";


MODULE_INFO(srcversion, "9A6CDC7C3472E24D0AA20FF");
