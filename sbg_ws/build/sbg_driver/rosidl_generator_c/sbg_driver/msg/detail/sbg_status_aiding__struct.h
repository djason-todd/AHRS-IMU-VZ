// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgStatusAiding in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * SbgStatus submessage
 */
typedef struct sbg_driver__msg__SbgStatusAiding
{
  /// AIDING_GPS1_POS_RECV true when valid GPS 1 position data is received
  bool gps1_pos_recv;
  /// AIDING_GPS1_VEL_RECV true when valid GPS 1 velocity data is received
  bool gps1_vel_recv;
  /// AIDING_GPS1_HDT_RECV true when valid GPS 1 true heading data is received
  bool gps1_hdt_recv;
  /// AIDING_GPS1_UTC_RECV true when valid GPS 1 UTC time data is received
  bool gps1_utc_recv;
  /// AIDING_GPS2_POS_RECV true when valid GPS 2 position data is received
  bool gps2_pos_recv;
  /// AIDING_GPS2_VEL_RECV true when valid GPS 2 velocity data is received
  bool gps2_vel_recv;
  /// AIDING_GPS2_HDT_RECV true when valid GPS 2 true heading data is received
  bool gps2_hdt_recv;
  /// AIDING_GPS2_UTC_RECV true when valid GPS 2 UTC time data is received
  bool gps2_utc_recv;
  /// AIDING_MAG_RECV true when valid Magnetometer data is received
  bool mag_recv;
  /// AIDING_ODO_RECV true when Odometer pulse is received
  bool odo_recv;
  /// AIDING_DVL_RECV true when valid DVL data is received
  bool dvl_recv;
  /// AIDING_USBL_RECV true when valid USBL data is received
  bool usbl_recv;
  /// AIDING_DEPTH_RECV true when valid Depth Log data is received
  bool depth_recv;
  /// AIR_DATA_RECV true when valid Air Data (altitude and/or true airspeed) is received
  bool air_data_recv;
  /// USER_POS_RECV true when valid user position data is received
  bool user_pos_recv;
  /// USER_VEL_RECV true when valid user velocity data is received
  bool user_vel_recv;
  /// USER_HEADING_RECV true when valid user heading data is received
  bool user_heading_recv;
} sbg_driver__msg__SbgStatusAiding;

// Struct for a sequence of sbg_driver__msg__SbgStatusAiding.
typedef struct sbg_driver__msg__SbgStatusAiding__Sequence
{
  sbg_driver__msg__SbgStatusAiding * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgStatusAiding__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_H_
