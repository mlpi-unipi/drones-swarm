// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DatamanResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_SUCCESS'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_SUCCESS = 0
};

/// Constant 'STATUS_FAILURE_ID_ERR'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_FAILURE_ID_ERR = 1
};

/// Constant 'STATUS_FAILURE_NO_DATA'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_FAILURE_NO_DATA = 2
};

/// Constant 'STATUS_FAILURE_READ_FAILED'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_FAILURE_READ_FAILED = 3
};

/// Constant 'STATUS_FAILURE_WRITE_FAILED'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_FAILURE_WRITE_FAILED = 4
};

/// Constant 'STATUS_FAILURE_CLEAR_FAILED'.
enum
{
  px4_msgs__msg__DatamanResponse__STATUS_FAILURE_CLEAR_FAILED = 5
};

/// Struct defined in msg/DatamanResponse in the package px4_msgs.
typedef struct px4_msgs__msg__DatamanResponse
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t client_id;
  /// id/read/write/clear
  uint8_t request_type;
  /// dm_item_t
  uint8_t item;
  uint32_t index;
  uint8_t data[56];
  uint8_t status;
} px4_msgs__msg__DatamanResponse;

// Struct for a sequence of px4_msgs__msg__DatamanResponse.
typedef struct px4_msgs__msg__DatamanResponse__Sequence
{
  px4_msgs__msg__DatamanResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DatamanResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_H_
