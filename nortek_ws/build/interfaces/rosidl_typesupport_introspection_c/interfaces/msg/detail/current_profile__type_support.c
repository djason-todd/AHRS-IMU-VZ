// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/current_profile__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/current_profile__functions.h"
#include "interfaces/msg/detail/current_profile__struct.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `velocity_data`
// Member `amplitude_data`
// Member `correlation_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__CurrentProfile__init(message_memory);
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_fini_function(void * message_memory)
{
  interfaces__msg__CurrentProfile__fini(message_memory);
}

size_t interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__velocity_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__velocity_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__velocity_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__velocity_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__velocity_data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__velocity_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__velocity_data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__velocity_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__amplitude_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__amplitude_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__amplitude_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__amplitude_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__amplitude_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__amplitude_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__amplitude_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__amplitude_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__correlation_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__correlation_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__correlation_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__correlation_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__correlation_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__correlation_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__correlation_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__correlation_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_member_array[15] = {
  {
    "system_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, system_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posix_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, posix_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "microseconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, microseconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sound_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, sound_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, cell_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blanking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, blanking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, number_of_cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ambiguity_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, ambiguity_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, velocity_data),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__velocity_data,  // size() function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__velocity_data,  // get_const(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__velocity_data,  // get(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__velocity_data,  // fetch(index, &value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__velocity_data,  // assign(index, value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__velocity_data  // resize(index) function pointer
  },
  {
    "amplitude_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, amplitude_data),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__amplitude_data,  // size() function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__amplitude_data,  // get_const(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__amplitude_data,  // get(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__amplitude_data,  // fetch(index, &value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__amplitude_data,  // assign(index, value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__amplitude_data  // resize(index) function pointer
  },
  {
    "correlation_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__CurrentProfile, correlation_data),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__size_function__CurrentProfile__correlation_data,  // size() function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_const_function__CurrentProfile__correlation_data,  // get_const(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__get_function__CurrentProfile__correlation_data,  // get(index) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__fetch_function__CurrentProfile__correlation_data,  // fetch(index, &value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__assign_function__CurrentProfile__correlation_data,  // assign(index, value) function pointer
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__resize_function__CurrentProfile__correlation_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_members = {
  "interfaces__msg",  // message namespace
  "CurrentProfile",  // message name
  15,  // number of fields
  sizeof(interfaces__msg__CurrentProfile),
  interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_member_array,  // message members
  interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_type_support_handle = {
  0,
  &interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, CurrentProfile)() {
  interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__CurrentProfile__rosidl_typesupport_introspection_c__CurrentProfile_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
