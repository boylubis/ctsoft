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
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xd0d8621b, "strlen" },
	{ 0xb7c2182b, "dahdi_dynamic_register_driver" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x76a25829, "dahdi_dynamic_receive" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e401888, "dahdi_dynamic_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_dynamic";


MODULE_INFO(srcversion, "07EE4381A85011B82FD2D8A");
