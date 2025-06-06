// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ConnectTcp.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONNECT_TCP__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__CONNECT_TCP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ConnectTcp_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ConnectTcp_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectTcp_Request_
{
  using Type = ConnectTcp_Request_<ContainerAllocator>;

  explicit ConnectTcp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->password = "";
    }
  }

  explicit ConnectTcp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : host(_alloc),
    password(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->password = "";
    }
  }

  // field types and members
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _password_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _password_type password;

  // setters for named parameter idiom
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__password(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->password = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ConnectTcp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ConnectTcp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectTcp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectTcp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ConnectTcp_Request
    std::shared_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ConnectTcp_Request
    std::shared_ptr<interfaces::srv::ConnectTcp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectTcp_Request_ & other) const
  {
    if (this->host != other.host) {
      return false;
    }
    if (this->password != other.password) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectTcp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectTcp_Request_

// alias to use template instance with default allocator
using ConnectTcp_Request =
  interfaces::srv::ConnectTcp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ConnectTcp_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ConnectTcp_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectTcp_Response_
{
  using Type = ConnectTcp_Response_<ContainerAllocator>;

  explicit ConnectTcp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ConnectTcp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::ConnectTcp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ConnectTcp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectTcp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ConnectTcp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ConnectTcp_Response
    std::shared_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ConnectTcp_Response
    std::shared_ptr<interfaces::srv::ConnectTcp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectTcp_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectTcp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectTcp_Response_

// alias to use template instance with default allocator
using ConnectTcp_Response =
  interfaces::srv::ConnectTcp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ConnectTcp
{
  using Request = interfaces::srv::ConnectTcp_Request;
  using Response = interfaces::srv::ConnectTcp_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONNECT_TCP__STRUCT_HPP_
