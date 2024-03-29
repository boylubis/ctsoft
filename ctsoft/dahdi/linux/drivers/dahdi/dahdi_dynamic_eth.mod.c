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
	{ 0x349cba85, "strchr" },
	{ 0xd0d8621b, "strlen" },
	{ 0xb7c2182b, "dahdi_dynamic_register_driver" },
	{ 0x4f68ab09, "dev_get_by_name" },
	{ 0xc633495b, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x23869dc7, "cancel_work_sync" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcd6ab3b, "__pskb_pull_tail" },
	{ 0xe02a314d, "skb_queue_purge" },
	{ 0xe7a5def4, "dev_alloc_skb" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86cbd086, "skb_push" },
	{ 0xf297e2e0, "dev_remove_pack" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x7ecdc9f6, "skb_pull" },
	{ 0x52fa6433, "init_net" },
	{ 0x831a1864, "skb_queue_tail" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1ba154b2, "kfree_skb" },
	{ 0x76a25829, "dahdi_dynamic_receive" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e401888, "dahdi_dynamic_unregister_driver" },
	{ 0x850e4f3e, "skb_dequeue" },
	{ 0x1ea7afde, "dev_add_pack" },
	{ 0x9f58a575, "dev_queue_xmit" },
	{ 0x3e706683, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi_dynamic";


MODULE_INFO(srcversion, "9280A94BF5C30D233E4B6D8");
