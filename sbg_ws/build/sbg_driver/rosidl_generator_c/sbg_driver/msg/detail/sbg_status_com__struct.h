// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgStatusCom in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * SbgStatus submessage
 */
typedef struct sbg_driver__msg__SbgStatusCom
{
  /// PORT A: False in case of low level communication error.
  bool port_a;
  /// PORT B: False in case of low level communication error.
  bool port_b;
  /// PORT C: False in case of low level communication error.
  bool port_c;
  /// PORT D: False in case of low level communication error.
  bool port_d;
  /// PORT E: False in case of low level communication error.
  bool port_e;
  /// PORT A RX: False in case of saturation on PORT A input
  bool port_a_rx;
  /// PORT A TX: False in case of saturation on PORT A output
  bool port_a_tx;
  /// PORT B RX: False in case of saturation on PORT B input
  bool port_b_rx;
  /// PORT B TX: False in case of saturation on PORT B output
  bool port_b_tx;
  /// PORT C RX: False in case of saturation on PORT C input
  bool port_c_rx;
  /// PORT C TX: False in case of saturation on PORT C output
  bool port_c_tx;
  /// PORT D RX: False in case of saturation on PORT D input
  bool port_d_rx;
  /// PORT D TX: False in case of saturation on PORT D output
  bool port_d_tx;
  /// PORT E RX: False in case of saturation on PORT E input
  bool port_e_rx;
  /// PORT E TX: False in case of saturation on PORT E output
  bool port_e_tx;
  /// ETH 0: False in case of low level communication error.
  bool eth_0;
  /// ETH 1: False in case of low level communication error.
  bool eth_1;
  /// ETH 2: False in case of low level communication error.
  bool eth_2;
  /// ETH 3: False in case of low level communication error.
  bool eth_3;
  /// ETH 4: False in case of low level communication error.
  bool eth_4;
  /// ETH 0 RX: False in case of error on ETH0 input.
  bool eth_0_rx;
  /// ETH 0 TX: False in case of error on ETH0 output.
  bool eth_0_tx;
  /// ETH 1 RX: False in case of error on ETH1 input.
  bool eth_1_rx;
  /// ETH 1 TX: False in case of error on ETH1 output.
  bool eth_1_tx;
  /// ETH 2 RX: False in case of error on ETH2 input.
  bool eth_2_rx;
  /// ETH 2 TX: False in case of error on ETH2 output.
  bool eth_2_tx;
  /// ETH 3 RX: False in case of error on ETH3 input.
  bool eth_3_rx;
  /// ETH 3 TX: False in case of error on ETH3 output.
  bool eth_3_tx;
  /// ETH 4 RX: False in case of error on ETH4 input.
  bool eth_4_rx;
  /// ETH 4 TX: False in case of error on ETH4 output.
  bool eth_4_tx;
  /// CAN RX: False in case of saturation on CAN Bus output buffer
  bool can_rx;
  /// CAN TX: False in case of saturation on CAN Bus input buffer
  bool can_tx;
  /// CAN BUS
  /// 0 CAN BUS OFF   Bus OFF operation due to too much errors.
  /// 1 CAN BUS TX_RX_ERR  Transmit or received error.
  /// 2 CAN BUS OK    The CAN bus is working correctly.
  /// 3 CAN BUS ERROR   A general error has occurred on the CAN bus.
  uint8_t can_status;
} sbg_driver__msg__SbgStatusCom;

// Struct for a sequence of sbg_driver__msg__SbgStatusCom.
typedef struct sbg_driver__msg__SbgStatusCom__Sequence
{
  sbg_driver__msg__SbgStatusCom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgStatusCom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__STRUCT_H_
