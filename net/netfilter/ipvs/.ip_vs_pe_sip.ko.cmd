cmd_net/netfilter/ipvs/ip_vs_pe_sip.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/ipvs/ip_vs_pe_sip.ko net/netfilter/ipvs/ip_vs_pe_sip.o net/netfilter/ipvs/ip_vs_pe_sip.mod.o