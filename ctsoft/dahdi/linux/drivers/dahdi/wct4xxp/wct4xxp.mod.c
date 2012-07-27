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
	{ 0xdb6c1991, "device_remove_file" },
	{ 0x1200898e, "_dahdi_transmit" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7328df29, "dahdi_rbsbits" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xeebfd3f8, "dahdi_hdlc_finish" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xfa0e0acf, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x234b0b17, "pci_release_regions" },
	{ 0x8ff8b1fe, "__dahdi_ec_chunk" },
	{ 0x999e8297, "vfree" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda1a7335, "kasprintf" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x41344088, "param_get_charp" },
	{ 0xdab0bef, "pci_set_master" },
	{ 0x4452dccb, "pci_restore_state" },
	{ 0xfe7fc94, "pci_iounmap" },
	{ 0xf908d7fe, "dahdi_hdlc_abort" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0x9f0468e2, "dahdi_init_span" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x38d8f291, "dahdi_qevent_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0x55b3133e, "dma_release_from_coherent" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0xd999c118, "dma_alloc_from_coherent" },
	{ 0x3e3f2d09, "device_create_file" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x6065bf74, "pci_request_regions" },
	{ 0x4bdd0e74, "dahdi_hdlc_getbuf" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x8fb52414, "request_firmware" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0xff88b742, "_dahdi_ec_span" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x810edc34, "pci_iomap" },
	{ 0x8d1bc52a, "dahdi_hdlc_putbuf" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0xb703911e, "release_firmware" },
	{ 0x48c71aed, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa8677d82, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";

MODULE_ALIAS("pci:v000010EEd00000314sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001420sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001410sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001405sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000420sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000410sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000405sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000410sv00000003sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000405sv00000003sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000405sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001220sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001205sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00001210sv00000005sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000220sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000205sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000210sv00000004sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000205sv00000003sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000210sv00000003sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d00000210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E872B6EBFB21CAEE2D5580");
