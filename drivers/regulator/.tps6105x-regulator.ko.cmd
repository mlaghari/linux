cmd_drivers/regulator/tps6105x-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/tps6105x-regulator.ko drivers/regulator/tps6105x-regulator.o drivers/regulator/tps6105x-regulator.mod.o