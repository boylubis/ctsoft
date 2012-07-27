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
	{ 0x1200898e, "_dahdi_transmit" },
	{ 0xa3247381, "per_cpu__current_task" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xa8322d1b, "vpmadt032_free" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x484e9a93, "vpmadt032_alloc" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x9cfcdbb6, "dahdi_alarm_channel" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7f8f2906, "vpmoct_init" },
	{ 0xe8a9b8fa, "gpakConfigureChannel" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x45d11c43, "down_interruptible" },
	{ 0xeebfd3f8, "dahdi_hdlc_finish" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xcba51308, "queue_work" },
	{ 0x37cdf1e5, "__voicebus_init" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8ff8b1fe, "__dahdi_ec_chunk" },
	{ 0xbd7fe945, "mutex_unlock" },
	{ 0xff964b25, "param_set_int" },
	{ 0x15e71880, "vpmadt032_echocan_free" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x9b490ed5, "voicebus_set_minlatency" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda1a7335, "kasprintf" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x41344088, "param_get_charp" },
	{ 0x1cefe352, "wait_for_completion" },
	{ 0x8019389a, "gpakAlgControl" },
	{ 0x9d292e01, "vpmadt032_init" },
	{ 0xf908d7fe, "dahdi_hdlc_abort" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0x9ced38aa, "down_trylock" },
	{ 0x4490efc9, "vpmadt032_test" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0xb4d4a9d2, "voicebus_release" },
	{ 0x5152e605, "memcmp" },
	{ 0xa9fcf31d, "wait_for_completion_interruptible" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xaa7a9d88, "vpmoct_free" },
	{ 0x102cf10b, "vpmadt032_get_default_parameters" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4a63e6a3, "dahdi_hooksig" },
	{ 0xec91df03, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xee1d683, "destroy_workqueue" },
	{ 0x38d8f291, "dahdi_qevent_lock" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0x63f998fe, "dma_pool_free" },
	{ 0x953381c6, "voicebus_start" },
	{ 0xfd1fbb84, "__create_workqueue_key" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0x104bc9d7, "flush_workqueue" },
	{ 0xbd405bbe, "vpmoct_alloc" },
	{ 0x61651be, "strcat" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0xe5eb1132, "gpakPingDsp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x4292364c, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0x3a7f1915, "dma_pool_alloc" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf05c69b, "voicebus_stop" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x4bdd0e74, "dahdi_hdlc_getbuf" },
	{ 0x3f1899f1, "up" },
	{ 0x4d5f0dfd, "vpmoct_echocan_create" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x193f818f, "vpmadt032_echocan_create" },
	{ 0x8fb52414, "request_firmware" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xe456bd3a, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf18d084a, "vpmoct_echocan_free" },
	{ 0x6942f8b5, "voicebus_current_latency" },
	{ 0x8d1bc52a, "dahdi_hdlc_putbuf" },
	{ 0xd3a7e98f, "voicebus_quiesce" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0x579b67fa, "vpmoct_preecho_disable" },
	{ 0xb703911e, "release_firmware" },
	{ 0x2610b2e4, "voicebus_transmit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_voicebus,dahdi,crc-ccitt";

MODULE_ALIAS("pci:v0000D161d00002400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "447FD7AECEB3B233E1D2ADD");
