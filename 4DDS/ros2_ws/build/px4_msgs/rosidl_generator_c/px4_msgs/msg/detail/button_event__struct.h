// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
/**
  * TOPICS button_event safety_button
 */
enum
{
  px4_msgs__msg__ButtonEvent__ORB_QUEUE_LENGTH = 2
};

/// Struct defined in msg/ButtonEvent in the package px4_msgs.
typedef struct px4_msgs__msg__ButtonEvent
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Set to true if the event is triggered
  bool triggered;
} px4_msgs__msg__ButtonEvent;

// Struct for a sequence of px4_msgs__msg__ButtonEvent.
typedef struct px4_msgs__msg__ButtonEvent__Sequence
{
  px4_msgs__msg__ButtonEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ButtonEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_
