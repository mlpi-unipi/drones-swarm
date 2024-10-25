// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GpioConfig.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INPUT'.
/**
  * Configuration Mask
  * Bit 0-3: Direction: 0=Input, 1=Output
  * Bit 4-7: Input Config: 0=Floating, 1=PullUp, 2=PullDown
  * Bit 8-12: Output Config: 0=PushPull, 1=OpenDrain
  * Bit 13-31: Reserved
  * 0x0000
 */
enum
{
  px4_msgs__msg__GpioConfig__INPUT = 0ul
};

/// Constant 'OUTPUT'.
/**
  * 0x0001
 */
enum
{
  px4_msgs__msg__GpioConfig__OUTPUT = 1ul
};

/// Constant 'PULLUP'.
/**
  * 0x0010
 */
enum
{
  px4_msgs__msg__GpioConfig__PULLUP = 16ul
};

/// Constant 'PULLDOWN'.
/**
  * 0x0020
 */
enum
{
  px4_msgs__msg__GpioConfig__PULLDOWN = 32ul
};

/// Constant 'OPENDRAIN'.
/**
  * 0x0100
 */
enum
{
  px4_msgs__msg__GpioConfig__OPENDRAIN = 256ul
};

/// Constant 'INPUT_FLOATING'.
/**
  * 0x0000
 */
enum
{
  px4_msgs__msg__GpioConfig__INPUT_FLOATING = 0ul
};

/// Constant 'INPUT_PULLUP'.
/**
  * 0x0010
 */
enum
{
  px4_msgs__msg__GpioConfig__INPUT_PULLUP = 16ul
};

/// Constant 'INPUT_PULLDOWN'.
/**
  * 0x0020
 */
enum
{
  px4_msgs__msg__GpioConfig__INPUT_PULLDOWN = 32ul
};

/// Constant 'OUTPUT_PUSHPULL'.
/**
  * 0x0000
 */
enum
{
  px4_msgs__msg__GpioConfig__OUTPUT_PUSHPULL = 0ul
};

/// Constant 'OUTPUT_OPENDRAIN'.
/**
  * 0x0100
 */
enum
{
  px4_msgs__msg__GpioConfig__OUTPUT_OPENDRAIN = 256ul
};

/// Constant 'OUTPUT_OPENDRAIN_PULLUP'.
/**
  * 0x0110
 */
enum
{
  px4_msgs__msg__GpioConfig__OUTPUT_OPENDRAIN_PULLUP = 272ul
};

/// Struct defined in msg/GpioConfig in the package px4_msgs.
/**
  * GPIO configuration
 */
typedef struct px4_msgs__msg__GpioConfig
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Device id
  uint32_t device_id;
  /// Pin mask
  uint32_t mask;
  /// Initial pin output state
  uint32_t state;
  uint32_t config;
} px4_msgs__msg__GpioConfig;

// Struct for a sequence of px4_msgs__msg__GpioConfig.
typedef struct px4_msgs__msg__GpioConfig__Sequence
{
  px4_msgs__msg__GpioConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GpioConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_H_
