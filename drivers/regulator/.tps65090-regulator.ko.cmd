cmd_drivers/regulator/tps65090-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/tps65090-regulator.ko drivers/regulator/tps65090-regulator.o drivers/regulator/tps65090-regulator.mod.o