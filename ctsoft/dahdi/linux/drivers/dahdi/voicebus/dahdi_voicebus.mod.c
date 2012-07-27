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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe90dcae0, "__request_module" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0xf89b9427, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x14e1089d, "pci_disable_device" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xc633495b, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x23869dc7, "cancel_work_sync" },
	{ 0xcba51308, "queue_work" },
	{ 0xfa0e0acf, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbd7fe945, "mutex_unlock" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xe5e41649, "dma_pool_destroy" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xdab0bef, "pci_set_master" },
	{ 0x2977f9c8, "pci_set_dma_mask" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xfe7fc94, "pci_iounmap" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0x116cfe5d, "__mutex_init" },
	{ 0xb72397d5, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xec91df03, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xee1d683, "destroy_workqueue" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x63f998fe, "dma_pool_free" },
	{ 0x55b3133e, "dma_release_from_coherent" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xfd1fbb84, "__create_workqueue_key" },
	{ 0xd999c118, "dma_alloc_from_coherent" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xd70158d9, "pci_set_mwi" },
	{ 0x52069f0, "module_put" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0x3a7f1915, "dma_pool_alloc" },
	{ 0x9bce482f, "__release_region" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0xd11d6fc5, "pci_clear_mwi" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f1899f1, "up" },
	{ 0x8fb52414, "request_firmware" },
	{ 0x810edc34, "pci_iomap" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0x3e1f073d, "wait_for_completion_timeout" },
	{ 0xfeaf1425, "dma_pool_create" },
	{ 0xb703911e, "release_firmware" },
	{ 0x48c71aed, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";


MODULE_INFO(srcversion, "4E5FAF4E17B7B83AABA1F95");
