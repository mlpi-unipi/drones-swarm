// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CanInterfaceStatus in the package px4_msgs.
typedef struct px4_msgs__msg__CanInterfaceStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t interface;
  uint64_t io_errors;
  uint64_t frames_tx;
  uint64_t frames_rx;
} px4_msgs__msg__CanInterfaceStatus;

// Struct for a sequence of px4_msgs__msg__CanInterfaceStatus.
typedef struct px4_msgs__msg__CanInterfaceStatus__Sequence
{
  px4_msgs__msg__CanInterfaceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CanInterfaceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_H_
