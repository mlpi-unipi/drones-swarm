// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CollisionReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CollisionReport in the package px4_msgs.
typedef struct px4_msgs__msg__CollisionReport
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t src;
  uint32_t id;
  uint8_t action;
  uint8_t threat_level;
  float time_to_minimum_delta;
  float altitude_minimum_delta;
  float horizontal_minimum_delta;
} px4_msgs__msg__CollisionReport;

// Struct for a sequence of px4_msgs__msg__CollisionReport.
typedef struct px4_msgs__msg__CollisionReport__Sequence
{
  px4_msgs__msg__CollisionReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CollisionReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_H_
