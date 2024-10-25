#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "image_geometry::image_geometry" for configuration ""
set_property(TARGET image_geometry::image_geometry APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(image_geometry::image_geometry PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libimage_geometry.so"
  IMPORTED_SONAME_NOCONFIG "libimage_geometry.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS image_geometry::image_geometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_image_geometry::image_geometry "${_IMPORT_PREFIX}/lib/libimage_geometry.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
