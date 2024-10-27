// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAILURE_OVER_CURRENT'.
/**
  * (1 << 0)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_CURRENT = 0
};

/// Constant 'FAILURE_OVER_VOLTAGE'.
/**
  * (1 << 1)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_VOLTAGE = 1
};

/// Constant 'FAILURE_MOTOR_OVER_TEMPERATURE'.
/**
  * (1 << 2)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_MOTOR_OVER_TEMPERATURE = 2
};

/// Constant 'FAILURE_OVER_RPM'.
/**
  * (1 << 3)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_RPM = 3
};

/// Constant 'FAILURE_INCONSISTENT_CMD'.
/**
  * (1 << 4)  Set if ESC received an inconsistent command (i.e out of boundaries)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_INCONSISTENT_CMD = 4
};

/// Constant 'FAILURE_MOTOR_STUCK'.
/**
  * (1 << 5)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_MOTOR_STUCK = 5
};

/// Constant 'FAILURE_GENERIC'.
/**
  * (1 << 6)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_GENERIC = 6
};

/// Constant 'FAILURE_MOTOR_WARN_TEMPERATURE'.
/**
  * (1 << 7)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_MOTOR_WARN_TEMPERATURE = 7
};

/// Constant 'FAILURE_WARN_ESC_TEMPERATURE'.
/**
  * (1 << 8)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_WARN_ESC_TEMPERATURE = 8
};

/// Constant 'FAILURE_OVER_ESC_TEMPERATURE'.
/**
  * (1 << 9)
 */
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_ESC_TEMPERATURE = 9
};

/// Constant 'ESC_FAILURE_COUNT'.
/**
  * Counter - keep it as last element!
 */
enum
{
  px4_msgs__msg__EscReport__ESC_FAILURE_COUNT = 10
};

/// Struct defined in msg/EscReport in the package px4_msgs.
typedef struct px4_msgs__msg__EscReport
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Number of reported errors by ESC - if supported
  uint32_t esc_errorcount;
  /// Motor RPM, negative for reverse rotation - if supported
  int32_t esc_rpm;
  /// Voltage measured from current ESC - if supported
  float esc_voltage;
  /// Current measured from current ESC - if supported
  float esc_current;
  /// Temperature measured from current ESC - if supported
  float esc_temperature;
  /// Address of current ESC (in most cases 1-8 / must be set by driver)
  uint8_t esc_address;
  /// Counter of number of commands
  uint8_t esc_cmdcount;
  /// State of ESC - depend on Vendor
  uint8_t esc_state;
  /// actuator output function (one of Motor1...MotorN)
  uint8_t actuator_function;
  /// Bitmask to indicate the internal ESC faults
  uint16_t failures;
  /// Applied power 0-100 in % (negative values reserved)
  int8_t esc_power;
} px4_msgs__msg__EscReport;

// Struct for a sequence of px4_msgs__msg__EscReport.
typedef struct px4_msgs__msg__EscReport__Sequence
{
  px4_msgs__msg__EscReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EscReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_H_
