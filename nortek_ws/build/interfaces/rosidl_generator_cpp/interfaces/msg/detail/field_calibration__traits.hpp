// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/FieldCalibration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/field_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FieldCalibration & msg,
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

  // member: points_used_in_estimation
  {
    out << "points_used_in_estimation: ";
    rosidl_generator_traits::value_to_yaml(msg.points_used_in_estimation, out);
    out << ", ";
  }

  // member: hard_iron_x
  {
    out << "hard_iron_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_x, out);
    out << ", ";
  }

  // member: hard_iron_y
  {
    out << "hard_iron_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_y, out);
    out << ", ";
  }

  // member: hard_iron_z
  {
    out << "hard_iron_z: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_z, out);
    out << ", ";
  }

  // member: s_axis_0
  {
    out << "s_axis_0: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_0, out);
    out << ", ";
  }

  // member: s_axis_1
  {
    out << "s_axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_1, out);
    out << ", ";
  }

  // member: s_axis_2
  {
    out << "s_axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_2, out);
    out << ", ";
  }

  // member: s_axis_3
  {
    out << "s_axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_3, out);
    out << ", ";
  }

  // member: s_axis_4
  {
    out << "s_axis_4: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_4, out);
    out << ", ";
  }

  // member: s_axis_5
  {
    out << "s_axis_5: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_5, out);
    out << ", ";
  }

  // member: s_axis_6
  {
    out << "s_axis_6: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_6, out);
    out << ", ";
  }

  // member: s_axis_7
  {
    out << "s_axis_7: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_7, out);
    out << ", ";
  }

  // member: s_axis_8
  {
    out << "s_axis_8: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_8, out);
    out << ", ";
  }

  // member: new_point_x
  {
    out << "new_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_x, out);
    out << ", ";
  }

  // member: new_point_y
  {
    out << "new_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_y, out);
    out << ", ";
  }

  // member: new_point_z
  {
    out << "new_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_z, out);
    out << ", ";
  }

  // member: fom_field_calibration
  {
    out << "fom_field_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_field_calibration, out);
    out << ", ";
  }

  // member: coverage
  {
    out << "coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FieldCalibration & msg,
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

  // member: points_used_in_estimation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "points_used_in_estimation: ";
    rosidl_generator_traits::value_to_yaml(msg.points_used_in_estimation, out);
    out << "\n";
  }

  // member: hard_iron_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_x, out);
    out << "\n";
  }

  // member: hard_iron_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_y, out);
    out << "\n";
  }

  // member: hard_iron_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_iron_z: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_iron_z, out);
    out << "\n";
  }

  // member: s_axis_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_0: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_0, out);
    out << "\n";
  }

  // member: s_axis_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_1, out);
    out << "\n";
  }

  // member: s_axis_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_2, out);
    out << "\n";
  }

  // member: s_axis_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_3, out);
    out << "\n";
  }

  // member: s_axis_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_4: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_4, out);
    out << "\n";
  }

  // member: s_axis_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_5: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_5, out);
    out << "\n";
  }

  // member: s_axis_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_6: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_6, out);
    out << "\n";
  }

  // member: s_axis_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_7: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_7, out);
    out << "\n";
  }

  // member: s_axis_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_axis_8: ";
    rosidl_generator_traits::value_to_yaml(msg.s_axis_8, out);
    out << "\n";
  }

  // member: new_point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_x, out);
    out << "\n";
  }

  // member: new_point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_y, out);
    out << "\n";
  }

  // member: new_point_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.new_point_z, out);
    out << "\n";
  }

  // member: fom_field_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_field_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_field_calibration, out);
    out << "\n";
  }

  // member: coverage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FieldCalibration & msg, bool use_flow_style = false)
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
  const interfaces::msg::FieldCalibration & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::FieldCalibration & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::FieldCalibration>()
{
  return "interfaces::msg::FieldCalibration";
}

template<>
inline const char * name<interfaces::msg::FieldCalibration>()
{
  return "interfaces/msg/FieldCalibration";
}

template<>
struct has_fixed_size<interfaces::msg::FieldCalibration>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::FieldCalibration>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::FieldCalibration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__TRAITS_HPP_
