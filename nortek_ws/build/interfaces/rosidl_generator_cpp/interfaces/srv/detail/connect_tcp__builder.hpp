// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ConnectTcp.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONNECT_TCP__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__CONNECT_TCP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/connect_tcp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectTcp_Request_password
{
public:
  explicit Init_ConnectTcp_Request_password(::interfaces::srv::ConnectTcp_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ConnectTcp_Request password(::interfaces::srv::ConnectTcp_Request::_password_type arg)
  {
    msg_.password = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConnectTcp_Request msg_;
};

class Init_ConnectTcp_Request_host
{
public:
  Init_ConnectTcp_Request_host()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectTcp_Request_password host(::interfaces::srv::ConnectTcp_Request::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_ConnectTcp_Request_password(msg_);
  }

private:
  ::interfaces::srv::ConnectTcp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConnectTcp_Request>()
{
  return interfaces::srv::builder::Init_ConnectTcp_Request_host();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectTcp_Response_status
{
public:
  Init_ConnectTcp_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ConnectTcp_Response status(::interfaces::srv::ConnectTcp_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConnectTcp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConnectTcp_Response>()
{
  return interfaces::srv::builder::Init_ConnectTcp_Response_status();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONNECT_TCP__BUILDER_HPP_
