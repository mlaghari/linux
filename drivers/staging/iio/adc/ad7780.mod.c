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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ad_sigma_delta,industrialio";

MODULE_ALIAS("spi:ad7170");
MODULE_ALIAS("spi:ad7171");
MODULE_ALIAS("spi:ad7780");
MODULE_ALIAS("spi:ad7781");

MODULE_INFO(srcversion, "883DDC84073E697CFDD3C5D");