# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target interfaces_sistema::interfaces_sistema
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${interfaces_sistema_TARGETS}.
if(interfaces_sistema_TARGETS AND NOT TARGET interfaces_sistema::interfaces_sistema)
  add_library(interfaces_sistema::interfaces_sistema INTERFACE IMPORTED)
  set_target_properties(interfaces_sistema::interfaces_sistema PROPERTIES
    INTERFACE_LINK_LIBRARIES "${interfaces_sistema_TARGETS}")
endif()
