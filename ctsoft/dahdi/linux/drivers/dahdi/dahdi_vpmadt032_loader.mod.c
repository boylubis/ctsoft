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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcb0f4fd5, "vpmadtreg_register" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff964b25, "param_set_int" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x992e647, "vpmadtreg_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xa7046549, "vprintk" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe456bd3a, "complete" },
	{ 0x3e1f073d, "wait_for_completion_timeout" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_voicebus";

