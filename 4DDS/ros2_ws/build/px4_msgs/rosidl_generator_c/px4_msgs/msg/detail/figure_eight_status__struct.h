// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FigureEightStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FigureEightStatus in the package px4_msgs.
typedef struct px4_msgs__msg__FigureEightStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Major axis radius of the figure eight. Positive values orbit clockwise, negative values orbit counter-clockwise.
  float major_radius;
  /// Minor axis radius of the figure eight.
  float minor_radius;
  /// Orientation of the major axis of the figure eight.
  float orientation;
  /// The coordinate system of the fields: x, y, z.
  uint8_t frame;
  /// X coordinate of center point. Coordinate system depends on frame field: local = x position in meters * 1e4, global = latitude in degrees * 1e7.
  int32_t x;
  /// Y coordinate of center point. Coordinate system depends on frame field: local = y position in meters * 1e4, global = latitude in degrees * 1e7.
  int32_t y;
  /// Altitude of center point. Coordinate system depends on frame field.
  float z;
} px4_msgs__msg__FigureEightStatus;

// Struct for a sequence of px4_msgs__msg__FigureEightStatus.
typedef struct px4_msgs__msg__FigureEightStatus__Sequence
{
  px4_msgs__msg__FigureEightStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FigureEightStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_H_
