// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ConnectSerial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONNECT_SERIAL__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__CONNECT_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/connect_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectSerial_Request_serial_port
{
public:
  Init_ConnectSerial_Request_serial_port()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ConnectSerial_Request serial_port(::interfaces::srv::ConnectSerial_Request::_serial_port_type arg)
  {
    msg_.serial_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConnectSerial_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConnectSerial_Request>()
{
  return interfaces::srv::builder::Init_ConnectSerial_Request_serial_port();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectSerial_Response_status
{
public:
  Init_ConnectSerial_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ConnectSerial_Response status(::interfaces::srv::ConnectSerial_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ConnectSerial_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ConnectSerial_Response>()
{
  return interfaces::srv::builder::Init_ConnectSerial_Response_status();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONNECT_SERIAL__BUILDER_HPP_
