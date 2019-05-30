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

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");

MODULE_INFO(srcversion, "9350260E414E220F4D5B871");