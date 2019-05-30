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

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "713192C51D61B13DB55D012");