// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CURRENT_PROFILE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/current_profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentProfile_correlation_data
{
public:
  explicit Init_CurrentProfile_correlation_data(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::CurrentProfile correlation_data(::interfaces::msg::CurrentProfile::_correlation_data_type arg)
  {
    msg_.correlation_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_amplitude_data
{
public:
  explicit Init_CurrentProfile_amplitude_data(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_correlation_data amplitude_data(::interfaces::msg::CurrentProfile::_amplitude_data_type arg)
  {
    msg_.amplitude_data = std::move(arg);
    return Init_CurrentProfile_correlation_data(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_velocity_data
{
public:
  explicit Init_CurrentProfile_velocity_data(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_amplitude_data velocity_data(::interfaces::msg::CurrentProfile::_velocity_data_type arg)
  {
    msg_.velocity_data = std::move(arg);
    return Init_CurrentProfile_amplitude_data(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_ambiguity_velocity
{
public:
  explicit Init_CurrentProfile_ambiguity_velocity(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_velocity_data ambiguity_velocity(::interfaces::msg::CurrentProfile::_ambiguity_velocity_type arg)
  {
    msg_.ambiguity_velocity = std::move(arg);
    return Init_CurrentProfile_velocity_data(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_number_of_cells
{
public:
  explicit Init_CurrentProfile_number_of_cells(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_ambiguity_velocity number_of_cells(::interfaces::msg::CurrentProfile::_number_of_cells_type arg)
  {
    msg_.number_of_cells = std::move(arg);
    return Init_CurrentProfile_ambiguity_velocity(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_blanking
{
public:
  explicit Init_CurrentProfile_blanking(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_number_of_cells blanking(::interfaces::msg::CurrentProfile::_blanking_type arg)
  {
    msg_.blanking = std::move(arg);
    return Init_CurrentProfile_number_of_cells(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_cell_size
{
public:
  explicit Init_CurrentProfile_cell_size(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_blanking cell_size(::interfaces::msg::CurrentProfile::_cell_size_type arg)
  {
    msg_.cell_size = std::move(arg);
    return Init_CurrentProfile_blanking(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_pressure
{
public:
  explicit Init_CurrentProfile_pressure(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_cell_size pressure(::interfaces::msg::CurrentProfile::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_CurrentProfile_cell_size(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_temperature
{
public:
  explicit Init_CurrentProfile_temperature(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_pressure temperature(::interfaces::msg::CurrentProfile::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CurrentProfile_pressure(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_sound_velocity
{
public:
  explicit Init_CurrentProfile_sound_velocity(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_temperature sound_velocity(::interfaces::msg::CurrentProfile::_sound_velocity_type arg)
  {
    msg_.sound_velocity = std::move(arg);
    return Init_CurrentProfile_temperature(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_serial_number
{
public:
  explicit Init_CurrentProfile_serial_number(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_sound_velocity serial_number(::interfaces::msg::CurrentProfile::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_CurrentProfile_sound_velocity(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_microseconds
{
public:
  explicit Init_CurrentProfile_microseconds(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_serial_number microseconds(::interfaces::msg::CurrentProfile::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_CurrentProfile_serial_number(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_timestamp
{
public:
  explicit Init_CurrentProfile_timestamp(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_microseconds timestamp(::interfaces::msg::CurrentProfile::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CurrentProfile_microseconds(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_posix_time
{
public:
  explicit Init_CurrentProfile_posix_time(::interfaces::msg::CurrentProfile & msg)
  : msg_(msg)
  {}
  Init_CurrentProfile_timestamp posix_time(::interfaces::msg::CurrentProfile::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_CurrentProfile_timestamp(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

class Init_CurrentProfile_system_timestamp
{
public:
  Init_CurrentProfile_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentProfile_posix_time system_timestamp(::interfaces::msg::CurrentProfile::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_CurrentProfile_posix_time(msg_);
  }

private:
  ::interfaces::msg::CurrentProfile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::CurrentProfile>()
{
  return interfaces::msg::builder::Init_CurrentProfile_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CURRENT_PROFILE__BUILDER_HPP_
