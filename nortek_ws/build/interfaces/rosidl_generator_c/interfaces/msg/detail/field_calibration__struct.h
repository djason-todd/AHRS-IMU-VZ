// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/FieldCalibration.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_H_
#define INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_H_

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

/// Struct defined in msg/FieldCalibration in the package interfaces.
typedef struct interfaces__msg__FieldCalibration
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  bool points_used_in_estimation;
  float hard_iron_x;
  float hard_iron_y;
  float hard_iron_z;
  float s_axis_0;
  float s_axis_1;
  float s_axis_2;
  float s_axis_3;
  float s_axis_4;
  float s_axis_5;
  float s_axis_6;
  float s_axis_7;
  float s_axis_8;
  float new_point_x;
  float new_point_y;
  float new_point_z;
  float fom_field_calibration;
  float coverage;
} interfaces__msg__FieldCalibration;

// Struct for a sequence of interfaces__msg__FieldCalibration.
typedef struct interfaces__msg__FieldCalibration__Sequence
{
  interfaces__msg__FieldCalibration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__FieldCalibration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FIELD_CALIBRATION__STRUCT_H_
