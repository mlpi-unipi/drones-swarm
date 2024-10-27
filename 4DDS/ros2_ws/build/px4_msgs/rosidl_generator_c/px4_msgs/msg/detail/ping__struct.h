// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PING__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ping in the package px4_msgs.
typedef struct px4_msgs__msg__Ping
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Timestamp of the ping packet
  uint64_t ping_time;
  /// Sequence number of the ping packet
  uint32_t ping_sequence;
  /// Number of dropped ping packets
  uint32_t dropped_packets;
  /// Round trip time (in ms)
  float rtt_ms;
  /// System ID of the remote system
  uint8_t system_id;
  /// Component ID of the remote system
  uint8_t component_id;
} px4_msgs__msg__Ping;

// Struct for a sequence of px4_msgs__msg__Ping.
typedef struct px4_msgs__msg__Ping__Sequence
{
  px4_msgs__msg__Ping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Ping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PING__STRUCT_H_
