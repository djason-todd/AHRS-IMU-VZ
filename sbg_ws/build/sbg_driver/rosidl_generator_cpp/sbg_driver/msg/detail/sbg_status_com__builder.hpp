// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_status_com__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgStatusCom_can_status
{
public:
  explicit Init_SbgStatusCom_can_status(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgStatusCom can_status(::sbg_driver::msg::SbgStatusCom::_can_status_type arg)
  {
    msg_.can_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_can_tx
{
public:
  explicit Init_SbgStatusCom_can_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_can_status can_tx(::sbg_driver::msg::SbgStatusCom::_can_tx_type arg)
  {
    msg_.can_tx = std::move(arg);
    return Init_SbgStatusCom_can_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_can_rx
{
public:
  explicit Init_SbgStatusCom_can_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_can_tx can_rx(::sbg_driver::msg::SbgStatusCom::_can_rx_type arg)
  {
    msg_.can_rx = std::move(arg);
    return Init_SbgStatusCom_can_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_4_tx
{
public:
  explicit Init_SbgStatusCom_eth_4_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_can_rx eth_4_tx(::sbg_driver::msg::SbgStatusCom::_eth_4_tx_type arg)
  {
    msg_.eth_4_tx = std::move(arg);
    return Init_SbgStatusCom_can_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_4_rx
{
public:
  explicit Init_SbgStatusCom_eth_4_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_4_tx eth_4_rx(::sbg_driver::msg::SbgStatusCom::_eth_4_rx_type arg)
  {
    msg_.eth_4_rx = std::move(arg);
    return Init_SbgStatusCom_eth_4_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_3_tx
{
public:
  explicit Init_SbgStatusCom_eth_3_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_4_rx eth_3_tx(::sbg_driver::msg::SbgStatusCom::_eth_3_tx_type arg)
  {
    msg_.eth_3_tx = std::move(arg);
    return Init_SbgStatusCom_eth_4_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_3_rx
{
public:
  explicit Init_SbgStatusCom_eth_3_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_3_tx eth_3_rx(::sbg_driver::msg::SbgStatusCom::_eth_3_rx_type arg)
  {
    msg_.eth_3_rx = std::move(arg);
    return Init_SbgStatusCom_eth_3_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_2_tx
{
public:
  explicit Init_SbgStatusCom_eth_2_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_3_rx eth_2_tx(::sbg_driver::msg::SbgStatusCom::_eth_2_tx_type arg)
  {
    msg_.eth_2_tx = std::move(arg);
    return Init_SbgStatusCom_eth_3_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_2_rx
{
public:
  explicit Init_SbgStatusCom_eth_2_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_2_tx eth_2_rx(::sbg_driver::msg::SbgStatusCom::_eth_2_rx_type arg)
  {
    msg_.eth_2_rx = std::move(arg);
    return Init_SbgStatusCom_eth_2_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_1_tx
{
public:
  explicit Init_SbgStatusCom_eth_1_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_2_rx eth_1_tx(::sbg_driver::msg::SbgStatusCom::_eth_1_tx_type arg)
  {
    msg_.eth_1_tx = std::move(arg);
    return Init_SbgStatusCom_eth_2_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_1_rx
{
public:
  explicit Init_SbgStatusCom_eth_1_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_1_tx eth_1_rx(::sbg_driver::msg::SbgStatusCom::_eth_1_rx_type arg)
  {
    msg_.eth_1_rx = std::move(arg);
    return Init_SbgStatusCom_eth_1_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_0_tx
{
public:
  explicit Init_SbgStatusCom_eth_0_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_1_rx eth_0_tx(::sbg_driver::msg::SbgStatusCom::_eth_0_tx_type arg)
  {
    msg_.eth_0_tx = std::move(arg);
    return Init_SbgStatusCom_eth_1_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_0_rx
{
public:
  explicit Init_SbgStatusCom_eth_0_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_0_tx eth_0_rx(::sbg_driver::msg::SbgStatusCom::_eth_0_rx_type arg)
  {
    msg_.eth_0_rx = std::move(arg);
    return Init_SbgStatusCom_eth_0_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_4
{
public:
  explicit Init_SbgStatusCom_eth_4(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_0_rx eth_4(::sbg_driver::msg::SbgStatusCom::_eth_4_type arg)
  {
    msg_.eth_4 = std::move(arg);
    return Init_SbgStatusCom_eth_0_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_3
{
public:
  explicit Init_SbgStatusCom_eth_3(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_4 eth_3(::sbg_driver::msg::SbgStatusCom::_eth_3_type arg)
  {
    msg_.eth_3 = std::move(arg);
    return Init_SbgStatusCom_eth_4(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_2
{
public:
  explicit Init_SbgStatusCom_eth_2(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_3 eth_2(::sbg_driver::msg::SbgStatusCom::_eth_2_type arg)
  {
    msg_.eth_2 = std::move(arg);
    return Init_SbgStatusCom_eth_3(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_1
{
public:
  explicit Init_SbgStatusCom_eth_1(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_2 eth_1(::sbg_driver::msg::SbgStatusCom::_eth_1_type arg)
  {
    msg_.eth_1 = std::move(arg);
    return Init_SbgStatusCom_eth_2(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_eth_0
{
public:
  explicit Init_SbgStatusCom_eth_0(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_1 eth_0(::sbg_driver::msg::SbgStatusCom::_eth_0_type arg)
  {
    msg_.eth_0 = std::move(arg);
    return Init_SbgStatusCom_eth_1(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_e_tx
{
public:
  explicit Init_SbgStatusCom_port_e_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_eth_0 port_e_tx(::sbg_driver::msg::SbgStatusCom::_port_e_tx_type arg)
  {
    msg_.port_e_tx = std::move(arg);
    return Init_SbgStatusCom_eth_0(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_e_rx
{
public:
  explicit Init_SbgStatusCom_port_e_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_e_tx port_e_rx(::sbg_driver::msg::SbgStatusCom::_port_e_rx_type arg)
  {
    msg_.port_e_rx = std::move(arg);
    return Init_SbgStatusCom_port_e_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_d_tx
{
public:
  explicit Init_SbgStatusCom_port_d_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_e_rx port_d_tx(::sbg_driver::msg::SbgStatusCom::_port_d_tx_type arg)
  {
    msg_.port_d_tx = std::move(arg);
    return Init_SbgStatusCom_port_e_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_d_rx
{
public:
  explicit Init_SbgStatusCom_port_d_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_d_tx port_d_rx(::sbg_driver::msg::SbgStatusCom::_port_d_rx_type arg)
  {
    msg_.port_d_rx = std::move(arg);
    return Init_SbgStatusCom_port_d_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_c_tx
{
public:
  explicit Init_SbgStatusCom_port_c_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_d_rx port_c_tx(::sbg_driver::msg::SbgStatusCom::_port_c_tx_type arg)
  {
    msg_.port_c_tx = std::move(arg);
    return Init_SbgStatusCom_port_d_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_c_rx
{
public:
  explicit Init_SbgStatusCom_port_c_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_c_tx port_c_rx(::sbg_driver::msg::SbgStatusCom::_port_c_rx_type arg)
  {
    msg_.port_c_rx = std::move(arg);
    return Init_SbgStatusCom_port_c_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_b_tx
{
public:
  explicit Init_SbgStatusCom_port_b_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_c_rx port_b_tx(::sbg_driver::msg::SbgStatusCom::_port_b_tx_type arg)
  {
    msg_.port_b_tx = std::move(arg);
    return Init_SbgStatusCom_port_c_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_b_rx
{
public:
  explicit Init_SbgStatusCom_port_b_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_b_tx port_b_rx(::sbg_driver::msg::SbgStatusCom::_port_b_rx_type arg)
  {
    msg_.port_b_rx = std::move(arg);
    return Init_SbgStatusCom_port_b_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_a_tx
{
public:
  explicit Init_SbgStatusCom_port_a_tx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_b_rx port_a_tx(::sbg_driver::msg::SbgStatusCom::_port_a_tx_type arg)
  {
    msg_.port_a_tx = std::move(arg);
    return Init_SbgStatusCom_port_b_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_a_rx
{
public:
  explicit Init_SbgStatusCom_port_a_rx(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_a_tx port_a_rx(::sbg_driver::msg::SbgStatusCom::_port_a_rx_type arg)
  {
    msg_.port_a_rx = std::move(arg);
    return Init_SbgStatusCom_port_a_tx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_e
{
public:
  explicit Init_SbgStatusCom_port_e(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_a_rx port_e(::sbg_driver::msg::SbgStatusCom::_port_e_type arg)
  {
    msg_.port_e = std::move(arg);
    return Init_SbgStatusCom_port_a_rx(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_d
{
public:
  explicit Init_SbgStatusCom_port_d(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_e port_d(::sbg_driver::msg::SbgStatusCom::_port_d_type arg)
  {
    msg_.port_d = std::move(arg);
    return Init_SbgStatusCom_port_e(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_c
{
public:
  explicit Init_SbgStatusCom_port_c(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_d port_c(::sbg_driver::msg::SbgStatusCom::_port_c_type arg)
  {
    msg_.port_c = std::move(arg);
    return Init_SbgStatusCom_port_d(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_b
{
public:
  explicit Init_SbgStatusCom_port_b(::sbg_driver::msg::SbgStatusCom & msg)
  : msg_(msg)
  {}
  Init_SbgStatusCom_port_c port_b(::sbg_driver::msg::SbgStatusCom::_port_b_type arg)
  {
    msg_.port_b = std::move(arg);
    return Init_SbgStatusCom_port_c(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

class Init_SbgStatusCom_port_a
{
public:
  Init_SbgStatusCom_port_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgStatusCom_port_b port_a(::sbg_driver::msg::SbgStatusCom::_port_a_type arg)
  {
    msg_.port_a = std::move(arg);
    return Init_SbgStatusCom_port_b(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusCom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgStatusCom>()
{
  return sbg_driver::msg::builder::Init_SbgStatusCom_port_a();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__BUILDER_HPP_
