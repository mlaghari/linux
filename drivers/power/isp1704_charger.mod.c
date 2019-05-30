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
"depends=udc-core";

MODULE_ALIAS("of:N*T*Cnxp,isp1704");
MODULE_ALIAS("of:N*T*Cnxp,isp1704C*");
MODULE_ALIAS("of:N*T*Cnxp,isp1707");
MODULE_ALIAS("of:N*T*Cnxp,isp1707C*");

MODULE_INFO(srcversion, "E3D4D748A2E58AF39E570B5");