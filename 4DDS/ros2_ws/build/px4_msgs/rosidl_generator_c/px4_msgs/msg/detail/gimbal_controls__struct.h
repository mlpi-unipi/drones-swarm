// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalControls.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_CONTROLS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_CONTROLS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INDEX_ROLL'.
enum
{
  px4_msgs__msg__GimbalControls__INDEX_ROLL = 0
};

/// Constant 'INDEX_PITCH'.
enum
{
  px4_msgs__msg__GimbalControls__INDEX_PITCH = 1
};

/// Constant 'INDEX_YAW'.
enum
{
  px4_msgs__msg__GimbalControls__INDEX_YAW = 2
};

/// Struct defined in msg/GimbalControls in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalControls
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp the data this control response is based on was sampled
  uint64_t timestamp_sample;
  float control[3];
} px4_msgs__msg__GimbalControls;

// Struct for a sequence of px4_msgs__msg__GimbalControls.
typedef struct px4_msgs__msg__GimbalControls__Sequence
{
  px4_msgs__msg__GimbalControls * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalControls__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_CONTROLS__STRUCT_H_
