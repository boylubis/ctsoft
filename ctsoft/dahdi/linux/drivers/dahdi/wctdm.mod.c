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
	{ 0xadf42bd5, "__request_region" },
	{ 0xa3247381, "per_cpu__current_task" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x8230781d, "dev_set_drvdata" },
	{ 0x9cfcdbb6, "dahdi_alarm_channel" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xfa0e0acf, "x86_dma_fallback_dev" },
	{ 0x8ff8b1fe, "__dahdi_ec_chunk" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda1a7335, "kasprintf" },
	{ 0x41344088, "param_get_charp" },
	{ 0xdab0bef, "pci_set_master" },
	{ 0x59d8223a, "ioport_resource" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4a63e6a3, "dahdi_hooksig" },
	{ 0x38d8f291, "dahdi_qevent_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0x55b3133e, "dma_release_from_coherent" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0xd999c118, "dma_alloc_from_coherent" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x108e8985, "param_get_uint" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x9bce482f, "__release_region" },
	{ 0xbf24842e, "pci_unregister_driver" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x37a0cba, "kfree" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x217e8d56, "__pci_register_driver" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa23de481, "pci_enable_device" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x12b5b0f1, "dev_get_drvdata" },
	{ 0x48c71aed, "dma_ops" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";

MODULE_ALIAS("pci:v0000E159d00000001sv0000A159sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000E159sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000B100sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000B1D9sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000B118sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000B119sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A9FDsd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A8FDsd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A800sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A801sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A908sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv0000A901sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F744D879DFC8BE136BED15");
