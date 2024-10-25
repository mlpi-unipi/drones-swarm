# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_stigmergy_map_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED stigmergy_map_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(stigmergy_map_FOUND FALSE)
  elseif(NOT stigmergy_map_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(stigmergy_map_FOUND FALSE)
  endif()
  return()
endif()
set(_stigmergy_map_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stigmergy_map_FIND_QUIETLY)
  message(STATUS "Found stigmergy_map: 0.0.0 (${stigmergy_map_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stigmergy_map' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${stigmergy_map_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stigmergy_map_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${stigmergy_map_DIR}/${_extra}")
endforeach()
