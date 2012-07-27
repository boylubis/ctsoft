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
	{ 0xe90dcae0, "__request_module" },
	{ 0x1200898e, "_dahdi_transmit" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcff53400, "kref_put" },
	{ 0x7328df29, "dahdi_rbsbits" },
	{ 0xd840658b, "dahdi_free_device" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x6307fc98, "del_timer" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0xbd7fe945, "mutex_unlock" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x7e66fb8e, "dahdi_register_device" },
	{ 0xbb92249, "dahdi_unregister_device" },
	{ 0xb72397d5, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xec91df03, "mutex_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x45450063, "mod_timer" },
	{ 0x127760f0, "dahdi_create_device" },
	{ 0xdc592a62, "_dahdi_receive" },
	{ 0x52069f0, "module_put" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x3faf5260, "dahdi_alarm_notify" },
	{ 0xff88b742, "_dahdi_ec_span" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x1e84354e, "dev_set_name" },
	{ 0xe63973fe, "dahdi_set_dynamic_ops" },
	{ 0xd6c963c, "copy_from_user" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dahdi";


MODULE_INFO(srcversion, "DEDB227F14D65164ADC95AA");
