MODULE_NAME := benchmark-runner
MODULE_CPPFLAGS := -I.
MODULE_SOURCE_FILES := $(call rwildcard,$(get-path),*.cpp)
MODULE_LIBRARIES :=

# $(call use-fmt)
# $(call use-google-benchmark)

$(call add-executable-module,$(get-path))
