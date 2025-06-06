// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMU & msg,
  std::ostream & out)
{
  out << "{";
  // member: system_timestamp
  {
    out << "system_timestamp: ";
    to_flow_style_yaml(msg.system_timestamp, out);
    out << ", ";
  }

  // member: posix_time
  {
    out << "posix_time: ";
    rosidl_generator_traits::value_to_yaml(msg.posix_time, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: microseconds
  {
    out << "microseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.microseconds, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: has_data_path_overrun
  {
    out << "has_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.has_data_path_overrun, out);
    out << ", ";
  }

  // member: has_flash_update_failure
  {
    out << "has_flash_update_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_flash_update_failure, out);
    out << ", ";
  }

  // member: has_spi_com_error
  {
    out << "has_spi_com_error: ";
    rosidl_generator_traits::value_to_yaml(msg.has_spi_com_error, out);
    out << ", ";
  }

  // member: has_low_voltage
  {
    out << "has_low_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_voltage, out);
    out << ", ";
  }

  // member: has_sensor_failure
  {
    out << "has_sensor_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_failure, out);
    out << ", ";
  }

  // member: has_memory_failure
  {
    out << "has_memory_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_memory_failure, out);
    out << ", ";
  }

  // member: has_gyro_1_failure
  {
    out << "has_gyro_1_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_gyro_1_failure, out);
    out << ", ";
  }

  // member: has_gyro_2_failure
  {
    out << "has_gyro_2_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_gyro_2_failure, out);
    out << ", ";
  }

  // member: has_accelerometer_failure
  {
    out << "has_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_accelerometer_failure, out);
    out << ", ";
  }

  // member: accelerometer_x
  {
    out << "accelerometer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_x, out);
    out << ", ";
  }

  // member: accelerometer_y
  {
    out << "accelerometer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_y, out);
    out << ", ";
  }

  // member: accelerometer_z
  {
    out << "accelerometer_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_z, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: system_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_timestamp:\n";
    to_block_style_yaml(msg.system_timestamp, out, indentation + 2);
  }

  // member: posix_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posix_time: ";
    rosidl_generator_traits::value_to_yaml(msg.posix_time, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: microseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "microseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.microseconds, out);
    out << "\n";
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: has_data_path_overrun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.has_data_path_overrun, out);
    out << "\n";
  }

  // member: has_flash_update_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_flash_update_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_flash_update_failure, out);
    out << "\n";
  }

  // member: has_spi_com_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_spi_com_error: ";
    rosidl_generator_traits::value_to_yaml(msg.has_spi_com_error, out);
    out << "\n";
  }

  // member: has_low_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_low_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_voltage, out);
    out << "\n";
  }

  // member: has_sensor_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_sensor_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_sensor_failure, out);
    out << "\n";
  }

  // member: has_memory_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_memory_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_memory_failure, out);
    out << "\n";
  }

  // member: has_gyro_1_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_gyro_1_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_gyro_1_failure, out);
    out << "\n";
  }

  // member: has_gyro_2_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_gyro_2_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_gyro_2_failure, out);
    out << "\n";
  }

  // member: has_accelerometer_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_accelerometer_failure, out);
    out << "\n";
  }

  // member: accelerometer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_x, out);
    out << "\n";
  }

  // member: accelerometer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_y, out);
    out << "\n";
  }

  // member: accelerometer_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_z, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMU & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::IMU & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::IMU>()
{
  return "interfaces::msg::IMU";
}

template<>
inline const char * name<interfaces::msg::IMU>()
{
  return "interfaces/msg/IMU";
}

template<>
struct has_fixed_size<interfaces::msg::IMU>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::IMU>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::IMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
