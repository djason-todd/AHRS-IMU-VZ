// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/INS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__INS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_INS_turn_rate_z
{
public:
  explicit Init_INS_turn_rate_z(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::INS turn_rate_z(::interfaces::msg::INS::_turn_rate_z_type arg)
  {
    msg_.turn_rate_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_turn_rate_y
{
public:
  explicit Init_INS_turn_rate_y(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_turn_rate_z turn_rate_y(::interfaces::msg::INS::_turn_rate_y_type arg)
  {
    msg_.turn_rate_y = std::move(arg);
    return Init_INS_turn_rate_z(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_turn_rate_x
{
public:
  explicit Init_INS_turn_rate_x(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_turn_rate_y turn_rate_x(::interfaces::msg::INS::_turn_rate_x_type arg)
  {
    msg_.turn_rate_x = std::move(arg);
    return Init_INS_turn_rate_y(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_speed_over_ground
{
public:
  explicit Init_INS_speed_over_ground(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_turn_rate_x speed_over_ground(::interfaces::msg::INS::_speed_over_ground_type arg)
  {
    msg_.speed_over_ground = std::move(arg);
    return Init_INS_turn_rate_x(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_nucleus_z
{
public:
  explicit Init_INS_velocity_nucleus_z(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_speed_over_ground velocity_nucleus_z(::interfaces::msg::INS::_velocity_nucleus_z_type arg)
  {
    msg_.velocity_nucleus_z = std::move(arg);
    return Init_INS_speed_over_ground(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_nucleus_y
{
public:
  explicit Init_INS_velocity_nucleus_y(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_nucleus_z velocity_nucleus_y(::interfaces::msg::INS::_velocity_nucleus_y_type arg)
  {
    msg_.velocity_nucleus_y = std::move(arg);
    return Init_INS_velocity_nucleus_z(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_nucleus_x
{
public:
  explicit Init_INS_velocity_nucleus_x(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_nucleus_y velocity_nucleus_x(::interfaces::msg::INS::_velocity_nucleus_x_type arg)
  {
    msg_.velocity_nucleus_x = std::move(arg);
    return Init_INS_velocity_nucleus_y(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_ned_z
{
public:
  explicit Init_INS_velocity_ned_z(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_nucleus_x velocity_ned_z(::interfaces::msg::INS::_velocity_ned_z_type arg)
  {
    msg_.velocity_ned_z = std::move(arg);
    return Init_INS_velocity_nucleus_x(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_ned_y
{
public:
  explicit Init_INS_velocity_ned_y(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_ned_z velocity_ned_y(::interfaces::msg::INS::_velocity_ned_y_type arg)
  {
    msg_.velocity_ned_y = std::move(arg);
    return Init_INS_velocity_ned_z(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_velocity_ned_x
{
public:
  explicit Init_INS_velocity_ned_x(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_ned_y velocity_ned_x(::interfaces::msg::INS::_velocity_ned_x_type arg)
  {
    msg_.velocity_ned_x = std::move(arg);
    return Init_INS_velocity_ned_y(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_position_frame_z
{
public:
  explicit Init_INS_position_frame_z(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_velocity_ned_x position_frame_z(::interfaces::msg::INS::_position_frame_z_type arg)
  {
    msg_.position_frame_z = std::move(arg);
    return Init_INS_velocity_ned_x(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_position_frame_y
{
public:
  explicit Init_INS_position_frame_y(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_position_frame_z position_frame_y(::interfaces::msg::INS::_position_frame_y_type arg)
  {
    msg_.position_frame_y = std::move(arg);
    return Init_INS_position_frame_z(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_position_frame_x
{
public:
  explicit Init_INS_position_frame_x(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_position_frame_y position_frame_x(::interfaces::msg::INS::_position_frame_x_type arg)
  {
    msg_.position_frame_x = std::move(arg);
    return Init_INS_position_frame_y(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_longitude
{
public:
  explicit Init_INS_longitude(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_position_frame_x longitude(::interfaces::msg::INS::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_INS_position_frame_x(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_latitude
{
public:
  explicit Init_INS_latitude(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_longitude latitude(::interfaces::msg::INS::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_INS_longitude(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_altitude
{
public:
  explicit Init_INS_altitude(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_latitude altitude(::interfaces::msg::INS::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_INS_latitude(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_pressure
{
public:
  explicit Init_INS_pressure(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_altitude pressure(::interfaces::msg::INS::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_INS_altitude(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_temperature
{
public:
  explicit Init_INS_temperature(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_pressure temperature(::interfaces::msg::INS::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_INS_pressure(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_course_over_ground
{
public:
  explicit Init_INS_course_over_ground(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_temperature course_over_ground(::interfaces::msg::INS::_course_over_ground_type arg)
  {
    msg_.course_over_ground = std::move(arg);
    return Init_INS_temperature(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_lat_long_is_valid
{
public:
  explicit Init_INS_lat_long_is_valid(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_course_over_ground lat_long_is_valid(::interfaces::msg::INS::_lat_long_is_valid_type arg)
  {
    msg_.lat_long_is_valid = std::move(arg);
    return Init_INS_course_over_ground(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_fom_ins
{
public:
  explicit Init_INS_fom_ins(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_lat_long_is_valid fom_ins(::interfaces::msg::INS::_fom_ins_type arg)
  {
    msg_.fom_ins = std::move(arg);
    return Init_INS_lat_long_is_valid(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_depth
{
public:
  explicit Init_INS_depth(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_fom_ins depth(::interfaces::msg::INS::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_INS_fom_ins(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_declination
{
public:
  explicit Init_INS_declination(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_depth declination(::interfaces::msg::INS::_declination_type arg)
  {
    msg_.declination = std::move(arg);
    return Init_INS_depth(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_8
{
public:
  explicit Init_INS_rotation_matrix_8(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_declination rotation_matrix_8(::interfaces::msg::INS::_rotation_matrix_8_type arg)
  {
    msg_.rotation_matrix_8 = std::move(arg);
    return Init_INS_declination(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_7
{
public:
  explicit Init_INS_rotation_matrix_7(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_8 rotation_matrix_7(::interfaces::msg::INS::_rotation_matrix_7_type arg)
  {
    msg_.rotation_matrix_7 = std::move(arg);
    return Init_INS_rotation_matrix_8(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_6
{
public:
  explicit Init_INS_rotation_matrix_6(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_7 rotation_matrix_6(::interfaces::msg::INS::_rotation_matrix_6_type arg)
  {
    msg_.rotation_matrix_6 = std::move(arg);
    return Init_INS_rotation_matrix_7(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_5
{
public:
  explicit Init_INS_rotation_matrix_5(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_6 rotation_matrix_5(::interfaces::msg::INS::_rotation_matrix_5_type arg)
  {
    msg_.rotation_matrix_5 = std::move(arg);
    return Init_INS_rotation_matrix_6(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_4
{
public:
  explicit Init_INS_rotation_matrix_4(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_5 rotation_matrix_4(::interfaces::msg::INS::_rotation_matrix_4_type arg)
  {
    msg_.rotation_matrix_4 = std::move(arg);
    return Init_INS_rotation_matrix_5(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_3
{
public:
  explicit Init_INS_rotation_matrix_3(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_4 rotation_matrix_3(::interfaces::msg::INS::_rotation_matrix_3_type arg)
  {
    msg_.rotation_matrix_3 = std::move(arg);
    return Init_INS_rotation_matrix_4(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_2
{
public:
  explicit Init_INS_rotation_matrix_2(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_3 rotation_matrix_2(::interfaces::msg::INS::_rotation_matrix_2_type arg)
  {
    msg_.rotation_matrix_2 = std::move(arg);
    return Init_INS_rotation_matrix_3(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_1
{
public:
  explicit Init_INS_rotation_matrix_1(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_2 rotation_matrix_1(::interfaces::msg::INS::_rotation_matrix_1_type arg)
  {
    msg_.rotation_matrix_1 = std::move(arg);
    return Init_INS_rotation_matrix_2(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_rotation_matrix_0
{
public:
  explicit Init_INS_rotation_matrix_0(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_1 rotation_matrix_0(::interfaces::msg::INS::_rotation_matrix_0_type arg)
  {
    msg_.rotation_matrix_0 = std::move(arg);
    return Init_INS_rotation_matrix_1(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_quaternion_z
{
public:
  explicit Init_INS_quaternion_z(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_rotation_matrix_0 quaternion_z(::interfaces::msg::INS::_quaternion_z_type arg)
  {
    msg_.quaternion_z = std::move(arg);
    return Init_INS_rotation_matrix_0(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_quaternion_y
{
public:
  explicit Init_INS_quaternion_y(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_quaternion_z quaternion_y(::interfaces::msg::INS::_quaternion_y_type arg)
  {
    msg_.quaternion_y = std::move(arg);
    return Init_INS_quaternion_z(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_quaternion_x
{
public:
  explicit Init_INS_quaternion_x(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_quaternion_y quaternion_x(::interfaces::msg::INS::_quaternion_x_type arg)
  {
    msg_.quaternion_x = std::move(arg);
    return Init_INS_quaternion_y(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_quaternion_w
{
public:
  explicit Init_INS_quaternion_w(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_quaternion_x quaternion_w(::interfaces::msg::INS::_quaternion_w_type arg)
  {
    msg_.quaternion_w = std::move(arg);
    return Init_INS_quaternion_x(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_heading
{
public:
  explicit Init_INS_heading(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_quaternion_w heading(::interfaces::msg::INS::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_INS_quaternion_w(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_pitch
{
public:
  explicit Init_INS_pitch(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_heading pitch(::interfaces::msg::INS::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_INS_heading(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_roll
{
public:
  explicit Init_INS_roll(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_pitch roll(::interfaces::msg::INS::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_INS_pitch(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_fom_fc1
{
public:
  explicit Init_INS_fom_fc1(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_roll fom_fc1(::interfaces::msg::INS::_fom_fc1_type arg)
  {
    msg_.fom_fc1 = std::move(arg);
    return Init_INS_roll(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_fom_ahrs
{
public:
  explicit Init_INS_fom_ahrs(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_fom_fc1 fom_ahrs(::interfaces::msg::INS::_fom_ahrs_type arg)
  {
    msg_.fom_ahrs = std::move(arg);
    return Init_INS_fom_fc1(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_operation_mode
{
public:
  explicit Init_INS_operation_mode(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_fom_ahrs operation_mode(::interfaces::msg::INS::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_INS_fom_ahrs(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_serial_number
{
public:
  explicit Init_INS_serial_number(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_operation_mode serial_number(::interfaces::msg::INS::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_INS_operation_mode(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_microseconds
{
public:
  explicit Init_INS_microseconds(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_serial_number microseconds(::interfaces::msg::INS::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_INS_serial_number(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_timestamp
{
public:
  explicit Init_INS_timestamp(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_microseconds timestamp(::interfaces::msg::INS::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_INS_microseconds(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_posix_time
{
public:
  explicit Init_INS_posix_time(::interfaces::msg::INS & msg)
  : msg_(msg)
  {}
  Init_INS_timestamp posix_time(::interfaces::msg::INS::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_INS_timestamp(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

class Init_INS_system_timestamp
{
public:
  Init_INS_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INS_posix_time system_timestamp(::interfaces::msg::INS::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_INS_posix_time(msg_);
  }

private:
  ::interfaces::msg::INS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::INS>()
{
  return interfaces::msg::builder::Init_INS_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__INS__BUILDER_HPP_
