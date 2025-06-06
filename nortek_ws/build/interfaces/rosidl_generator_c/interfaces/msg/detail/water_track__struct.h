// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/WaterTrack.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_TRACK__STRUCT_H_
#define INTERFACES__MSG__DETAIL__WATER_TRACK__STRUCT_H_

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

/// Struct defined in msg/WaterTrack in the package interfaces.
typedef struct interfaces__msg__WaterTrack
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  bool beam_1_velocity_valid;
  bool beam_2_velocity_valid;
  bool beam_3_velocity_valid;
  bool beam_1_distance_valid;
  bool beam_2_distance_valid;
  bool beam_3_distance_valid;
  bool beam_1_fom_valid;
  bool beam_2_fom_valid;
  bool beam_3_fom_valid;
  bool x_velocity_valid;
  bool y_velocity_valid;
  bool z_velocity_valid;
  bool x_fom_valid;
  bool y_fom_valid;
  bool z_fom_valid;
  uint32_t serial_number;
  float sound_speed;
  float temperature;
  float pressure;
  float velocity_beam_1;
  float velocity_beam_2;
  float velocity_beam_3;
  float distance_beam_1;
  float distance_beam_2;
  float distance_beam_3;
  float fom_beam_1;
  float fom_beam_2;
  float fom_beam_3;
  float dt_beam_1;
  float dt_beam_2;
  float dt_beam_3;
  float time_vel_beam_1;
  float time_vel_beam_2;
  float time_vel_beam_3;
  float velocity_x;
  float velocity_y;
  float velocity_z;
  float fom_x;
  float fom_y;
  float fom_z;
  float dt_xyz;
  float time_vel_xyz;
} interfaces__msg__WaterTrack;

// Struct for a sequence of interfaces__msg__WaterTrack.
typedef struct interfaces__msg__WaterTrack__Sequence
{
  interfaces__msg__WaterTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__WaterTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__WATER_TRACK__STRUCT_H_
