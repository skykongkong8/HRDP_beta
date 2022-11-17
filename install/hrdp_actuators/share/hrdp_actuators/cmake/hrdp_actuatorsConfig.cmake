# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hrdp_actuators_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hrdp_actuators_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hrdp_actuators_FOUND FALSE)
  elseif(NOT hrdp_actuators_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hrdp_actuators_FOUND FALSE)
  endif()
  return()
endif()
set(_hrdp_actuators_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hrdp_actuators_FIND_QUIETLY)
  message(STATUS "Found hrdp_actuators: 0.0.0 (${hrdp_actuators_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hrdp_actuators' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${hrdp_actuators_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hrdp_actuators_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${hrdp_actuators_DIR}/${_extra}")
endforeach()
