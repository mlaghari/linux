cmd_drivers/usb/host/oxu210hp-hcd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/host/oxu210hp-hcd.ko drivers/usb/host/oxu210hp-hcd.o drivers/usb/host/oxu210hp-hcd.mod.o