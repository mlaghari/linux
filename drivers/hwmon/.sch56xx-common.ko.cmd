cmd_drivers/hwmon/sch56xx-common.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/sch56xx-common.ko drivers/hwmon/sch56xx-common.o drivers/hwmon/sch56xx-common.mod.o