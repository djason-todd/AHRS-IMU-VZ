// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/BottomTrack.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/bottom_track__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/bottom_track__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_serialize(
  const interfaces::msg::BottomTrack & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: system_timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.system_timestamp,
    cdr);
  // Member: posix_time
  cdr << (ros_message.posix_time ? true : false);
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: microseconds
  cdr << ros_message.microseconds;
  // Member: beam_1_velocity_valid
  cdr << (ros_message.beam_1_velocity_valid ? true : false);
  // Member: beam_2_velocity_valid
  cdr << (ros_message.beam_2_velocity_valid ? true : false);
  // Member: beam_3_velocity_valid
  cdr << (ros_message.beam_3_velocity_valid ? true : false);
  // Member: beam_1_distance_valid
  cdr << (ros_message.beam_1_distance_valid ? true : false);
  // Member: beam_2_distance_valid
  cdr << (ros_message.beam_2_distance_valid ? true : false);
  // Member: beam_3_distance_valid
  cdr << (ros_message.beam_3_distance_valid ? true : false);
  // Member: beam_1_fom_valid
  cdr << (ros_message.beam_1_fom_valid ? true : false);
  // Member: beam_2_fom_valid
  cdr << (ros_message.beam_2_fom_valid ? true : false);
  // Member: beam_3_fom_valid
  cdr << (ros_message.beam_3_fom_valid ? true : false);
  // Member: x_velocity_valid
  cdr << (ros_message.x_velocity_valid ? true : false);
  // Member: y_velocity_valid
  cdr << (ros_message.y_velocity_valid ? true : false);
  // Member: z_velocity_valid
  cdr << (ros_message.z_velocity_valid ? true : false);
  // Member: x_fom_valid
  cdr << (ros_message.x_fom_valid ? true : false);
  // Member: y_fom_valid
  cdr << (ros_message.y_fom_valid ? true : false);
  // Member: z_fom_valid
  cdr << (ros_message.z_fom_valid ? true : false);
  // Member: serial_number
  cdr << ros_message.serial_number;
  // Member: sound_speed
  cdr << ros_message.sound_speed;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: pressure
  cdr << ros_message.pressure;
  // Member: velocity_beam_1
  cdr << ros_message.velocity_beam_1;
  // Member: velocity_beam_2
  cdr << ros_message.velocity_beam_2;
  // Member: velocity_beam_3
  cdr << ros_message.velocity_beam_3;
  // Member: distance_beam_1
  cdr << ros_message.distance_beam_1;
  // Member: distance_beam_2
  cdr << ros_message.distance_beam_2;
  // Member: distance_beam_3
  cdr << ros_message.distance_beam_3;
  // Member: fom_beam_1
  cdr << ros_message.fom_beam_1;
  // Member: fom_beam_2
  cdr << ros_message.fom_beam_2;
  // Member: fom_beam_3
  cdr << ros_message.fom_beam_3;
  // Member: dt_beam_1
  cdr << ros_message.dt_beam_1;
  // Member: dt_beam_2
  cdr << ros_message.dt_beam_2;
  // Member: dt_beam_3
  cdr << ros_message.dt_beam_3;
  // Member: time_vel_beam_1
  cdr << ros_message.time_vel_beam_1;
  // Member: time_vel_beam_2
  cdr << ros_message.time_vel_beam_2;
  // Member: time_vel_beam_3
  cdr << ros_message.time_vel_beam_3;
  // Member: velocity_x
  cdr << ros_message.velocity_x;
  // Member: velocity_y
  cdr << ros_message.velocity_y;
  // Member: velocity_z
  cdr << ros_message.velocity_z;
  // Member: fom_x
  cdr << ros_message.fom_x;
  // Member: fom_y
  cdr << ros_message.fom_y;
  // Member: fom_z
  cdr << ros_message.fom_z;
  // Member: dt_xyz
  cdr << ros_message.dt_xyz;
  // Member: time_vel_xyz
  cdr << ros_message.time_vel_xyz;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::BottomTrack & ros_message)
{
  // Member: system_timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.system_timestamp);

  // Member: posix_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.posix_time = tmp ? true : false;
  }

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: microseconds
  cdr >> ros_message.microseconds;

  // Member: beam_1_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_1_velocity_valid = tmp ? true : false;
  }

  // Member: beam_2_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_2_velocity_valid = tmp ? true : false;
  }

  // Member: beam_3_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_3_velocity_valid = tmp ? true : false;
  }

  // Member: beam_1_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_1_distance_valid = tmp ? true : false;
  }

  // Member: beam_2_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_2_distance_valid = tmp ? true : false;
  }

  // Member: beam_3_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_3_distance_valid = tmp ? true : false;
  }

  // Member: beam_1_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_1_fom_valid = tmp ? true : false;
  }

  // Member: beam_2_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_2_fom_valid = tmp ? true : false;
  }

  // Member: beam_3_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beam_3_fom_valid = tmp ? true : false;
  }

  // Member: x_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.x_velocity_valid = tmp ? true : false;
  }

  // Member: y_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.y_velocity_valid = tmp ? true : false;
  }

  // Member: z_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.z_velocity_valid = tmp ? true : false;
  }

  // Member: x_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.x_fom_valid = tmp ? true : false;
  }

  // Member: y_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.y_fom_valid = tmp ? true : false;
  }

  // Member: z_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.z_fom_valid = tmp ? true : false;
  }

  // Member: serial_number
  cdr >> ros_message.serial_number;

  // Member: sound_speed
  cdr >> ros_message.sound_speed;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: pressure
  cdr >> ros_message.pressure;

  // Member: velocity_beam_1
  cdr >> ros_message.velocity_beam_1;

  // Member: velocity_beam_2
  cdr >> ros_message.velocity_beam_2;

  // Member: velocity_beam_3
  cdr >> ros_message.velocity_beam_3;

  // Member: distance_beam_1
  cdr >> ros_message.distance_beam_1;

  // Member: distance_beam_2
  cdr >> ros_message.distance_beam_2;

  // Member: distance_beam_3
  cdr >> ros_message.distance_beam_3;

  // Member: fom_beam_1
  cdr >> ros_message.fom_beam_1;

  // Member: fom_beam_2
  cdr >> ros_message.fom_beam_2;

  // Member: fom_beam_3
  cdr >> ros_message.fom_beam_3;

  // Member: dt_beam_1
  cdr >> ros_message.dt_beam_1;

  // Member: dt_beam_2
  cdr >> ros_message.dt_beam_2;

  // Member: dt_beam_3
  cdr >> ros_message.dt_beam_3;

  // Member: time_vel_beam_1
  cdr >> ros_message.time_vel_beam_1;

  // Member: time_vel_beam_2
  cdr >> ros_message.time_vel_beam_2;

  // Member: time_vel_beam_3
  cdr >> ros_message.time_vel_beam_3;

  // Member: velocity_x
  cdr >> ros_message.velocity_x;

  // Member: velocity_y
  cdr >> ros_message.velocity_y;

  // Member: velocity_z
  cdr >> ros_message.velocity_z;

  // Member: fom_x
  cdr >> ros_message.fom_x;

  // Member: fom_y
  cdr >> ros_message.fom_y;

  // Member: fom_z
  cdr >> ros_message.fom_z;

  // Member: dt_xyz
  cdr >> ros_message.dt_xyz;

  // Member: time_vel_xyz
  cdr >> ros_message.time_vel_xyz;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::BottomTrack & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: system_timestamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.system_timestamp, current_alignment);
  // Member: posix_time
  {
    size_t item_size = sizeof(ros_message.posix_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: microseconds
  {
    size_t item_size = sizeof(ros_message.microseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_1_velocity_valid
  {
    size_t item_size = sizeof(ros_message.beam_1_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_2_velocity_valid
  {
    size_t item_size = sizeof(ros_message.beam_2_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_3_velocity_valid
  {
    size_t item_size = sizeof(ros_message.beam_3_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_1_distance_valid
  {
    size_t item_size = sizeof(ros_message.beam_1_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_2_distance_valid
  {
    size_t item_size = sizeof(ros_message.beam_2_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_3_distance_valid
  {
    size_t item_size = sizeof(ros_message.beam_3_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_1_fom_valid
  {
    size_t item_size = sizeof(ros_message.beam_1_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_2_fom_valid
  {
    size_t item_size = sizeof(ros_message.beam_2_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beam_3_fom_valid
  {
    size_t item_size = sizeof(ros_message.beam_3_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_velocity_valid
  {
    size_t item_size = sizeof(ros_message.x_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_velocity_valid
  {
    size_t item_size = sizeof(ros_message.y_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_velocity_valid
  {
    size_t item_size = sizeof(ros_message.z_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_fom_valid
  {
    size_t item_size = sizeof(ros_message.x_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_fom_valid
  {
    size_t item_size = sizeof(ros_message.y_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_fom_valid
  {
    size_t item_size = sizeof(ros_message.z_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: serial_number
  {
    size_t item_size = sizeof(ros_message.serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sound_speed
  {
    size_t item_size = sizeof(ros_message.sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure
  {
    size_t item_size = sizeof(ros_message.pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_beam_1
  {
    size_t item_size = sizeof(ros_message.velocity_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_beam_2
  {
    size_t item_size = sizeof(ros_message.velocity_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_beam_3
  {
    size_t item_size = sizeof(ros_message.velocity_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_beam_1
  {
    size_t item_size = sizeof(ros_message.distance_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_beam_2
  {
    size_t item_size = sizeof(ros_message.distance_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_beam_3
  {
    size_t item_size = sizeof(ros_message.distance_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_beam_1
  {
    size_t item_size = sizeof(ros_message.fom_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_beam_2
  {
    size_t item_size = sizeof(ros_message.fom_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_beam_3
  {
    size_t item_size = sizeof(ros_message.fom_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_beam_1
  {
    size_t item_size = sizeof(ros_message.dt_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_beam_2
  {
    size_t item_size = sizeof(ros_message.dt_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_beam_3
  {
    size_t item_size = sizeof(ros_message.dt_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_vel_beam_1
  {
    size_t item_size = sizeof(ros_message.time_vel_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_vel_beam_2
  {
    size_t item_size = sizeof(ros_message.time_vel_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_vel_beam_3
  {
    size_t item_size = sizeof(ros_message.time_vel_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_x
  {
    size_t item_size = sizeof(ros_message.velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_y
  {
    size_t item_size = sizeof(ros_message.velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_z
  {
    size_t item_size = sizeof(ros_message.velocity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_x
  {
    size_t item_size = sizeof(ros_message.fom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_y
  {
    size_t item_size = sizeof(ros_message.fom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fom_z
  {
    size_t item_size = sizeof(ros_message.fom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dt_xyz
  {
    size_t item_size = sizeof(ros_message.dt_xyz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_vel_xyz
  {
    size_t item_size = sizeof(ros_message.time_vel_xyz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_BottomTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: system_timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: posix_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: microseconds
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: beam_1_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_2_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_3_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_1_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_2_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_3_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_1_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_2_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beam_3_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: x_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: y_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: z_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: x_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: y_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: z_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sound_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dt_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dt_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dt_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_vel_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_vel_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_vel_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fom_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dt_xyz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_vel_xyz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces::msg::BottomTrack;
    is_plain =
      (
      offsetof(DataType, time_vel_xyz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BottomTrack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::BottomTrack *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BottomTrack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::BottomTrack *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BottomTrack__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::BottomTrack *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BottomTrack__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BottomTrack(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BottomTrack__callbacks = {
  "interfaces::msg",
  "BottomTrack",
  _BottomTrack__cdr_serialize,
  _BottomTrack__cdr_deserialize,
  _BottomTrack__get_serialized_size,
  _BottomTrack__max_serialized_size
};

static rosidl_message_type_support_t _BottomTrack__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BottomTrack__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::BottomTrack>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_BottomTrack__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, BottomTrack)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_BottomTrack__handle;
}

#ifdef __cplusplus
}
#endif
