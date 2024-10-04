// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "test_msgs/srv/empty.hpp"


#ifndef TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_HPP_
#define TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__test_msgs__srv__Empty_Request __attribute__((deprecated))
#else
# define DEPRECATED__test_msgs__srv__Empty_Request __declspec(deprecated)
#endif

namespace test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Empty_Request_
{
  using Type = Empty_Request_<ContainerAllocator>;

  explicit Empty_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Empty_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::srv::Empty_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::srv::Empty_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_msgs__srv__Empty_Request
    std::shared_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_msgs__srv__Empty_Request
    std::shared_ptr<test_msgs::srv::Empty_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Empty_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Empty_Request_

// alias to use template instance with default allocator
using Empty_Request =
  test_msgs::srv::Empty_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_msgs


#ifndef _WIN32
# define DEPRECATED__test_msgs__srv__Empty_Response __attribute__((deprecated))
#else
# define DEPRECATED__test_msgs__srv__Empty_Response __declspec(deprecated)
#endif

namespace test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Empty_Response_
{
  using Type = Empty_Response_<ContainerAllocator>;

  explicit Empty_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Empty_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::srv::Empty_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::srv::Empty_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_msgs__srv__Empty_Response
    std::shared_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_msgs__srv__Empty_Response
    std::shared_ptr<test_msgs::srv::Empty_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Empty_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Empty_Response_

// alias to use template instance with default allocator
using Empty_Response =
  test_msgs::srv::Empty_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__test_msgs__srv__Empty_Event __attribute__((deprecated))
#else
# define DEPRECATED__test_msgs__srv__Empty_Event __declspec(deprecated)
#endif

namespace test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Empty_Event_
{
  using Type = Empty_Event_<ContainerAllocator>;

  explicit Empty_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Empty_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<test_msgs::srv::Empty_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<test_msgs::srv::Empty_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<test_msgs::srv::Empty_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<test_msgs::srv::Empty_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<test_msgs::srv::Empty_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<test_msgs::srv::Empty_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<test_msgs::srv::Empty_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<test_msgs::srv::Empty_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_msgs::srv::Empty_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_msgs::srv::Empty_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_msgs::srv::Empty_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_msgs__srv__Empty_Event
    std::shared_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_msgs__srv__Empty_Event
    std::shared_ptr<test_msgs::srv::Empty_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Empty_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Empty_Event_

// alias to use template instance with default allocator
using Empty_Event =
  test_msgs::srv::Empty_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_msgs

namespace test_msgs
{

namespace srv
{

struct Empty
{
  using Request = test_msgs::srv::Empty_Request;
  using Response = test_msgs::srv::Empty_Response;
  using Event = test_msgs::srv::Empty_Event;
};

}  // namespace srv

}  // namespace test_msgs

#endif  // TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_HPP_
