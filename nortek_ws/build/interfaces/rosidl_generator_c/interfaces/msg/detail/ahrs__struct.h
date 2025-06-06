// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/AHRS.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AHRS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__AHRS__STRUCT_H_

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

/// Struct defined in msg/AHRS in the package interfaces.
typedef struct interfaces__msg__AHRS
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  uint32_t serial_number;
  uint8_t operation_mode;
  float fom_ahrs;
  float fom_fc1;
  float roll;
  float pitch;
  float heading;
  float quaternion_w;
  float quaternion_x;
  float quaternion_y;
  float quaternion_z;
  float rotation_matrix_0;
  float rotation_matrix_1;
  float rotation_matrix_2;
  float rotation_matrix_3;
  float rotation_matrix_4;
  float rotation_matrix_5;
  float rotation_matrix_6;
  float rotation_matrix_7;
  float rotation_matrix_8;
  float declination;
  float depth;
} interfaces__msg__AHRS;

// Struct for a sequence of interfaces__msg__AHRS.
typedef struct interfaces__msg__AHRS__Sequence
{
  interfaces__msg__AHRS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__AHRS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__AHRS__STRUCT_H_
