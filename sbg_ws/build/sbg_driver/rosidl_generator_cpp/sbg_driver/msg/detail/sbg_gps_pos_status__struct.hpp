// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgGpsPosStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgGpsPosStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgGpsPosStatus_
{
  using Type = SbgGpsPosStatus_<ContainerAllocator>;

  explicit SbgGpsPosStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->type = 0;
      this->ifm = 0;
      this->spoofing = 0;
      this->osnma = 0;
      this->gps_l1_used = false;
      this->gps_l2_used = false;
      this->gps_l5_used = false;
      this->glo_l1_used = false;
      this->glo_l2_used = false;
      this->glo_l3_used = false;
      this->gal_e1_used = false;
      this->gal_e5a_used = false;
      this->gal_e5b_used = false;
      this->gal_e5alt_used = false;
      this->gal_e6_used = false;
      this->bds_b1_used = false;
      this->bds_b2_used = false;
      this->bds_b3_used = false;
      this->qzss_l1_used = false;
      this->qzss_l2_used = false;
      this->qzss_l5_used = false;
    }
  }

  explicit SbgGpsPosStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->type = 0;
      this->ifm = 0;
      this->spoofing = 0;
      this->osnma = 0;
      this->gps_l1_used = false;
      this->gps_l2_used = false;
      this->gps_l5_used = false;
      this->glo_l1_used = false;
      this->glo_l2_used = false;
      this->glo_l3_used = false;
      this->gal_e1_used = false;
      this->gal_e5a_used = false;
      this->gal_e5b_used = false;
      this->gal_e5alt_used = false;
      this->gal_e6_used = false;
      this->bds_b1_used = false;
      this->bds_b2_used = false;
      this->bds_b3_used = false;
      this->qzss_l1_used = false;
      this->qzss_l2_used = false;
      this->qzss_l5_used = false;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _type_type =
    uint8_t;
  _type_type type;
  using _ifm_type =
    uint8_t;
  _ifm_type ifm;
  using _spoofing_type =
    uint8_t;
  _spoofing_type spoofing;
  using _osnma_type =
    uint8_t;
  _osnma_type osnma;
  using _gps_l1_used_type =
    bool;
  _gps_l1_used_type gps_l1_used;
  using _gps_l2_used_type =
    bool;
  _gps_l2_used_type gps_l2_used;
  using _gps_l5_used_type =
    bool;
  _gps_l5_used_type gps_l5_used;
  using _glo_l1_used_type =
    bool;
  _glo_l1_used_type glo_l1_used;
  using _glo_l2_used_type =
    bool;
  _glo_l2_used_type glo_l2_used;
  using _glo_l3_used_type =
    bool;
  _glo_l3_used_type glo_l3_used;
  using _gal_e1_used_type =
    bool;
  _gal_e1_used_type gal_e1_used;
  using _gal_e5a_used_type =
    bool;
  _gal_e5a_used_type gal_e5a_used;
  using _gal_e5b_used_type =
    bool;
  _gal_e5b_used_type gal_e5b_used;
  using _gal_e5alt_used_type =
    bool;
  _gal_e5alt_used_type gal_e5alt_used;
  using _gal_e6_used_type =
    bool;
  _gal_e6_used_type gal_e6_used;
  using _bds_b1_used_type =
    bool;
  _bds_b1_used_type bds_b1_used;
  using _bds_b2_used_type =
    bool;
  _bds_b2_used_type bds_b2_used;
  using _bds_b3_used_type =
    bool;
  _bds_b3_used_type bds_b3_used;
  using _qzss_l1_used_type =
    bool;
  _qzss_l1_used_type qzss_l1_used;
  using _qzss_l2_used_type =
    bool;
  _qzss_l2_used_type qzss_l2_used;
  using _qzss_l5_used_type =
    bool;
  _qzss_l5_used_type qzss_l5_used;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__ifm(
    const uint8_t & _arg)
  {
    this->ifm = _arg;
    return *this;
  }
  Type & set__spoofing(
    const uint8_t & _arg)
  {
    this->spoofing = _arg;
    return *this;
  }
  Type & set__osnma(
    const uint8_t & _arg)
  {
    this->osnma = _arg;
    return *this;
  }
  Type & set__gps_l1_used(
    const bool & _arg)
  {
    this->gps_l1_used = _arg;
    return *this;
  }
  Type & set__gps_l2_used(
    const bool & _arg)
  {
    this->gps_l2_used = _arg;
    return *this;
  }
  Type & set__gps_l5_used(
    const bool & _arg)
  {
    this->gps_l5_used = _arg;
    return *this;
  }
  Type & set__glo_l1_used(
    const bool & _arg)
  {
    this->glo_l1_used = _arg;
    return *this;
  }
  Type & set__glo_l2_used(
    const bool & _arg)
  {
    this->glo_l2_used = _arg;
    return *this;
  }
  Type & set__glo_l3_used(
    const bool & _arg)
  {
    this->glo_l3_used = _arg;
    return *this;
  }
  Type & set__gal_e1_used(
    const bool & _arg)
  {
    this->gal_e1_used = _arg;
    return *this;
  }
  Type & set__gal_e5a_used(
    const bool & _arg)
  {
    this->gal_e5a_used = _arg;
    return *this;
  }
  Type & set__gal_e5b_used(
    const bool & _arg)
  {
    this->gal_e5b_used = _arg;
    return *this;
  }
  Type & set__gal_e5alt_used(
    const bool & _arg)
  {
    this->gal_e5alt_used = _arg;
    return *this;
  }
  Type & set__gal_e6_used(
    const bool & _arg)
  {
    this->gal_e6_used = _arg;
    return *this;
  }
  Type & set__bds_b1_used(
    const bool & _arg)
  {
    this->bds_b1_used = _arg;
    return *this;
  }
  Type & set__bds_b2_used(
    const bool & _arg)
  {
    this->bds_b2_used = _arg;
    return *this;
  }
  Type & set__bds_b3_used(
    const bool & _arg)
  {
    this->bds_b3_used = _arg;
    return *this;
  }
  Type & set__qzss_l1_used(
    const bool & _arg)
  {
    this->qzss_l1_used = _arg;
    return *this;
  }
  Type & set__qzss_l2_used(
    const bool & _arg)
  {
    this->qzss_l2_used = _arg;
    return *this;
  }
  Type & set__qzss_l5_used(
    const bool & _arg)
  {
    this->qzss_l5_used = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgGpsPosStatus
    std::shared_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgGpsPosStatus
    std::shared_ptr<sbg_driver::msg::SbgGpsPosStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgGpsPosStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->ifm != other.ifm) {
      return false;
    }
    if (this->spoofing != other.spoofing) {
      return false;
    }
    if (this->osnma != other.osnma) {
      return false;
    }
    if (this->gps_l1_used != other.gps_l1_used) {
      return false;
    }
    if (this->gps_l2_used != other.gps_l2_used) {
      return false;
    }
    if (this->gps_l5_used != other.gps_l5_used) {
      return false;
    }
    if (this->glo_l1_used != other.glo_l1_used) {
      return false;
    }
    if (this->glo_l2_used != other.glo_l2_used) {
      return false;
    }
    if (this->glo_l3_used != other.glo_l3_used) {
      return false;
    }
    if (this->gal_e1_used != other.gal_e1_used) {
      return false;
    }
    if (this->gal_e5a_used != other.gal_e5a_used) {
      return false;
    }
    if (this->gal_e5b_used != other.gal_e5b_used) {
      return false;
    }
    if (this->gal_e5alt_used != other.gal_e5alt_used) {
      return false;
    }
    if (this->gal_e6_used != other.gal_e6_used) {
      return false;
    }
    if (this->bds_b1_used != other.bds_b1_used) {
      return false;
    }
    if (this->bds_b2_used != other.bds_b2_used) {
      return false;
    }
    if (this->bds_b3_used != other.bds_b3_used) {
      return false;
    }
    if (this->qzss_l1_used != other.qzss_l1_used) {
      return false;
    }
    if (this->qzss_l2_used != other.qzss_l2_used) {
      return false;
    }
    if (this->qzss_l5_used != other.qzss_l5_used) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgGpsPosStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgGpsPosStatus_

// alias to use template instance with default allocator
using SbgGpsPosStatus =
  sbg_driver::msg::SbgGpsPosStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_HPP_
