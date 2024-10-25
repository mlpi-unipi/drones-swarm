// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterUpdate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ParameterUpdate in the package px4_msgs.
/**
  * This message is used to notify the system about one or more parameter changes
 */
typedef struct px4_msgs__msg__ParameterUpdate
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Instance count - constantly incrementing
  uint32_t instance;
  uint32_t get_count;
  uint32_t set_count;
  uint32_t find_count;
  uint32_t export_count;
  uint16_t active;
  uint16_t changed;
  uint16_t custom_default;
} px4_msgs__msg__ParameterUpdate;

// Struct for a sequence of px4_msgs__msg__ParameterUpdate.
typedef struct px4_msgs__msg__ParameterUpdate__Sequence
{
  px4_msgs__msg__ParameterUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_H_
