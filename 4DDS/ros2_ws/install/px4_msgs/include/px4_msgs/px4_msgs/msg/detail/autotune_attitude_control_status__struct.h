// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_IDLE'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_IDLE = 0
};

/// Constant 'STATE_INIT'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_INIT = 1
};

/// Constant 'STATE_ROLL'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_ROLL = 2
};

/// Constant 'STATE_ROLL_PAUSE'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_ROLL_PAUSE = 3
};

/// Constant 'STATE_PITCH'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_PITCH = 4
};

/// Constant 'STATE_PITCH_PAUSE'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_PITCH_PAUSE = 5
};

/// Constant 'STATE_YAW'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_YAW = 6
};

/// Constant 'STATE_YAW_PAUSE'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_YAW_PAUSE = 7
};

/// Constant 'STATE_VERIFICATION'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_VERIFICATION = 8
};

/// Constant 'STATE_APPLY'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_APPLY = 9
};

/// Constant 'STATE_TEST'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_TEST = 10
};

/// Constant 'STATE_COMPLETE'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_COMPLETE = 11
};

/// Constant 'STATE_FAIL'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_FAIL = 12
};

/// Constant 'STATE_WAIT_FOR_DISARM'.
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_WAIT_FOR_DISARM = 13
};

/// Struct defined in msg/AutotuneAttitudeControlStatus in the package px4_msgs.
typedef struct px4_msgs__msg__AutotuneAttitudeControlStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// coefficients of the identified discrete-time model
  float coeff[5];
  /// coefficients' variance of the identified discrete-time model
  float coeff_var[5];
  /// fitness of the parameter estimate
  float fitness;
  float innov;
  float dt_model;
  float kc;
  float ki;
  float kd;
  float kff;
  float att_p;
  float rate_sp[3];
  float u_filt;
  float y_filt;
  uint8_t state;
} px4_msgs__msg__AutotuneAttitudeControlStatus;

// Struct for a sequence of px4_msgs__msg__AutotuneAttitudeControlStatus.
typedef struct px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence
{
  px4_msgs__msg__AutotuneAttitudeControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_
