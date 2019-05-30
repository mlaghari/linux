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
"depends=libphy";

MODULE_ALIAS("mdio:???????????111001100100100010010");
MODULE_ALIAS("mdio:???????????111001100100100010100");
MODULE_ALIAS("mdio:???????????111001100100100010101");
MODULE_ALIAS("mdio:???????????111001100100100010110");

MODULE_INFO(srcversion, "004B438C8558A6C5F288D27");