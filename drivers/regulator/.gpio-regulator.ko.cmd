cmd_drivers/regulator/gpio-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/gpio-regulator.ko drivers/regulator/gpio-regulator.o drivers/regulator/gpio-regulator.mod.o