// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MAGNETOMETER__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MAGNETOMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/magnetometer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Magnetometer_magnetometer_z
{
public:
  explicit Init_Magnetometer_magnetometer_z(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Magnetometer magnetometer_z(::interfaces::msg::Magnetometer::_magnetometer_z_type arg)
  {
    msg_.magnetometer_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_magnetometer_y
{
public:
  explicit Init_Magnetometer_magnetometer_y(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_magnetometer_z magnetometer_y(::interfaces::msg::Magnetometer::_magnetometer_y_type arg)
  {
    msg_.magnetometer_y = std::move(arg);
    return Init_Magnetometer_magnetometer_z(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_magnetometer_x
{
public:
  explicit Init_Magnetometer_magnetometer_x(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_magnetometer_y magnetometer_x(::interfaces::msg::Magnetometer::_magnetometer_x_type arg)
  {
    msg_.magnetometer_x = std::move(arg);
    return Init_Magnetometer_magnetometer_y(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_dvl_transmitter_active
{
public:
  explicit Init_Magnetometer_dvl_transmitter_active(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_magnetometer_x dvl_transmitter_active(::interfaces::msg::Magnetometer::_dvl_transmitter_active_type arg)
  {
    msg_.dvl_transmitter_active = std::move(arg);
    return Init_Magnetometer_magnetometer_x(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_dvl_acoustics_active
{
public:
  explicit Init_Magnetometer_dvl_acoustics_active(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_dvl_transmitter_active dvl_acoustics_active(::interfaces::msg::Magnetometer::_dvl_acoustics_active_type arg)
  {
    msg_.dvl_acoustics_active = std::move(arg);
    return Init_Magnetometer_dvl_transmitter_active(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_dvl_active
{
public:
  explicit Init_Magnetometer_dvl_active(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_dvl_acoustics_active dvl_active(::interfaces::msg::Magnetometer::_dvl_active_type arg)
  {
    msg_.dvl_active = std::move(arg);
    return Init_Magnetometer_dvl_acoustics_active(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_is_compensated_for_hard_iron
{
public:
  explicit Init_Magnetometer_is_compensated_for_hard_iron(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_dvl_active is_compensated_for_hard_iron(::interfaces::msg::Magnetometer::_is_compensated_for_hard_iron_type arg)
  {
    msg_.is_compensated_for_hard_iron = std::move(arg);
    return Init_Magnetometer_dvl_active(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_microseconds
{
public:
  explicit Init_Magnetometer_microseconds(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_is_compensated_for_hard_iron microseconds(::interfaces::msg::Magnetometer::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_Magnetometer_is_compensated_for_hard_iron(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_timestamp
{
public:
  explicit Init_Magnetometer_timestamp(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_microseconds timestamp(::interfaces::msg::Magnetometer::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Magnetometer_microseconds(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_posix_time
{
public:
  explicit Init_Magnetometer_posix_time(::interfaces::msg::Magnetometer & msg)
  : msg_(msg)
  {}
  Init_Magnetometer_timestamp posix_time(::interfaces::msg::Magnetometer::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_Magnetometer_timestamp(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

class Init_Magnetometer_system_timestamp
{
public:
  Init_Magnetometer_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Magnetometer_posix_time system_timestamp(::interfaces::msg::Magnetometer::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_Magnetometer_posix_time(msg_);
  }

private:
  ::interfaces::msg::Magnetometer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Magnetometer>()
{
  return interfaces::msg::builder::Init_Magnetometer_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MAGNETOMETER__BUILDER_HPP_
