// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/INS.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/ins__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/ins__struct.h"
#include "interfaces/msg/detail/ins__functions.h"
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


using _INS__ros_msg_type = interfaces__msg__INS;

static bool _INS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _INS__ros_msg_type * ros_message = static_cast<const _INS__ros_msg_type *>(untyped_ros_message);
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

  // Field name: serial_number
  {
    cdr << ros_message->serial_number;
  }

  // Field name: operation_mode
  {
    cdr << ros_message->operation_mode;
  }

  // Field name: fom_ahrs
  {
    cdr << ros_message->fom_ahrs;
  }

  // Field name: fom_fc1
  {
    cdr << ros_message->fom_fc1;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: quaternion_w
  {
    cdr << ros_message->quaternion_w;
  }

  // Field name: quaternion_x
  {
    cdr << ros_message->quaternion_x;
  }

  // Field name: quaternion_y
  {
    cdr << ros_message->quaternion_y;
  }

  // Field name: quaternion_z
  {
    cdr << ros_message->quaternion_z;
  }

  // Field name: rotation_matrix_0
  {
    cdr << ros_message->rotation_matrix_0;
  }

  // Field name: rotation_matrix_1
  {
    cdr << ros_message->rotation_matrix_1;
  }

  // Field name: rotation_matrix_2
  {
    cdr << ros_message->rotation_matrix_2;
  }

  // Field name: rotation_matrix_3
  {
    cdr << ros_message->rotation_matrix_3;
  }

  // Field name: rotation_matrix_4
  {
    cdr << ros_message->rotation_matrix_4;
  }

  // Field name: rotation_matrix_5
  {
    cdr << ros_message->rotation_matrix_5;
  }

  // Field name: rotation_matrix_6
  {
    cdr << ros_message->rotation_matrix_6;
  }

  // Field name: rotation_matrix_7
  {
    cdr << ros_message->rotation_matrix_7;
  }

  // Field name: rotation_matrix_8
  {
    cdr << ros_message->rotation_matrix_8;
  }

  // Field name: declination
  {
    cdr << ros_message->declination;
  }

  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  // Field name: fom_ins
  {
    cdr << ros_message->fom_ins;
  }

  // Field name: lat_long_is_valid
  {
    cdr << (ros_message->lat_long_is_valid ? true : false);
  }

  // Field name: course_over_ground
  {
    cdr << ros_message->course_over_ground;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: position_frame_x
  {
    cdr << ros_message->position_frame_x;
  }

  // Field name: position_frame_y
  {
    cdr << ros_message->position_frame_y;
  }

  // Field name: position_frame_z
  {
    cdr << ros_message->position_frame_z;
  }

  // Field name: velocity_ned_x
  {
    cdr << ros_message->velocity_ned_x;
  }

  // Field name: velocity_ned_y
  {
    cdr << ros_message->velocity_ned_y;
  }

  // Field name: velocity_ned_z
  {
    cdr << ros_message->velocity_ned_z;
  }

  // Field name: velocity_nucleus_x
  {
    cdr << ros_message->velocity_nucleus_x;
  }

  // Field name: velocity_nucleus_y
  {
    cdr << ros_message->velocity_nucleus_y;
  }

  // Field name: velocity_nucleus_z
  {
    cdr << ros_message->velocity_nucleus_z;
  }

  // Field name: speed_over_ground
  {
    cdr << ros_message->speed_over_ground;
  }

  // Field name: turn_rate_x
  {
    cdr << ros_message->turn_rate_x;
  }

  // Field name: turn_rate_y
  {
    cdr << ros_message->turn_rate_y;
  }

  // Field name: turn_rate_z
  {
    cdr << ros_message->turn_rate_z;
  }

  return true;
}

static bool _INS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _INS__ros_msg_type * ros_message = static_cast<_INS__ros_msg_type *>(untyped_ros_message);
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

  // Field name: serial_number
  {
    cdr >> ros_message->serial_number;
  }

  // Field name: operation_mode
  {
    cdr >> ros_message->operation_mode;
  }

  // Field name: fom_ahrs
  {
    cdr >> ros_message->fom_ahrs;
  }

  // Field name: fom_fc1
  {
    cdr >> ros_message->fom_fc1;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: quaternion_w
  {
    cdr >> ros_message->quaternion_w;
  }

  // Field name: quaternion_x
  {
    cdr >> ros_message->quaternion_x;
  }

  // Field name: quaternion_y
  {
    cdr >> ros_message->quaternion_y;
  }

  // Field name: quaternion_z
  {
    cdr >> ros_message->quaternion_z;
  }

  // Field name: rotation_matrix_0
  {
    cdr >> ros_message->rotation_matrix_0;
  }

  // Field name: rotation_matrix_1
  {
    cdr >> ros_message->rotation_matrix_1;
  }

  // Field name: rotation_matrix_2
  {
    cdr >> ros_message->rotation_matrix_2;
  }

  // Field name: rotation_matrix_3
  {
    cdr >> ros_message->rotation_matrix_3;
  }

  // Field name: rotation_matrix_4
  {
    cdr >> ros_message->rotation_matrix_4;
  }

  // Field name: rotation_matrix_5
  {
    cdr >> ros_message->rotation_matrix_5;
  }

  // Field name: rotation_matrix_6
  {
    cdr >> ros_message->rotation_matrix_6;
  }

  // Field name: rotation_matrix_7
  {
    cdr >> ros_message->rotation_matrix_7;
  }

  // Field name: rotation_matrix_8
  {
    cdr >> ros_message->rotation_matrix_8;
  }

  // Field name: declination
  {
    cdr >> ros_message->declination;
  }

  // Field name: depth
  {
    cdr >> ros_message->depth;
  }

  // Field name: fom_ins
  {
    cdr >> ros_message->fom_ins;
  }

  // Field name: lat_long_is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lat_long_is_valid = tmp ? true : false;
  }

  // Field name: course_over_ground
  {
    cdr >> ros_message->course_over_ground;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr >> ros_message->pressure;
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: position_frame_x
  {
    cdr >> ros_message->position_frame_x;
  }

  // Field name: position_frame_y
  {
    cdr >> ros_message->position_frame_y;
  }

  // Field name: position_frame_z
  {
    cdr >> ros_message->position_frame_z;
  }

  // Field name: velocity_ned_x
  {
    cdr >> ros_message->velocity_ned_x;
  }

  // Field name: velocity_ned_y
  {
    cdr >> ros_message->velocity_ned_y;
  }

  // Field name: velocity_ned_z
  {
    cdr >> ros_message->velocity_ned_z;
  }

  // Field name: velocity_nucleus_x
  {
    cdr >> ros_message->velocity_nucleus_x;
  }

  // Field name: velocity_nucleus_y
  {
    cdr >> ros_message->velocity_nucleus_y;
  }

  // Field name: velocity_nucleus_z
  {
    cdr >> ros_message->velocity_nucleus_z;
  }

  // Field name: speed_over_ground
  {
    cdr >> ros_message->speed_over_ground;
  }

  // Field name: turn_rate_x
  {
    cdr >> ros_message->turn_rate_x;
  }

  // Field name: turn_rate_y
  {
    cdr >> ros_message->turn_rate_y;
  }

  // Field name: turn_rate_z
  {
    cdr >> ros_message->turn_rate_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__INS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _INS__ros_msg_type * ros_message = static_cast<const _INS__ros_msg_type *>(untyped_ros_message);
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
  // field.name serial_number
  {
    size_t item_size = sizeof(ros_message->serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operation_mode
  {
    size_t item_size = sizeof(ros_message->operation_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_ahrs
  {
    size_t item_size = sizeof(ros_message->fom_ahrs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_fc1
  {
    size_t item_size = sizeof(ros_message->fom_fc1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quaternion_w
  {
    size_t item_size = sizeof(ros_message->quaternion_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quaternion_x
  {
    size_t item_size = sizeof(ros_message->quaternion_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quaternion_y
  {
    size_t item_size = sizeof(ros_message->quaternion_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quaternion_z
  {
    size_t item_size = sizeof(ros_message->quaternion_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_0
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_1
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_2
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_3
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_4
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_5
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_6
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_7
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix_8
  {
    size_t item_size = sizeof(ros_message->rotation_matrix_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name declination
  {
    size_t item_size = sizeof(ros_message->declination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fom_ins
  {
    size_t item_size = sizeof(ros_message->fom_ins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_long_is_valid
  {
    size_t item_size = sizeof(ros_message->lat_long_is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name course_over_ground
  {
    size_t item_size = sizeof(ros_message->course_over_ground);
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
  // field.name altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_frame_x
  {
    size_t item_size = sizeof(ros_message->position_frame_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_frame_y
  {
    size_t item_size = sizeof(ros_message->position_frame_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_frame_z
  {
    size_t item_size = sizeof(ros_message->position_frame_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_ned_x
  {
    size_t item_size = sizeof(ros_message->velocity_ned_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_ned_y
  {
    size_t item_size = sizeof(ros_message->velocity_ned_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_ned_z
  {
    size_t item_size = sizeof(ros_message->velocity_ned_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_nucleus_x
  {
    size_t item_size = sizeof(ros_message->velocity_nucleus_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_nucleus_y
  {
    size_t item_size = sizeof(ros_message->velocity_nucleus_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_nucleus_z
  {
    size_t item_size = sizeof(ros_message->velocity_nucleus_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_over_ground
  {
    size_t item_size = sizeof(ros_message->speed_over_ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_rate_x
  {
    size_t item_size = sizeof(ros_message->turn_rate_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_rate_y
  {
    size_t item_size = sizeof(ros_message->turn_rate_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_rate_z
  {
    size_t item_size = sizeof(ros_message->turn_rate_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _INS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__INS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__INS(
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
  // member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: operation_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fom_ahrs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_fc1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quaternion_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quaternion_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quaternion_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quaternion_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotation_matrix_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: declination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fom_ins
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat_long_is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: course_over_ground
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
  // member: altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position_frame_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_frame_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_frame_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_ned_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_ned_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_ned_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_nucleus_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_nucleus_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_nucleus_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_over_ground
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_rate_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_rate_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_rate_z
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
    using DataType = interfaces__msg__INS;
    is_plain =
      (
      offsetof(DataType, turn_rate_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _INS__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__INS(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_INS = {
  "interfaces::msg",
  "INS",
  _INS__cdr_serialize,
  _INS__cdr_deserialize,
  _INS__get_serialized_size,
  _INS__max_serialized_size
};

static rosidl_message_type_support_t _INS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_INS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, INS)() {
  return &_INS__type_support;
}

#if defined(__cplusplus)
}
#endif
