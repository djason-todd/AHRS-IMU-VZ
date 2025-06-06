// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
#define INTERFACES__MSG__DETAIL__IMU__STRUCT_H_

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

/// Struct defined in msg/IMU in the package interfaces.
typedef struct interfaces__msg__IMU
{
  builtin_interfaces__msg__Time system_timestamp;
  bool posix_time;
  uint32_t timestamp;
  uint32_t microseconds;
  bool is_valid;
  bool has_data_path_overrun;
  bool has_flash_update_failure;
  bool has_spi_com_error;
  bool has_low_voltage;
  bool has_sensor_failure;
  bool has_memory_failure;
  bool has_gyro_1_failure;
  bool has_gyro_2_failure;
  bool has_accelerometer_failure;
  float accelerometer_x;
  float accelerometer_y;
  float accelerometer_z;
  float gyro_x;
  float gyro_y;
  float gyro_z;
  float temperature;
} interfaces__msg__IMU;

// Struct for a sequence of interfaces__msg__IMU.
typedef struct interfaces__msg__IMU__Sequence
{
  interfaces__msg__IMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__IMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
