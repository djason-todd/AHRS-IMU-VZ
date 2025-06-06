// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ConnectSerial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONNECT_SERIAL__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__CONNECT_SERIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ConnectSerial_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ConnectSerial_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectSerial_Request_
{
  using Type = ConnectSerial_Request_<ContainerAllocator>;

  explicit ConnectSerial_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_port = "";
    }
  }

  explicit ConnectSerial_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : serial_port(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_port = "";
    }
  }

  // field types and members
  using _serial_port_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_port_type serial_port;

  // setters for named parameter idiom
  Type & set__serial_port(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ConnectSerial_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ConnectSerial_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectSerial_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectSerial_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ConnectSerial_Request
    std::shared_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ConnectSerial_Request
    std::shared_ptr<interfaces::srv::ConnectSerial_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectSerial_Request_ & other) const
  {
    if (this->serial_port != other.serial_port) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectSerial_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectSerial_Request_

// alias to use template instance with default allocator
using ConnectSerial_Request =
  interfaces::srv::ConnectSerial_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ConnectSerial_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ConnectSerial_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectSerial_Response_
{
  using Type = ConnectSerial_Response_<ContainerAllocator>;

  explicit ConnectSerial_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ConnectSerial_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ConnectSerial_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ConnectSerial_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectSerial_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectSerial_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ConnectSerial_Response
    std::shared_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ConnectSerial_Response
    std::shared_ptr<interfaces::srv::ConnectSerial_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectSerial_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectSerial_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectSerial_Response_

// alias to use template instance with default allocator
using ConnectSerial_Response =
  interfaces::srv::ConnectSerial_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ConnectSerial
{
  using Request = interfaces::srv::ConnectSerial_Request;
  using Response = interfaces::srv::ConnectSerial_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONNECT_SERIAL__STRUCT_HPP_
