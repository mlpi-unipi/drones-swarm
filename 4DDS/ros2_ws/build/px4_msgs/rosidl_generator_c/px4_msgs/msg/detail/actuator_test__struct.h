// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorTest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_RELEASE_CONTROL'.
/**
  * Topic to test individual actuator output functions
  * exit test mode for the given function
 */
enum
{
  px4_msgs__msg__ActuatorTest__ACTION_RELEASE_CONTROL = 0
};

/// Constant 'ACTION_DO_CONTROL'.
/**
  * enable actuator test mode
 */
enum
{
  px4_msgs__msg__ActuatorTest__ACTION_DO_CONTROL = 1
};

/// Constant 'FUNCTION_MOTOR1'.
enum
{
  px4_msgs__msg__ActuatorTest__FUNCTION_MOTOR1 = 101
};

/// Constant 'MAX_NUM_MOTORS'.
enum
{
  px4_msgs__msg__ActuatorTest__MAX_NUM_MOTORS = 12
};

/// Constant 'FUNCTION_SERVO1'.
enum
{
  px4_msgs__msg__ActuatorTest__FUNCTION_SERVO1 = 201
};

/// Constant 'MAX_NUM_SERVOS'.
enum
{
  px4_msgs__msg__ActuatorTest__MAX_NUM_SERVOS = 8
};

/// Constant 'ORB_QUEUE_LENGTH'.
/**
  * >= MAX_NUM_MOTORS to support code in esc_calibration
 */
enum
{
  px4_msgs__msg__ActuatorTest__ORB_QUEUE_LENGTH = 16
};

/// Struct defined in msg/ActuatorTest in the package px4_msgs.
typedef struct px4_msgs__msg__ActuatorTest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// one of ACTION_*
  uint8_t action;
  /// actuator output function
  uint16_t function;
  /// range: [-1, 1], where 1 means maximum positive output,
  /// 0 to center servos or minimum motor thrust,
  /// -1 maximum negative (if not supported by the motors, <0 maps to NaN),
  /// and NaN maps to disarmed (stop the motors)
  float value;
  /// timeout in ms after which to exit test mode (if 0, do not time out)
  uint32_t timeout_ms;
} px4_msgs__msg__ActuatorTest;

// Struct for a sequence of px4_msgs__msg__ActuatorTest.
typedef struct px4_msgs__msg__ActuatorTest__Sequence
{
  px4_msgs__msg__ActuatorTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_H_
