// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/srv/detail/teleport_relative__functions.h"
#include "turtlesim/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TeleportRelative_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlesim::srv::TeleportRelative_Request(_init);
}

void TeleportRelative_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlesim::srv::TeleportRelative_Request *>(message_memory);
  typed_message->~TeleportRelative_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TeleportRelative_Request_message_member_array[2] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Request, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Request, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TeleportRelative_Request_message_members = {
  "turtlesim::srv",  // message namespace
  "TeleportRelative_Request",  // message name
  2,  // number of fields
  sizeof(turtlesim::srv::TeleportRelative_Request),
  false,  // has_any_key_member_
  TeleportRelative_Request_message_member_array,  // message members
  TeleportRelative_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleportRelative_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TeleportRelative_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TeleportRelative_Request_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Request__get_type_hash,
  &turtlesim__srv__TeleportRelative_Request__get_type_description,
  &turtlesim__srv__TeleportRelative_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtlesim


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>()
{
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Request)() {
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TeleportRelative_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlesim::srv::TeleportRelative_Response(_init);
}

void TeleportRelative_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlesim::srv::TeleportRelative_Response *>(message_memory);
  typed_message->~TeleportRelative_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TeleportRelative_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TeleportRelative_Response_message_members = {
  "turtlesim::srv",  // message namespace
  "TeleportRelative_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim::srv::TeleportRelative_Response),
  false,  // has_any_key_member_
  TeleportRelative_Response_message_member_array,  // message members
  TeleportRelative_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleportRelative_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TeleportRelative_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TeleportRelative_Response_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Response__get_type_hash,
  &turtlesim__srv__TeleportRelative_Response__get_type_description,
  &turtlesim__srv__TeleportRelative_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtlesim


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>()
{
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Response)() {
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TeleportRelative_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlesim::srv::TeleportRelative_Event(_init);
}

void TeleportRelative_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlesim::srv::TeleportRelative_Event *>(message_memory);
  typed_message->~TeleportRelative_Event();
}

size_t size_function__TeleportRelative_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<turtlesim::srv::TeleportRelative_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TeleportRelative_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<turtlesim::srv::TeleportRelative_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TeleportRelative_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<turtlesim::srv::TeleportRelative_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TeleportRelative_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const turtlesim::srv::TeleportRelative_Request *>(
    get_const_function__TeleportRelative_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<turtlesim::srv::TeleportRelative_Request *>(untyped_value);
  value = item;
}

void assign_function__TeleportRelative_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<turtlesim::srv::TeleportRelative_Request *>(
    get_function__TeleportRelative_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const turtlesim::srv::TeleportRelative_Request *>(untyped_value);
  item = value;
}

void resize_function__TeleportRelative_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<turtlesim::srv::TeleportRelative_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TeleportRelative_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<turtlesim::srv::TeleportRelative_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TeleportRelative_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<turtlesim::srv::TeleportRelative_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TeleportRelative_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<turtlesim::srv::TeleportRelative_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TeleportRelative_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const turtlesim::srv::TeleportRelative_Response *>(
    get_const_function__TeleportRelative_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<turtlesim::srv::TeleportRelative_Response *>(untyped_value);
  value = item;
}

void assign_function__TeleportRelative_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<turtlesim::srv::TeleportRelative_Response *>(
    get_function__TeleportRelative_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const turtlesim::srv::TeleportRelative_Response *>(untyped_value);
  item = value;
}

void resize_function__TeleportRelative_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<turtlesim::srv::TeleportRelative_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TeleportRelative_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TeleportRelative_Event__request,  // size() function pointer
    get_const_function__TeleportRelative_Event__request,  // get_const(index) function pointer
    get_function__TeleportRelative_Event__request,  // get(index) function pointer
    fetch_function__TeleportRelative_Event__request,  // fetch(index, &value) function pointer
    assign_function__TeleportRelative_Event__request,  // assign(index, value) function pointer
    resize_function__TeleportRelative_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(turtlesim::srv::TeleportRelative_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TeleportRelative_Event__response,  // size() function pointer
    get_const_function__TeleportRelative_Event__response,  // get_const(index) function pointer
    get_function__TeleportRelative_Event__response,  // get(index) function pointer
    fetch_function__TeleportRelative_Event__response,  // fetch(index, &value) function pointer
    assign_function__TeleportRelative_Event__response,  // assign(index, value) function pointer
    resize_function__TeleportRelative_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TeleportRelative_Event_message_members = {
  "turtlesim::srv",  // message namespace
  "TeleportRelative_Event",  // message name
  3,  // number of fields
  sizeof(turtlesim::srv::TeleportRelative_Event),
  false,  // has_any_key_member_
  TeleportRelative_Event_message_member_array,  // message members
  TeleportRelative_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TeleportRelative_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TeleportRelative_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TeleportRelative_Event_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Event__get_type_hash,
  &turtlesim__srv__TeleportRelative_Event__get_type_description,
  &turtlesim__srv__TeleportRelative_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtlesim


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Event>()
{
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Event)() {
  return &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TeleportRelative_service_members = {
  "turtlesim::srv",  // service namespace
  "TeleportRelative",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<turtlesim::srv::TeleportRelative>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TeleportRelative_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TeleportRelative_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtlesim::srv::TeleportRelative>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtlesim::srv::TeleportRelative>,
  &turtlesim__srv__TeleportRelative__get_type_hash,
  &turtlesim__srv__TeleportRelative__get_type_description,
  &turtlesim__srv__TeleportRelative__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtlesim


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::srv::TeleportRelative>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::turtlesim::srv::rosidl_typesupport_introspection_cpp::TeleportRelative_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlesim::srv::TeleportRelative_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlesim::srv::TeleportRelative_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtlesim::srv::TeleportRelative_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<turtlesim::srv::TeleportRelative>();
}

#ifdef __cplusplus
}
#endif
