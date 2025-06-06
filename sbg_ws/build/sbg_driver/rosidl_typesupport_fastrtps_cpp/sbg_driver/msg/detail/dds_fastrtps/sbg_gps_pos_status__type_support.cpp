// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_gps_pos_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.hpp"

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

namespace sbg_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_serialize(
  const sbg_driver::msg::SbgGpsPosStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: type
  cdr << ros_message.type;
  // Member: ifm
  cdr << ros_message.ifm;
  // Member: spoofing
  cdr << ros_message.spoofing;
  // Member: osnma
  cdr << ros_message.osnma;
  // Member: gps_l1_used
  cdr << (ros_message.gps_l1_used ? true : false);
  // Member: gps_l2_used
  cdr << (ros_message.gps_l2_used ? true : false);
  // Member: gps_l5_used
  cdr << (ros_message.gps_l5_used ? true : false);
  // Member: glo_l1_used
  cdr << (ros_message.glo_l1_used ? true : false);
  // Member: glo_l2_used
  cdr << (ros_message.glo_l2_used ? true : false);
  // Member: glo_l3_used
  cdr << (ros_message.glo_l3_used ? true : false);
  // Member: gal_e1_used
  cdr << (ros_message.gal_e1_used ? true : false);
  // Member: gal_e5a_used
  cdr << (ros_message.gal_e5a_used ? true : false);
  // Member: gal_e5b_used
  cdr << (ros_message.gal_e5b_used ? true : false);
  // Member: gal_e5alt_used
  cdr << (ros_message.gal_e5alt_used ? true : false);
  // Member: gal_e6_used
  cdr << (ros_message.gal_e6_used ? true : false);
  // Member: bds_b1_used
  cdr << (ros_message.bds_b1_used ? true : false);
  // Member: bds_b2_used
  cdr << (ros_message.bds_b2_used ? true : false);
  // Member: bds_b3_used
  cdr << (ros_message.bds_b3_used ? true : false);
  // Member: qzss_l1_used
  cdr << (ros_message.qzss_l1_used ? true : false);
  // Member: qzss_l2_used
  cdr << (ros_message.qzss_l2_used ? true : false);
  // Member: qzss_l5_used
  cdr << (ros_message.qzss_l5_used ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgGpsPosStatus & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: type
  cdr >> ros_message.type;

  // Member: ifm
  cdr >> ros_message.ifm;

  // Member: spoofing
  cdr >> ros_message.spoofing;

  // Member: osnma
  cdr >> ros_message.osnma;

  // Member: gps_l1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l1_used = tmp ? true : false;
  }

  // Member: gps_l2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l2_used = tmp ? true : false;
  }

  // Member: gps_l5_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l5_used = tmp ? true : false;
  }

  // Member: glo_l1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glo_l1_used = tmp ? true : false;
  }

  // Member: glo_l2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glo_l2_used = tmp ? true : false;
  }

  // Member: glo_l3_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glo_l3_used = tmp ? true : false;
  }

  // Member: gal_e1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e1_used = tmp ? true : false;
  }

  // Member: gal_e5a_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e5a_used = tmp ? true : false;
  }

  // Member: gal_e5b_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e5b_used = tmp ? true : false;
  }

  // Member: gal_e5alt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e5alt_used = tmp ? true : false;
  }

  // Member: gal_e6_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e6_used = tmp ? true : false;
  }

  // Member: bds_b1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bds_b1_used = tmp ? true : false;
  }

  // Member: bds_b2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bds_b2_used = tmp ? true : false;
  }

  // Member: bds_b3_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bds_b3_used = tmp ? true : false;
  }

  // Member: qzss_l1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.qzss_l1_used = tmp ? true : false;
  }

  // Member: qzss_l2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.qzss_l2_used = tmp ? true : false;
  }

  // Member: qzss_l5_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.qzss_l5_used = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgGpsPosStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ifm
  {
    size_t item_size = sizeof(ros_message.ifm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spoofing
  {
    size_t item_size = sizeof(ros_message.spoofing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: osnma
  {
    size_t item_size = sizeof(ros_message.osnma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l1_used
  {
    size_t item_size = sizeof(ros_message.gps_l1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l2_used
  {
    size_t item_size = sizeof(ros_message.gps_l2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l5_used
  {
    size_t item_size = sizeof(ros_message.gps_l5_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_l1_used
  {
    size_t item_size = sizeof(ros_message.glo_l1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_l2_used
  {
    size_t item_size = sizeof(ros_message.glo_l2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_l3_used
  {
    size_t item_size = sizeof(ros_message.glo_l3_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e1_used
  {
    size_t item_size = sizeof(ros_message.gal_e1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e5a_used
  {
    size_t item_size = sizeof(ros_message.gal_e5a_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e5b_used
  {
    size_t item_size = sizeof(ros_message.gal_e5b_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e5alt_used
  {
    size_t item_size = sizeof(ros_message.gal_e5alt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e6_used
  {
    size_t item_size = sizeof(ros_message.gal_e6_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bds_b1_used
  {
    size_t item_size = sizeof(ros_message.bds_b1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bds_b2_used
  {
    size_t item_size = sizeof(ros_message.bds_b2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bds_b3_used
  {
    size_t item_size = sizeof(ros_message.bds_b3_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qzss_l1_used
  {
    size_t item_size = sizeof(ros_message.qzss_l1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qzss_l2_used
  {
    size_t item_size = sizeof(ros_message.qzss_l2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qzss_l5_used
  {
    size_t item_size = sizeof(ros_message.qzss_l5_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgGpsPosStatus(
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


  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ifm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spoofing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: osnma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l2_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l5_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_l1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_l2_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_l3_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e5a_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e5b_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e5alt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e6_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bds_b1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bds_b2_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bds_b3_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: qzss_l1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: qzss_l2_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: qzss_l5_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sbg_driver::msg::SbgGpsPosStatus;
    is_plain =
      (
      offsetof(DataType, qzss_l5_used) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgGpsPosStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgGpsPosStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgGpsPosStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgGpsPosStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgGpsPosStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgGpsPosStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgGpsPosStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgGpsPosStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgGpsPosStatus__callbacks = {
  "sbg_driver::msg",
  "SbgGpsPosStatus",
  _SbgGpsPosStatus__cdr_serialize,
  _SbgGpsPosStatus__cdr_deserialize,
  _SbgGpsPosStatus__get_serialized_size,
  _SbgGpsPosStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgGpsPosStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgGpsPosStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sbg_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sbg_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<sbg_driver::msg::SbgGpsPosStatus>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgGpsPosStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgGpsPosStatus)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgGpsPosStatus__handle;
}

#ifdef __cplusplus
}
#endif
