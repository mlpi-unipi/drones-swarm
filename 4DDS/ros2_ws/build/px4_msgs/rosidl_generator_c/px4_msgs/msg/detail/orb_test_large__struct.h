// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OrbTestLarge.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OrbTestLarge in the package px4_msgs.
typedef struct px4_msgs__msg__OrbTestLarge
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  int32_t val;
  uint8_t junk[512];
} px4_msgs__msg__OrbTestLarge;

// Struct for a sequence of px4_msgs__msg__OrbTestLarge.
typedef struct px4_msgs__msg__OrbTestLarge__Sequence
{
  px4_msgs__msg__OrbTestLarge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OrbTestLarge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__STRUCT_H_
