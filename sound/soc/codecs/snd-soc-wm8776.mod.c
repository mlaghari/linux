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
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:wm8775");
MODULE_ALIAS("i2c:wm8776");
MODULE_ALIAS("of:N*T*Cwlf,wm8776");
MODULE_ALIAS("of:N*T*Cwlf,wm8776C*");

MODULE_INFO(srcversion, "703EC3CEFFEDD40E33AB712");