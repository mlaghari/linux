cmd_drivers/regulator/da9063-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/da9063-regulator.ko drivers/regulator/da9063-regulator.o drivers/regulator/da9063-regulator.mod.o