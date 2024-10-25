# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vision_opencv_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vision_opencv_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vision_opencv_FOUND FALSE)
  elseif(NOT vision_opencv_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vision_opencv_FOUND FALSE)
  endif()
  return()
endif()
set(_vision_opencv_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vision_opencv_FIND_QUIETLY)
  message(STATUS "Found vision_opencv: 3.2.1 (${vision_opencv_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vision_opencv' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vision_opencv_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vision_opencv_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vision_opencv_DIR}/${_extra}")
endforeach()
