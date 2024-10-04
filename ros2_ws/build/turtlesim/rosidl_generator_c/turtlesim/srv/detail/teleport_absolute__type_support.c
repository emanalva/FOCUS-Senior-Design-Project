// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "turtlesim/srv/detail/teleport_absolute__struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/srv/detail/teleport_absolute__type_support.h"
#include "turtlesim/srv/detail/teleport_absolute__functions.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  turtlesim,
  srv,
  TeleportAbsolute
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  turtlesim__srv__TeleportAbsolute_Event * event_msg = (turtlesim__srv__TeleportAbsolute_Event *)(allocator->allocate(sizeof(turtlesim__srv__TeleportAbsolute_Event), allocator->state));
  if (!turtlesim__srv__TeleportAbsolute_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    turtlesim__srv__TeleportAbsolute_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!turtlesim__srv__TeleportAbsolute_Request__copy((const turtlesim__srv__TeleportAbsolute_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    turtlesim__srv__TeleportAbsolute_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!turtlesim__srv__TeleportAbsolute_Response__copy((const turtlesim__srv__TeleportAbsolute_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  turtlesim,
  srv,
  TeleportAbsolute
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  turtlesim__srv__TeleportAbsolute_Event * _event_msg = (turtlesim__srv__TeleportAbsolute_Event *)(event_msg);

  turtlesim__srv__TeleportAbsolute_Event__fini((turtlesim__srv__TeleportAbsolute_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
