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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x597475a3, "dahdi_register_chardev" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x5d662e5, "dahdi_unregister_chardev" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xff964b25, "param_set_int" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xb72397d5, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x52069f0, "module_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x58766162, "dahdi_transcode_fops" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";


MODULE_INFO(srcversion, "A277815D4B24D3707BE4FF1");
