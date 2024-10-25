// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LoggerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOGGER_TYPE_FULL'.
/**
  * Normal, full size log
 */
enum
{
  px4_msgs__msg__LoggerStatus__LOGGER_TYPE_FULL = 0
};

/// Constant 'LOGGER_TYPE_MISSION'.
/**
  * reduced mission log (e.g. for geotagging)
 */
enum
{
  px4_msgs__msg__LoggerStatus__LOGGER_TYPE_MISSION = 1
};

/// Constant 'BACKEND_FILE'.
enum
{
  px4_msgs__msg__LoggerStatus__BACKEND_FILE = 1
};

/// Constant 'BACKEND_MAVLINK'.
enum
{
  px4_msgs__msg__LoggerStatus__BACKEND_MAVLINK = 2
};

/// Constant 'BACKEND_ALL'.
enum
{
  px4_msgs__msg__LoggerStatus__BACKEND_ALL = 3
};

/// Struct defined in msg/LoggerStatus in the package px4_msgs.
typedef struct px4_msgs__msg__LoggerStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t type;
  uint8_t backend;
  /// total written to log in kiloBytes
  float total_written_kb;
  /// write rate in kiloBytes/s
  float write_rate_kb_s;
  /// number of failed buffer writes due to buffer overflow
  uint32_t dropouts;
  /// messages misssed
  uint32_t message_gaps;
  /// current buffer fill in Bytes
  uint32_t buffer_used_bytes;
  /// total buffer size in Bytes
  uint32_t buffer_size_bytes;
  uint8_t num_messages;
} px4_msgs__msg__LoggerStatus;

// Struct for a sequence of px4_msgs__msg__LoggerStatus.
typedef struct px4_msgs__msg__LoggerStatus__Sequence
{
  px4_msgs__msg__LoggerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LoggerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_H_
