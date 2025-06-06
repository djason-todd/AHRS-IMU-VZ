// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'velocity_data'
// Member 'amplitude_data'
// Member 'correlation_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CurrentProfile in the package interfaces.
typedef struct interfaces__msg__CurrentProfile
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  uint32_t serial_number;
  float sound_velocity;
  float temperature;
  float pressure;
  float cell_size;
  float blanking;
  uint16_t number_of_cells;
  uint16_t ambiguity_velocity;
  rosidl_runtime_c__int16__Sequence velocity_data;
  rosidl_runtime_c__uint8__Sequence amplitude_data;
  rosidl_runtime_c__uint8__Sequence correlation_data;
} interfaces__msg__CurrentProfile;

// Struct for a sequence of interfaces__msg__CurrentProfile.
typedef struct interfaces__msg__CurrentProfile__Sequence
{
  interfaces__msg__CurrentProfile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__CurrentProfile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__CURRENT_PROFILE__STRUCT_H_
