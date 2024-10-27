// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FlightPhaseEstimation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLIGHT_PHASE_UNKNOWN'.
/**
  * vehicle flight phase is unknown
 */
enum
{
  px4_msgs__msg__FlightPhaseEstimation__FLIGHT_PHASE_UNKNOWN = 0
};

/// Constant 'FLIGHT_PHASE_LEVEL'.
/**
  * Vehicle is in level flight
 */
enum
{
  px4_msgs__msg__FlightPhaseEstimation__FLIGHT_PHASE_LEVEL = 1
};

/// Constant 'FLIGHT_PHASE_DESCEND'.
/**
  * vehicle is in descend
 */
enum
{
  px4_msgs__msg__FlightPhaseEstimation__FLIGHT_PHASE_DESCEND = 2
};

/// Constant 'FLIGHT_PHASE_CLIMB'.
/**
  * vehicle is climbing
 */
enum
{
  px4_msgs__msg__FlightPhaseEstimation__FLIGHT_PHASE_CLIMB = 3
};

/// Struct defined in msg/FlightPhaseEstimation in the package px4_msgs.
typedef struct px4_msgs__msg__FlightPhaseEstimation
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Estimate of current flight phase
  uint8_t flight_phase;
} px4_msgs__msg__FlightPhaseEstimation;

// Struct for a sequence of px4_msgs__msg__FlightPhaseEstimation.
typedef struct px4_msgs__msg__FlightPhaseEstimation__Sequence
{
  px4_msgs__msg__FlightPhaseEstimation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FlightPhaseEstimation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_H_
