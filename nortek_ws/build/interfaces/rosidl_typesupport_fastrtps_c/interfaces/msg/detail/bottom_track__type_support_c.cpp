// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/BottomTrack.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/bottom_track__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/bottom_track__struct.h"
#include "interfaces/msg/detail/bottom_track__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // system_timestamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _BottomTrack__ros_msg_type = interfaces__msg__BottomTrack;

static bool _BottomTrack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BottomTrack__ros_msg_type * ros_message = static_cast<const _BottomTrack__ros_msg_type *>(untyped_ros_message);
  // Field name: system_timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->system_timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: posix_time
  {
    cdr << (ros_message->posix_time ? true : false);
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: microseconds
  {
    cdr << ros_message->microseconds;
  }

  // Field name: beam_1_velocity_valid
  {
    cdr << (ros_message->beam_1_velocity_valid ? true : false);
  }

  // Field name: beam_2_velocity_valid
  {
    cdr << (ros_message->beam_2_velocity_valid ? true : false);
  }

  // Field name: beam_3_velocity_valid
  {
    cdr << (ros_message->beam_3_velocity_valid ? true : false);
  }

  // Field name: beam_1_distance_valid
  {
    cdr << (ros_message->beam_1_distance_valid ? true : false);
  }

  // Field name: beam_2_distance_valid
  {
    cdr << (ros_message->beam_2_distance_valid ? true : false);
  }

  // Field name: beam_3_distance_valid
  {
    cdr << (ros_message->beam_3_distance_valid ? true : false);
  }

  // Field name: beam_1_fom_valid
  {
    cdr << (ros_message->beam_1_fom_valid ? true : false);
  }

  // Field name: beam_2_fom_valid
  {
    cdr << (ros_message->beam_2_fom_valid ? true : false);
  }

  // Field name: beam_3_fom_valid
  {
    cdr << (ros_message->beam_3_fom_valid ? true : false);
  }

  // Field name: x_velocity_valid
  {
    cdr << (ros_message->x_velocity_valid ? true : false);
  }

  // Field name: y_velocity_valid
  {
    cdr << (ros_message->y_velocity_valid ? true : false);
  }

  // Field name: z_velocity_valid
  {
    cdr << (ros_message->z_velocity_valid ? true : false);
  }

  // Field name: x_fom_valid
  {
    cdr << (ros_message->x_fom_valid ? true : false);
  }

  // Field name: y_fom_valid
  {
    cdr << (ros_message->y_fom_valid ? true : false);
  }

  // Field name: z_fom_valid
  {
    cdr << (ros_message->z_fom_valid ? true : false);
  }

  // Field name: serial_number
  {
    cdr << ros_message->serial_number;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: velocity_beam_1
  {
    cdr << ros_message->velocity_beam_1;
  }

  // Field name: velocity_beam_2
  {
    cdr << ros_message->velocity_beam_2;
  }

  // Field name: velocity_beam_3
  {
    cdr << ros_message->velocity_beam_3;
  }

  // Field name: distance_beam_1
  {
    cdr << ros_message->distance_beam_1;
  }

  // Field name: distance_beam_2
  {
    cdr << ros_message->distance_beam_2;
  }

  // Field name: distance_beam_3
  {
    cdr << ros_message->distance_beam_3;
  }

  // Field name: fom_beam_1
  {
    cdr << ros_message->fom_beam_1;
  }

  // Field name: fom_beam_2
  {
    cdr << ros_message->fom_beam_2;
  }

  // Field name: fom_beam_3
  {
    cdr << ros_message->fom_beam_3;
  }

  // Field name: dt_beam_1
  {
    cdr << ros_message->dt_beam_1;
  }

  // Field name: dt_beam_2
  {
    cdr << ros_message->dt_beam_2;
  }

  // Field name: dt_beam_3
  {
    cdr << ros_message->dt_beam_3;
  }

  // Field name: time_vel_beam_1
  {
    cdr << ros_message->time_vel_beam_1;
  }

  // Field name: time_vel_beam_2
  {
    cdr << ros_message->time_vel_beam_2;
  }

  // Field name: time_vel_beam_3
  {
    cdr << ros_message->time_vel_beam_3;
  }

  // Field name: velocity_x
  {
    cdr << ros_message->velocity_x;
  }

  // Field name: velocity_y
  {
    cdr << ros_message->velocity_y;
  }

  // Field name: velocity_z
  {
    cdr << ros_message->velocity_z;
  }

  // Field name: fom_x
  {
    cdr << ros_message->fom_x;
  }

  // Field name: fom_y
  {
    cdr << ros_message->fom_y;
  }

  // Field name: fom_z
  {
    cdr << ros_message->fom_z;
  }

  // Field name: dt_xyz
  {
    cdr << ros_message->dt_xyz;
  }

  // Field name: time_vel_xyz
  {
    cdr << ros_message->time_vel_xyz;
  }

  return true;
}

static bool _BottomTrack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BottomTrack__ros_msg_type * ros_message = static_cast<_BottomTrack__ros_msg_type *>(untyped_ros_message);
  // Field name: system_timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->system_timestamp))
    {
      return false;
    }
  }

  // Field name: posix_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->posix_time = tmp ? true : false;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: microseconds
  {
    cdr >> ros_message->microseconds;
  }

  // Field name: beam_1_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_1_velocity_valid = tmp ? true : false;
  }

  // Field name: beam_2_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_2_velocity_valid = tmp ? true : false;
  }

  // Field name: beam_3_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_3_velocity_valid = tmp ? true : false;
  }

  // Field name: beam_1_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_1_distance_valid = tmp ? true : false;
  }

  // Field name: beam_2_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_2_distance_valid = tmp ? true : false;
  }

  // Field name: beam_3_distance_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_3_distance_valid = tmp ? true : false;
  }

  // Field name: beam_1_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_1_fom_valid = tmp ? true : false;
  }

  // Field name: beam_2_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_2_fom_valid = tmp ? true : false;
  }

  // Field name: beam_3_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_3_fom_valid = tmp ? true : false;
  }

  // Field name: x_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->x_velocity_valid = tmp ? true : false;
  }

  // Field name: y_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->y_velocity_valid = tmp ? true : false;
  }

  // Field name: z_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->z_velocity_valid = tmp ? true : false;
  }

  // Field name: x_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->x_fom_valid = tmp ? true : false;
  }

  // Field name: y_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->y_fom_valid = tmp ? true : false;
  }

  // Field name: z_fom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->z_fom_valid = tmp ? true : false;
  }

  // Field name: serial_number
  {
    cdr >> ros_message->serial_number;
  }

  // Field name: sound_speed
  {
    cdr >> ros_message->sound_speed;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr >> ros_message->pressure;
  }

  // Field name: velocity_beam_1
  {
    cdr >> ros_message->velocity_beam_1;
  }

  // Field name: velocity_beam_2
  {
    cdr >> ros_message->velocity_beam_2;
  }

  // Field name: velocity_beam_3
  {
    cdr >> ros_message->velocity_beam_3;
  }

  // Field name: distance_beam_1
  {
    cdr >> ros_message->distance_beam_1;
  }

  // Field name: distance_beam_2
  {
    cdr >> ros_message->distance_beam_2;
  }

  // Field name: distance_beam_3
  {
    cdr >> ros_message->distance_beam_3;
  }

  // Field name: fom_beam_1
  {
    cdr >> ros_message->fom_beam_1;
  }

  // Field name: fom_beam_2
  {
    cdr >> ros_message->fom_beam_2;
  }

  // Field name: fom_beam_3
  {
    cdr >> ros_message->fom_beam_3;
  }

  // Field name: dt_beam_1
  {
    cdr >> ros_message->dt_beam_1;
  }

  // Field name: dt_beam_2
  {
    cdr >> ros_message->dt_beam_2;
  }

  // Field name: dt_beam_3
  {
    cdr >> ros_message->dt_beam_3;
  }

  // Field name: time_vel_beam_1
  {
    cdr >> ros_message->time_vel_beam_1;
  }

  // Field name: time_vel_beam_2
  {
    cdr >> ros_message->time_vel_beam_2;
  }

  // Field name: time_vel_beam_3
  {
    cdr >> ros_message->time_vel_beam_3;
  }

  // Field name: velocity_x
  {
    cdr >> ros_message->velocity_x;
  }

  // Field name: velocity_y
  {
    cdr >> ros_message->velocity_y;
  }

  // Field name: velocity_z
  {
    cdr >> ros_message->velocity_z;
  }

  // Field name: fom_x
  {
    cdr >> ros_message->fom_x;
  }

  // Field name: fom_y
  {
    cdr >> ros_message->fom_y;
  }

  // Field name: fom_z
  {
    cdr >> ros_message->fom_z;
  }

  // Field name: dt_xyz
  {
    cdr >> ros_message->dt_xyz;
  }

  // Field name: time_vel_xyz
  {
    cdr >> ros_message->time_vel_xyz;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__BottomTrack(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BottomTrack__ros_msg_type * ros_message = static_cast<const _BottomTrack__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name system_timestamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->system_timestamp), current_alignment);
  // field.name posix_time
  {
    size_t item_size = sizeof(ros_message->posix_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name microseconds
  {
    size_t item_size = sizeof(ros_message->microseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_1_velocity_valid
  {
    size_t item_size = sizeof(ros_message->beam_1_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_2_velocity_valid
  {
    size_t item_size = sizeof(ros_message->beam_2_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_3_velocity_valid
  {
    size_t item_size = sizeof(ros_message->beam_3_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_1_distance_valid
  {
    size_t item_size = sizeof(ros_message->beam_1_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_2_distance_valid
  {
    size_t item_size = sizeof(ros_message->beam_2_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_3_distance_valid
  {
    size_t item_size = sizeof(ros_message->beam_3_distance_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_1_fom_valid
  {
    size_t item_size = sizeof(ros_message->beam_1_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_2_fom_valid
  {
    size_t item_size = sizeof(ros_message->beam_2_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_3_fom_valid
  {
    size_t item_size = sizeof(ros_message->beam_3_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_velocity_valid
  {
    size_t item_size = sizeof(ros_message->x_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_velocity_valid
  {
    size_t item_size = sizeof(ros_message->y_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_velocity_valid
  {
    size_t item_size = sizeof(ros_message->z_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_fom_valid
  {
    size_t item_size = sizeof(ros_message->x_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_fom_valid
  {
    size_t item_size = sizeof(ros_message->y_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_fom_valid
  {
    size_t item_size = sizeof(ros_message->z_fom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serial_number
  {
    size_t item_size = sizeof(ros_message->serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sound_speed
  {
    size_t item_size = sizeof(ros_message->sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure
  {
    size_t item_size = sizeof(ros_message->pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_beam_1
  {
    size_t item_size = sizeof(ros_message->velocity_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_beam_2
  {
    size_t item_size = sizeof(ros_message->velocity_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_beam_3
  {
    size_t item_size = sizeof(ros_message->velocity_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_beam_1
  {
    size_t item_size = sizeof(ros_message->distance_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_beam_2
  {
    size_t item_size = sizeof(ros_message->distance_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_beam_3
  {
    size_t item_size = sizeof(ros_message->distance_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_beam_1
  {
    size_t item_size = sizeof(ros_message->fom_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_beam_2
  {
    size_t item_size = sizeof(ros_message->fom_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_beam_3
  {
    size_t item_size = sizeof(ros_message->fom_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_beam_1
  {
    size_t item_size = sizeof(ros_message->dt_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_beam_2
  {
    size_t item_size = sizeof(ros_message->dt_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_beam_3
  {
    size_t item_size = sizeof(ros_message->dt_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_vel_beam_1
  {
    size_t item_size = sizeof(ros_message->time_vel_beam_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_vel_beam_2
  {
    size_t item_size = sizeof(ros_message->time_vel_beam_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_vel_beam_3
  {
    size_t item_size = sizeof(ros_message->time_vel_beam_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_x
  {
    size_t item_size = sizeof(ros_message->velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_y
  {
    size_t item_size = sizeof(ros_message->velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_z
  {
    size_t item_size = sizeof(ros_message->velocity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_x
  {
    size_t item_size = sizeof(ros_message->fom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_y
  {
    size_t item_size = sizeof(ros_message->fom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_z
  {
    size_t item_size = sizeof(ros_message->fom_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dt_xyz
  {
    size_t item_size = sizeof(ros_message->dt_xyz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_vel_xyz
  {
    size_t item_size = sizeof(ros_message->time_vel_xyz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BottomTrack__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__BottomTrack(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__BottomTrack(
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

  // member: system_timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: posix_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: microseconds
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beam_1_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_2_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_3_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_1_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_2_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_3_distance_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_1_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_2_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beam_3_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: y_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: z_velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: y_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: z_fom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sound_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dt_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dt_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dt_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_vel_beam_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_vel_beam_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_vel_beam_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dt_xyz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_vel_xyz
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
    using DataType = interfaces__msg__BottomTrack;
    is_plain =
      (
      offsetof(DataType, time_vel_xyz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BottomTrack__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__BottomTrack(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BottomTrack = {
  "interfaces::msg",
  "BottomTrack",
  _BottomTrack__cdr_serialize,
  _BottomTrack__cdr_deserialize,
  _BottomTrack__get_serialized_size,
  _BottomTrack__max_serialized_size
};

static rosidl_message_type_support_t _BottomTrack__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BottomTrack,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, BottomTrack)() {
  return &_BottomTrack__type_support;
}

#if defined(__cplusplus)
}
#endif
