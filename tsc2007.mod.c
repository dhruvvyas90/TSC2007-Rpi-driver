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
	{ 0x3fdad60f, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xea890d80, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9fee7dda, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf675a3f7, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6ce215ca, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc0fd322e, __VMLINUX_SYMBOL_STR(of_property_read_u64) },
	{ 0xe09916b0, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2c39a760, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x27c4367d, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3e5e8478, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x9f0c1003, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe021c7c2, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd7d0ffdf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa1527fab, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xc0142d90, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa3c627f7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x29862344, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,tsc2007*");
MODULE_ALIAS("i2c:tsc2007");

MODULE_INFO(srcversion, "48363CC97E221E90DEFD840");
