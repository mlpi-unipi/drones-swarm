// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraCapture in the package px4_msgs.
typedef struct px4_msgs__msg__CameraCapture
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Capture time in UTC / GPS time
  uint64_t timestamp_utc;
  /// Image sequence number
  uint32_t seq;
  /// Latitude in degrees (WGS84)
  double lat;
  /// Longitude in degrees (WGS84)
  double lon;
  /// Altitude (AMSL)
  float alt;
  /// Altitude above ground (meters)
  float ground_distance;
  /// Attitude of the camera relative to NED earth-fixed frame when using a gimbal, otherwise vehicle attitude
  float q[4];
  /// 1 for success, 0 for failure, -1 if camera does not provide feedback
  int8_t result;
} px4_msgs__msg__CameraCapture;

// Struct for a sequence of px4_msgs__msg__CameraCapture.
typedef struct px4_msgs__msg__CameraCapture__Sequence
{
  px4_msgs__msg__CameraCapture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CameraCapture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_H_
