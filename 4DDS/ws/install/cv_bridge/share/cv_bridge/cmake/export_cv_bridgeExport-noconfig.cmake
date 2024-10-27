#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cv_bridge::cv_bridge" for configuration ""
set_property(TARGET cv_bridge::cv_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(cv_bridge::cv_bridge PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rcpputils::rcpputils"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcv_bridge.so"
  IMPORTED_SONAME_NOCONFIG "libcv_bridge.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cv_bridge::cv_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_cv_bridge::cv_bridge "${_IMPORT_PREFIX}/lib/libcv_bridge.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
