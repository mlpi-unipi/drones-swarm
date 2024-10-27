// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TaskStackInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_H_

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
  px4_msgs__msg__TaskStackInfo__ORB_QUEUE_LENGTH = 2
};

/// Struct defined in msg/TaskStackInfo in the package px4_msgs.
/**
  * stack information for a single running process
 */
typedef struct px4_msgs__msg__TaskStackInfo
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint16_t stack_free;
  uint8_t task_name[24];
} px4_msgs__msg__TaskStackInfo;

// Struct for a sequence of px4_msgs__msg__TaskStackInfo.
typedef struct px4_msgs__msg__TaskStackInfo__Sequence
{
  px4_msgs__msg__TaskStackInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TaskStackInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_H_
