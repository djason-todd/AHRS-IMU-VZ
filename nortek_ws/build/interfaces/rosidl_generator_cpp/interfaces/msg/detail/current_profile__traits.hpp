// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CURRENT_PROFILE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/current_profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentProfile & msg,
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

  // member: sound_velocity
  {
    out << "sound_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_velocity, out);
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

  // member: cell_size
  {
    out << "cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_size, out);
    out << ", ";
  }

  // member: blanking
  {
    out << "blanking: ";
    rosidl_generator_traits::value_to_yaml(msg.blanking, out);
    out << ", ";
  }

  // member: number_of_cells
  {
    out << "number_of_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_cells, out);
    out << ", ";
  }

  // member: ambiguity_velocity
  {
    out << "ambiguity_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ambiguity_velocity, out);
    out << ", ";
  }

  // member: velocity_data
  {
    if (msg.velocity_data.size() == 0) {
      out << "velocity_data: []";
    } else {
      out << "velocity_data: [";
      size_t pending_items = msg.velocity_data.size();
      for (auto item : msg.velocity_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: amplitude_data
  {
    if (msg.amplitude_data.size() == 0) {
      out << "amplitude_data: []";
    } else {
      out << "amplitude_data: [";
      size_t pending_items = msg.amplitude_data.size();
      for (auto item : msg.amplitude_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: correlation_data
  {
    if (msg.correlation_data.size() == 0) {
      out << "correlation_data: []";
    } else {
      out << "correlation_data: [";
      size_t pending_items = msg.correlation_data.size();
      for (auto item : msg.correlation_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentProfile & msg,
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

  // member: sound_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_velocity, out);
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

  // member: cell_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_size, out);
    out << "\n";
  }

  // member: blanking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blanking: ";
    rosidl_generator_traits::value_to_yaml(msg.blanking, out);
    out << "\n";
  }

  // member: number_of_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_cells, out);
    out << "\n";
  }

  // member: ambiguity_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambiguity_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ambiguity_velocity, out);
    out << "\n";
  }

  // member: velocity_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_data.size() == 0) {
      out << "velocity_data: []\n";
    } else {
      out << "velocity_data:\n";
      for (auto item : msg.velocity_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: amplitude_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.amplitude_data.size() == 0) {
      out << "amplitude_data: []\n";
    } else {
      out << "amplitude_data:\n";
      for (auto item : msg.amplitude_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: correlation_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.correlation_data.size() == 0) {
      out << "correlation_data: []\n";
    } else {
      out << "correlation_data:\n";
      for (auto item : msg.correlation_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentProfile & msg, bool use_flow_style = false)
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
  const interfaces::msg::CurrentProfile & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::CurrentProfile & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::CurrentProfile>()
{
  return "interfaces::msg::CurrentProfile";
}

template<>
inline const char * name<interfaces::msg::CurrentProfile>()
{
  return "interfaces/msg/CurrentProfile";
}

template<>
struct has_fixed_size<interfaces::msg::CurrentProfile>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::CurrentProfile>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::CurrentProfile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__CURRENT_PROFILE__TRAITS_HPP_
