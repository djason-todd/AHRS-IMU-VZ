// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgStatusCom __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgStatusCom __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgStatusCom_
{
  using Type = SbgStatusCom_<ContainerAllocator>;

  explicit SbgStatusCom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_a = false;
      this->port_b = false;
      this->port_c = false;
      this->port_d = false;
      this->port_e = false;
      this->port_a_rx = false;
      this->port_a_tx = false;
      this->port_b_rx = false;
      this->port_b_tx = false;
      this->port_c_rx = false;
      this->port_c_tx = false;
      this->port_d_rx = false;
      this->port_d_tx = false;
      this->port_e_rx = false;
      this->port_e_tx = false;
      this->eth_0 = false;
      this->eth_1 = false;
      this->eth_2 = false;
      this->eth_3 = false;
      this->eth_4 = false;
      this->eth_0_rx = false;
      this->eth_0_tx = false;
      this->eth_1_rx = false;
      this->eth_1_tx = false;
      this->eth_2_rx = false;
      this->eth_2_tx = false;
      this->eth_3_rx = false;
      this->eth_3_tx = false;
      this->eth_4_rx = false;
      this->eth_4_tx = false;
      this->can_rx = false;
      this->can_tx = false;
      this->can_status = 0;
    }
  }

  explicit SbgStatusCom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_a = false;
      this->port_b = false;
      this->port_c = false;
      this->port_d = false;
      this->port_e = false;
      this->port_a_rx = false;
      this->port_a_tx = false;
      this->port_b_rx = false;
      this->port_b_tx = false;
      this->port_c_rx = false;
      this->port_c_tx = false;
      this->port_d_rx = false;
      this->port_d_tx = false;
      this->port_e_rx = false;
      this->port_e_tx = false;
      this->eth_0 = false;
      this->eth_1 = false;
      this->eth_2 = false;
      this->eth_3 = false;
      this->eth_4 = false;
      this->eth_0_rx = false;
      this->eth_0_tx = false;
      this->eth_1_rx = false;
      this->eth_1_tx = false;
      this->eth_2_rx = false;
      this->eth_2_tx = false;
      this->eth_3_rx = false;
      this->eth_3_tx = false;
      this->eth_4_rx = false;
      this->eth_4_tx = false;
      this->can_rx = false;
      this->can_tx = false;
      this->can_status = 0;
    }
  }

  // field types and members
  using _port_a_type =
    bool;
  _port_a_type port_a;
  using _port_b_type =
    bool;
  _port_b_type port_b;
  using _port_c_type =
    bool;
  _port_c_type port_c;
  using _port_d_type =
    bool;
  _port_d_type port_d;
  using _port_e_type =
    bool;
  _port_e_type port_e;
  using _port_a_rx_type =
    bool;
  _port_a_rx_type port_a_rx;
  using _port_a_tx_type =
    bool;
  _port_a_tx_type port_a_tx;
  using _port_b_rx_type =
    bool;
  _port_b_rx_type port_b_rx;
  using _port_b_tx_type =
    bool;
  _port_b_tx_type port_b_tx;
  using _port_c_rx_type =
    bool;
  _port_c_rx_type port_c_rx;
  using _port_c_tx_type =
    bool;
  _port_c_tx_type port_c_tx;
  using _port_d_rx_type =
    bool;
  _port_d_rx_type port_d_rx;
  using _port_d_tx_type =
    bool;
  _port_d_tx_type port_d_tx;
  using _port_e_rx_type =
    bool;
  _port_e_rx_type port_e_rx;
  using _port_e_tx_type =
    bool;
  _port_e_tx_type port_e_tx;
  using _eth_0_type =
    bool;
  _eth_0_type eth_0;
  using _eth_1_type =
    bool;
  _eth_1_type eth_1;
  using _eth_2_type =
    bool;
  _eth_2_type eth_2;
  using _eth_3_type =
    bool;
  _eth_3_type eth_3;
  using _eth_4_type =
    bool;
  _eth_4_type eth_4;
  using _eth_0_rx_type =
    bool;
  _eth_0_rx_type eth_0_rx;
  using _eth_0_tx_type =
    bool;
  _eth_0_tx_type eth_0_tx;
  using _eth_1_rx_type =
    bool;
  _eth_1_rx_type eth_1_rx;
  using _eth_1_tx_type =
    bool;
  _eth_1_tx_type eth_1_tx;
  using _eth_2_rx_type =
    bool;
  _eth_2_rx_type eth_2_rx;
  using _eth_2_tx_type =
    bool;
  _eth_2_tx_type eth_2_tx;
  using _eth_3_rx_type =
    bool;
  _eth_3_rx_type eth_3_rx;
  using _eth_3_tx_type =
    bool;
  _eth_3_tx_type eth_3_tx;
  using _eth_4_rx_type =
    bool;
  _eth_4_rx_type eth_4_rx;
  using _eth_4_tx_type =
    bool;
  _eth_4_tx_type eth_4_tx;
  using _can_rx_type =
    bool;
  _can_rx_type can_rx;
  using _can_tx_type =
    bool;
  _can_tx_type can_tx;
  using _can_status_type =
    uint8_t;
  _can_status_type can_status;

  // setters for named parameter idiom
  Type & set__port_a(
    const bool & _arg)
  {
    this->port_a = _arg;
    return *this;
  }
  Type & set__port_b(
    const bool & _arg)
  {
    this->port_b = _arg;
    return *this;
  }
  Type & set__port_c(
    const bool & _arg)
  {
    this->port_c = _arg;
    return *this;
  }
  Type & set__port_d(
    const bool & _arg)
  {
    this->port_d = _arg;
    return *this;
  }
  Type & set__port_e(
    const bool & _arg)
  {
    this->port_e = _arg;
    return *this;
  }
  Type & set__port_a_rx(
    const bool & _arg)
  {
    this->port_a_rx = _arg;
    return *this;
  }
  Type & set__port_a_tx(
    const bool & _arg)
  {
    this->port_a_tx = _arg;
    return *this;
  }
  Type & set__port_b_rx(
    const bool & _arg)
  {
    this->port_b_rx = _arg;
    return *this;
  }
  Type & set__port_b_tx(
    const bool & _arg)
  {
    this->port_b_tx = _arg;
    return *this;
  }
  Type & set__port_c_rx(
    const bool & _arg)
  {
    this->port_c_rx = _arg;
    return *this;
  }
  Type & set__port_c_tx(
    const bool & _arg)
  {
    this->port_c_tx = _arg;
    return *this;
  }
  Type & set__port_d_rx(
    const bool & _arg)
  {
    this->port_d_rx = _arg;
    return *this;
  }
  Type & set__port_d_tx(
    const bool & _arg)
  {
    this->port_d_tx = _arg;
    return *this;
  }
  Type & set__port_e_rx(
    const bool & _arg)
  {
    this->port_e_rx = _arg;
    return *this;
  }
  Type & set__port_e_tx(
    const bool & _arg)
  {
    this->port_e_tx = _arg;
    return *this;
  }
  Type & set__eth_0(
    const bool & _arg)
  {
    this->eth_0 = _arg;
    return *this;
  }
  Type & set__eth_1(
    const bool & _arg)
  {
    this->eth_1 = _arg;
    return *this;
  }
  Type & set__eth_2(
    const bool & _arg)
  {
    this->eth_2 = _arg;
    return *this;
  }
  Type & set__eth_3(
    const bool & _arg)
  {
    this->eth_3 = _arg;
    return *this;
  }
  Type & set__eth_4(
    const bool & _arg)
  {
    this->eth_4 = _arg;
    return *this;
  }
  Type & set__eth_0_rx(
    const bool & _arg)
  {
    this->eth_0_rx = _arg;
    return *this;
  }
  Type & set__eth_0_tx(
    const bool & _arg)
  {
    this->eth_0_tx = _arg;
    return *this;
  }
  Type & set__eth_1_rx(
    const bool & _arg)
  {
    this->eth_1_rx = _arg;
    return *this;
  }
  Type & set__eth_1_tx(
    const bool & _arg)
  {
    this->eth_1_tx = _arg;
    return *this;
  }
  Type & set__eth_2_rx(
    const bool & _arg)
  {
    this->eth_2_rx = _arg;
    return *this;
  }
  Type & set__eth_2_tx(
    const bool & _arg)
  {
    this->eth_2_tx = _arg;
    return *this;
  }
  Type & set__eth_3_rx(
    const bool & _arg)
  {
    this->eth_3_rx = _arg;
    return *this;
  }
  Type & set__eth_3_tx(
    const bool & _arg)
  {
    this->eth_3_tx = _arg;
    return *this;
  }
  Type & set__eth_4_rx(
    const bool & _arg)
  {
    this->eth_4_rx = _arg;
    return *this;
  }
  Type & set__eth_4_tx(
    const bool & _arg)
  {
    this->eth_4_tx = _arg;
    return *this;
  }
  Type & set__can_rx(
    const bool & _arg)
  {
    this->can_rx = _arg;
    return *this;
  }
  Type & set__can_tx(
    const bool & _arg)
  {
    this->can_tx = _arg;
    return *this;
  }
  Type & set__can_status(
    const uint8_t & _arg)
  {
    this->can_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgStatusCom_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgStatusCom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusCom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusCom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgStatusCom
    std::shared_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgStatusCom
    std::shared_ptr<sbg_driver::msg::SbgStatusCom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgStatusCom_ & other) const
  {
    if (this->port_a != other.port_a) {
      return false;
    }
    if (this->port_b != other.port_b) {
      return false;
    }
    if (this->port_c != other.port_c) {
      return false;
    }
    if (this->port_d != other.port_d) {
      return false;
    }
    if (this->port_e != other.port_e) {
      return false;
    }
    if (this->port_a_rx != other.port_a_rx) {
      return false;
    }
    if (this->port_a_tx != other.port_a_tx) {
      return false;
    }
    if (this->port_b_rx != other.port_b_rx) {
      return false;
    }
    if (this->port_b_tx != other.port_b_tx) {
      return false;
    }
    if (this->port_c_rx != other.port_c_rx) {
      return false;
    }
    if (this->port_c_tx != other.port_c_tx) {
      return false;
    }
    if (this->port_d_rx != other.port_d_rx) {
      return false;
    }
    if (this->port_d_tx != other.port_d_tx) {
      return false;
    }
    if (this->port_e_rx != other.port_e_rx) {
      return false;
    }
    if (this->port_e_tx != other.port_e_tx) {
      return false;
    }
    if (this->eth_0 != other.eth_0) {
      return false;
    }
    if (this->eth_1 != other.eth_1) {
      return false;
    }
    if (this->eth_2 != other.eth_2) {
      return false;
    }
    if (this->eth_3 != other.eth_3) {
      return false;
    }
    if (this->eth_4 != other.eth_4) {
      return false;
    }
    if (this->eth_0_rx != other.eth_0_rx) {
      return false;
    }
    if (this->eth_0_tx != other.eth_0_tx) {
      return false;
    }
    if (this->eth_1_rx != other.eth_1_rx) {
      return false;
    }
    if (this->eth_1_tx != other.eth_1_tx) {
      return false;
    }
    if (this->eth_2_rx != other.eth_2_rx) {
      return false;
    }
    if (this->eth_2_tx != other.eth_2_tx) {
      return false;
    }
    if (this->eth_3_rx != other.eth_3_rx) {
      return false;
    }
    if (this->eth_3_tx != other.eth_3_tx) {
      return false;
    }
    if (this->eth_4_rx != other.eth_4_rx) {
      return false;
    }
    if (this->eth_4_tx != other.eth_4_tx) {
      return false;
    }
    if (this->can_rx != other.can_rx) {
      return false;
    }
    if (this->can_tx != other.can_tx) {
      return false;
    }
    if (this->can_status != other.can_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgStatusCom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgStatusCom_

// alias to use template instance with default allocator
using SbgStatusCom =
  sbg_driver::msg::SbgStatusCom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_HPP_
