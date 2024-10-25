// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_UNKNOWN'.
enum
{
  px4_msgs__msg__SensorOpticalFlow__MODE_UNKNOWN = 0
};

/// Constant 'MODE_BRIGHT'.
enum
{
  px4_msgs__msg__SensorOpticalFlow__MODE_BRIGHT = 1
};

/// Constant 'MODE_LOWLIGHT'.
enum
{
  px4_msgs__msg__SensorOpticalFlow__MODE_LOWLIGHT = 2
};

/// Constant 'MODE_SUPER_LOWLIGHT'.
enum
{
  px4_msgs__msg__SensorOpticalFlow__MODE_SUPER_LOWLIGHT = 3
};

/// Struct defined in msg/SensorOpticalFlow in the package px4_msgs.
typedef struct px4_msgs__msg__SensorOpticalFlow
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// (radians) optical flow in radians where a positive value is produced by a RH rotation about the body axis
  float pixel_flow[2];
  /// (radians) accumulated gyro radians where a positive value is produced by a RH rotation about the body axis. Set to NaN if flow sensor does not have 3-axis gyro data.
  float delta_angle[3];
  bool delta_angle_available;
  /// (meters) Distance to the center of the flow field
  float distance_m;
  bool distance_available;
  /// (microseconds) accumulation timespan in microseconds
  uint32_t integration_timespan_us;
  /// quality, 0: bad quality, 255: maximum quality
  uint8_t quality;
  uint32_t error_count;
  /// (radians/s) Magnitude of maximum angular which the optical flow sensor can measure reliably
  float max_flow_rate;
  /// (meters) Minimum distance from ground at which the optical flow sensor operates reliably
  float min_ground_distance;
  /// (meters) Maximum distance from ground at which the optical flow sensor operates reliably
  float max_ground_distance;
  uint8_t mode;
} px4_msgs__msg__SensorOpticalFlow;

// Struct for a sequence of px4_msgs__msg__SensorOpticalFlow.
typedef struct px4_msgs__msg__SensorOpticalFlow__Sequence
{
  px4_msgs__msg__SensorOpticalFlow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorOpticalFlow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__STRUCT_H_
