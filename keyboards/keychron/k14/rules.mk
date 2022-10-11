# MCU name
MCU = SN32F248BF
BOOTLOADER = sn32-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE  = yes  # Enable Bootmagic Lite
MOUSEKEY_ENABLE   = no   # Mouse keys
EXTRAKEY_ENABLE   = no  # Audio control and System control
CONSOLE_ENABLE    = yes  # Console for debug
COMMAND_ENABLE    = no   # Commands for debug and configuration
NKRO_ENABLE       = no   # Enable N-Key Rollover
BACKLIGHT_ENABLE  = no   # Enable keyboard backlight functionality
AUDIO_ENABLE      = no   # Audio output
WAIT_FOR_USB      = no
CUSTOM_MATRIX     = yes

EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = sn32

VIA_ENABLE = no
# CUSTOM_MATRIX     = yes
DIP_SWITCH_ENABLE = yes

# Custom RGB matrix handling
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = custom

# # project specific files
SRC += sn32/matrix_sn32f24xx.c sn32/rgb_matrix_sn32f24xb.c

# Build ansi by default
# DEFAULT_FOLDER = keychron/k14/rgb/ansi
