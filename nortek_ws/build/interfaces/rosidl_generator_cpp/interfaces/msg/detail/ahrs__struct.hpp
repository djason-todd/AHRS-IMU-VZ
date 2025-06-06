// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AHRS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__AHRS__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__AHRS __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__AHRS __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AHRS_
{
  using Type = AHRS_<ContainerAllocator>;

  explicit AHRS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->serial_number = 0ul;
      this->operation_mode = 0;
      this->fom_ahrs = 0.0f;
      this->fom_fc1 = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->heading = 0.0f;
      this->quaternion_w = 0.0f;
      this->quaternion_x = 0.0f;
      this->quaternion_y = 0.0f;
      this->quaternion_z = 0.0f;
      this->rotation_matrix_0 = 0.0f;
      this->rotation_matrix_1 = 0.0f;
      this->rotation_matrix_2 = 0.0f;
      this->rotation_matrix_3 = 0.0f;
      this->rotation_matrix_4 = 0.0f;
      this->rotation_matrix_5 = 0.0f;
      this->rotation_matrix_6 = 0.0f;
      this->rotation_matrix_7 = 0.0f;
      this->rotation_matrix_8 = 0.0f;
      this->declination = 0.0f;
      this->depth = 0.0f;
    }
  }

  explicit AHRS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->serial_number = 0ul;
      this->operation_mode = 0;
      this->fom_ahrs = 0.0f;
      this->fom_fc1 = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->heading = 0.0f;
      this->quaternion_w = 0.0f;
      this->quaternion_x = 0.0f;
      this->quaternion_y = 0.0f;
      this->quaternion_z = 0.0f;
      this->rotation_matrix_0 = 0.0f;
      this->rotation_matrix_1 = 0.0f;
      this->rotation_matrix_2 = 0.0f;
      this->rotation_matrix_3 = 0.0f;
      this->rotation_matrix_4 = 0.0f;
      this->rotation_matrix_5 = 0.0f;
      this->rotation_matrix_6 = 0.0f;
      this->rotation_matrix_7 = 0.0f;
      this->rotation_matrix_8 = 0.0f;
      this->declination = 0.0f;
      this->depth = 0.0f;
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
  using _operation_mode_type =
    uint8_t;
  _operation_mode_type operation_mode;
  using _fom_ahrs_type =
    float;
  _fom_ahrs_type fom_ahrs;
  using _fom_fc1_type =
    float;
  _fom_fc1_type fom_fc1;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _heading_type =
    float;
  _heading_type heading;
  using _quaternion_w_type =
    float;
  _quaternion_w_type quaternion_w;
  using _quaternion_x_type =
    float;
  _quaternion_x_type quaternion_x;
  using _quaternion_y_type =
    float;
  _quaternion_y_type quaternion_y;
  using _quaternion_z_type =
    float;
  _quaternion_z_type quaternion_z;
  using _rotation_matrix_0_type =
    float;
  _rotation_matrix_0_type rotation_matrix_0;
  using _rotation_matrix_1_type =
    float;
  _rotation_matrix_1_type rotation_matrix_1;
  using _rotation_matrix_2_type =
    float;
  _rotation_matrix_2_type rotation_matrix_2;
  using _rotation_matrix_3_type =
    float;
  _rotation_matrix_3_type rotation_matrix_3;
  using _rotation_matrix_4_type =
    float;
  _rotation_matrix_4_type rotation_matrix_4;
  using _rotation_matrix_5_type =
    float;
  _rotation_matrix_5_type rotation_matrix_5;
  using _rotation_matrix_6_type =
    float;
  _rotation_matrix_6_type rotation_matrix_6;
  using _rotation_matrix_7_type =
    float;
  _rotation_matrix_7_type rotation_matrix_7;
  using _rotation_matrix_8_type =
    float;
  _rotation_matrix_8_type rotation_matrix_8;
  using _declination_type =
    float;
  _declination_type declination;
  using _depth_type =
    float;
  _depth_type depth;

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
  Type & set__operation_mode(
    const uint8_t & _arg)
  {
    this->operation_mode = _arg;
    return *this;
  }
  Type & set__fom_ahrs(
    const float & _arg)
  {
    this->fom_ahrs = _arg;
    return *this;
  }
  Type & set__fom_fc1(
    const float & _arg)
  {
    this->fom_fc1 = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__quaternion_w(
    const float & _arg)
  {
    this->quaternion_w = _arg;
    return *this;
  }
  Type & set__quaternion_x(
    const float & _arg)
  {
    this->quaternion_x = _arg;
    return *this;
  }
  Type & set__quaternion_y(
    const float & _arg)
  {
    this->quaternion_y = _arg;
    return *this;
  }
  Type & set__quaternion_z(
    const float & _arg)
  {
    this->quaternion_z = _arg;
    return *this;
  }
  Type & set__rotation_matrix_0(
    const float & _arg)
  {
    this->rotation_matrix_0 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_1(
    const float & _arg)
  {
    this->rotation_matrix_1 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_2(
    const float & _arg)
  {
    this->rotation_matrix_2 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_3(
    const float & _arg)
  {
    this->rotation_matrix_3 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_4(
    const float & _arg)
  {
    this->rotation_matrix_4 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_5(
    const float & _arg)
  {
    this->rotation_matrix_5 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_6(
    const float & _arg)
  {
    this->rotation_matrix_6 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_7(
    const float & _arg)
  {
    this->rotation_matrix_7 = _arg;
    return *this;
  }
  Type & set__rotation_matrix_8(
    const float & _arg)
  {
    this->rotation_matrix_8 = _arg;
    return *this;
  }
  Type & set__declination(
    const float & _arg)
  {
    this->declination = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::AHRS_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::AHRS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::AHRS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::AHRS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AHRS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AHRS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AHRS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AHRS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::AHRS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::AHRS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__AHRS
    std::shared_ptr<interfaces::msg::AHRS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__AHRS
    std::shared_ptr<interfaces::msg::AHRS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AHRS_ & other) const
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
    if (this->operation_mode != other.operation_mode) {
      return false;
    }
    if (this->fom_ahrs != other.fom_ahrs) {
      return false;
    }
    if (this->fom_fc1 != other.fom_fc1) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->quaternion_w != other.quaternion_w) {
      return false;
    }
    if (this->quaternion_x != other.quaternion_x) {
      return false;
    }
    if (this->quaternion_y != other.quaternion_y) {
      return false;
    }
    if (this->quaternion_z != other.quaternion_z) {
      return false;
    }
    if (this->rotation_matrix_0 != other.rotation_matrix_0) {
      return false;
    }
    if (this->rotation_matrix_1 != other.rotation_matrix_1) {
      return false;
    }
    if (this->rotation_matrix_2 != other.rotation_matrix_2) {
      return false;
    }
    if (this->rotation_matrix_3 != other.rotation_matrix_3) {
      return false;
    }
    if (this->rotation_matrix_4 != other.rotation_matrix_4) {
      return false;
    }
    if (this->rotation_matrix_5 != other.rotation_matrix_5) {
      return false;
    }
    if (this->rotation_matrix_6 != other.rotation_matrix_6) {
      return false;
    }
    if (this->rotation_matrix_7 != other.rotation_matrix_7) {
      return false;
    }
    if (this->rotation_matrix_8 != other.rotation_matrix_8) {
      return false;
    }
    if (this->declination != other.declination) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const AHRS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AHRS_

// alias to use template instance with default allocator
using AHRS =
  interfaces::msg::AHRS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AHRS__STRUCT_HPP_
