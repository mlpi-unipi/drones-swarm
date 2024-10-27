// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION_RESULT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MISSION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MissionResult in the package px4_msgs.
typedef struct px4_msgs__msg__MissionResult
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Id for the mission for which the result was generated
  uint32_t mission_id;
  /// Id for the corresponding geofence for which the result was generated (used for mission feasibility)
  uint32_t geofence_id;
  /// Counter of the home position for which the result was generated (used for mission feasibility)
  uint32_t home_position_counter;
  /// Sequence of the mission item which has been reached, default -1
  int32_t seq_reached;
  /// Sequence of the current mission item
  uint16_t seq_current;
  /// Total number of mission items
  uint16_t seq_total;
  /// true if mission is valid
  bool valid;
  /// true if mission is valid, but has potentially problematic items leading to safety warnings
  bool warning;
  /// true if mission has been completed
  bool finished;
  /// true if the mission cannot continue or be completed for some reason
  bool failure;
  /// true if the number of do jumps remaining has changed
  bool item_do_jump_changed;
  /// indicate which item has changed
  uint16_t item_changed_index;
  /// set to the number of do jumps remaining for that item
  uint16_t item_do_jump_remaining;
  /// indicates the mode in which the mission is executed
  uint8_t execution_mode;
} px4_msgs__msg__MissionResult;

// Struct for a sequence of px4_msgs__msg__MissionResult.
typedef struct px4_msgs__msg__MissionResult__Sequence
{
  px4_msgs__msg__MissionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__MissionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MISSION_RESULT__STRUCT_H_
