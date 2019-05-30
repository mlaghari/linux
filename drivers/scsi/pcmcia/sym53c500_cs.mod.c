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
"depends=pcmcia,scsi_mod";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb0099E7F7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb45432EB8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb21648F44pc*pd*");

MODULE_INFO(srcversion, "9528EB0CD4162B4E2FE98BE");