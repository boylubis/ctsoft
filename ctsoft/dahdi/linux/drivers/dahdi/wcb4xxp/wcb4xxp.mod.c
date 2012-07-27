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
	{ 0xd840658b, "dahdi_free_device" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x14e1089d, "pci_disable_device" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xeebfd3f8, "dahdi_hdlc_finish" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x234b0b17, "pci_release_regions" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda1a7335, "kasprintf" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x41344088, "param_get_charp" },
	{ 0xf10de535, "ioread8" },
	{ 0xfe7fc94, "pci_iounmap" },
	{ 0xf908d7fe, "dahdi_hdlc_abort" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0x61651be, "strcat" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x3e3f2d09, "device_create_file" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x6065bf74, "pci_request_regions" },
	{ 0x4bdd0e74, "dahdi_hdlc_getbuf" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0xff88b742, "_dahdi_ec_span" },
	{ 0x810edc34, "pci_iomap" },
	{ 0x436c2179, "iowrite32" },
	{ 0x8d1bc52a, "dahdi_hdlc_putbuf" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";

MODULE_ALIAS("pci:v0000D161d0000B410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B552bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B55Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B752bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B556bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E884bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E888bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000E998bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B566bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B761bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B560bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B762bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B562bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B56Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B540bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");

MODULE_INFO(srcversion, "C4BE85B6833DFF3ADC30020");
