// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Request_command
{
public:
  Init_Command_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Command_Request command(::interfaces::srv::Command_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Command_Request>()
{
  return interfaces::srv::builder::Init_Command_Request_command();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Response_reply
{
public:
  Init_Command_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Command_Response reply(::interfaces::srv::Command_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Command_Response>()
{
  return interfaces::srv::builder::Init_Command_Response_reply();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
