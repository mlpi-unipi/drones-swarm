// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleLandDetected in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleLandDetected
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// true if vehicle is currently in free-fall
  bool freefall;
  /// true if vehicle has ground contact but is not landed (1. stage)
  bool ground_contact;
  /// true if the vehicle might have landed (2. stage)
  bool maybe_landed;
  /// true if vehicle is currently landed on the ground (3. stage)
  bool landed;
  /// indicates if from the perspective of the landing detector the vehicle might be in ground effect (baro). This flag will become true if the vehicle is not moving horizontally and is descending (crude assumption that user is landing).
  bool in_ground_effect;
  bool in_descend;
  bool has_low_throttle;
  bool vertical_movement;
  bool horizontal_movement;
  bool rotational_movement;
  bool close_to_ground_or_skipped_check;
  bool at_rest;
} px4_msgs__msg__VehicleLandDetected;

// Struct for a sequence of px4_msgs__msg__VehicleLandDetected.
typedef struct px4_msgs__msg__VehicleLandDetected__Sequence
{
  px4_msgs__msg__VehicleLandDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleLandDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_H_
