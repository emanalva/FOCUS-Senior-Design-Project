#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "action_msgs::action_msgs__rosidl_generator_py" for configuration ""
set_property(TARGET action_msgs::action_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(action_msgs::action_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "action_msgs::action_msgs__rosidl_generator_c;Python3::Python;action_msgs::action_msgs__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_generator_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_cpp;builtin_interfaces::builtin_interfaces__rosidl_generator_py;unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_fastrtps_c;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_introspection_c;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_c;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_fastrtps_cpp;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_introspection_cpp;unique_identifier_msgs::unique_identifier_msgs__rosidl_typesupport_cpp;unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_py;service_msgs::service_msgs__rosidl_generator_c;service_msgs::service_msgs__rosidl_typesupport_fastrtps_c;service_msgs::service_msgs__rosidl_typesupport_fastrtps_cpp;service_msgs::service_msgs__rosidl_typesupport_introspection_c;service_msgs::service_msgs__rosidl_typesupport_c;service_msgs::service_msgs__rosidl_typesupport_introspection_cpp;service_msgs::service_msgs__rosidl_typesupport_cpp;service_msgs::service_msgs__rosidl_generator_py"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libaction_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libaction_msgs__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets action_msgs::action_msgs__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_action_msgs::action_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libaction_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
