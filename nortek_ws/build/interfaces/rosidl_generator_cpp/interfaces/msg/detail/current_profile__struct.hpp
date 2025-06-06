// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__CurrentProfile __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__CurrentProfile __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentProfile_
{
  using Type = CurrentProfile_<ContainerAllocator>;

  explicit CurrentProfile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->serial_number = 0ul;
      this->sound_velocity = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->cell_size = 0.0f;
      this->blanking = 0.0f;
      this->number_of_cells = 0;
      this->ambiguity_velocity = 0;
    }
  }

  explicit CurrentProfile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->serial_number = 0ul;
      this->sound_velocity = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->cell_size = 0.0f;
      this->blanking = 0.0f;
      this->number_of_cells = 0;
      this->ambiguity_velocity = 0;
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
  using _serial_number_type =
    uint32_t;
  _serial_number_type serial_number;
  using _sound_velocity_type =
    float;
  _sound_velocity_type sound_velocity;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _cell_size_type =
    float;
  _cell_size_type cell_size;
  using _blanking_type =
    float;
  _blanking_type blanking;
  using _number_of_cells_type =
    uint16_t;
  _number_of_cells_type number_of_cells;
  using _ambiguity_velocity_type =
    uint16_t;
  _ambiguity_velocity_type ambiguity_velocity;
  using _velocity_data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _velocity_data_type velocity_data;
  using _amplitude_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _amplitude_data_type amplitude_data;
  using _correlation_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _correlation_data_type correlation_data;

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
  Type & set__serial_number(
    const uint32_t & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__sound_velocity(
    const float & _arg)
  {
    this->sound_velocity = _arg;
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
  Type & set__cell_size(
    const float & _arg)
  {
    this->cell_size = _arg;
    return *this;
  }
  Type & set__blanking(
    const float & _arg)
  {
    this->blanking = _arg;
    return *this;
  }
  Type & set__number_of_cells(
    const uint16_t & _arg)
  {
    this->number_of_cells = _arg;
    return *this;
  }
  Type & set__ambiguity_velocity(
    const uint16_t & _arg)
  {
    this->ambiguity_velocity = _arg;
    return *this;
  }
  Type & set__velocity_data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->velocity_data = _arg;
    return *this;
  }
  Type & set__amplitude_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->amplitude_data = _arg;
    return *this;
  }
  Type & set__correlation_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->correlation_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::CurrentProfile_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::CurrentProfile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::CurrentProfile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::CurrentProfile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__CurrentProfile
    std::shared_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__CurrentProfile
    std::shared_ptr<interfaces::msg::CurrentProfile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentProfile_ & other) const
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
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->sound_velocity != other.sound_velocity) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->cell_size != other.cell_size) {
      return false;
    }
    if (this->blanking != other.blanking) {
      return false;
    }
    if (this->number_of_cells != other.number_of_cells) {
      return false;
    }
    if (this->ambiguity_velocity != other.ambiguity_velocity) {
      return false;
    }
    if (this->velocity_data != other.velocity_data) {
      return false;
    }
    if (this->amplitude_data != other.amplitude_data) {
      return false;
    }
    if (this->correlation_data != other.correlation_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentProfile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentProfile_

// alias to use template instance with default allocator
using CurrentProfile =
  interfaces::msg::CurrentProfile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_HPP_
