// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GpsDump.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPS_DUMP__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GPS_DUMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__GpsDump__ORB_QUEUE_LENGTH = 8
};

/// Struct defined in msg/GpsDump in the package px4_msgs.
/**
  * This message is used to dump the raw gps communication to the log.
  * Set the parameter GPS_DUMP_COMM to 1 to use this.
 */
typedef struct px4_msgs__msg__GpsDump
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Instance of GNSS receiver
  uint8_t instance;
  /// length of data, MSB bit set = message to the gps device,
  /// clear = message from the device
  uint8_t len;
  /// data to write to the log
  uint8_t data[79];
} px4_msgs__msg__GpsDump;

// Struct for a sequence of px4_msgs__msg__GpsDump.
typedef struct px4_msgs__msg__GpsDump__Sequence
{
  px4_msgs__msg__GpsDump * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GpsDump__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GPS_DUMP__STRUCT_H_
