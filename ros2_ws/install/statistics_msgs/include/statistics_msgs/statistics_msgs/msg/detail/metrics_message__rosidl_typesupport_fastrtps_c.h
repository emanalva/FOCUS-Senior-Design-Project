// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#ifndef STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "statistics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_serialize_statistics_msgs__msg__MetricsMessage(
  const statistics_msgs__msg__MetricsMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_deserialize_statistics_msgs__msg__MetricsMessage(
  eprosima::fastcdr::Cdr &,
  statistics_msgs__msg__MetricsMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_statistics_msgs__msg__MetricsMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_statistics_msgs__msg__MetricsMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
bool cdr_serialize_key_statistics_msgs__msg__MetricsMessage(
  const statistics_msgs__msg__MetricsMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_key_statistics_msgs__msg__MetricsMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_key_statistics_msgs__msg__MetricsMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, statistics_msgs, msg, MetricsMessage)();

#ifdef __cplusplus
}
#endif

#endif  // STATISTICS_MSGS__MSG__DETAIL__METRICS_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
