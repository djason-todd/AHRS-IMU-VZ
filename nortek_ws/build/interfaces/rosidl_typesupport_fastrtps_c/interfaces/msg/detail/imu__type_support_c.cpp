// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/imu__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/imu__struct.h"
#include "interfaces/msg/detail/imu__functions.h"
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


using _IMU__ros_msg_type = interfaces__msg__IMU;

static bool _IMU__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IMU__ros_msg_type * ros_message = static_cast<const _IMU__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_valid
  {
    cdr << (ros_message->is_valid ? true : false);
  }

  // Field name: has_data_path_overrun
  {
    cdr << (ros_message->has_data_path_overrun ? true : false);
  }

  // Field name: has_flash_update_failure
  {
    cdr << (ros_message->has_flash_update_failure ? true : false);
  }

  // Field name: has_spi_com_error
  {
    cdr << (ros_message->has_spi_com_error ? true : false);
  }

  // Field name: has_low_voltage
  {
    cdr << (ros_message->has_low_voltage ? true : false);
  }

  // Field name: has_sensor_failure
  {
    cdr << (ros_message->has_sensor_failure ? true : false);
  }

  // Field name: has_memory_failure
  {
    cdr << (ros_message->has_memory_failure ? true : false);
  }

  // Field name: has_gyro_1_failure
  {
    cdr << (ros_message->has_gyro_1_failure ? true : false);
  }

  // Field name: has_gyro_2_failure
  {
    cdr << (ros_message->has_gyro_2_failure ? true : false);
  }

  // Field name: has_accelerometer_failure
  {
    cdr << (ros_message->has_accelerometer_failure ? true : false);
  }

  // Field name: accelerometer_x
  {
    cdr << ros_message->accelerometer_x;
  }

  // Field name: accelerometer_y
  {
    cdr << ros_message->accelerometer_y;
  }

  // Field name: accelerometer_z
  {
    cdr << ros_message->accelerometer_z;
  }

  // Field name: gyro_x
  {
    cdr << ros_message->gyro_x;
  }

  // Field name: gyro_y
  {
    cdr << ros_message->gyro_y;
  }

  // Field name: gyro_z
  {
    cdr << ros_message->gyro_z;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

static bool _IMU__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IMU__ros_msg_type * ros_message = static_cast<_IMU__ros_msg_type *>(untyped_ros_message);
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

  // Field name: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid = tmp ? true : false;
  }

  // Field name: has_data_path_overrun
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_data_path_overrun = tmp ? true : false;
  }

  // Field name: has_flash_update_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_flash_update_failure = tmp ? true : false;
  }

  // Field name: has_spi_com_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_spi_com_error = tmp ? true : false;
  }

  // Field name: has_low_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_low_voltage = tmp ? true : false;
  }

  // Field name: has_sensor_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_sensor_failure = tmp ? true : false;
  }

  // Field name: has_memory_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_memory_failure = tmp ? true : false;
  }

  // Field name: has_gyro_1_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_gyro_1_failure = tmp ? true : false;
  }

  // Field name: has_gyro_2_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_gyro_2_failure = tmp ? true : false;
  }

  // Field name: has_accelerometer_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_accelerometer_failure = tmp ? true : false;
  }

  // Field name: accelerometer_x
  {
    cdr >> ros_message->accelerometer_x;
  }

  // Field name: accelerometer_y
  {
    cdr >> ros_message->accelerometer_y;
  }

  // Field name: accelerometer_z
  {
    cdr >> ros_message->accelerometer_z;
  }

  // Field name: gyro_x
  {
    cdr >> ros_message->gyro_x;
  }

  // Field name: gyro_y
  {
    cdr >> ros_message->gyro_y;
  }

  // Field name: gyro_z
  {
    cdr >> ros_message->gyro_z;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__IMU(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IMU__ros_msg_type * ros_message = static_cast<const _IMU__ros_msg_type *>(untyped_ros_message);
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
  // field.name is_valid
  {
    size_t item_size = sizeof(ros_message->is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_data_path_overrun
  {
    size_t item_size = sizeof(ros_message->has_data_path_overrun);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_flash_update_failure
  {
    size_t item_size = sizeof(ros_message->has_flash_update_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_spi_com_error
  {
    size_t item_size = sizeof(ros_message->has_spi_com_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_low_voltage
  {
    size_t item_size = sizeof(ros_message->has_low_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_sensor_failure
  {
    size_t item_size = sizeof(ros_message->has_sensor_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_memory_failure
  {
    size_t item_size = sizeof(ros_message->has_memory_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_gyro_1_failure
  {
    size_t item_size = sizeof(ros_message->has_gyro_1_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_gyro_2_failure
  {
    size_t item_size = sizeof(ros_message->has_gyro_2_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_accelerometer_failure
  {
    size_t item_size = sizeof(ros_message->has_accelerometer_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerometer_x
  {
    size_t item_size = sizeof(ros_message->accelerometer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerometer_y
  {
    size_t item_size = sizeof(ros_message->accelerometer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerometer_z
  {
    size_t item_size = sizeof(ros_message->accelerometer_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_x
  {
    size_t item_size = sizeof(ros_message->gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_y
  {
    size_t item_size = sizeof(ros_message->gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_z
  {
    size_t item_size = sizeof(ros_message->gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IMU__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__IMU(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__IMU(
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
  // member: is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_data_path_overrun
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_flash_update_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_spi_com_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_low_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_sensor_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_memory_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_gyro_1_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_gyro_2_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_accelerometer_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accelerometer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accelerometer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accelerometer_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_z
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__IMU;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IMU__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__IMU(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IMU = {
  "interfaces::msg",
  "IMU",
  _IMU__cdr_serialize,
  _IMU__cdr_deserialize,
  _IMU__get_serialized_size,
  _IMU__max_serialized_size
};

static rosidl_message_type_support_t _IMU__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IMU,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, IMU)() {
  return &_IMU__type_support;
}

#if defined(__cplusplus)
}
#endif
