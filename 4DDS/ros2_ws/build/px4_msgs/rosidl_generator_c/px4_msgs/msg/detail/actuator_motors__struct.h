// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorMotors.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTUATOR_FUNCTION_MOTOR1'.
enum
{
  px4_msgs__msg__ActuatorMotors__ACTUATOR_FUNCTION_MOTOR1 = 101
};

/// Constant 'NUM_CONTROLS'.
enum
{
  px4_msgs__msg__ActuatorMotors__NUM_CONTROLS = 12
};

/// Struct defined in msg/ActuatorMotors in the package px4_msgs.
/**
  * Motor control message
 */
typedef struct px4_msgs__msg__ActuatorMotors
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp the data this control response is based on was sampled
  uint64_t timestamp_sample;
  /// bitset which motors are configured to be reversible
  uint16_t reversible_flags;
  /// range: [-1, 1], where 1 means maximum positive thrust,
  /// -1 maximum negative (if not supported by the output, <0 maps to NaN),
  /// and NaN maps to disarmed (stop the motors)
  float control[12];
} px4_msgs__msg__ActuatorMotors;

// Struct for a sequence of px4_msgs__msg__ActuatorMotors.
typedef struct px4_msgs__msg__ActuatorMotors__Sequence
{
  px4_msgs__msg__ActuatorMotors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorMotors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_H_
