# project specific files
SRC += ../../../drivers/led/sn32/matrix_sn32f24xx.c
SRC += ../../../drivers/bluetooth/sn32/iton/iton.c
SRC += ../../../drivers/bluetooth/sn32/iton/driver.c
SRC += config_led.c

# MCU name
MCU = SN32F248BF

# Build Options
#   comment out to disable the options.
#
BACKLIGHT_ENABLE 		= no
MAGIC_ENABLE 			= yes
MAGIC_KEYCODE_ENABLE 	= yes
ENCODER_ENABLE 			= yes
BOOTMAGIC_ENABLE 		= yes	# Virtual DIP switch configuration
MOUSEKEY_ENABLE 		= no    # Mouse keys
EXTRAKEY_ENABLE 		= yes	# Audio control and System control
CONSOLE_ENABLE 			= no    # Console for debug
COMMAND_ENABLE 			= no    # Commands for debug and configuration
SLEEP_LED_ENABLE 		= no   	# Breathing sleep LED during USB suspend
NKRO_ENABLE 			= yes   # USB Nkey Rollover
AUDIO_ENABLE 			= no
RGBLIGHT_ENABLE 		= no
SERIAL_LINK_ENABLE 		= no
WAIT_FOR_USB 			= no
CUSTOM_MATRIX 			= yes

# Custom RGB matrix handling
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = SN32F24xB
