cmd_drivers/iio/common/ssp_sensors/ssp_iio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/common/ssp_sensors/ssp_iio.ko drivers/iio/common/ssp_sensors/ssp_iio.o drivers/iio/common/ssp_sensors/ssp_iio.mod.o