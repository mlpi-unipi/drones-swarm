// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROI_NONE'.
/**
  * No region of interest
 */
enum
{
  px4_msgs__msg__VehicleRoi__ROI_NONE = 0
};

/// Constant 'ROI_WPNEXT'.
/**
  * Point toward next MISSION with optional offset
 */
enum
{
  px4_msgs__msg__VehicleRoi__ROI_WPNEXT = 1
};

/// Constant 'ROI_WPINDEX'.
/**
  * Point toward given MISSION
 */
enum
{
  px4_msgs__msg__VehicleRoi__ROI_WPINDEX = 2
};

/// Constant 'ROI_LOCATION'.
/**
  * Point toward fixed location
 */
enum
{
  px4_msgs__msg__VehicleRoi__ROI_LOCATION = 3
};

/// Constant 'ROI_TARGET'.
/**
  * Point toward target
 */
enum
{
  px4_msgs__msg__VehicleRoi__ROI_TARGET = 4
};

/// Constant 'ROI_ENUM_END'.
enum
{
  px4_msgs__msg__VehicleRoi__ROI_ENUM_END = 5
};

/// Struct defined in msg/VehicleRoi in the package px4_msgs.
/**
  * Vehicle Region Of Interest (ROI)
 */
typedef struct px4_msgs__msg__VehicleRoi
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// ROI mode (see above)
  uint8_t mode;
  /// Latitude to point to
  double lat;
  /// Longitude to point to
  double lon;
  /// Altitude to point to
  float alt;
  /// additional angle offsets to next waypoint (only used with ROI_WPNEXT)
  /// angle offset in rad
  float roll_offset;
  /// angle offset in rad
  float pitch_offset;
  /// angle offset in rad
  float yaw_offset;
} px4_msgs__msg__VehicleRoi;

// Struct for a sequence of px4_msgs__msg__VehicleRoi.
typedef struct px4_msgs__msg__VehicleRoi__Sequence
{
  px4_msgs__msg__VehicleRoi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleRoi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_H_
