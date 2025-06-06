// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/magnetometer__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/magnetometer__struct.h"
#include "interfaces/msg/detail/magnetometer__functions.h"
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


using _Magnetometer__ros_msg_type = interfaces__msg__Magnetometer;

static bool _Magnetometer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Magnetometer__ros_msg_type * ros_message = static_cast<const _Magnetometer__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_compensated_for_hard_iron
  {
    cdr << (ros_message->is_compensated_for_hard_iron ? true : false);
  }

  // Field name: dvl_active
  {
    cdr << (ros_message->dvl_active ? true : false);
  }

  // Field name: dvl_acoustics_active
  {
    cdr << (ros_message->dvl_acoustics_active ? true : false);
  }

  // Field name: dvl_transmitter_active
  {
    cdr << (ros_message->dvl_transmitter_active ? true : false);
  }

  // Field name: magnetometer_x
  {
    cdr << ros_message->magnetometer_x;
  }

  // Field name: magnetometer_y
  {
    cdr << ros_message->magnetometer_y;
  }

  // Field name: magnetometer_z
  {
    cdr << ros_message->magnetometer_z;
  }

  return true;
}

static bool _Magnetometer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Magnetometer__ros_msg_type * ros_message = static_cast<_Magnetometer__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_compensated_for_hard_iron
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_compensated_for_hard_iron = tmp ? true : false;
  }

  // Field name: dvl_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dvl_active = tmp ? true : false;
  }

  // Field name: dvl_acoustics_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dvl_acoustics_active = tmp ? true : false;
  }

  // Field name: dvl_transmitter_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dvl_transmitter_active = tmp ? true : false;
  }

  // Field name: magnetometer_x
  {
    cdr >> ros_message->magnetometer_x;
  }

  // Field name: magnetometer_y
  {
    cdr >> ros_message->magnetometer_y;
  }

  // Field name: magnetometer_z
  {
    cdr >> ros_message->magnetometer_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__Magnetometer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Magnetometer__ros_msg_type * ros_message = static_cast<const _Magnetometer__ros_msg_type *>(untyped_ros_message);
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
  // field.name is_compensated_for_hard_iron
  {
    size_t item_size = sizeof(ros_message->is_compensated_for_hard_iron);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dvl_active
  {
    size_t item_size = sizeof(ros_message->dvl_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dvl_acoustics_active
  {
    size_t item_size = sizeof(ros_message->dvl_acoustics_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dvl_transmitter_active
  {
    size_t item_size = sizeof(ros_message->dvl_transmitter_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_x
  {
    size_t item_size = sizeof(ros_message->magnetometer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_y
  {
    size_t item_size = sizeof(ros_message->magnetometer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name magnetometer_z
  {
    size_t item_size = sizeof(ros_message->magnetometer_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Magnetometer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__Magnetometer(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__Magnetometer(
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
  // member: is_compensated_for_hard_iron
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dvl_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dvl_acoustics_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dvl_transmitter_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: magnetometer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: magnetometer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: magnetometer_z
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
    using DataType = interfaces__msg__Magnetometer;
    is_plain =
      (
      offsetof(DataType, magnetometer_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Magnetometer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__Magnetometer(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Magnetometer = {
  "interfaces::msg",
  "Magnetometer",
  _Magnetometer__cdr_serialize,
  _Magnetometer__cdr_deserialize,
  _Magnetometer__get_serialized_size,
  _Magnetometer__max_serialized_size
};

static rosidl_message_type_support_t _Magnetometer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Magnetometer,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, Magnetometer)() {
  return &_Magnetometer__type_support;
}

#if defined(__cplusplus)
}
#endif
