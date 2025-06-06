// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_H_
#define INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_H_

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

/// Struct defined in msg/Magnetometer in the package interfaces.
typedef struct interfaces__msg__Magnetometer
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  bool is_compensated_for_hard_iron;
  bool dvl_active;
  bool dvl_acoustics_active;
  bool dvl_transmitter_active;
  float magnetometer_x;
  float magnetometer_y;
  float magnetometer_z;
} interfaces__msg__Magnetometer;

// Struct for a sequence of interfaces__msg__Magnetometer.
typedef struct interfaces__msg__Magnetometer__Sequence
{
  interfaces__msg__Magnetometer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Magnetometer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__MAGNETOMETER__STRUCT_H_
