cmd_arch/x86/purgatory/setup-x86_64.o := gcc-5 -Wp,-MD,arch/x86/purgatory/.setup-x86_64.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/5/include -I./arch/x86/include -I./arch/x86/include/generated/uapi -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -D__ASSEMBLY__ -fno-PIE -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -mfentry -DCC_USING_FENTRY -DCC_HAVE_ASM_GOTO   -c -o arch/x86/purgatory/setup-x86_64.o arch/x86/purgatory/setup-x86_64.S

source_arch/x86/purgatory/setup-x86_64.o := arch/x86/purgatory/setup-x86_64.S

deps_arch/x86/purgatory/setup-x86_64.o := \

arch/x86/purgatory/setup-x86_64.o: $(deps_arch/x86/purgatory/setup-x86_64.o)

$(deps_arch/x86/purgatory/setup-x86_64.o):