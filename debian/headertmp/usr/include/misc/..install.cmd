cmd_debian/headertmp/usr/include/misc/.install := /bin/bash scripts/headers_install.sh ./debian/headertmp/usr/include/misc ./include/uapi/misc cxl.h; /bin/bash scripts/headers_install.sh ./debian/headertmp/usr/include/misc ./include/misc ; /bin/bash scripts/headers_install.sh ./debian/headertmp/usr/include/misc ./include/generated/uapi/misc ; for F in ; do echo "\#include <asm-generic/$$F>" > ./debian/headertmp/usr/include/misc/$$F; done; touch debian/headertmp/usr/include/misc/.install