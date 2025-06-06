// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/magnetometer__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces/msg/detail/magnetometer__struct.hpp"

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
  const interfaces::msg::Magnetometer & ros_message,
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
  // Member: is_compensated_for_hard_iron
  cdr << (ros_message.is_compensated_for_hard_iron ? true : false);
  // Member: dvl_active
  cdr << (ros_message.dvl_active ? true : false);
  // Member: dvl_acoustics_active
  cdr << (ros_message.dvl_acoustics_active ? true : false);
  // Member: dvl_transmitter_active
  cdr << (ros_message.dvl_transmitter_active ? true : false);
  // Member: magnetometer_x
  cdr << ros_message.magnetometer_x;
  // Member: magnetometer_y
  cdr << ros_message.magnetometer_y;
  // Member: magnetometer_z
  cdr << ros_message.magnetometer_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces::msg::Magnetometer & ros_message)
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

  // Member: is_compensated_for_hard_iron
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_compensated_for_hard_iron = tmp ? true : false;
  }

  // Member: dvl_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_active = tmp ? true : false;
  }

  // Member: dvl_acoustics_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_acoustics_active = tmp ? true : false;
  }

  // Member: dvl_transmitter_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_transmitter_active = tmp ? true : false;
  }

  // Member: magnetometer_x
  cdr >> ros_message.magnetometer_x;

  // Member: magnetometer_y
  cdr >> ros_message.magnetometer_y;

  // Member: magnetometer_z
  cdr >> ros_message.magnetometer_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
get_serialized_size(
  const interfaces::msg::Magnetometer & ros_message,
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
  // Member: is_compensated_for_hard_iron
  {
    size_t item_size = sizeof(ros_message.is_compensated_for_hard_iron);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_active
  {
    size_t item_size = sizeof(ros_message.dvl_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_acoustics_active
  {
    size_t item_size = sizeof(ros_message.dvl_acoustics_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_transmitter_active
  {
    size_t item_size = sizeof(ros_message.dvl_transmitter_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_x
  {
    size_t item_size = sizeof(ros_message.magnetometer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_y
  {
    size_t item_size = sizeof(ros_message.magnetometer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: magnetometer_z
  {
    size_t item_size = sizeof(ros_message.magnetometer_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces
max_serialized_size_Magnetometer(
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

  // Member: is_compensated_for_hard_iron
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_acoustics_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_transmitter_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: magnetometer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: magnetometer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: magnetometer_z
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
    using DataType = interfaces::msg::Magnetometer;
    is_plain =
      (
      offsetof(DataType, magnetometer_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Magnetometer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces::msg::Magnetometer *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Magnetometer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces::msg::Magnetometer *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Magnetometer__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces::msg::Magnetometer *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Magnetometer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Magnetometer(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Magnetometer__callbacks = {
  "interfaces::msg",
  "Magnetometer",
  _Magnetometer__cdr_serialize,
  _Magnetometer__cdr_deserialize,
  _Magnetometer__get_serialized_size,
  _Magnetometer__max_serialized_size
};

static rosidl_message_type_support_t _Magnetometer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Magnetometer__callbacks,
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
get_message_type_support_handle<interfaces::msg::Magnetometer>()
{
  return &interfaces::msg::typesupport_fastrtps_cpp::_Magnetometer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, msg, Magnetometer)() {
  return &interfaces::msg::typesupport_fastrtps_cpp::_Magnetometer__handle;
}

#ifdef __cplusplus
}
#endif
