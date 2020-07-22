MODULE_EXPORT_HEADERS_PREFIX := v1
MODULE_EXPORT_HEADERS := shared_library.hpp important_header.hpp

$(call add-shared-library-module,$(call get-path))
