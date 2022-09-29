# LVGL Integration

OPT_DEFS += -DQUANTUM_PAINTER_LVGL_INTEGRATION_ENABLE -DLV_CONF_INCLUDE_SIMPLE
DEFERRED_EXEC_ENABLE := yes

LVGL_DIR_NAME = lvgl
LVGL_DIR = $(LIB_DIR)
LVGL_PATH = $(LVGL_DIR)/$(LVGL_DIR_NAME)

COMMON_VPATH += $(PLATFORM_PATH) \
                $(QUANTUM_DIR)/painter/$(LVGL_DIR_NAME) \
                $(LVGL_PATH)

include $(LVGL_DIR)/$(LVGL_DIR_NAME)/demos/lv_demos.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/examples/lv_examples.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/core/lv_core.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/draw/lv_draw.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/extra/lv_extra.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/font/lv_font.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/hal/lv_hal.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/misc/lv_misc.mk
include $(LVGL_DIR)/$(LVGL_DIR_NAME)/src/widgets/lv_widgets.mk


SRC += qp_lvgl.c \
       $(CSRCS)
