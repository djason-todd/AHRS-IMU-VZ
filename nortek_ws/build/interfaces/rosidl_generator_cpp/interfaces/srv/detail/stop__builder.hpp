// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/stop__struct.hpp"
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
auto build<::interfaces::srv::Stop_Request>()
{
  return ::interfaces::srv::Stop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Stop_Response_reply
{
public:
  Init_Stop_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Stop_Response reply(::interfaces::srv::Stop_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Stop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Stop_Response>()
{
  return interfaces::srv::builder::Init_Stop_Response_reply();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
