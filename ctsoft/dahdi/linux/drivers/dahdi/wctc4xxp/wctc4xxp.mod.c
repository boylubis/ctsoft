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
	{ 0xadf42bd5, "__request_region" },
	{ 0xa3247381, "per_cpu__current_task" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xf89b9427, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7ee91c1d, "_spin_trylock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1f74dda0, "mem_map" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xa7759ff6, "dahdi_transcoder_unregister" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xd0d8621b, "strlen" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1a2429e8, "napi_complete" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xc633495b, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x41344088, "param_get_charp" },
	{ 0x1cefe352, "wait_for_completion" },
	{ 0xdab0bef, "pci_set_master" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x2977f9c8, "pci_set_dma_mask" },
	{ 0xfe7fc94, "pci_iounmap" },
	{ 0x261a28c9, "dahdi_transcoder_register" },
	{ 0xb72397d5, "printk" },
	{ 0x9cc120b3, "free_netdev" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xecf61323, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x157dc167, "netif_receive_skb" },
	{ 0xa3b6e9f8, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf518ffac, "pci_bus_write_config_dword" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x45450063, "mod_timer" },
	{ 0xcb813178, "netif_napi_add" },
	{ 0x55b3133e, "dma_release_from_coherent" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xfc688a5d, "dev_kfree_skb_any" },
	{ 0xd999c118, "dma_alloc_from_coherent" },
	{ 0x2969c566, "dahdi_transcoder_alert" },
	{ 0x831a1864, "skb_queue_tail" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf88ab4fd, "__alloc_skb" },
	{ 0x8e8bab24, "__napi_schedule" },
	{ 0x686491f8, "pci_bus_read_config_dword" },
	{ 0x68e3d329, "alloc_netdev_mq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x1ba154b2, "kfree_skb" },
	{ 0xbf61ca89, "eth_type_trans" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0x7a4bdb7b, "dahdi_transcoder_alloc" },
	{ 0x9bce482f, "__release_region" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0x1a8bbf1, "ether_setup" },
	{ 0x5cfcd639, "kmem_cache_create" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x35e39877, "dahdi_transcoder_free" },
	{ 0x3f1899f1, "up" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x8fb52414, "request_firmware" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x850e4f3e, "skb_dequeue" },
	{ 0x6bd528d7, "unregister_netdev" },
	{ 0xe456bd3a, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x810edc34, "pci_iomap" },
	{ 0x3e706683, "skb_put" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0x6d48cc84, "skb_copy_bits" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0xb703911e, "release_firmware" },
	{ 0x48c71aed, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_transcode";

MODULE_ALIAS("pci:v0000D161d00003400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00008004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1055D39E5613DAA3C594DE0");
