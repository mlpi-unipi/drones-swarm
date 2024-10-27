// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorServosTrim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUM_CONTROLS'.
enum
{
  px4_msgs__msg__ActuatorServosTrim__NUM_CONTROLS = 8
};

/// Struct defined in msg/ActuatorServosTrim in the package px4_msgs.
/**
  * Servo trims, added as offset to servo outputs
 */
typedef struct px4_msgs__msg__ActuatorServosTrim
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// range: [-1, 1]
  float trim[8];
} px4_msgs__msg__ActuatorServosTrim;

// Struct for a sequence of px4_msgs__msg__ActuatorServosTrim.
typedef struct px4_msgs__msg__ActuatorServosTrim__Sequence
{
  px4_msgs__msg__ActuatorServosTrim * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorServosTrim__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_H_
