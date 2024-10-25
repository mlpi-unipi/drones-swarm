// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LogMessage.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__LogMessage__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/LogMessage in the package px4_msgs.
/**
  * A logging message, output with PX4_{WARN,ERR,INFO}
 */
typedef struct px4_msgs__msg__LogMessage
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// log level (same as in the linux kernel, starting with 0)
  uint8_t severity;
  uint8_t text[127];
} px4_msgs__msg__LogMessage;

// Struct for a sequence of px4_msgs__msg__LogMessage.
typedef struct px4_msgs__msg__LogMessage__Sequence
{
  px4_msgs__msg__LogMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LogMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__STRUCT_H_
