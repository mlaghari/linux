cmd_drivers/pci/host/pci-hyperv.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pci/host/pci-hyperv.ko drivers/pci/host/pci-hyperv.o drivers/pci/host/pci-hyperv.mod.o