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
	{ 0x1200898e, "_dahdi_transmit" },
	{ 0xb909ae06, "dahdi_lboname" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7328df29, "dahdi_rbsbits" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x8ff8b1fe, "__dahdi_ec_chunk" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda1a7335, "kasprintf" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x3af98f9e, "ioremap_nocache" },
	{ 0x9d8158da, "dev_driver_string" },
	{ 0x9bce482f, "__release_region" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";

MODULE_ALIAS("pci:v000010B5d00009030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d0000D00Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42574DF3065E4F70D3FB016");
