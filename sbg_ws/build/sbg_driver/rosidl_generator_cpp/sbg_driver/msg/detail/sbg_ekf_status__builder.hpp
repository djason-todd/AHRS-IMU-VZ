// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfStatus_depth_used
{
public:
  explicit Init_SbgEkfStatus_depth_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfStatus depth_used(::sbg_driver::msg::SbgEkfStatus::_depth_used_type arg)
  {
    msg_.depth_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_align_valid
{
public:
  explicit Init_SbgEkfStatus_align_valid(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_depth_used align_valid(::sbg_driver::msg::SbgEkfStatus::_align_valid_type arg)
  {
    msg_.align_valid = std::move(arg);
    return Init_SbgEkfStatus_depth_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_zupt_used
{
public:
  explicit Init_SbgEkfStatus_zupt_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_align_valid zupt_used(::sbg_driver::msg::SbgEkfStatus::_zupt_used_type arg)
  {
    msg_.zupt_used = std::move(arg);
    return Init_SbgEkfStatus_align_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_air_data_used
{
public:
  explicit Init_SbgEkfStatus_air_data_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_zupt_used air_data_used(::sbg_driver::msg::SbgEkfStatus::_air_data_used_type arg)
  {
    msg_.air_data_used = std::move(arg);
    return Init_SbgEkfStatus_zupt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_usbl_used
{
public:
  explicit Init_SbgEkfStatus_usbl_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_air_data_used usbl_used(::sbg_driver::msg::SbgEkfStatus::_usbl_used_type arg)
  {
    msg_.usbl_used = std::move(arg);
    return Init_SbgEkfStatus_air_data_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_user_heading_used
{
public:
  explicit Init_SbgEkfStatus_user_heading_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_usbl_used user_heading_used(::sbg_driver::msg::SbgEkfStatus::_user_heading_used_type arg)
  {
    msg_.user_heading_used = std::move(arg);
    return Init_SbgEkfStatus_usbl_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_user_vel_used
{
public:
  explicit Init_SbgEkfStatus_user_vel_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_user_heading_used user_vel_used(::sbg_driver::msg::SbgEkfStatus::_user_vel_used_type arg)
  {
    msg_.user_vel_used = std::move(arg);
    return Init_SbgEkfStatus_user_heading_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_user_pos_used
{
public:
  explicit Init_SbgEkfStatus_user_pos_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_user_vel_used user_pos_used(::sbg_driver::msg::SbgEkfStatus::_user_pos_used_type arg)
  {
    msg_.user_pos_used = std::move(arg);
    return Init_SbgEkfStatus_user_vel_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_dvl_wt_used
{
public:
  explicit Init_SbgEkfStatus_dvl_wt_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_user_pos_used dvl_wt_used(::sbg_driver::msg::SbgEkfStatus::_dvl_wt_used_type arg)
  {
    msg_.dvl_wt_used = std::move(arg);
    return Init_SbgEkfStatus_user_pos_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_dvl_bt_used
{
public:
  explicit Init_SbgEkfStatus_dvl_bt_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_dvl_wt_used dvl_bt_used(::sbg_driver::msg::SbgEkfStatus::_dvl_bt_used_type arg)
  {
    msg_.dvl_bt_used = std::move(arg);
    return Init_SbgEkfStatus_dvl_wt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_odo_used
{
public:
  explicit Init_SbgEkfStatus_odo_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_dvl_bt_used odo_used(::sbg_driver::msg::SbgEkfStatus::_odo_used_type arg)
  {
    msg_.odo_used = std::move(arg);
    return Init_SbgEkfStatus_dvl_bt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps2_hdt_used
{
public:
  explicit Init_SbgEkfStatus_gps2_hdt_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_odo_used gps2_hdt_used(::sbg_driver::msg::SbgEkfStatus::_gps2_hdt_used_type arg)
  {
    msg_.gps2_hdt_used = std::move(arg);
    return Init_SbgEkfStatus_odo_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps2_pos_used
{
public:
  explicit Init_SbgEkfStatus_gps2_pos_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps2_hdt_used gps2_pos_used(::sbg_driver::msg::SbgEkfStatus::_gps2_pos_used_type arg)
  {
    msg_.gps2_pos_used = std::move(arg);
    return Init_SbgEkfStatus_gps2_hdt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps2_vel_used
{
public:
  explicit Init_SbgEkfStatus_gps2_vel_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps2_pos_used gps2_vel_used(::sbg_driver::msg::SbgEkfStatus::_gps2_vel_used_type arg)
  {
    msg_.gps2_vel_used = std::move(arg);
    return Init_SbgEkfStatus_gps2_pos_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps1_hdt_used
{
public:
  explicit Init_SbgEkfStatus_gps1_hdt_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps2_vel_used gps1_hdt_used(::sbg_driver::msg::SbgEkfStatus::_gps1_hdt_used_type arg)
  {
    msg_.gps1_hdt_used = std::move(arg);
    return Init_SbgEkfStatus_gps2_vel_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps1_pos_used
{
public:
  explicit Init_SbgEkfStatus_gps1_pos_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps1_hdt_used gps1_pos_used(::sbg_driver::msg::SbgEkfStatus::_gps1_pos_used_type arg)
  {
    msg_.gps1_pos_used = std::move(arg);
    return Init_SbgEkfStatus_gps1_hdt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_gps1_vel_used
{
public:
  explicit Init_SbgEkfStatus_gps1_vel_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps1_pos_used gps1_vel_used(::sbg_driver::msg::SbgEkfStatus::_gps1_vel_used_type arg)
  {
    msg_.gps1_vel_used = std::move(arg);
    return Init_SbgEkfStatus_gps1_pos_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_mag_ref_used
{
public:
  explicit Init_SbgEkfStatus_mag_ref_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_gps1_vel_used mag_ref_used(::sbg_driver::msg::SbgEkfStatus::_mag_ref_used_type arg)
  {
    msg_.mag_ref_used = std::move(arg);
    return Init_SbgEkfStatus_gps1_vel_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_vert_ref_used
{
public:
  explicit Init_SbgEkfStatus_vert_ref_used(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_mag_ref_used vert_ref_used(::sbg_driver::msg::SbgEkfStatus::_vert_ref_used_type arg)
  {
    msg_.vert_ref_used = std::move(arg);
    return Init_SbgEkfStatus_mag_ref_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_position_valid
{
public:
  explicit Init_SbgEkfStatus_position_valid(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_vert_ref_used position_valid(::sbg_driver::msg::SbgEkfStatus::_position_valid_type arg)
  {
    msg_.position_valid = std::move(arg);
    return Init_SbgEkfStatus_vert_ref_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_velocity_valid
{
public:
  explicit Init_SbgEkfStatus_velocity_valid(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_position_valid velocity_valid(::sbg_driver::msg::SbgEkfStatus::_velocity_valid_type arg)
  {
    msg_.velocity_valid = std::move(arg);
    return Init_SbgEkfStatus_position_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_heading_valid
{
public:
  explicit Init_SbgEkfStatus_heading_valid(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_velocity_valid heading_valid(::sbg_driver::msg::SbgEkfStatus::_heading_valid_type arg)
  {
    msg_.heading_valid = std::move(arg);
    return Init_SbgEkfStatus_velocity_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_attitude_valid
{
public:
  explicit Init_SbgEkfStatus_attitude_valid(::sbg_driver::msg::SbgEkfStatus & msg)
  : msg_(msg)
  {}
  Init_SbgEkfStatus_heading_valid attitude_valid(::sbg_driver::msg::SbgEkfStatus::_attitude_valid_type arg)
  {
    msg_.attitude_valid = std::move(arg);
    return Init_SbgEkfStatus_heading_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

class Init_SbgEkfStatus_solution_mode
{
public:
  Init_SbgEkfStatus_solution_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfStatus_attitude_valid solution_mode(::sbg_driver::msg::SbgEkfStatus::_solution_mode_type arg)
  {
    msg_.solution_mode = std::move(arg);
    return Init_SbgEkfStatus_attitude_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfStatus>()
{
  return sbg_driver::msg::builder::Init_SbgEkfStatus_solution_mode();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__BUILDER_HPP_
