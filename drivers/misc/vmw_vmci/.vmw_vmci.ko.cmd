cmd_drivers/misc/vmw_vmci/vmw_vmci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/vmw_vmci/vmw_vmci.ko drivers/misc/vmw_vmci/vmw_vmci.o drivers/misc/vmw_vmci/vmw_vmci.mod.o