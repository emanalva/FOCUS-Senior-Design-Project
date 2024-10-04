// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rcl_interfaces:msg/IntegerRange.idl
// generated code does not contain a copyright notice
#ifndef RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/integer_range__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_rcl_interfaces__msg__IntegerRange(
  const rcl_interfaces__msg__IntegerRange * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_deserialize_rcl_interfaces__msg__IntegerRange(
  eprosima::fastcdr::Cdr &,
  rcl_interfaces__msg__IntegerRange * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__IntegerRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
bool cdr_serialize_key_rcl_interfaces__msg__IntegerRange(
  const rcl_interfaces__msg__IntegerRange * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_key_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_key_rcl_interfaces__msg__IntegerRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntegerRange)();

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__DETAIL__INTEGER_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
