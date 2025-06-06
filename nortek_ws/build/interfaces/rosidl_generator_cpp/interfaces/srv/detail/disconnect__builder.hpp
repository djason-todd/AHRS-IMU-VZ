// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Disconnect.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DISCONNECT__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__DISCONNECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/disconnect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Disconnect_Request>()
{
  return ::interfaces::srv::Disconnect_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Disconnect_Response_status
{
public:
  Init_Disconnect_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Disconnect_Response status(::interfaces::srv::Disconnect_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Disconnect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Disconnect_Response>()
{
  return interfaces::srv::builder::Init_Disconnect_Response_status();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__DISCONNECT__BUILDER_HPP_
