// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/WaterTrack.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_TRACK__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__WATER_TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/water_track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_WaterTrack_time_vel_xyz
{
public:
  explicit Init_WaterTrack_time_vel_xyz(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::WaterTrack time_vel_xyz(::interfaces::msg::WaterTrack::_time_vel_xyz_type arg)
  {
    msg_.time_vel_xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_dt_xyz
{
public:
  explicit Init_WaterTrack_dt_xyz(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_time_vel_xyz dt_xyz(::interfaces::msg::WaterTrack::_dt_xyz_type arg)
  {
    msg_.dt_xyz = std::move(arg);
    return Init_WaterTrack_time_vel_xyz(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_z
{
public:
  explicit Init_WaterTrack_fom_z(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_dt_xyz fom_z(::interfaces::msg::WaterTrack::_fom_z_type arg)
  {
    msg_.fom_z = std::move(arg);
    return Init_WaterTrack_dt_xyz(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_y
{
public:
  explicit Init_WaterTrack_fom_y(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_z fom_y(::interfaces::msg::WaterTrack::_fom_y_type arg)
  {
    msg_.fom_y = std::move(arg);
    return Init_WaterTrack_fom_z(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_x
{
public:
  explicit Init_WaterTrack_fom_x(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_y fom_x(::interfaces::msg::WaterTrack::_fom_x_type arg)
  {
    msg_.fom_x = std::move(arg);
    return Init_WaterTrack_fom_y(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_z
{
public:
  explicit Init_WaterTrack_velocity_z(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_x velocity_z(::interfaces::msg::WaterTrack::_velocity_z_type arg)
  {
    msg_.velocity_z = std::move(arg);
    return Init_WaterTrack_fom_x(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_y
{
public:
  explicit Init_WaterTrack_velocity_y(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_z velocity_y(::interfaces::msg::WaterTrack::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return Init_WaterTrack_velocity_z(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_x
{
public:
  explicit Init_WaterTrack_velocity_x(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_y velocity_x(::interfaces::msg::WaterTrack::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_WaterTrack_velocity_y(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_time_vel_beam_3
{
public:
  explicit Init_WaterTrack_time_vel_beam_3(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_x time_vel_beam_3(::interfaces::msg::WaterTrack::_time_vel_beam_3_type arg)
  {
    msg_.time_vel_beam_3 = std::move(arg);
    return Init_WaterTrack_velocity_x(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_time_vel_beam_2
{
public:
  explicit Init_WaterTrack_time_vel_beam_2(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_time_vel_beam_3 time_vel_beam_2(::interfaces::msg::WaterTrack::_time_vel_beam_2_type arg)
  {
    msg_.time_vel_beam_2 = std::move(arg);
    return Init_WaterTrack_time_vel_beam_3(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_time_vel_beam_1
{
public:
  explicit Init_WaterTrack_time_vel_beam_1(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_time_vel_beam_2 time_vel_beam_1(::interfaces::msg::WaterTrack::_time_vel_beam_1_type arg)
  {
    msg_.time_vel_beam_1 = std::move(arg);
    return Init_WaterTrack_time_vel_beam_2(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_dt_beam_3
{
public:
  explicit Init_WaterTrack_dt_beam_3(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_time_vel_beam_1 dt_beam_3(::interfaces::msg::WaterTrack::_dt_beam_3_type arg)
  {
    msg_.dt_beam_3 = std::move(arg);
    return Init_WaterTrack_time_vel_beam_1(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_dt_beam_2
{
public:
  explicit Init_WaterTrack_dt_beam_2(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_dt_beam_3 dt_beam_2(::interfaces::msg::WaterTrack::_dt_beam_2_type arg)
  {
    msg_.dt_beam_2 = std::move(arg);
    return Init_WaterTrack_dt_beam_3(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_dt_beam_1
{
public:
  explicit Init_WaterTrack_dt_beam_1(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_dt_beam_2 dt_beam_1(::interfaces::msg::WaterTrack::_dt_beam_1_type arg)
  {
    msg_.dt_beam_1 = std::move(arg);
    return Init_WaterTrack_dt_beam_2(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_beam_3
{
public:
  explicit Init_WaterTrack_fom_beam_3(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_dt_beam_1 fom_beam_3(::interfaces::msg::WaterTrack::_fom_beam_3_type arg)
  {
    msg_.fom_beam_3 = std::move(arg);
    return Init_WaterTrack_dt_beam_1(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_beam_2
{
public:
  explicit Init_WaterTrack_fom_beam_2(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_beam_3 fom_beam_2(::interfaces::msg::WaterTrack::_fom_beam_2_type arg)
  {
    msg_.fom_beam_2 = std::move(arg);
    return Init_WaterTrack_fom_beam_3(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_fom_beam_1
{
public:
  explicit Init_WaterTrack_fom_beam_1(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_beam_2 fom_beam_1(::interfaces::msg::WaterTrack::_fom_beam_1_type arg)
  {
    msg_.fom_beam_1 = std::move(arg);
    return Init_WaterTrack_fom_beam_2(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_distance_beam_3
{
public:
  explicit Init_WaterTrack_distance_beam_3(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_fom_beam_1 distance_beam_3(::interfaces::msg::WaterTrack::_distance_beam_3_type arg)
  {
    msg_.distance_beam_3 = std::move(arg);
    return Init_WaterTrack_fom_beam_1(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_distance_beam_2
{
public:
  explicit Init_WaterTrack_distance_beam_2(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_distance_beam_3 distance_beam_2(::interfaces::msg::WaterTrack::_distance_beam_2_type arg)
  {
    msg_.distance_beam_2 = std::move(arg);
    return Init_WaterTrack_distance_beam_3(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_distance_beam_1
{
public:
  explicit Init_WaterTrack_distance_beam_1(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_distance_beam_2 distance_beam_1(::interfaces::msg::WaterTrack::_distance_beam_1_type arg)
  {
    msg_.distance_beam_1 = std::move(arg);
    return Init_WaterTrack_distance_beam_2(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_beam_3
{
public:
  explicit Init_WaterTrack_velocity_beam_3(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_distance_beam_1 velocity_beam_3(::interfaces::msg::WaterTrack::_velocity_beam_3_type arg)
  {
    msg_.velocity_beam_3 = std::move(arg);
    return Init_WaterTrack_distance_beam_1(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_beam_2
{
public:
  explicit Init_WaterTrack_velocity_beam_2(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_beam_3 velocity_beam_2(::interfaces::msg::WaterTrack::_velocity_beam_2_type arg)
  {
    msg_.velocity_beam_2 = std::move(arg);
    return Init_WaterTrack_velocity_beam_3(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_velocity_beam_1
{
public:
  explicit Init_WaterTrack_velocity_beam_1(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_beam_2 velocity_beam_1(::interfaces::msg::WaterTrack::_velocity_beam_1_type arg)
  {
    msg_.velocity_beam_1 = std::move(arg);
    return Init_WaterTrack_velocity_beam_2(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_pressure
{
public:
  explicit Init_WaterTrack_pressure(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_velocity_beam_1 pressure(::interfaces::msg::WaterTrack::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_WaterTrack_velocity_beam_1(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_temperature
{
public:
  explicit Init_WaterTrack_temperature(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_pressure temperature(::interfaces::msg::WaterTrack::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_WaterTrack_pressure(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_sound_speed
{
public:
  explicit Init_WaterTrack_sound_speed(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_temperature sound_speed(::interfaces::msg::WaterTrack::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return Init_WaterTrack_temperature(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_serial_number
{
public:
  explicit Init_WaterTrack_serial_number(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_sound_speed serial_number(::interfaces::msg::WaterTrack::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_WaterTrack_sound_speed(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_z_fom_valid
{
public:
  explicit Init_WaterTrack_z_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_serial_number z_fom_valid(::interfaces::msg::WaterTrack::_z_fom_valid_type arg)
  {
    msg_.z_fom_valid = std::move(arg);
    return Init_WaterTrack_serial_number(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_y_fom_valid
{
public:
  explicit Init_WaterTrack_y_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_z_fom_valid y_fom_valid(::interfaces::msg::WaterTrack::_y_fom_valid_type arg)
  {
    msg_.y_fom_valid = std::move(arg);
    return Init_WaterTrack_z_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_x_fom_valid
{
public:
  explicit Init_WaterTrack_x_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_y_fom_valid x_fom_valid(::interfaces::msg::WaterTrack::_x_fom_valid_type arg)
  {
    msg_.x_fom_valid = std::move(arg);
    return Init_WaterTrack_y_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_z_velocity_valid
{
public:
  explicit Init_WaterTrack_z_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_x_fom_valid z_velocity_valid(::interfaces::msg::WaterTrack::_z_velocity_valid_type arg)
  {
    msg_.z_velocity_valid = std::move(arg);
    return Init_WaterTrack_x_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_y_velocity_valid
{
public:
  explicit Init_WaterTrack_y_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_z_velocity_valid y_velocity_valid(::interfaces::msg::WaterTrack::_y_velocity_valid_type arg)
  {
    msg_.y_velocity_valid = std::move(arg);
    return Init_WaterTrack_z_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_x_velocity_valid
{
public:
  explicit Init_WaterTrack_x_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_y_velocity_valid x_velocity_valid(::interfaces::msg::WaterTrack::_x_velocity_valid_type arg)
  {
    msg_.x_velocity_valid = std::move(arg);
    return Init_WaterTrack_y_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_3_fom_valid
{
public:
  explicit Init_WaterTrack_beam_3_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_x_velocity_valid beam_3_fom_valid(::interfaces::msg::WaterTrack::_beam_3_fom_valid_type arg)
  {
    msg_.beam_3_fom_valid = std::move(arg);
    return Init_WaterTrack_x_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_2_fom_valid
{
public:
  explicit Init_WaterTrack_beam_2_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_3_fom_valid beam_2_fom_valid(::interfaces::msg::WaterTrack::_beam_2_fom_valid_type arg)
  {
    msg_.beam_2_fom_valid = std::move(arg);
    return Init_WaterTrack_beam_3_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_1_fom_valid
{
public:
  explicit Init_WaterTrack_beam_1_fom_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_2_fom_valid beam_1_fom_valid(::interfaces::msg::WaterTrack::_beam_1_fom_valid_type arg)
  {
    msg_.beam_1_fom_valid = std::move(arg);
    return Init_WaterTrack_beam_2_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_3_distance_valid
{
public:
  explicit Init_WaterTrack_beam_3_distance_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_1_fom_valid beam_3_distance_valid(::interfaces::msg::WaterTrack::_beam_3_distance_valid_type arg)
  {
    msg_.beam_3_distance_valid = std::move(arg);
    return Init_WaterTrack_beam_1_fom_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_2_distance_valid
{
public:
  explicit Init_WaterTrack_beam_2_distance_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_3_distance_valid beam_2_distance_valid(::interfaces::msg::WaterTrack::_beam_2_distance_valid_type arg)
  {
    msg_.beam_2_distance_valid = std::move(arg);
    return Init_WaterTrack_beam_3_distance_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_1_distance_valid
{
public:
  explicit Init_WaterTrack_beam_1_distance_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_2_distance_valid beam_1_distance_valid(::interfaces::msg::WaterTrack::_beam_1_distance_valid_type arg)
  {
    msg_.beam_1_distance_valid = std::move(arg);
    return Init_WaterTrack_beam_2_distance_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_3_velocity_valid
{
public:
  explicit Init_WaterTrack_beam_3_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_1_distance_valid beam_3_velocity_valid(::interfaces::msg::WaterTrack::_beam_3_velocity_valid_type arg)
  {
    msg_.beam_3_velocity_valid = std::move(arg);
    return Init_WaterTrack_beam_1_distance_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_2_velocity_valid
{
public:
  explicit Init_WaterTrack_beam_2_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_3_velocity_valid beam_2_velocity_valid(::interfaces::msg::WaterTrack::_beam_2_velocity_valid_type arg)
  {
    msg_.beam_2_velocity_valid = std::move(arg);
    return Init_WaterTrack_beam_3_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_beam_1_velocity_valid
{
public:
  explicit Init_WaterTrack_beam_1_velocity_valid(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_2_velocity_valid beam_1_velocity_valid(::interfaces::msg::WaterTrack::_beam_1_velocity_valid_type arg)
  {
    msg_.beam_1_velocity_valid = std::move(arg);
    return Init_WaterTrack_beam_2_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_microseconds
{
public:
  explicit Init_WaterTrack_microseconds(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_beam_1_velocity_valid microseconds(::interfaces::msg::WaterTrack::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_WaterTrack_beam_1_velocity_valid(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_timestamp
{
public:
  explicit Init_WaterTrack_timestamp(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_microseconds timestamp(::interfaces::msg::WaterTrack::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_WaterTrack_microseconds(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_posix_time
{
public:
  explicit Init_WaterTrack_posix_time(::interfaces::msg::WaterTrack & msg)
  : msg_(msg)
  {}
  Init_WaterTrack_timestamp posix_time(::interfaces::msg::WaterTrack::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_WaterTrack_timestamp(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

class Init_WaterTrack_system_timestamp
{
public:
  Init_WaterTrack_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterTrack_posix_time system_timestamp(::interfaces::msg::WaterTrack::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_WaterTrack_posix_time(msg_);
  }

private:
  ::interfaces::msg::WaterTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::WaterTrack>()
{
  return interfaces::msg::builder::Init_WaterTrack_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WATER_TRACK__BUILDER_HPP_
