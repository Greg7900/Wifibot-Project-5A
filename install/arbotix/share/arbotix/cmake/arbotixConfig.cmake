# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arbotix_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arbotix_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arbotix_FOUND FALSE)
  elseif(NOT arbotix_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arbotix_FOUND FALSE)
  endif()
  return()
endif()
set(_arbotix_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arbotix_FIND_QUIETLY)
  message(STATUS "Found arbotix: 0.11.0 (${arbotix_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arbotix' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arbotix_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arbotix_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${arbotix_DIR}/${_extra}")
endforeach()
