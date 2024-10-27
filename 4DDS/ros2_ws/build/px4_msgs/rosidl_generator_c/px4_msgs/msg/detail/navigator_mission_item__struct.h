// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NavigatorMissionItem in the package px4_msgs.
typedef struct px4_msgs__msg__NavigatorMissionItem
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Instance count of this mission. Increments monotonically whenever the mission is modified
  uint32_t instance_count;
  /// Sequence of the current mission item
  uint16_t sequence_current;
  uint16_t nav_cmd;
  float latitude;
  float longitude;
  /// time that the MAV should stay inside the radius before advancing in seconds
  float time_inside;
  /// default radius in which the mission is accepted as reached in meters
  float acceptance_radius;
  /// loiter radius in meters, 0 for a VTOL to hover, negative for counter-clockwise
  float loiter_radius;
  /// in radians NED -PI..+PI, NAN means don't change yaw
  float yaw;
  /// altitude in meters (AMSL)
  float altitude;
  /// mission frame
  uint8_t frame;
  /// mission item origin (onboard or mavlink)
  uint8_t origin;
  /// exit xtrack location: 0 for center of loiter wp, 1 for exit location
  bool loiter_exit_xtrack;
  /// heading needs to be reached
  bool force_heading;
  /// true if altitude is relative from start point
  bool altitude_is_relative;
  /// true if next waypoint should follow after this one
  bool autocontinue;
  /// part of the vtol back transition sequence
  bool vtol_back_transition;
} px4_msgs__msg__NavigatorMissionItem;

// Struct for a sequence of px4_msgs__msg__NavigatorMissionItem.
typedef struct px4_msgs__msg__NavigatorMissionItem__Sequence
{
  px4_msgs__msg__NavigatorMissionItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__NavigatorMissionItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_H_
