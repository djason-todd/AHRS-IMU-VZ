// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Altimeter.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ALTIMETER__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ALTIMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/altimeter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Altimeter_altimeter_quality
{
public:
  explicit Init_Altimeter_altimeter_quality(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Altimeter altimeter_quality(::interfaces::msg::Altimeter::_altimeter_quality_type arg)
  {
    msg_.altimeter_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_altimeter_distance
{
public:
  explicit Init_Altimeter_altimeter_distance(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_altimeter_quality altimeter_distance(::interfaces::msg::Altimeter::_altimeter_distance_type arg)
  {
    msg_.altimeter_distance = std::move(arg);
    return Init_Altimeter_altimeter_quality(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_pressure
{
public:
  explicit Init_Altimeter_pressure(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_altimeter_distance pressure(::interfaces::msg::Altimeter::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_Altimeter_altimeter_distance(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_temperature
{
public:
  explicit Init_Altimeter_temperature(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_pressure temperature(::interfaces::msg::Altimeter::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Altimeter_pressure(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_sound_speed
{
public:
  explicit Init_Altimeter_sound_speed(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_temperature sound_speed(::interfaces::msg::Altimeter::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return Init_Altimeter_temperature(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_serial_number
{
public:
  explicit Init_Altimeter_serial_number(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_sound_speed serial_number(::interfaces::msg::Altimeter::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_Altimeter_sound_speed(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_temperature_valid
{
public:
  explicit Init_Altimeter_temperature_valid(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_serial_number temperature_valid(::interfaces::msg::Altimeter::_temperature_valid_type arg)
  {
    msg_.temperature_valid = std::move(arg);
    return Init_Altimeter_serial_number(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_pressure_valid
{
public:
  explicit Init_Altimeter_pressure_valid(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_temperature_valid pressure_valid(::interfaces::msg::Altimeter::_pressure_valid_type arg)
  {
    msg_.pressure_valid = std::move(arg);
    return Init_Altimeter_temperature_valid(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_altimeter_quality_valid
{
public:
  explicit Init_Altimeter_altimeter_quality_valid(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_pressure_valid altimeter_quality_valid(::interfaces::msg::Altimeter::_altimeter_quality_valid_type arg)
  {
    msg_.altimeter_quality_valid = std::move(arg);
    return Init_Altimeter_pressure_valid(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_altimeter_distance_valid
{
public:
  explicit Init_Altimeter_altimeter_distance_valid(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_altimeter_quality_valid altimeter_distance_valid(::interfaces::msg::Altimeter::_altimeter_distance_valid_type arg)
  {
    msg_.altimeter_distance_valid = std::move(arg);
    return Init_Altimeter_altimeter_quality_valid(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_microseconds
{
public:
  explicit Init_Altimeter_microseconds(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_altimeter_distance_valid microseconds(::interfaces::msg::Altimeter::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_Altimeter_altimeter_distance_valid(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_timestamp
{
public:
  explicit Init_Altimeter_timestamp(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_microseconds timestamp(::interfaces::msg::Altimeter::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Altimeter_microseconds(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_posix_time
{
public:
  explicit Init_Altimeter_posix_time(::interfaces::msg::Altimeter & msg)
  : msg_(msg)
  {}
  Init_Altimeter_timestamp posix_time(::interfaces::msg::Altimeter::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_Altimeter_timestamp(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

class Init_Altimeter_system_timestamp
{
public:
  Init_Altimeter_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Altimeter_posix_time system_timestamp(::interfaces::msg::Altimeter::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_Altimeter_posix_time(msg_);
  }

private:
  ::interfaces::msg::Altimeter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Altimeter>()
{
  return interfaces::msg::builder::Init_Altimeter_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ALTIMETER__BUILDER_HPP_
