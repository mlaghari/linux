cmd_drivers/platform/x86/amilo-rfkill.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/platform/x86/amilo-rfkill.ko drivers/platform/x86/amilo-rfkill.o drivers/platform/x86/amilo-rfkill.mod.o