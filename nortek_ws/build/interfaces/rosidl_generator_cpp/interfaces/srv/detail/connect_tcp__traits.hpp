// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/ConnectTcp.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONNECT_TCP__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__CONNECT_TCP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/connect_tcp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConnectTcp_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectTcp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectTcp_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::ConnectTcp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ConnectTcp_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ConnectTcp_Request>()
{
  return "interfaces::srv::ConnectTcp_Request";
}

template<>
inline const char * name<interfaces::srv::ConnectTcp_Request>()
{
  return "interfaces/srv/ConnectTcp_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ConnectTcp_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ConnectTcp_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ConnectTcp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConnectTcp_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectTcp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectTcp_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::ConnectTcp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ConnectTcp_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ConnectTcp_Response>()
{
  return "interfaces::srv::ConnectTcp_Response";
}

template<>
inline const char * name<interfaces::srv::ConnectTcp_Response>()
{
  return "interfaces/srv/ConnectTcp_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ConnectTcp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::ConnectTcp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::ConnectTcp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ConnectTcp>()
{
  return "interfaces::srv::ConnectTcp";
}

template<>
inline const char * name<interfaces::srv::ConnectTcp>()
{
  return "interfaces/srv/ConnectTcp";
}

template<>
struct has_fixed_size<interfaces::srv::ConnectTcp>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ConnectTcp_Request>::value &&
    has_fixed_size<interfaces::srv::ConnectTcp_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ConnectTcp>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ConnectTcp_Request>::value &&
    has_bounded_size<interfaces::srv::ConnectTcp_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ConnectTcp>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ConnectTcp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ConnectTcp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__CONNECT_TCP__TRAITS_HPP_
