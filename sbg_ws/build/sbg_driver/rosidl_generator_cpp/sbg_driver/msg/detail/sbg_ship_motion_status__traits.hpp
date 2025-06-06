// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgShipMotionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: heave_valid
  {
    out << "heave_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_valid, out);
    out << ", ";
  }

  // member: heave_vel_aided
  {
    out << "heave_vel_aided: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_vel_aided, out);
    out << ", ";
  }

  // member: surge_sway_included
  {
    out << "surge_sway_included: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_sway_included, out);
    out << ", ";
  }

  // member: period_available
  {
    out << "period_available: ";
    rosidl_generator_traits::value_to_yaml(msg.period_available, out);
    out << ", ";
  }

  // member: period_valid
  {
    out << "period_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.period_valid, out);
    out << ", ";
  }

  // member: swell_mode
  {
    out << "swell_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.swell_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgShipMotionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heave_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heave_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_valid, out);
    out << "\n";
  }

  // member: heave_vel_aided
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heave_vel_aided: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_vel_aided, out);
    out << "\n";
  }

  // member: surge_sway_included
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge_sway_included: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_sway_included, out);
    out << "\n";
  }

  // member: period_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_available: ";
    rosidl_generator_traits::value_to_yaml(msg.period_available, out);
    out << "\n";
  }

  // member: period_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.period_valid, out);
    out << "\n";
  }

  // member: swell_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swell_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.swell_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgShipMotionStatus & msg, bool use_flow_style = false)
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

}  // namespace sbg_driver

namespace rosidl_generator_traits
{

[[deprecated("use sbg_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sbg_driver::msg::SbgShipMotionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgShipMotionStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgShipMotionStatus>()
{
  return "sbg_driver::msg::SbgShipMotionStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgShipMotionStatus>()
{
  return "sbg_driver/msg/SbgShipMotionStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgShipMotionStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgShipMotionStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgShipMotionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__TRAITS_HPP_
