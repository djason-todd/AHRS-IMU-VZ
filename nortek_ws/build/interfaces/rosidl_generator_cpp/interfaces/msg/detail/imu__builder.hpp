// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_IMU_temperature
{
public:
  explicit Init_IMU_temperature(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::IMU temperature(::interfaces::msg::IMU::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_gyro_z
{
public:
  explicit Init_IMU_gyro_z(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_temperature gyro_z(::interfaces::msg::IMU::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_IMU_temperature(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_gyro_y
{
public:
  explicit Init_IMU_gyro_y(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_gyro_z gyro_y(::interfaces::msg::IMU::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_IMU_gyro_z(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_gyro_x
{
public:
  explicit Init_IMU_gyro_x(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_gyro_y gyro_x(::interfaces::msg::IMU::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_IMU_gyro_y(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_accelerometer_z
{
public:
  explicit Init_IMU_accelerometer_z(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_gyro_x accelerometer_z(::interfaces::msg::IMU::_accelerometer_z_type arg)
  {
    msg_.accelerometer_z = std::move(arg);
    return Init_IMU_gyro_x(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_accelerometer_y
{
public:
  explicit Init_IMU_accelerometer_y(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer_z accelerometer_y(::interfaces::msg::IMU::_accelerometer_y_type arg)
  {
    msg_.accelerometer_y = std::move(arg);
    return Init_IMU_accelerometer_z(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_accelerometer_x
{
public:
  explicit Init_IMU_accelerometer_x(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer_y accelerometer_x(::interfaces::msg::IMU::_accelerometer_x_type arg)
  {
    msg_.accelerometer_x = std::move(arg);
    return Init_IMU_accelerometer_y(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_accelerometer_failure
{
public:
  explicit Init_IMU_has_accelerometer_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer_x has_accelerometer_failure(::interfaces::msg::IMU::_has_accelerometer_failure_type arg)
  {
    msg_.has_accelerometer_failure = std::move(arg);
    return Init_IMU_accelerometer_x(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_gyro_2_failure
{
public:
  explicit Init_IMU_has_gyro_2_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_accelerometer_failure has_gyro_2_failure(::interfaces::msg::IMU::_has_gyro_2_failure_type arg)
  {
    msg_.has_gyro_2_failure = std::move(arg);
    return Init_IMU_has_accelerometer_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_gyro_1_failure
{
public:
  explicit Init_IMU_has_gyro_1_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_gyro_2_failure has_gyro_1_failure(::interfaces::msg::IMU::_has_gyro_1_failure_type arg)
  {
    msg_.has_gyro_1_failure = std::move(arg);
    return Init_IMU_has_gyro_2_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_memory_failure
{
public:
  explicit Init_IMU_has_memory_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_gyro_1_failure has_memory_failure(::interfaces::msg::IMU::_has_memory_failure_type arg)
  {
    msg_.has_memory_failure = std::move(arg);
    return Init_IMU_has_gyro_1_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_sensor_failure
{
public:
  explicit Init_IMU_has_sensor_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_memory_failure has_sensor_failure(::interfaces::msg::IMU::_has_sensor_failure_type arg)
  {
    msg_.has_sensor_failure = std::move(arg);
    return Init_IMU_has_memory_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_low_voltage
{
public:
  explicit Init_IMU_has_low_voltage(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_sensor_failure has_low_voltage(::interfaces::msg::IMU::_has_low_voltage_type arg)
  {
    msg_.has_low_voltage = std::move(arg);
    return Init_IMU_has_sensor_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_spi_com_error
{
public:
  explicit Init_IMU_has_spi_com_error(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_low_voltage has_spi_com_error(::interfaces::msg::IMU::_has_spi_com_error_type arg)
  {
    msg_.has_spi_com_error = std::move(arg);
    return Init_IMU_has_low_voltage(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_flash_update_failure
{
public:
  explicit Init_IMU_has_flash_update_failure(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_spi_com_error has_flash_update_failure(::interfaces::msg::IMU::_has_flash_update_failure_type arg)
  {
    msg_.has_flash_update_failure = std::move(arg);
    return Init_IMU_has_spi_com_error(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_has_data_path_overrun
{
public:
  explicit Init_IMU_has_data_path_overrun(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_flash_update_failure has_data_path_overrun(::interfaces::msg::IMU::_has_data_path_overrun_type arg)
  {
    msg_.has_data_path_overrun = std::move(arg);
    return Init_IMU_has_flash_update_failure(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_is_valid
{
public:
  explicit Init_IMU_is_valid(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_has_data_path_overrun is_valid(::interfaces::msg::IMU::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_IMU_has_data_path_overrun(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_microseconds
{
public:
  explicit Init_IMU_microseconds(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_is_valid microseconds(::interfaces::msg::IMU::_microseconds_type arg)
  {
    msg_.microseconds = std::move(arg);
    return Init_IMU_is_valid(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_timestamp
{
public:
  explicit Init_IMU_timestamp(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_microseconds timestamp(::interfaces::msg::IMU::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IMU_microseconds(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_posix_time
{
public:
  explicit Init_IMU_posix_time(::interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_timestamp posix_time(::interfaces::msg::IMU::_posix_time_type arg)
  {
    msg_.posix_time = std::move(arg);
    return Init_IMU_timestamp(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

class Init_IMU_system_timestamp
{
public:
  Init_IMU_system_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_posix_time system_timestamp(::interfaces::msg::IMU::_system_timestamp_type arg)
  {
    msg_.system_timestamp = std::move(arg);
    return Init_IMU_posix_time(msg_);
  }

private:
  ::interfaces::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::IMU>()
{
  return interfaces::msg::builder::Init_IMU_system_timestamp();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
