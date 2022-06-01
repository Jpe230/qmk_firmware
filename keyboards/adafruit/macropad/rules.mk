# Project specific files
SRC += \
    config_led.c \
    oled_spi/ssd1306_sh1106.c

QUANTUM_LIB_SRC += spi_master.c

# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
NKRO_ENABLE        = yes
WS2812_DRIVER      = vendor
ENCODER_ENABLE     = yes
RGB_MATRIX_ENABLE  = yes
RGB_MATRIX_DRIVER  = WS2812
EEPROM_DRIVER      = transient
OLED_ENABLE        = yes
OLED_DRIVER        = custom
EXTRAKEY_ENABLE    = yes
# AUDIO_DRIVER       = pwm_software

ALLOW_WARNINGS = yes
