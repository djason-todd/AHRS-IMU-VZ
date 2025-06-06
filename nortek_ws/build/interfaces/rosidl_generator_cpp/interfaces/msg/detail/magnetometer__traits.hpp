// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MAGNETOMETER__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__MAGNETOMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/magnetometer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Magnetometer & msg,
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

  // member: is_compensated_for_hard_iron
  {
    out << "is_compensated_for_hard_iron: ";
    rosidl_generator_traits::value_to_yaml(msg.is_compensated_for_hard_iron, out);
    out << ", ";
  }

  // member: dvl_active
  {
    out << "dvl_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_active, out);
    out << ", ";
  }

  // member: dvl_acoustics_active
  {
    out << "dvl_acoustics_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_acoustics_active, out);
    out << ", ";
  }

  // member: dvl_transmitter_active
  {
    out << "dvl_transmitter_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_transmitter_active, out);
    out << ", ";
  }

  // member: magnetometer_x
  {
    out << "magnetometer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_x, out);
    out << ", ";
  }

  // member: magnetometer_y
  {
    out << "magnetometer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_y, out);
    out << ", ";
  }

  // member: magnetometer_z
  {
    out << "magnetometer_z: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Magnetometer & msg,
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

  // member: is_compensated_for_hard_iron
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_compensated_for_hard_iron: ";
    rosidl_generator_traits::value_to_yaml(msg.is_compensated_for_hard_iron, out);
    out << "\n";
  }

  // member: dvl_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dvl_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_active, out);
    out << "\n";
  }

  // member: dvl_acoustics_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dvl_acoustics_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_acoustics_active, out);
    out << "\n";
  }

  // member: dvl_transmitter_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dvl_transmitter_active: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_transmitter_active, out);
    out << "\n";
  }

  // member: magnetometer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_x, out);
    out << "\n";
  }

  // member: magnetometer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_y, out);
    out << "\n";
  }

  // member: magnetometer_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer_z: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetometer_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Magnetometer & msg, bool use_flow_style = false)
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
  const interfaces::msg::Magnetometer & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::Magnetometer & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::Magnetometer>()
{
  return "interfaces::msg::Magnetometer";
}

template<>
inline const char * name<interfaces::msg::Magnetometer>()
{
  return "interfaces/msg/Magnetometer";
}

template<>
struct has_fixed_size<interfaces::msg::Magnetometer>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::Magnetometer>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::Magnetometer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__MAGNETOMETER__TRAITS_HPP_
