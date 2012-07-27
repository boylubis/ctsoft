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
	{ 0xef8f6f7b, "vpmoct_preecho_enable" },
	{ 0x635a1d83, "gpakConfigurePorts" },
	{ 0xd5ebb50e, "kmem_cache_destroy" },
	{ 0x1200898e, "_dahdi_transmit" },
	{ 0xa3247381, "per_cpu__current_task" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xa8322d1b, "vpmadt032_free" },
	{ 0x7328df29, "dahdi_rbsbits" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x484e9a93, "vpmadt032_alloc" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x7f8f2906, "vpmoct_init" },
	{ 0xe8a9b8fa, "gpakConfigureChannel" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xcba51308, "queue_work" },
	{ 0x37cdf1e5, "__voicebus_init" },
	{ 0x8ff8b1fe, "__dahdi_ec_chunk" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0xff964b25, "param_set_int" },
	{ 0x15e71880, "vpmadt032_echocan_free" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x9b490ed5, "voicebus_set_minlatency" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda1a7335, "kasprintf" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x41344088, "param_get_charp" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x8019389a, "gpakAlgControl" },
	{ 0x9d292e01, "vpmadt032_init" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0x4490efc9, "vpmadt032_test" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0x9f0468e2, "dahdi_init_span" },
	{ 0xb4d4a9d2, "voicebus_release" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xaa7a9d88, "vpmoct_free" },
	{ 0x102cf10b, "vpmadt032_get_default_parameters" },
	{ 0xa3b6e9f8, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xee1d683, "destroy_workqueue" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x45450063, "mod_timer" },
	{ 0x11bdd9d, "vpmadt032_reset" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0x953381c6, "voicebus_start" },
	{ 0xfd1fbb84, "__create_workqueue_key" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0x104bc9d7, "flush_workqueue" },
	{ 0xbd405bbe, "vpmoct_alloc" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0xe5eb1132, "gpakPingDsp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4292364c, "schedule" },
	{ 0xa44ad274, "wait_for_completion_interruptible_timeout" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5cfcd639, "kmem_cache_create" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d5f0dfd, "vpmoct_echocan_create" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x193f818f, "vpmadt032_echocan_create" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0xe456bd3a, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf18d084a, "vpmoct_echocan_free" },
	{ 0xd3a7e98f, "voicebus_quiesce" },
	{ 0x3e1f073d, "wait_for_completion_timeout" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0x579b67fa, "vpmoct_preecho_disable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_voicebus,dahdi";

MODULE_ALIAS("pci:v0000D161d00000120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2BC370B08E3122993F46CC7");
