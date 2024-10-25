// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELATIVE_TIMESTAMP_INVALID'.
/**
  * (0x7fff) If one of the relative timestamps
  * is set to this value, it means the associated sensor values did not update
 */
enum
{
  px4_msgs__msg__Ekf2Timestamps__RELATIVE_TIMESTAMP_INVALID = 32767
};

/// Struct defined in msg/Ekf2Timestamps in the package px4_msgs.
/**
  * this message contains the (relative) timestamps of the sensor inputs used by EKF2.
  * It can be used for reproducible replay.
 */
typedef struct px4_msgs__msg__Ekf2Timestamps
{
  /// the timestamp field is the ekf2 reference time and matches the timestamp of
  /// the sensor_combined topic.
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// timestamps are relative to the main timestamp and are in 0.1 ms (timestamp +
  /// *_timestamp_rel = absolute timestamp). For int16, this allows a maximum
  /// difference of +-3.2s to the sensor_combined topic.
  int16_t airspeed_timestamp_rel;
  int16_t distance_sensor_timestamp_rel;
  int16_t optical_flow_timestamp_rel;
  int16_t vehicle_air_data_timestamp_rel;
  int16_t vehicle_magnetometer_timestamp_rel;
  int16_t visual_odometry_timestamp_rel;
} px4_msgs__msg__Ekf2Timestamps;

// Struct for a sequence of px4_msgs__msg__Ekf2Timestamps.
typedef struct px4_msgs__msg__Ekf2Timestamps__Sequence
{
  px4_msgs__msg__Ekf2Timestamps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Ekf2Timestamps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_H_
