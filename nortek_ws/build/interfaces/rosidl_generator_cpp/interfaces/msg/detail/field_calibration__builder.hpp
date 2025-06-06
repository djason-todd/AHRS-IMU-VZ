// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FieldCalibration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/field_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FieldCalibration_coverage
{
public:
  explicit Init_FieldCalibration_coverage(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::FieldCalibration coverage(::interfaces::msg::FieldCalibration::_coverage_type arg)
  {
    msg_.coverage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_fom_field_calibration
{
public:
  explicit Init_FieldCalibration_fom_field_calibration(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_coverage fom_field_calibration(::interfaces::msg::FieldCalibration::_fom_field_calibration_type arg)
  {
    msg_.fom_field_calibration = std::move(arg);
    return Init_FieldCalibration_coverage(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_new_point_z
{
public:
  explicit Init_FieldCalibration_new_point_z(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_fom_field_calibration new_point_z(::interfaces::msg::FieldCalibration::_new_point_z_type arg)
  {
    msg_.new_point_z = std::move(arg);
    return Init_FieldCalibration_fom_field_calibration(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_new_point_y
{
public:
  explicit Init_FieldCalibration_new_point_y(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_new_point_z new_point_y(::interfaces::msg::FieldCalibration::_new_point_y_type arg)
  {
    msg_.new_point_y = std::move(arg);
    return Init_FieldCalibration_new_point_z(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_new_point_x
{
public:
  explicit Init_FieldCalibration_new_point_x(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_new_point_y new_point_x(::interfaces::msg::FieldCalibration::_new_point_x_type arg)
  {
    msg_.new_point_x = std::move(arg);
    return Init_FieldCalibration_new_point_y(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_8
{
public:
  explicit Init_FieldCalibration_s_axis_8(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_new_point_x s_axis_8(::interfaces::msg::FieldCalibration::_s_axis_8_type arg)
  {
    msg_.s_axis_8 = std::move(arg);
    return Init_FieldCalibration_new_point_x(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_7
{
public:
  explicit Init_FieldCalibration_s_axis_7(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_8 s_axis_7(::interfaces::msg::FieldCalibration::_s_axis_7_type arg)
  {
    msg_.s_axis_7 = std::move(arg);
    return Init_FieldCalibration_s_axis_8(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_6
{
public:
  explicit Init_FieldCalibration_s_axis_6(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_7 s_axis_6(::interfaces::msg::FieldCalibration::_s_axis_6_type arg)
  {
    msg_.s_axis_6 = std::move(arg);
    return Init_FieldCalibration_s_axis_7(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_5
{
public:
  explicit Init_FieldCalibration_s_axis_5(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_6 s_axis_5(::interfaces::msg::FieldCalibration::_s_axis_5_type arg)
  {
    msg_.s_axis_5 = std::move(arg);
    return Init_FieldCalibration_s_axis_6(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_4
{
public:
  explicit Init_FieldCalibration_s_axis_4(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_5 s_axis_4(::interfaces::msg::FieldCalibration::_s_axis_4_type arg)
  {
    msg_.s_axis_4 = std::move(arg);
    return Init_FieldCalibration_s_axis_5(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_3
{
public:
  explicit Init_FieldCalibration_s_axis_3(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_4 s_axis_3(::interfaces::msg::FieldCalibration::_s_axis_3_type arg)
  {
    msg_.s_axis_3 = std::move(arg);
    return Init_FieldCalibration_s_axis_4(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_2
{
public:
  explicit Init_FieldCalibration_s_axis_2(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_3 s_axis_2(::interfaces::msg::FieldCalibration::_s_axis_2_type arg)
  {
    msg_.s_axis_2 = std::move(arg);
    return Init_FieldCalibration_s_axis_3(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_1
{
public:
  explicit Init_FieldCalibration_s_axis_1(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_2 s_axis_1(::interfaces::msg::FieldCalibration::_s_axis_1_type arg)
  {
    msg_.s_axis_1 = std::move(arg);
    return Init_FieldCalibration_s_axis_2(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_s_axis_0
{
public:
  explicit Init_FieldCalibration_s_axis_0(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_1 s_axis_0(::interfaces::msg::FieldCalibration::_s_axis_0_type arg)
  {
    msg_.s_axis_0 = std::move(arg);
    return Init_FieldCalibration_s_axis_1(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_hard_iron_z
{
public:
  explicit Init_FieldCalibration_hard_iron_z(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_s_axis_0 hard_iron_z(::interfaces::msg::FieldCalibration::_hard_iron_z_type arg)
  {
    msg_.hard_iron_z = std::move(arg);
    return Init_FieldCalibration_s_axis_0(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_hard_iron_y
{
public:
  explicit Init_FieldCalibration_hard_iron_y(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_hard_iron_z hard_iron_y(::interfaces::msg::FieldCalibration::_hard_iron_y_type arg)
  {
    msg_.hard_iron_y = std::move(arg);
    return Init_FieldCalibration_hard_iron_z(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_hard_iron_x
{
public:
  explicit Init_FieldCalibration_hard_iron_x(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_hard_iron_y hard_iron_x(::interfaces::msg::FieldCalibration::_hard_iron_x_type arg)
  {
    msg_.hard_iron_x = std::move(arg);
    return Init_FieldCalibration_hard_iron_y(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_points_used_in_estimation
{
public:
  explicit Init_FieldCalibration_points_used_in_estimation(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_hard_iron_x points_used_in_estimation(::interfaces::msg::FieldCalibration::_points_used_in_estimation_type arg)
  {
    msg_.points_used_in_estimation = std::move(arg);
    return Init_FieldCalibration_hard_iron_x(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_microseconds
{
public:
  explicit Init_FieldCalibration_microseconds(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_points_used_in_estimation microseconds(::interfaces::msg::FieldCalibration::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_FieldCalibration_points_used_in_estimation(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_timestamp
{
public:
  explicit Init_FieldCalibration_timestamp(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_microseconds timestamp(::interfaces::msg::FieldCalibration::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FieldCalibration_microseconds(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_posix_time
{
public:
  explicit Init_FieldCalibration_posix_time(::interfaces::msg::FieldCalibration & msg)
  : msg_(msg)
  {}
  Init_FieldCalibration_timestamp posix_time(::interfaces::msg::FieldCalibration::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_FieldCalibration_timestamp(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

class Init_FieldCalibration_system_timestamp
{
public:
  Init_FieldCalibration_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldCalibration_posix_time system_timestamp(::interfaces::msg::FieldCalibration::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_FieldCalibration_posix_time(msg_);
  }

private:
  ::interfaces::msg::FieldCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FieldCalibration>()
{
  return interfaces::msg::builder::Init_FieldCalibration_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__BUILDER_HPP_
