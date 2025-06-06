// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/BottomTrack.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__BOTTOM_TRACK__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__BOTTOM_TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/bottom_track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BottomTrack & msg,
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

  // member: beam_1_velocity_valid
  {
    out << "beam_1_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_velocity_valid, out);
    out << ", ";
  }

  // member: beam_2_velocity_valid
  {
    out << "beam_2_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_velocity_valid, out);
    out << ", ";
  }

  // member: beam_3_velocity_valid
  {
    out << "beam_3_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_velocity_valid, out);
    out << ", ";
  }

  // member: beam_1_distance_valid
  {
    out << "beam_1_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_distance_valid, out);
    out << ", ";
  }

  // member: beam_2_distance_valid
  {
    out << "beam_2_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_distance_valid, out);
    out << ", ";
  }

  // member: beam_3_distance_valid
  {
    out << "beam_3_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_distance_valid, out);
    out << ", ";
  }

  // member: beam_1_fom_valid
  {
    out << "beam_1_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_fom_valid, out);
    out << ", ";
  }

  // member: beam_2_fom_valid
  {
    out << "beam_2_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_fom_valid, out);
    out << ", ";
  }

  // member: beam_3_fom_valid
  {
    out << "beam_3_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_fom_valid, out);
    out << ", ";
  }

  // member: x_velocity_valid
  {
    out << "x_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.x_velocity_valid, out);
    out << ", ";
  }

  // member: y_velocity_valid
  {
    out << "y_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.y_velocity_valid, out);
    out << ", ";
  }

  // member: z_velocity_valid
  {
    out << "z_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_velocity_valid, out);
    out << ", ";
  }

  // member: x_fom_valid
  {
    out << "x_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.x_fom_valid, out);
    out << ", ";
  }

  // member: y_fom_valid
  {
    out << "y_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.y_fom_valid, out);
    out << ", ";
  }

  // member: z_fom_valid
  {
    out << "z_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_fom_valid, out);
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

  // member: velocity_beam_1
  {
    out << "velocity_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_1, out);
    out << ", ";
  }

  // member: velocity_beam_2
  {
    out << "velocity_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_2, out);
    out << ", ";
  }

  // member: velocity_beam_3
  {
    out << "velocity_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_3, out);
    out << ", ";
  }

  // member: distance_beam_1
  {
    out << "distance_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_1, out);
    out << ", ";
  }

  // member: distance_beam_2
  {
    out << "distance_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_2, out);
    out << ", ";
  }

  // member: distance_beam_3
  {
    out << "distance_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_3, out);
    out << ", ";
  }

  // member: fom_beam_1
  {
    out << "fom_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_1, out);
    out << ", ";
  }

  // member: fom_beam_2
  {
    out << "fom_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_2, out);
    out << ", ";
  }

  // member: fom_beam_3
  {
    out << "fom_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_3, out);
    out << ", ";
  }

  // member: dt_beam_1
  {
    out << "dt_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_1, out);
    out << ", ";
  }

  // member: dt_beam_2
  {
    out << "dt_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_2, out);
    out << ", ";
  }

  // member: dt_beam_3
  {
    out << "dt_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_3, out);
    out << ", ";
  }

  // member: time_vel_beam_1
  {
    out << "time_vel_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_1, out);
    out << ", ";
  }

  // member: time_vel_beam_2
  {
    out << "time_vel_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_2, out);
    out << ", ";
  }

  // member: time_vel_beam_3
  {
    out << "time_vel_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_3, out);
    out << ", ";
  }

  // member: velocity_x
  {
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << ", ";
  }

  // member: velocity_y
  {
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << ", ";
  }

  // member: velocity_z
  {
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << ", ";
  }

  // member: fom_x
  {
    out << "fom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_x, out);
    out << ", ";
  }

  // member: fom_y
  {
    out << "fom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_y, out);
    out << ", ";
  }

  // member: fom_z
  {
    out << "fom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_z, out);
    out << ", ";
  }

  // member: dt_xyz
  {
    out << "dt_xyz: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_xyz, out);
    out << ", ";
  }

  // member: time_vel_xyz
  {
    out << "time_vel_xyz: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_xyz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BottomTrack & msg,
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

  // member: beam_1_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_1_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_velocity_valid, out);
    out << "\n";
  }

  // member: beam_2_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_2_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_velocity_valid, out);
    out << "\n";
  }

  // member: beam_3_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_3_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_velocity_valid, out);
    out << "\n";
  }

  // member: beam_1_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_1_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_distance_valid, out);
    out << "\n";
  }

  // member: beam_2_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_2_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_distance_valid, out);
    out << "\n";
  }

  // member: beam_3_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_3_distance_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_distance_valid, out);
    out << "\n";
  }

  // member: beam_1_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_1_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_1_fom_valid, out);
    out << "\n";
  }

  // member: beam_2_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_2_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_2_fom_valid, out);
    out << "\n";
  }

  // member: beam_3_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_3_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_3_fom_valid, out);
    out << "\n";
  }

  // member: x_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.x_velocity_valid, out);
    out << "\n";
  }

  // member: y_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.y_velocity_valid, out);
    out << "\n";
  }

  // member: z_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_velocity_valid, out);
    out << "\n";
  }

  // member: x_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.x_fom_valid, out);
    out << "\n";
  }

  // member: y_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.y_fom_valid, out);
    out << "\n";
  }

  // member: z_fom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_fom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_fom_valid, out);
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

  // member: velocity_beam_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_1, out);
    out << "\n";
  }

  // member: velocity_beam_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_2, out);
    out << "\n";
  }

  // member: velocity_beam_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_beam_3, out);
    out << "\n";
  }

  // member: distance_beam_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_1, out);
    out << "\n";
  }

  // member: distance_beam_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_2, out);
    out << "\n";
  }

  // member: distance_beam_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_beam_3, out);
    out << "\n";
  }

  // member: fom_beam_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_1, out);
    out << "\n";
  }

  // member: fom_beam_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_2, out);
    out << "\n";
  }

  // member: fom_beam_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_beam_3, out);
    out << "\n";
  }

  // member: dt_beam_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_1, out);
    out << "\n";
  }

  // member: dt_beam_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_2, out);
    out << "\n";
  }

  // member: dt_beam_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_beam_3, out);
    out << "\n";
  }

  // member: time_vel_beam_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_vel_beam_1: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_1, out);
    out << "\n";
  }

  // member: time_vel_beam_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_vel_beam_2: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_2, out);
    out << "\n";
  }

  // member: time_vel_beam_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_vel_beam_3: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_beam_3, out);
    out << "\n";
  }

  // member: velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << "\n";
  }

  // member: velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << "\n";
  }

  // member: velocity_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << "\n";
  }

  // member: fom_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_x, out);
    out << "\n";
  }

  // member: fom_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_y, out);
    out << "\n";
  }

  // member: fom_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fom_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fom_z, out);
    out << "\n";
  }

  // member: dt_xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_xyz: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_xyz, out);
    out << "\n";
  }

  // member: time_vel_xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_vel_xyz: ";
    rosidl_generator_traits::value_to_yaml(msg.time_vel_xyz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BottomTrack & msg, bool use_flow_style = false)
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
  const interfaces::msg::BottomTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::BottomTrack & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::BottomTrack>()
{
  return "interfaces::msg::BottomTrack";
}

template<>
inline const char * name<interfaces::msg::BottomTrack>()
{
  return "interfaces/msg/BottomTrack";
}

template<>
struct has_fixed_size<interfaces::msg::BottomTrack>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::msg::BottomTrack>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::msg::BottomTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__BOTTOM_TRACK__TRAITS_HPP_
