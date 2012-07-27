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
	{ 0x639aed5a, "dahdi_unregister_echocan_factory" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff964b25, "param_set_int" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x9ee98d47, "dahdi_register_echocan_factory" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";


MODULE_INFO(srcversion, "F57DE76C47A3B9537C018EB");
