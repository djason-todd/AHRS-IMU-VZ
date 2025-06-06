// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/BottomTrack.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__BOTTOM_TRACK__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__BOTTOM_TRACK__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__BottomTrack __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__BottomTrack __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BottomTrack_
{
  using Type = BottomTrack_<ContainerAllocator>;

  explicit BottomTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->beam_1_velocity_valid = false;
      this->beam_2_velocity_valid = false;
      this->beam_3_velocity_valid = false;
      this->beam_1_distance_valid = false;
      this->beam_2_distance_valid = false;
      this->beam_3_distance_valid = false;
      this->beam_1_fom_valid = false;
      this->beam_2_fom_valid = false;
      this->beam_3_fom_valid = false;
      this->x_velocity_valid = false;
      this->y_velocity_valid = false;
      this->z_velocity_valid = false;
      this->x_fom_valid = false;
      this->y_fom_valid = false;
      this->z_fom_valid = false;
      this->serial_number = 0ul;
      this->sound_speed = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->velocity_beam_1 = 0.0f;
      this->velocity_beam_2 = 0.0f;
      this->velocity_beam_3 = 0.0f;
      this->distance_beam_1 = 0.0f;
      this->distance_beam_2 = 0.0f;
      this->distance_beam_3 = 0.0f;
      this->fom_beam_1 = 0.0f;
      this->fom_beam_2 = 0.0f;
      this->fom_beam_3 = 0.0f;
      this->dt_beam_1 = 0.0f;
      this->dt_beam_2 = 0.0f;
      this->dt_beam_3 = 0.0f;
      this->time_vel_beam_1 = 0.0f;
      this->time_vel_beam_2 = 0.0f;
      this->time_vel_beam_3 = 0.0f;
      this->velocity_x = 0.0f;
      this->velocity_y = 0.0f;
      this->velocity_z = 0.0f;
      this->fom_x = 0.0f;
      this->fom_y = 0.0f;
      this->fom_z = 0.0f;
      this->dt_xyz = 0.0f;
      this->time_vel_xyz = 0.0f;
    }
  }

  explicit BottomTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->beam_1_velocity_valid = false;
      this->beam_2_velocity_valid = false;
      this->beam_3_velocity_valid = false;
      this->beam_1_distance_valid = false;
      this->beam_2_distance_valid = false;
      this->beam_3_distance_valid = false;
      this->beam_1_fom_valid = false;
      this->beam_2_fom_valid = false;
      this->beam_3_fom_valid = false;
      this->x_velocity_valid = false;
      this->y_velocity_valid = false;
      this->z_velocity_valid = false;
      this->x_fom_valid = false;
      this->y_fom_valid = false;
      this->z_fom_valid = false;
      this->serial_number = 0ul;
      this->sound_speed = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->velocity_beam_1 = 0.0f;
      this->velocity_beam_2 = 0.0f;
      this->velocity_beam_3 = 0.0f;
      this->distance_beam_1 = 0.0f;
      this->distance_beam_2 = 0.0f;
      this->distance_beam_3 = 0.0f;
      this->fom_beam_1 = 0.0f;
      this->fom_beam_2 = 0.0f;
      this->fom_beam_3 = 0.0f;
      this->dt_beam_1 = 0.0f;
      this->dt_beam_2 = 0.0f;
      this->dt_beam_3 = 0.0f;
      this->time_vel_beam_1 = 0.0f;
      this->time_vel_beam_2 = 0.0f;
      this->time_vel_beam_3 = 0.0f;
      this->velocity_x = 0.0f;
      this->velocity_y = 0.0f;
      this->velocity_z = 0.0f;
      this->fom_x = 0.0f;
      this->fom_y = 0.0f;
      this->fom_z = 0.0f;
      this->dt_xyz = 0.0f;
      this->time_vel_xyz = 0.0f;
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
  using _beam_1_velocity_valid_type =
    bool;
  _beam_1_velocity_valid_type beam_1_velocity_valid;
  using _beam_2_velocity_valid_type =
    bool;
  _beam_2_velocity_valid_type beam_2_velocity_valid;
  using _beam_3_velocity_valid_type =
    bool;
  _beam_3_velocity_valid_type beam_3_velocity_valid;
  using _beam_1_distance_valid_type =
    bool;
  _beam_1_distance_valid_type beam_1_distance_valid;
  using _beam_2_distance_valid_type =
    bool;
  _beam_2_distance_valid_type beam_2_distance_valid;
  using _beam_3_distance_valid_type =
    bool;
  _beam_3_distance_valid_type beam_3_distance_valid;
  using _beam_1_fom_valid_type =
    bool;
  _beam_1_fom_valid_type beam_1_fom_valid;
  using _beam_2_fom_valid_type =
    bool;
  _beam_2_fom_valid_type beam_2_fom_valid;
  using _beam_3_fom_valid_type =
    bool;
  _beam_3_fom_valid_type beam_3_fom_valid;
  using _x_velocity_valid_type =
    bool;
  _x_velocity_valid_type x_velocity_valid;
  using _y_velocity_valid_type =
    bool;
  _y_velocity_valid_type y_velocity_valid;
  using _z_velocity_valid_type =
    bool;
  _z_velocity_valid_type z_velocity_valid;
  using _x_fom_valid_type =
    bool;
  _x_fom_valid_type x_fom_valid;
  using _y_fom_valid_type =
    bool;
  _y_fom_valid_type y_fom_valid;
  using _z_fom_valid_type =
    bool;
  _z_fom_valid_type z_fom_valid;
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
  using _velocity_beam_1_type =
    float;
  _velocity_beam_1_type velocity_beam_1;
  using _velocity_beam_2_type =
    float;
  _velocity_beam_2_type velocity_beam_2;
  using _velocity_beam_3_type =
    float;
  _velocity_beam_3_type velocity_beam_3;
  using _distance_beam_1_type =
    float;
  _distance_beam_1_type distance_beam_1;
  using _distance_beam_2_type =
    float;
  _distance_beam_2_type distance_beam_2;
  using _distance_beam_3_type =
    float;
  _distance_beam_3_type distance_beam_3;
  using _fom_beam_1_type =
    float;
  _fom_beam_1_type fom_beam_1;
  using _fom_beam_2_type =
    float;
  _fom_beam_2_type fom_beam_2;
  using _fom_beam_3_type =
    float;
  _fom_beam_3_type fom_beam_3;
  using _dt_beam_1_type =
    float;
  _dt_beam_1_type dt_beam_1;
  using _dt_beam_2_type =
    float;
  _dt_beam_2_type dt_beam_2;
  using _dt_beam_3_type =
    float;
  _dt_beam_3_type dt_beam_3;
  using _time_vel_beam_1_type =
    float;
  _time_vel_beam_1_type time_vel_beam_1;
  using _time_vel_beam_2_type =
    float;
  _time_vel_beam_2_type time_vel_beam_2;
  using _time_vel_beam_3_type =
    float;
  _time_vel_beam_3_type time_vel_beam_3;
  using _velocity_x_type =
    float;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    float;
  _velocity_y_type velocity_y;
  using _velocity_z_type =
    float;
  _velocity_z_type velocity_z;
  using _fom_x_type =
    float;
  _fom_x_type fom_x;
  using _fom_y_type =
    float;
  _fom_y_type fom_y;
  using _fom_z_type =
    float;
  _fom_z_type fom_z;
  using _dt_xyz_type =
    float;
  _dt_xyz_type dt_xyz;
  using _time_vel_xyz_type =
    float;
  _time_vel_xyz_type time_vel_xyz;

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
  Type & set__beam_1_velocity_valid(
    const bool & _arg)
  {
    this->beam_1_velocity_valid = _arg;
    return *this;
  }
  Type & set__beam_2_velocity_valid(
    const bool & _arg)
  {
    this->beam_2_velocity_valid = _arg;
    return *this;
  }
  Type & set__beam_3_velocity_valid(
    const bool & _arg)
  {
    this->beam_3_velocity_valid = _arg;
    return *this;
  }
  Type & set__beam_1_distance_valid(
    const bool & _arg)
  {
    this->beam_1_distance_valid = _arg;
    return *this;
  }
  Type & set__beam_2_distance_valid(
    const bool & _arg)
  {
    this->beam_2_distance_valid = _arg;
    return *this;
  }
  Type & set__beam_3_distance_valid(
    const bool & _arg)
  {
    this->beam_3_distance_valid = _arg;
    return *this;
  }
  Type & set__beam_1_fom_valid(
    const bool & _arg)
  {
    this->beam_1_fom_valid = _arg;
    return *this;
  }
  Type & set__beam_2_fom_valid(
    const bool & _arg)
  {
    this->beam_2_fom_valid = _arg;
    return *this;
  }
  Type & set__beam_3_fom_valid(
    const bool & _arg)
  {
    this->beam_3_fom_valid = _arg;
    return *this;
  }
  Type & set__x_velocity_valid(
    const bool & _arg)
  {
    this->x_velocity_valid = _arg;
    return *this;
  }
  Type & set__y_velocity_valid(
    const bool & _arg)
  {
    this->y_velocity_valid = _arg;
    return *this;
  }
  Type & set__z_velocity_valid(
    const bool & _arg)
  {
    this->z_velocity_valid = _arg;
    return *this;
  }
  Type & set__x_fom_valid(
    const bool & _arg)
  {
    this->x_fom_valid = _arg;
    return *this;
  }
  Type & set__y_fom_valid(
    const bool & _arg)
  {
    this->y_fom_valid = _arg;
    return *this;
  }
  Type & set__z_fom_valid(
    const bool & _arg)
  {
    this->z_fom_valid = _arg;
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
  Type & set__velocity_beam_1(
    const float & _arg)
  {
    this->velocity_beam_1 = _arg;
    return *this;
  }
  Type & set__velocity_beam_2(
    const float & _arg)
  {
    this->velocity_beam_2 = _arg;
    return *this;
  }
  Type & set__velocity_beam_3(
    const float & _arg)
  {
    this->velocity_beam_3 = _arg;
    return *this;
  }
  Type & set__distance_beam_1(
    const float & _arg)
  {
    this->distance_beam_1 = _arg;
    return *this;
  }
  Type & set__distance_beam_2(
    const float & _arg)
  {
    this->distance_beam_2 = _arg;
    return *this;
  }
  Type & set__distance_beam_3(
    const float & _arg)
  {
    this->distance_beam_3 = _arg;
    return *this;
  }
  Type & set__fom_beam_1(
    const float & _arg)
  {
    this->fom_beam_1 = _arg;
    return *this;
  }
  Type & set__fom_beam_2(
    const float & _arg)
  {
    this->fom_beam_2 = _arg;
    return *this;
  }
  Type & set__fom_beam_3(
    const float & _arg)
  {
    this->fom_beam_3 = _arg;
    return *this;
  }
  Type & set__dt_beam_1(
    const float & _arg)
  {
    this->dt_beam_1 = _arg;
    return *this;
  }
  Type & set__dt_beam_2(
    const float & _arg)
  {
    this->dt_beam_2 = _arg;
    return *this;
  }
  Type & set__dt_beam_3(
    const float & _arg)
  {
    this->dt_beam_3 = _arg;
    return *this;
  }
  Type & set__time_vel_beam_1(
    const float & _arg)
  {
    this->time_vel_beam_1 = _arg;
    return *this;
  }
  Type & set__time_vel_beam_2(
    const float & _arg)
  {
    this->time_vel_beam_2 = _arg;
    return *this;
  }
  Type & set__time_vel_beam_3(
    const float & _arg)
  {
    this->time_vel_beam_3 = _arg;
    return *this;
  }
  Type & set__velocity_x(
    const float & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const float & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }
  Type & set__velocity_z(
    const float & _arg)
  {
    this->velocity_z = _arg;
    return *this;
  }
  Type & set__fom_x(
    const float & _arg)
  {
    this->fom_x = _arg;
    return *this;
  }
  Type & set__fom_y(
    const float & _arg)
  {
    this->fom_y = _arg;
    return *this;
  }
  Type & set__fom_z(
    const float & _arg)
  {
    this->fom_z = _arg;
    return *this;
  }
  Type & set__dt_xyz(
    const float & _arg)
  {
    this->dt_xyz = _arg;
    return *this;
  }
  Type & set__time_vel_xyz(
    const float & _arg)
  {
    this->time_vel_xyz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::BottomTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::BottomTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::BottomTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::BottomTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::BottomTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::BottomTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::BottomTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::BottomTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::BottomTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::BottomTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__BottomTrack
    std::shared_ptr<interfaces::msg::BottomTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__BottomTrack
    std::shared_ptr<interfaces::msg::BottomTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BottomTrack_ & other) const
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
    if (this->beam_1_velocity_valid != other.beam_1_velocity_valid) {
      return false;
    }
    if (this->beam_2_velocity_valid != other.beam_2_velocity_valid) {
      return false;
    }
    if (this->beam_3_velocity_valid != other.beam_3_velocity_valid) {
      return false;
    }
    if (this->beam_1_distance_valid != other.beam_1_distance_valid) {
      return false;
    }
    if (this->beam_2_distance_valid != other.beam_2_distance_valid) {
      return false;
    }
    if (this->beam_3_distance_valid != other.beam_3_distance_valid) {
      return false;
    }
    if (this->beam_1_fom_valid != other.beam_1_fom_valid) {
      return false;
    }
    if (this->beam_2_fom_valid != other.beam_2_fom_valid) {
      return false;
    }
    if (this->beam_3_fom_valid != other.beam_3_fom_valid) {
      return false;
    }
    if (this->x_velocity_valid != other.x_velocity_valid) {
      return false;
    }
    if (this->y_velocity_valid != other.y_velocity_valid) {
      return false;
    }
    if (this->z_velocity_valid != other.z_velocity_valid) {
      return false;
    }
    if (this->x_fom_valid != other.x_fom_valid) {
      return false;
    }
    if (this->y_fom_valid != other.y_fom_valid) {
      return false;
    }
    if (this->z_fom_valid != other.z_fom_valid) {
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
    if (this->velocity_beam_1 != other.velocity_beam_1) {
      return false;
    }
    if (this->velocity_beam_2 != other.velocity_beam_2) {
      return false;
    }
    if (this->velocity_beam_3 != other.velocity_beam_3) {
      return false;
    }
    if (this->distance_beam_1 != other.distance_beam_1) {
      return false;
    }
    if (this->distance_beam_2 != other.distance_beam_2) {
      return false;
    }
    if (this->distance_beam_3 != other.distance_beam_3) {
      return false;
    }
    if (this->fom_beam_1 != other.fom_beam_1) {
      return false;
    }
    if (this->fom_beam_2 != other.fom_beam_2) {
      return false;
    }
    if (this->fom_beam_3 != other.fom_beam_3) {
      return false;
    }
    if (this->dt_beam_1 != other.dt_beam_1) {
      return false;
    }
    if (this->dt_beam_2 != other.dt_beam_2) {
      return false;
    }
    if (this->dt_beam_3 != other.dt_beam_3) {
      return false;
    }
    if (this->time_vel_beam_1 != other.time_vel_beam_1) {
      return false;
    }
    if (this->time_vel_beam_2 != other.time_vel_beam_2) {
      return false;
    }
    if (this->time_vel_beam_3 != other.time_vel_beam_3) {
      return false;
    }
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    if (this->velocity_z != other.velocity_z) {
      return false;
    }
    if (this->fom_x != other.fom_x) {
      return false;
    }
    if (this->fom_y != other.fom_y) {
      return false;
    }
    if (this->fom_z != other.fom_z) {
      return false;
    }
    if (this->dt_xyz != other.dt_xyz) {
      return false;
    }
    if (this->time_vel_xyz != other.time_vel_xyz) {
      return false;
    }
    return true;
  }
  bool operator!=(const BottomTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BottomTrack_

// alias to use template instance with default allocator
using BottomTrack =
  interfaces::msg::BottomTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__BOTTOM_TRACK__STRUCT_HPP_
