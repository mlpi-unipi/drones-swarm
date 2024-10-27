// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraStatus in the package px4_msgs.
typedef struct px4_msgs__msg__CameraStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// mavlink system id of the currently active camera
  uint8_t active_sys_id;
  /// mavlink component id of currently active camera
  uint8_t active_comp_id;
} px4_msgs__msg__CameraStatus;

// Struct for a sequence of px4_msgs__msg__CameraStatus.
typedef struct px4_msgs__msg__CameraStatus__Sequence
{
  px4_msgs__msg__CameraStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CameraStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_H_
