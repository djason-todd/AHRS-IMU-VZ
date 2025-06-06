// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Altimeter.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__Altimeter __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Altimeter __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Altimeter_
{
  using Type = Altimeter_<ContainerAllocator>;

  explicit Altimeter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->altimeter_distance_valid = false;
      this->altimeter_quality_valid = false;
      this->pressure_valid = false;
      this->temperature_valid = false;
      this->serial_number = 0ul;
      this->sound_speed = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->altimeter_distance = 0.0f;
      this->altimeter_quality = 0;
    }
  }

  explicit Altimeter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->altimeter_distance_valid = false;
      this->altimeter_quality_valid = false;
      this->pressure_valid = false;
      this->temperature_valid = false;
      this->serial_number = 0ul;
      this->sound_speed = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->altimeter_distance = 0.0f;
      this->altimeter_quality = 0;
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
  using _altimeter_distance_valid_type =
    bool;
  _altimeter_distance_valid_type altimeter_distance_valid;
  using _altimeter_quality_valid_type =
    bool;
  _altimeter_quality_valid_type altimeter_quality_valid;
  using _pressure_valid_type =
    bool;
  _pressure_valid_type pressure_valid;
  using _temperature_valid_type =
    bool;
  _temperature_valid_type temperature_valid;
  using _serial_number_type =
    uint32_t;
  _serial_number_type serial_number;
  using _sound_speed_type =
    float;
  _sound_speed_type sound_speed;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _altimeter_distance_type =
    float;
  _altimeter_distance_type altimeter_distance;
  using _altimeter_quality_type =
    uint16_t;
  _altimeter_quality_type altimeter_quality;

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
  Type & set__altimeter_distance_valid(
    const bool & _arg)
  {
    this->altimeter_distance_valid = _arg;
    return *this;
  }
  Type & set__altimeter_quality_valid(
    const bool & _arg)
  {
    this->altimeter_quality_valid = _arg;
    return *this;
  }
  Type & set__pressure_valid(
    const bool & _arg)
  {
    this->pressure_valid = _arg;
    return *this;
  }
  Type & set__temperature_valid(
    const bool & _arg)
  {
    this->temperature_valid = _arg;
    return *this;
  }
  Type & set__serial_number(
    const uint32_t & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__sound_speed(
    const float & _arg)
  {
    this->sound_speed = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__altimeter_distance(
    const float & _arg)
  {
    this->altimeter_distance = _arg;
    return *this;
  }
  Type & set__altimeter_quality(
    const uint16_t & _arg)
  {
    this->altimeter_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Altimeter_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Altimeter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Altimeter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Altimeter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Altimeter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Altimeter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Altimeter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Altimeter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Altimeter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Altimeter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Altimeter
    std::shared_ptr<interfaces::msg::Altimeter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Altimeter
    std::shared_ptr<interfaces::msg::Altimeter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Altimeter_ & other) const
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
    if (this->altimeter_distance_valid != other.altimeter_distance_valid) {
      return false;
    }
    if (this->altimeter_quality_valid != other.altimeter_quality_valid) {
      return false;
    }
    if (this->pressure_valid != other.pressure_valid) {
      return false;
    }
    if (this->temperature_valid != other.temperature_valid) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->sound_speed != other.sound_speed) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->altimeter_distance != other.altimeter_distance) {
      return false;
    }
    if (this->altimeter_quality != other.altimeter_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const Altimeter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Altimeter_

// alias to use template instance with default allocator
using Altimeter =
  interfaces::msg::Altimeter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_HPP_
