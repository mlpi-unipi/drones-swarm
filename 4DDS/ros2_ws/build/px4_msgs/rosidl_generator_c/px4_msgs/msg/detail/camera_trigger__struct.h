// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CameraTrigger.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_H_

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
  px4_msgs__msg__CameraTrigger__ORB_QUEUE_LENGTH = 2ul
};

/// Struct defined in msg/CameraTrigger in the package px4_msgs.
typedef struct px4_msgs__msg__CameraTrigger
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// UTC timestamp
  uint64_t timestamp_utc;
  /// Image sequence number
  uint32_t seq;
  /// Trigger feedback from camera
  bool feedback;
} px4_msgs__msg__CameraTrigger;

// Struct for a sequence of px4_msgs__msg__CameraTrigger.
typedef struct px4_msgs__msg__CameraTrigger__Sequence
{
  px4_msgs__msg__CameraTrigger * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CameraTrigger__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_H_
