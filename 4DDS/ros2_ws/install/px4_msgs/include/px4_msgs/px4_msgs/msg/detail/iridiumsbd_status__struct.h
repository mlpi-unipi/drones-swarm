// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IridiumsbdStatus in the package px4_msgs.
typedef struct px4_msgs__msg__IridiumsbdStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// timestamp of the last successful sbd session
  uint64_t last_heartbeat;
  /// current size of the tx buffer
  uint16_t tx_buf_write_index;
  /// the rx buffer is parsed up to that index
  uint16_t rx_buf_read_index;
  /// current size of the rx buffer
  uint16_t rx_buf_end_index;
  /// number of failed sbd sessions
  uint16_t failed_sbd_sessions;
  /// number of successful sbd sessions
  uint16_t successful_sbd_sessions;
  /// number of times the tx buffer was reset
  uint16_t num_tx_buf_reset;
  /// current signal quality, 0 is no signal, 5 the best
  uint8_t signal_quality;
  /// current state of the driver, see the satcom_state of IridiumSBD.h for the definition
  uint8_t state;
  /// indicates if a ring call is pending
  bool ring_pending;
  /// indicates if a tx buffer write is pending
  bool tx_buf_write_pending;
  /// indicates if a tx session is pending
  bool tx_session_pending;
  /// indicates if a rx read is pending
  bool rx_read_pending;
  /// indicates if a rx session is pending
  bool rx_session_pending;
} px4_msgs__msg__IridiumsbdStatus;

// Struct for a sequence of px4_msgs__msg__IridiumsbdStatus.
typedef struct px4_msgs__msg__IridiumsbdStatus__Sequence
{
  px4_msgs__msg__IridiumsbdStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__IridiumsbdStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_H_
