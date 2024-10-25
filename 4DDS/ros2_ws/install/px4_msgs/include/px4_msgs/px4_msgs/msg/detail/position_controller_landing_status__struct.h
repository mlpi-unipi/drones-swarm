// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_ABORTED'.
/**
  * abort reasons
  * after the manual operator abort, corresponds to individual bits of param FW_LND_ABORT
 */
enum
{
  px4_msgs__msg__PositionControllerLandingStatus__NOT_ABORTED = 0
};

/// Constant 'ABORTED_BY_OPERATOR'.
enum
{
  px4_msgs__msg__PositionControllerLandingStatus__ABORTED_BY_OPERATOR = 1
};

/// Constant 'TERRAIN_NOT_FOUND'.
/**
  * FW_LND_ABORT (1 << 0)
 */
enum
{
  px4_msgs__msg__PositionControllerLandingStatus__TERRAIN_NOT_FOUND = 2
};

/// Constant 'TERRAIN_TIMEOUT'.
/**
  * FW_LND_ABORT (1 << 1)
 */
enum
{
  px4_msgs__msg__PositionControllerLandingStatus__TERRAIN_TIMEOUT = 3
};

/// Constant 'UNKNOWN_ABORT_CRITERION'.
enum
{
  px4_msgs__msg__PositionControllerLandingStatus__UNKNOWN_ABORT_CRITERION = 4
};

/// Struct defined in msg/PositionControllerLandingStatus in the package px4_msgs.
typedef struct px4_msgs__msg__PositionControllerLandingStatus
{
  /// time since system start
  uint64_t timestamp;
  /// lateral touchdown position offset manually commanded during landing
  float lateral_touchdown_offset;
  /// true if the aircraft is flaring
  bool flaring;
  /// abort status is:
  /// 0 if not aborted
  /// >0 if aborted, with the singular abort criterion which triggered the landing abort enumerated by the following abort reasons
  uint8_t abort_status;
} px4_msgs__msg__PositionControllerLandingStatus;

// Struct for a sequence of px4_msgs__msg__PositionControllerLandingStatus.
typedef struct px4_msgs__msg__PositionControllerLandingStatus__Sequence
{
  px4_msgs__msg__PositionControllerLandingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PositionControllerLandingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_H_
