// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Magnetometer __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Magnetometer __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Magnetometer_
{
  using Type = Magnetometer_<ContainerAllocator>;

  explicit Magnetometer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->is_compensated_for_hard_iron = false;
      this->dvl_active = false;
      this->dvl_acoustics_active = false;
      this->dvl_transmitter_active = false;
      this->magnetometer_x = 0.0f;
      this->magnetometer_y = 0.0f;
      this->magnetometer_z = 0.0f;
    }
  }

  explicit Magnetometer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->is_compensated_for_hard_iron = false;
      this->dvl_active = false;
      this->dvl_acoustics_active = false;
      this->dvl_transmitter_active = false;
      this->magnetometer_x = 0.0f;
      this->magnetometer_y = 0.0f;
      this->magnetometer_z = 0.0f;
    }
  }

  // field types and members
  using _system_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _system_timestamp_type system_timestamp;
  using _posix_time_type =
    bool;
  _posix_time_type posix_time;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _microseconds_type =
    uint32_t;
  _microseconds_type microseconds;
  using _is_compensated_for_hard_iron_type =
    bool;
  _is_compensated_for_hard_iron_type is_compensated_for_hard_iron;
  using _dvl_active_type =
    bool;
  _dvl_active_type dvl_active;
  using _dvl_acoustics_active_type =
    bool;
  _dvl_acoustics_active_type dvl_acoustics_active;
  using _dvl_transmitter_active_type =
    bool;
  _dvl_transmitter_active_type dvl_transmitter_active;
  using _magnetometer_x_type =
    float;
  _magnetometer_x_type magnetometer_x;
  using _magnetometer_y_type =
    float;
  _magnetometer_y_type magnetometer_y;
  using _magnetometer_z_type =
    float;
  _magnetometer_z_type magnetometer_z;

  // setters for named parameter idiom
  Type & set__system_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->system_timestamp = _arg;
    return *this;
  }
  Type & set__posix_time(
    const bool & _arg)
  {
    this->posix_time = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__microseconds(
    const uint32_t & _arg)
  {
    this->microseconds = _arg;
    return *this;
  }
  Type & set__is_compensated_for_hard_iron(
    const bool & _arg)
  {
    this->is_compensated_for_hard_iron = _arg;
    return *this;
  }
  Type & set__dvl_active(
    const bool & _arg)
  {
    this->dvl_active = _arg;
    return *this;
  }
  Type & set__dvl_acoustics_active(
    const bool & _arg)
  {
    this->dvl_acoustics_active = _arg;
    return *this;
  }
  Type & set__dvl_transmitter_active(
    const bool & _arg)
  {
    this->dvl_transmitter_active = _arg;
    return *this;
  }
  Type & set__magnetometer_x(
    const float & _arg)
  {
    this->magnetometer_x = _arg;
    return *this;
  }
  Type & set__magnetometer_y(
    const float & _arg)
  {
    this->magnetometer_y = _arg;
    return *this;
  }
  Type & set__magnetometer_z(
    const float & _arg)
  {
    this->magnetometer_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Magnetometer_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Magnetometer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Magnetometer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Magnetometer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Magnetometer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Magnetometer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Magnetometer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Magnetometer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Magnetometer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Magnetometer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Magnetometer
    std::shared_ptr<interfaces::msg::Magnetometer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Magnetometer
    std::shared_ptr<interfaces::msg::Magnetometer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Magnetometer_ & other) const
  {
    if (this->system_timestamp != other.system_timestamp) {
      return false;
    }
    if (this->posix_time != other.posix_time) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->microseconds != other.microseconds) {
      return false;
    }
    if (this->is_compensated_for_hard_iron != other.is_compensated_for_hard_iron) {
      return false;
    }
    if (this->dvl_active != other.dvl_active) {
      return false;
    }
    if (this->dvl_acoustics_active != other.dvl_acoustics_active) {
      return false;
    }
    if (this->dvl_transmitter_active != other.dvl_transmitter_active) {
      return false;
    }
    if (this->magnetometer_x != other.magnetometer_x) {
      return false;
    }
    if (this->magnetometer_y != other.magnetometer_y) {
      return false;
    }
    if (this->magnetometer_z != other.magnetometer_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Magnetometer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Magnetometer_

// alias to use template instance with default allocator
using Magnetometer =
  interfaces::msg::Magnetometer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_HPP_
