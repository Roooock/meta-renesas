require conf/machine/include/${SOC_FAMILY}.inc
require conf/machine/include/rzg2-common.inc

# Firmware-pack
EXTRA_IMAGEDEPENDS += " firmware-pack"

MACHINEOVERRIDES =. "rzg2l:"
