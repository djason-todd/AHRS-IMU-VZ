// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AHRS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__AHRS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/ahrs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_AHRS_depth
{
public:
  explicit Init_AHRS_depth(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::AHRS depth(::interfaces::msg::AHRS::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_declination
{
public:
  explicit Init_AHRS_declination(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_depth declination(::interfaces::msg::AHRS::_declination_type arg)
  {
    msg_.declination = std::move(arg);
    return Init_AHRS_depth(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_8
{
public:
  explicit Init_AHRS_rotation_matrix_8(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_declination rotation_matrix_8(::interfaces::msg::AHRS::_rotation_matrix_8_type arg)
  {
    msg_.rotation_matrix_8 = std::move(arg);
    return Init_AHRS_declination(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_7
{
public:
  explicit Init_AHRS_rotation_matrix_7(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_8 rotation_matrix_7(::interfaces::msg::AHRS::_rotation_matrix_7_type arg)
  {
    msg_.rotation_matrix_7 = std::move(arg);
    return Init_AHRS_rotation_matrix_8(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_6
{
public:
  explicit Init_AHRS_rotation_matrix_6(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_7 rotation_matrix_6(::interfaces::msg::AHRS::_rotation_matrix_6_type arg)
  {
    msg_.rotation_matrix_6 = std::move(arg);
    return Init_AHRS_rotation_matrix_7(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_5
{
public:
  explicit Init_AHRS_rotation_matrix_5(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_6 rotation_matrix_5(::interfaces::msg::AHRS::_rotation_matrix_5_type arg)
  {
    msg_.rotation_matrix_5 = std::move(arg);
    return Init_AHRS_rotation_matrix_6(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_4
{
public:
  explicit Init_AHRS_rotation_matrix_4(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_5 rotation_matrix_4(::interfaces::msg::AHRS::_rotation_matrix_4_type arg)
  {
    msg_.rotation_matrix_4 = std::move(arg);
    return Init_AHRS_rotation_matrix_5(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_3
{
public:
  explicit Init_AHRS_rotation_matrix_3(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_4 rotation_matrix_3(::interfaces::msg::AHRS::_rotation_matrix_3_type arg)
  {
    msg_.rotation_matrix_3 = std::move(arg);
    return Init_AHRS_rotation_matrix_4(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_2
{
public:
  explicit Init_AHRS_rotation_matrix_2(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_3 rotation_matrix_2(::interfaces::msg::AHRS::_rotation_matrix_2_type arg)
  {
    msg_.rotation_matrix_2 = std::move(arg);
    return Init_AHRS_rotation_matrix_3(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_1
{
public:
  explicit Init_AHRS_rotation_matrix_1(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_2 rotation_matrix_1(::interfaces::msg::AHRS::_rotation_matrix_1_type arg)
  {
    msg_.rotation_matrix_1 = std::move(arg);
    return Init_AHRS_rotation_matrix_2(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_rotation_matrix_0
{
public:
  explicit Init_AHRS_rotation_matrix_0(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_1 rotation_matrix_0(::interfaces::msg::AHRS::_rotation_matrix_0_type arg)
  {
    msg_.rotation_matrix_0 = std::move(arg);
    return Init_AHRS_rotation_matrix_1(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_quaternion_z
{
public:
  explicit Init_AHRS_quaternion_z(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_rotation_matrix_0 quaternion_z(::interfaces::msg::AHRS::_quaternion_z_type arg)
  {
    msg_.quaternion_z = std::move(arg);
    return Init_AHRS_rotation_matrix_0(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_quaternion_y
{
public:
  explicit Init_AHRS_quaternion_y(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_quaternion_z quaternion_y(::interfaces::msg::AHRS::_quaternion_y_type arg)
  {
    msg_.quaternion_y = std::move(arg);
    return Init_AHRS_quaternion_z(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_quaternion_x
{
public:
  explicit Init_AHRS_quaternion_x(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_quaternion_y quaternion_x(::interfaces::msg::AHRS::_quaternion_x_type arg)
  {
    msg_.quaternion_x = std::move(arg);
    return Init_AHRS_quaternion_y(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_quaternion_w
{
public:
  explicit Init_AHRS_quaternion_w(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_quaternion_x quaternion_w(::interfaces::msg::AHRS::_quaternion_w_type arg)
  {
    msg_.quaternion_w = std::move(arg);
    return Init_AHRS_quaternion_x(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_heading
{
public:
  explicit Init_AHRS_heading(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_quaternion_w heading(::interfaces::msg::AHRS::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_AHRS_quaternion_w(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_pitch
{
public:
  explicit Init_AHRS_pitch(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_heading pitch(::interfaces::msg::AHRS::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AHRS_heading(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_roll
{
public:
  explicit Init_AHRS_roll(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_pitch roll(::interfaces::msg::AHRS::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AHRS_pitch(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_fom_fc1
{
public:
  explicit Init_AHRS_fom_fc1(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_roll fom_fc1(::interfaces::msg::AHRS::_fom_fc1_type arg)
  {
    msg_.fom_fc1 = std::move(arg);
    return Init_AHRS_roll(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_fom_ahrs
{
public:
  explicit Init_AHRS_fom_ahrs(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_fom_fc1 fom_ahrs(::interfaces::msg::AHRS::_fom_ahrs_type arg)
  {
    msg_.fom_ahrs = std::move(arg);
    return Init_AHRS_fom_fc1(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_operation_mode
{
public:
  explicit Init_AHRS_operation_mode(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_fom_ahrs operation_mode(::interfaces::msg::AHRS::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_AHRS_fom_ahrs(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_serial_number
{
public:
  explicit Init_AHRS_serial_number(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_operation_mode serial_number(::interfaces::msg::AHRS::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_AHRS_operation_mode(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_microseconds
{
public:
  explicit Init_AHRS_microseconds(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_serial_number microseconds(::interfaces::msg::AHRS::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_AHRS_serial_number(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_timestamp
{
public:
  explicit Init_AHRS_timestamp(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_microseconds timestamp(::interfaces::msg::AHRS::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AHRS_microseconds(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_posix_time
{
public:
  explicit Init_AHRS_posix_time(::interfaces::msg::AHRS & msg)
  : msg_(msg)
  {}
  Init_AHRS_timestamp posix_time(::interfaces::msg::AHRS::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_AHRS_timestamp(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

class Init_AHRS_system_timestamp
{
public:
  Init_AHRS_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AHRS_posix_time system_timestamp(::interfaces::msg::AHRS::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_AHRS_posix_time(msg_);
  }

private:
  ::interfaces::msg::AHRS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::AHRS>()
{
  return interfaces::msg::builder::Init_AHRS_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AHRS__BUILDER_HPP_
