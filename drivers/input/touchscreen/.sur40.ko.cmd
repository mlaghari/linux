cmd_drivers/input/touchscreen/sur40.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/touchscreen/sur40.ko drivers/input/touchscreen/sur40.o drivers/input/touchscreen/sur40.mod.o