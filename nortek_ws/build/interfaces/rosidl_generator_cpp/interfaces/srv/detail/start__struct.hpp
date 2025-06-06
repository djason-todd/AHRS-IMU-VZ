// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__START__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__START__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Start_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Start_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Start_Request_
{
  using Type = Start_Request_<ContainerAllocator>;

  explicit Start_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Start_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::Start_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Start_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Start_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Start_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Start_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Start_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Start_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Start_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Start_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Start_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Start_Request
    std::shared_ptr<interfaces::srv::Start_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Start_Request
    std::shared_ptr<interfaces::srv::Start_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Start_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Start_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Start_Request_

// alias to use template instance with default allocator
using Start_Request =
  interfaces::srv::Start_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Start_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Start_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Start_Response_
{
  using Type = Start_Response_<ContainerAllocator>;

  explicit Start_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = "";
    }
  }

  explicit Start_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reply(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = "";
    }
  }

  // field types and members
  using _reply_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reply_type reply;

  // setters for named parameter idiom
  Type & set__reply(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reply = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Start_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Start_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Start_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Start_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Start_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Start_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Start_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Start_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Start_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Start_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Start_Response
    std::shared_ptr<interfaces::srv::Start_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Start_Response
    std::shared_ptr<interfaces::srv::Start_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Start_Response_ & other) const
  {
    if (this->reply != other.reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const Start_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Start_Response_

// alias to use template instance with default allocator
using Start_Response =
  interfaces::srv::Start_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Start
{
  using Request = interfaces::srv::Start_Request;
  using Response = interfaces::srv::Start_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__START__STRUCT_HPP_
