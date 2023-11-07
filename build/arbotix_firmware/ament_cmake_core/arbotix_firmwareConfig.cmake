# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arbotix_firmware_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arbotix_firmware_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arbotix_firmware_FOUND FALSE)
  elseif(NOT arbotix_firmware_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arbotix_firmware_FOUND FALSE)
  endif()
  return()
endif()
set(_arbotix_firmware_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arbotix_firmware_FIND_QUIETLY)
  message(STATUS "Found arbotix_firmware: 0.11.0 (${arbotix_firmware_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arbotix_firmware' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arbotix_firmware_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arbotix_firmware_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${arbotix_firmware_DIR}/${_extra}")
endforeach()
