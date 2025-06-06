// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/INS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__INS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__INS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const INS & msg,
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

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: operation_mode
  {
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << ", ";
  }

  // member: fom_ahrs
  {
    out << "fom_ahrs: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_ahrs, out);
    out << ", ";
  }

  // member: fom_fc1
  {
    out << "fom_fc1: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_fc1, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: quaternion_w
  {
    out << "quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_w, out);
    out << ", ";
  }

  // member: quaternion_x
  {
    out << "quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_x, out);
    out << ", ";
  }

  // member: quaternion_y
  {
    out << "quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_y, out);
    out << ", ";
  }

  // member: quaternion_z
  {
    out << "quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_z, out);
    out << ", ";
  }

  // member: rotation_matrix_0
  {
    out << "rotation_matrix_0: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_0, out);
    out << ", ";
  }

  // member: rotation_matrix_1
  {
    out << "rotation_matrix_1: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_1, out);
    out << ", ";
  }

  // member: rotation_matrix_2
  {
    out << "rotation_matrix_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_2, out);
    out << ", ";
  }

  // member: rotation_matrix_3
  {
    out << "rotation_matrix_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_3, out);
    out << ", ";
  }

  // member: rotation_matrix_4
  {
    out << "rotation_matrix_4: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_4, out);
    out << ", ";
  }

  // member: rotation_matrix_5
  {
    out << "rotation_matrix_5: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_5, out);
    out << ", ";
  }

  // member: rotation_matrix_6
  {
    out << "rotation_matrix_6: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_6, out);
    out << ", ";
  }

  // member: rotation_matrix_7
  {
    out << "rotation_matrix_7: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_7, out);
    out << ", ";
  }

  // member: rotation_matrix_8
  {
    out << "rotation_matrix_8: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_8, out);
    out << ", ";
  }

  // member: declination
  {
    out << "declination: ";
    rosidl_generator_traits::value_to_yaml(msg.declination, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: fom_ins
  {
    out << "fom_ins: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_ins, out);
    out << ", ";
  }

  // member: lat_long_is_valid
  {
    out << "lat_long_is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_long_is_valid, out);
    out << ", ";
  }

  // member: course_over_ground
  {
    out << "course_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.course_over_ground, out);
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

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: position_frame_x
  {
    out << "position_frame_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_x, out);
    out << ", ";
  }

  // member: position_frame_y
  {
    out << "position_frame_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_y, out);
    out << ", ";
  }

  // member: position_frame_z
  {
    out << "position_frame_z: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_z, out);
    out << ", ";
  }

  // member: velocity_ned_x
  {
    out << "velocity_ned_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_x, out);
    out << ", ";
  }

  // member: velocity_ned_y
  {
    out << "velocity_ned_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_y, out);
    out << ", ";
  }

  // member: velocity_ned_z
  {
    out << "velocity_ned_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_z, out);
    out << ", ";
  }

  // member: velocity_nucleus_x
  {
    out << "velocity_nucleus_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_x, out);
    out << ", ";
  }

  // member: velocity_nucleus_y
  {
    out << "velocity_nucleus_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_y, out);
    out << ", ";
  }

  // member: velocity_nucleus_z
  {
    out << "velocity_nucleus_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_z, out);
    out << ", ";
  }

  // member: speed_over_ground
  {
    out << "speed_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_over_ground, out);
    out << ", ";
  }

  // member: turn_rate_x
  {
    out << "turn_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_x, out);
    out << ", ";
  }

  // member: turn_rate_y
  {
    out << "turn_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_y, out);
    out << ", ";
  }

  // member: turn_rate_z
  {
    out << "turn_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INS & msg,
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

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: operation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << "\n";
  }

  // member: fom_ahrs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_ahrs: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_ahrs, out);
    out << "\n";
  }

  // member: fom_fc1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_fc1: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_fc1, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: quaternion_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_w, out);
    out << "\n";
  }

  // member: quaternion_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_x, out);
    out << "\n";
  }

  // member: quaternion_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_y, out);
    out << "\n";
  }

  // member: quaternion_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.quaternion_z, out);
    out << "\n";
  }

  // member: rotation_matrix_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_0: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_0, out);
    out << "\n";
  }

  // member: rotation_matrix_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_1: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_1, out);
    out << "\n";
  }

  // member: rotation_matrix_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_2, out);
    out << "\n";
  }

  // member: rotation_matrix_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_3, out);
    out << "\n";
  }

  // member: rotation_matrix_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_4: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_4, out);
    out << "\n";
  }

  // member: rotation_matrix_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_5: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_5, out);
    out << "\n";
  }

  // member: rotation_matrix_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_6: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_6, out);
    out << "\n";
  }

  // member: rotation_matrix_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_7: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_7, out);
    out << "\n";
  }

  // member: rotation_matrix_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_matrix_8: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_matrix_8, out);
    out << "\n";
  }

  // member: declination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "declination: ";
    rosidl_generator_traits::value_to_yaml(msg.declination, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: fom_ins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_ins: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_ins, out);
    out << "\n";
  }

  // member: lat_long_is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_long_is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_long_is_valid, out);
    out << "\n";
  }

  // member: course_over_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "course_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.course_over_ground, out);
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

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: position_frame_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_frame_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_x, out);
    out << "\n";
  }

  // member: position_frame_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_frame_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_y, out);
    out << "\n";
  }

  // member: position_frame_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_frame_z: ";
    rosidl_generator_traits::value_to_yaml(msg.position_frame_z, out);
    out << "\n";
  }

  // member: velocity_ned_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ned_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_x, out);
    out << "\n";
  }

  // member: velocity_ned_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ned_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_y, out);
    out << "\n";
  }

  // member: velocity_ned_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ned_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ned_z, out);
    out << "\n";
  }

  // member: velocity_nucleus_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_nucleus_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_x, out);
    out << "\n";
  }

  // member: velocity_nucleus_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_nucleus_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_y, out);
    out << "\n";
  }

  // member: velocity_nucleus_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_nucleus_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_nucleus_z, out);
    out << "\n";
  }

  // member: speed_over_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_over_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_over_ground, out);
    out << "\n";
  }

  // member: turn_rate_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_x, out);
    out << "\n";
  }

  // member: turn_rate_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_y, out);
    out << "\n";
  }

  // member: turn_rate_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_rate_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INS & msg, bool use_flow_style = false)
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
  const interfaces::msg::INS & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::INS & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::INS>()
{
  return "interfaces::msg::INS";
}

template<>
inline const char * name<interfaces::msg::INS>()
{
  return "interfaces/msg/INS";
}

template<>
struct has_fixed_size<interfaces::msg::INS>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::INS>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::INS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__INS__TRAITS_HPP_
