// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorInnovations.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorInnovations in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorInnovations
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// GPS
  /// horizontal GPS velocity innovation (m/sec) and innovation variance ((m/sec)**2)
  float gps_hvel[2];
  /// vertical GPS velocity innovation (m/sec) and innovation variance ((m/sec)**2)
  float gps_vvel;
  /// horizontal GPS position innovation (m) and innovation variance (m**2)
  float gps_hpos[2];
  /// vertical GPS position innovation (m) and innovation variance (m**2)
  float gps_vpos;
  /// External Vision
  /// horizontal external vision velocity innovation (m/sec) and innovation variance ((m/sec)**2)
  float ev_hvel[2];
  /// vertical external vision velocity innovation (m/sec) and innovation variance ((m/sec)**2)
  float ev_vvel;
  /// horizontal external vision position innovation (m) and innovation variance (m**2)
  float ev_hpos[2];
  /// vertical external vision position innovation (m) and innovation variance (m**2)
  float ev_vpos;
  /// Height sensors
  /// range sensor height innovation (m) and innovation variance (m**2)
  float rng_vpos;
  /// barometer height innovation (m) and innovation variance (m**2)
  float baro_vpos;
  /// Auxiliary velocity
  /// horizontal auxiliary velocity innovation from landing target measurement (m/sec) and innovation variance ((m/sec)**2)
  float aux_hvel[2];
  /// Optical flow
  /// flow innvoation (rad/sec) and innovation variance ((rad/sec)**2)
  float flow[2];
  /// flow innvoation (rad/sec) and innovation variance computed by the terrain estimator ((rad/sec)**2)
  float terr_flow[2];
  /// Various
  /// heading innovation (rad) and innovation variance (rad**2)
  float heading;
  /// earth magnetic field innovation (Gauss) and innovation variance (Gauss**2)
  float mag_field[3];
  /// gravity innovation from accelerometerr vector (m/s**2)
  float gravity[3];
  /// drag specific force innovation (m/sec**2) and innovation variance ((m/sec)**2)
  float drag[2];
  /// airspeed innovation (m/sec) and innovation variance ((m/sec)**2)
  float airspeed;
  /// synthetic sideslip innovation (rad) and innovation variance (rad**2)
  float beta;
  /// height of ground innovation (m) and innovation variance (m**2)
  float hagl;
  /// height of ground rate innovation (m/s) and innovation variance ((m/s)**2)
  float hagl_rate;
} px4_msgs__msg__EstimatorInnovations;

// Struct for a sequence of px4_msgs__msg__EstimatorInnovations.
typedef struct px4_msgs__msg__EstimatorInnovations__Sequence
{
  px4_msgs__msg__EstimatorInnovations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorInnovations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_H_
