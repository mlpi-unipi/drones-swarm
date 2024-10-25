// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RtlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RTL_STATUS_TYPE_NONE'.
/**
  * RTL type is pending if evaluation can't pe performed currently e.g. when it is still loading the safe points
 */
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_NONE = 0
};

/// Constant 'RTL_STATUS_TYPE_DIRECT_SAFE_POINT'.
/**
  * RTL type is chosen to directly go to a safe point or home position
 */
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_DIRECT_SAFE_POINT = 1
};

/// Constant 'RTL_STATUS_TYPE_DIRECT_MISSION_LAND'.
/**
  * RTL type is going straight to the beginning of the mission landing
 */
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_DIRECT_MISSION_LAND = 2
};

/// Constant 'RTL_STATUS_TYPE_FOLLOW_MISSION'.
/**
  * RTL type is following the mission from closest point to mission landing
 */
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_FOLLOW_MISSION = 3
};

/// Constant 'RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE'.
/**
  * RTL type is following the mission in reverse to the start position
 */
enum
{
  px4_msgs__msg__RtlStatus__RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE = 4
};

/// Struct defined in msg/RtlStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RtlStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique ID of active set of safe_point_items
  uint32_t safe_points_id;
  /// flag if the RTL point needs reevaluation (e.g. new safe points available, but need loading).
  bool is_evaluation_pending;
  /// flag if approaches are defined for current RTL_TYPE parameter setting
  bool has_vtol_approach;
  /// Type of RTL chosen
  uint8_t rtl_type;
  /// index of the chosen safe point, if in RTL_STATUS_TYPE_DIRECT_SAFE_POINT mode
  uint8_t safe_point_index;
} px4_msgs__msg__RtlStatus;

// Struct for a sequence of px4_msgs__msg__RtlStatus.
typedef struct px4_msgs__msg__RtlStatus__Sequence
{
  px4_msgs__msg__RtlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RtlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_H_
