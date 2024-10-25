// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/UlogStreamAck.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACK_TIMEOUT'.
/**
  * timeout waiting for an ack until we retry to send the message
 */
enum
{
  px4_msgs__msg__UlogStreamAck__ACK_TIMEOUT = 50l
};

/// Constant 'ACK_MAX_TRIES'.
/**
  * maximum amount of tries to (re-)send a message, each time waiting ACK_TIMEOUT ms
 */
enum
{
  px4_msgs__msg__UlogStreamAck__ACK_MAX_TRIES = 50l
};

/// Struct defined in msg/UlogStreamAck in the package px4_msgs.
/**
  * Ack a previously sent ulog_stream message that had
  * the NEED_ACK flag set
 */
typedef struct px4_msgs__msg__UlogStreamAck
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint16_t msg_sequence;
} px4_msgs__msg__UlogStreamAck;

// Struct for a sequence of px4_msgs__msg__UlogStreamAck.
typedef struct px4_msgs__msg__UlogStreamAck__Sequence
{
  px4_msgs__msg__UlogStreamAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__UlogStreamAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_H_
