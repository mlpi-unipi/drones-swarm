// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CollisionConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CollisionConstraints in the package px4_msgs.
/**
  * Local setpoint constraints in NED frame
  * setting something to NaN means that no limit is provided
 */
typedef struct px4_msgs__msg__CollisionConstraints
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// velocities demanded
  float original_setpoint[2];
  /// velocities allowed
  float adapted_setpoint[2];
} px4_msgs__msg__CollisionConstraints;

// Struct for a sequence of px4_msgs__msg__CollisionConstraints.
typedef struct px4_msgs__msg__CollisionConstraints__Sequence
{
  px4_msgs__msg__CollisionConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CollisionConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_H_
