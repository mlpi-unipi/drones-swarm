// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleOpticalFlowVel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleOpticalFlowVel in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleOpticalFlowVel
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// velocity obtained from gyro-compensated and distance-scaled optical flow raw measurements in body frame(m/s)
  float vel_body[2];
  /// same as vel_body but in local frame (m/s)
  float vel_ne[2];
  /// integrated optical flow measurement (rad/s)
  float flow_rate_uncompensated[2];
  /// integrated optical flow measurement compensated for angular motion (rad/s)
  float flow_rate_compensated[2];
  /// gyro measurement synchronized with flow measurements (rad/s)
  float gyro_rate[3];
  float gyro_bias[3];
  float ref_gyro[3];
} px4_msgs__msg__VehicleOpticalFlowVel;

// Struct for a sequence of px4_msgs__msg__VehicleOpticalFlowVel.
typedef struct px4_msgs__msg__VehicleOpticalFlowVel__Sequence
{
  px4_msgs__msg__VehicleOpticalFlowVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleOpticalFlowVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__STRUCT_H_
