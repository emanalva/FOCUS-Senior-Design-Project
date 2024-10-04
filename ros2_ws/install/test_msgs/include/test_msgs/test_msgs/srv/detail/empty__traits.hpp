// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/srv/empty.hpp"


#ifndef TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
#define TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_msgs/srv/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Empty_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::srv::Empty_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::srv::Empty_Request & msg)
{
  return test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::srv::Empty_Request>()
{
  return "test_msgs::srv::Empty_Request";
}

template<>
inline const char * name<test_msgs::srv::Empty_Request>()
{
  return "test_msgs/srv/Empty_Request";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::srv::Empty_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Empty_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::srv::Empty_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::srv::Empty_Response & msg)
{
  return test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::srv::Empty_Response>()
{
  return "test_msgs::srv::Empty_Response";
}

template<>
inline const char * name<test_msgs::srv::Empty_Response>()
{
  return "test_msgs/srv/Empty_Response";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_msgs::srv::Empty_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Empty_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_msgs::srv::Empty_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_msgs::srv::Empty_Event & msg)
{
  return test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_msgs::srv::Empty_Event>()
{
  return "test_msgs::srv::Empty_Event";
}

template<>
inline const char * name<test_msgs::srv::Empty_Event>()
{
  return "test_msgs/srv/Empty_Event";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::srv::Empty_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<test_msgs::srv::Empty_Request>::value && has_bounded_size<test_msgs::srv::Empty_Response>::value> {};

template<>
struct is_message<test_msgs::srv::Empty_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::srv::Empty>()
{
  return "test_msgs::srv::Empty";
}

template<>
inline const char * name<test_msgs::srv::Empty>()
{
  return "test_msgs/srv/Empty";
}

template<>
struct has_fixed_size<test_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::srv::Empty_Request>::value &&
    has_fixed_size<test_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::srv::Empty_Request>::value &&
    has_bounded_size<test_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct is_service<test_msgs::srv::Empty>
  : std::true_type
{
};

template<>
struct is_service_request<test_msgs::srv::Empty_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_msgs::srv::Empty_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
