#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x79c3f9a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x798cb080, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xa7f1d357, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xb19c2376, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0xb19fdd25, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xa1527fab, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xac1d7501, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xc0142d90, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AF8EE9DD00D0C971FD6E81E");
