MODULE_SOURCE_FILES := $(call rwildcard,$(get-path),*.cpp)
$(call add-shared-library-module,$(get-path))
