cmd_drivers/gpu/drm/nouveau/nouveau.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpu/drm/nouveau/nouveau.ko drivers/gpu/drm/nouveau/nouveau.o drivers/gpu/drm/nouveau/nouveau.mod.o