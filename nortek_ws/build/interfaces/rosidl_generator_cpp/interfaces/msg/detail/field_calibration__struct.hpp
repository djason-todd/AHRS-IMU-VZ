// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/FieldCalibration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__FieldCalibration __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__FieldCalibration __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldCalibration_
{
  using Type = FieldCalibration_<ContainerAllocator>;

  explicit FieldCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->points_used_in_estimation = false;
      this->hard_iron_x = 0.0f;
      this->hard_iron_y = 0.0f;
      this->hard_iron_z = 0.0f;
      this->s_axis_0 = 0.0f;
      this->s_axis_1 = 0.0f;
      this->s_axis_2 = 0.0f;
      this->s_axis_3 = 0.0f;
      this->s_axis_4 = 0.0f;
      this->s_axis_5 = 0.0f;
      this->s_axis_6 = 0.0f;
      this->s_axis_7 = 0.0f;
      this->s_axis_8 = 0.0f;
      this->new_point_x = 0.0f;
      this->new_point_y = 0.0f;
      this->new_point_z = 0.0f;
      this->fom_field_calibration = 0.0f;
      this->coverage = 0.0f;
    }
  }

  explicit FieldCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->points_used_in_estimation = false;
      this->hard_iron_x = 0.0f;
      this->hard_iron_y = 0.0f;
      this->hard_iron_z = 0.0f;
      this->s_axis_0 = 0.0f;
      this->s_axis_1 = 0.0f;
      this->s_axis_2 = 0.0f;
      this->s_axis_3 = 0.0f;
      this->s_axis_4 = 0.0f;
      this->s_axis_5 = 0.0f;
      this->s_axis_6 = 0.0f;
      this->s_axis_7 = 0.0f;
      this->s_axis_8 = 0.0f;
      this->new_point_x = 0.0f;
      this->new_point_y = 0.0f;
      this->new_point_z = 0.0f;
      this->fom_field_calibration = 0.0f;
      this->coverage = 0.0f;
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
  using _points_used_in_estimation_type =
    bool;
  _points_used_in_estimation_type points_used_in_estimation;
  using _hard_iron_x_type =
    float;
  _hard_iron_x_type hard_iron_x;
  using _hard_iron_y_type =
    float;
  _hard_iron_y_type hard_iron_y;
  using _hard_iron_z_type =
    float;
  _hard_iron_z_type hard_iron_z;
  using _s_axis_0_type =
    float;
  _s_axis_0_type s_axis_0;
  using _s_axis_1_type =
    float;
  _s_axis_1_type s_axis_1;
  using _s_axis_2_type =
    float;
  _s_axis_2_type s_axis_2;
  using _s_axis_3_type =
    float;
  _s_axis_3_type s_axis_3;
  using _s_axis_4_type =
    float;
  _s_axis_4_type s_axis_4;
  using _s_axis_5_type =
    float;
  _s_axis_5_type s_axis_5;
  using _s_axis_6_type =
    float;
  _s_axis_6_type s_axis_6;
  using _s_axis_7_type =
    float;
  _s_axis_7_type s_axis_7;
  using _s_axis_8_type =
    float;
  _s_axis_8_type s_axis_8;
  using _new_point_x_type =
    float;
  _new_point_x_type new_point_x;
  using _new_point_y_type =
    float;
  _new_point_y_type new_point_y;
  using _new_point_z_type =
    float;
  _new_point_z_type new_point_z;
  using _fom_field_calibration_type =
    float;
  _fom_field_calibration_type fom_field_calibration;
  using _coverage_type =
    float;
  _coverage_type coverage;

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
  Type & set__points_used_in_estimation(
    const bool & _arg)
  {
    this->points_used_in_estimation = _arg;
    return *this;
  }
  Type & set__hard_iron_x(
    const float & _arg)
  {
    this->hard_iron_x = _arg;
    return *this;
  }
  Type & set__hard_iron_y(
    const float & _arg)
  {
    this->hard_iron_y = _arg;
    return *this;
  }
  Type & set__hard_iron_z(
    const float & _arg)
  {
    this->hard_iron_z = _arg;
    return *this;
  }
  Type & set__s_axis_0(
    const float & _arg)
  {
    this->s_axis_0 = _arg;
    return *this;
  }
  Type & set__s_axis_1(
    const float & _arg)
  {
    this->s_axis_1 = _arg;
    return *this;
  }
  Type & set__s_axis_2(
    const float & _arg)
  {
    this->s_axis_2 = _arg;
    return *this;
  }
  Type & set__s_axis_3(
    const float & _arg)
  {
    this->s_axis_3 = _arg;
    return *this;
  }
  Type & set__s_axis_4(
    const float & _arg)
  {
    this->s_axis_4 = _arg;
    return *this;
  }
  Type & set__s_axis_5(
    const float & _arg)
  {
    this->s_axis_5 = _arg;
    return *this;
  }
  Type & set__s_axis_6(
    const float & _arg)
  {
    this->s_axis_6 = _arg;
    return *this;
  }
  Type & set__s_axis_7(
    const float & _arg)
  {
    this->s_axis_7 = _arg;
    return *this;
  }
  Type & set__s_axis_8(
    const float & _arg)
  {
    this->s_axis_8 = _arg;
    return *this;
  }
  Type & set__new_point_x(
    const float & _arg)
  {
    this->new_point_x = _arg;
    return *this;
  }
  Type & set__new_point_y(
    const float & _arg)
  {
    this->new_point_y = _arg;
    return *this;
  }
  Type & set__new_point_z(
    const float & _arg)
  {
    this->new_point_z = _arg;
    return *this;
  }
  Type & set__fom_field_calibration(
    const float & _arg)
  {
    this->fom_field_calibration = _arg;
    return *this;
  }
  Type & set__coverage(
    const float & _arg)
  {
    this->coverage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::FieldCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::FieldCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FieldCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FieldCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__FieldCalibration
    std::shared_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__FieldCalibration
    std::shared_ptr<interfaces::msg::FieldCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldCalibration_ & other) const
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
    if (this->points_used_in_estimation != other.points_used_in_estimation) {
      return false;
    }
    if (this->hard_iron_x != other.hard_iron_x) {
      return false;
    }
    if (this->hard_iron_y != other.hard_iron_y) {
      return false;
    }
    if (this->hard_iron_z != other.hard_iron_z) {
      return false;
    }
    if (this->s_axis_0 != other.s_axis_0) {
      return false;
    }
    if (this->s_axis_1 != other.s_axis_1) {
      return false;
    }
    if (this->s_axis_2 != other.s_axis_2) {
      return false;
    }
    if (this->s_axis_3 != other.s_axis_3) {
      return false;
    }
    if (this->s_axis_4 != other.s_axis_4) {
      return false;
    }
    if (this->s_axis_5 != other.s_axis_5) {
      return false;
    }
    if (this->s_axis_6 != other.s_axis_6) {
      return false;
    }
    if (this->s_axis_7 != other.s_axis_7) {
      return false;
    }
    if (this->s_axis_8 != other.s_axis_8) {
      return false;
    }
    if (this->new_point_x != other.new_point_x) {
      return false;
    }
    if (this->new_point_y != other.new_point_y) {
      return false;
    }
    if (this->new_point_z != other.new_point_z) {
      return false;
    }
    if (this->fom_field_calibration != other.fom_field_calibration) {
      return false;
    }
    if (this->coverage != other.coverage) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldCalibration_

// alias to use template instance with default allocator
using FieldCalibration =
  interfaces::msg::FieldCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_HPP_
