cmd_drivers/video/backlight/lp855x_bl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/backlight/lp855x_bl.ko drivers/video/backlight/lp855x_bl.o drivers/video/backlight/lp855x_bl.mod.o