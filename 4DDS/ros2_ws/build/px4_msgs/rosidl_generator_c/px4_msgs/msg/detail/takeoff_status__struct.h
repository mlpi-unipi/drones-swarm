// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TakeoffStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TAKEOFF_STATE_UNINITIALIZED'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_UNINITIALIZED = 0
};

/// Constant 'TAKEOFF_STATE_DISARMED'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_DISARMED = 1
};

/// Constant 'TAKEOFF_STATE_SPOOLUP'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_SPOOLUP = 2
};

/// Constant 'TAKEOFF_STATE_READY_FOR_TAKEOFF'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_READY_FOR_TAKEOFF = 3
};

/// Constant 'TAKEOFF_STATE_RAMPUP'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_RAMPUP = 4
};

/// Constant 'TAKEOFF_STATE_FLIGHT'.
enum
{
  px4_msgs__msg__TakeoffStatus__TAKEOFF_STATE_FLIGHT = 5
};

/// Struct defined in msg/TakeoffStatus in the package px4_msgs.
/**
  * Status of the takeoff state machine currently just available for multicopters
 */
typedef struct px4_msgs__msg__TakeoffStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t takeoff_state;
  /// limited tilt feasibility during takeoff, contains maximum tilt otherwise
  float tilt_limit;
} px4_msgs__msg__TakeoffStatus;

// Struct for a sequence of px4_msgs__msg__TakeoffStatus.
typedef struct px4_msgs__msg__TakeoffStatus__Sequence
{
  px4_msgs__msg__TakeoffStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TakeoffStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_H_
