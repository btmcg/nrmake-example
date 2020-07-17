MODULE_SOURCE_FILES := $(call rwildcard,$(call get-path),*.cpp)
$(call add-shared-library-module,$(call get-path))
