// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Altimeter.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_H_

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

/// Struct defined in msg/Altimeter in the package interfaces.
typedef struct interfaces__msg__Altimeter
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  bool altimeter_distance_valid;
  bool altimeter_quality_valid;
  bool pressure_valid;
  bool temperature_valid;
  uint32_t serial_number;
  float sound_speed;
  float temperature;
  float pressure;
  float altimeter_distance;
  uint16_t altimeter_quality;
} interfaces__msg__Altimeter;

// Struct for a sequence of interfaces__msg__Altimeter.
typedef struct interfaces__msg__Altimeter__Sequence
{
  interfaces__msg__Altimeter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Altimeter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ALTIMETER__STRUCT_H_
