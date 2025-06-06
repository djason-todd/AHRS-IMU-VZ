// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Altimeter.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ALTIMETER__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__ALTIMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/altimeter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Altimeter & msg,
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

  // member: altimeter_distance_valid
  {
    out << "altimeter_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_distance_valid, out);
    out << ", ";
  }

  // member: altimeter_quality_valid
  {
    out << "altimeter_quality_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_quality_valid, out);
    out << ", ";
  }

  // member: pressure_valid
  {
    out << "pressure_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_valid, out);
    out << ", ";
  }

  // member: temperature_valid
  {
    out << "temperature_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_valid, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: sound_speed
  {
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: altimeter_distance
  {
    out << "altimeter_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_distance, out);
    out << ", ";
  }

  // member: altimeter_quality
  {
    out << "altimeter_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Altimeter & msg,
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

  // member: altimeter_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altimeter_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_distance_valid, out);
    out << "\n";
  }

  // member: altimeter_quality_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altimeter_quality_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_quality_valid, out);
    out << "\n";
  }

  // member: pressure_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_valid, out);
    out << "\n";
  }

  // member: temperature_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_valid, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: sound_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
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

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: altimeter_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altimeter_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_distance, out);
    out << "\n";
  }

  // member: altimeter_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altimeter_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.altimeter_quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Altimeter & msg, bool use_flow_style = false)
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
  const interfaces::msg::Altimeter & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::Altimeter & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::Altimeter>()
{
  return "interfaces::msg::Altimeter";
}

template<>
inline const char * name<interfaces::msg::Altimeter>()
{
  return "interfaces/msg/Altimeter";
}

template<>
struct has_fixed_size<interfaces::msg::Altimeter>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::Altimeter>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::Altimeter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__ALTIMETER__TRAITS_HPP_
