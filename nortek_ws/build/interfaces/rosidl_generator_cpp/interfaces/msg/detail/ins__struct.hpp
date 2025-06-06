// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/INS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__INS__STRUCT_HPP_

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
# define DEPRECATED__interfaces__msg__INS __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__INS __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INS_
{
  using Type = INS_<ContainerAllocator>;

  explicit INS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->fom_ins = 0.0f;
      this->lat_long_is_valid = false;
      this->course_over_ground = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->altitude = 0.0f;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->position_frame_x = 0.0f;
      this->position_frame_y = 0.0f;
      this->position_frame_z = 0.0f;
      this->velocity_ned_x = 0.0f;
      this->velocity_ned_y = 0.0f;
      this->velocity_ned_z = 0.0f;
      this->velocity_nucleus_x = 0.0f;
      this->velocity_nucleus_y = 0.0f;
      this->velocity_nucleus_z = 0.0f;
      this->speed_over_ground = 0.0f;
      this->turn_rate_x = 0.0f;
      this->turn_rate_y = 0.0f;
      this->turn_rate_z = 0.0f;
    }
  }

  explicit INS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->fom_ins = 0.0f;
      this->lat_long_is_valid = false;
      this->course_over_ground = 0.0f;
      this->temperature = 0.0f;
      this->pressure = 0.0f;
      this->altitude = 0.0f;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->position_frame_x = 0.0f;
      this->position_frame_y = 0.0f;
      this->position_frame_z = 0.0f;
      this->velocity_ned_x = 0.0f;
      this->velocity_ned_y = 0.0f;
      this->velocity_ned_z = 0.0f;
      this->velocity_nucleus_x = 0.0f;
      this->velocity_nucleus_y = 0.0f;
      this->velocity_nucleus_z = 0.0f;
      this->speed_over_ground = 0.0f;
      this->turn_rate_x = 0.0f;
      this->turn_rate_y = 0.0f;
      this->turn_rate_z = 0.0f;
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
  using _fom_ins_type =
    float;
  _fom_ins_type fom_ins;
  using _lat_long_is_valid_type =
    bool;
  _lat_long_is_valid_type lat_long_is_valid;
  using _course_over_ground_type =
    float;
  _course_over_ground_type course_over_ground;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _position_frame_x_type =
    float;
  _position_frame_x_type position_frame_x;
  using _position_frame_y_type =
    float;
  _position_frame_y_type position_frame_y;
  using _position_frame_z_type =
    float;
  _position_frame_z_type position_frame_z;
  using _velocity_ned_x_type =
    float;
  _velocity_ned_x_type velocity_ned_x;
  using _velocity_ned_y_type =
    float;
  _velocity_ned_y_type velocity_ned_y;
  using _velocity_ned_z_type =
    float;
  _velocity_ned_z_type velocity_ned_z;
  using _velocity_nucleus_x_type =
    float;
  _velocity_nucleus_x_type velocity_nucleus_x;
  using _velocity_nucleus_y_type =
    float;
  _velocity_nucleus_y_type velocity_nucleus_y;
  using _velocity_nucleus_z_type =
    float;
  _velocity_nucleus_z_type velocity_nucleus_z;
  using _speed_over_ground_type =
    float;
  _speed_over_ground_type speed_over_ground;
  using _turn_rate_x_type =
    float;
  _turn_rate_x_type turn_rate_x;
  using _turn_rate_y_type =
    float;
  _turn_rate_y_type turn_rate_y;
  using _turn_rate_z_type =
    float;
  _turn_rate_z_type turn_rate_z;

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
  Type & set__fom_ins(
    const float & _arg)
  {
    this->fom_ins = _arg;
    return *this;
  }
  Type & set__lat_long_is_valid(
    const bool & _arg)
  {
    this->lat_long_is_valid = _arg;
    return *this;
  }
  Type & set__course_over_ground(
    const float & _arg)
  {
    this->course_over_ground = _arg;
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
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__position_frame_x(
    const float & _arg)
  {
    this->position_frame_x = _arg;
    return *this;
  }
  Type & set__position_frame_y(
    const float & _arg)
  {
    this->position_frame_y = _arg;
    return *this;
  }
  Type & set__position_frame_z(
    const float & _arg)
  {
    this->position_frame_z = _arg;
    return *this;
  }
  Type & set__velocity_ned_x(
    const float & _arg)
  {
    this->velocity_ned_x = _arg;
    return *this;
  }
  Type & set__velocity_ned_y(
    const float & _arg)
  {
    this->velocity_ned_y = _arg;
    return *this;
  }
  Type & set__velocity_ned_z(
    const float & _arg)
  {
    this->velocity_ned_z = _arg;
    return *this;
  }
  Type & set__velocity_nucleus_x(
    const float & _arg)
  {
    this->velocity_nucleus_x = _arg;
    return *this;
  }
  Type & set__velocity_nucleus_y(
    const float & _arg)
  {
    this->velocity_nucleus_y = _arg;
    return *this;
  }
  Type & set__velocity_nucleus_z(
    const float & _arg)
  {
    this->velocity_nucleus_z = _arg;
    return *this;
  }
  Type & set__speed_over_ground(
    const float & _arg)
  {
    this->speed_over_ground = _arg;
    return *this;
  }
  Type & set__turn_rate_x(
    const float & _arg)
  {
    this->turn_rate_x = _arg;
    return *this;
  }
  Type & set__turn_rate_y(
    const float & _arg)
  {
    this->turn_rate_y = _arg;
    return *this;
  }
  Type & set__turn_rate_z(
    const float & _arg)
  {
    this->turn_rate_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::INS_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::INS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::INS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::INS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::INS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::INS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::INS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::INS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::INS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::INS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__INS
    std::shared_ptr<interfaces::msg::INS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__INS
    std::shared_ptr<interfaces::msg::INS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INS_ & other) const
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
    if (this->fom_ins != other.fom_ins) {
      return false;
    }
    if (this->lat_long_is_valid != other.lat_long_is_valid) {
      return false;
    }
    if (this->course_over_ground != other.course_over_ground) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->position_frame_x != other.position_frame_x) {
      return false;
    }
    if (this->position_frame_y != other.position_frame_y) {
      return false;
    }
    if (this->position_frame_z != other.position_frame_z) {
      return false;
    }
    if (this->velocity_ned_x != other.velocity_ned_x) {
      return false;
    }
    if (this->velocity_ned_y != other.velocity_ned_y) {
      return false;
    }
    if (this->velocity_ned_z != other.velocity_ned_z) {
      return false;
    }
    if (this->velocity_nucleus_x != other.velocity_nucleus_x) {
      return false;
    }
    if (this->velocity_nucleus_y != other.velocity_nucleus_y) {
      return false;
    }
    if (this->velocity_nucleus_z != other.velocity_nucleus_z) {
      return false;
    }
    if (this->speed_over_ground != other.speed_over_ground) {
      return false;
    }
    if (this->turn_rate_x != other.turn_rate_x) {
      return false;
    }
    if (this->turn_rate_y != other.turn_rate_y) {
      return false;
    }
    if (this->turn_rate_z != other.turn_rate_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const INS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INS_

// alias to use template instance with default allocator
using INS =
  interfaces::msg::INS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__INS__STRUCT_HPP_
