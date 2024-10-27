// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleOpticalFlow in the package px4_msgs.
/**
  * Optical flow in XYZ body frame in SI units.
 */
typedef struct px4_msgs__msg__VehicleOpticalFlow
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// (radians) accumulated optical flow in radians where a positive value is produced by a RH rotation about the body axis
  float pixel_flow[2];
  /// (radians) accumulated gyro radians where a positive value is produced by a RH rotation about the body axis. (NAN if unavailable)
  float delta_angle[3];
  /// (meters) Distance to the center of the flow field (NAN if unavailable)
  float distance_m;
  /// (microseconds) accumulation timespan in microseconds
  uint32_t integration_timespan_us;
  /// Average of quality of accumulated frames, 0: bad quality, 255: maximum quality
  uint8_t quality;
  /// (radians/s) Magnitude of maximum angular which the optical flow sensor can measure reliably
  float max_flow_rate;
  /// (meters) Minimum distance from ground at which the optical flow sensor operates reliably
  float min_ground_distance;
  /// (meters) Maximum distance from ground at which the optical flow sensor operates reliably
  float max_ground_distance;
} px4_msgs__msg__VehicleOpticalFlow;

// Struct for a sequence of px4_msgs__msg__VehicleOpticalFlow.
typedef struct px4_msgs__msg__VehicleOpticalFlow__Sequence
{
  px4_msgs__msg__VehicleOpticalFlow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleOpticalFlow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_H_
