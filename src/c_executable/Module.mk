MODULE_SOURCE_FILES := $(call rwildcard,$(call get-path),*.c)
$(call add-executable-module,$(call get-path))
