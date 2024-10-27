// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTUATOR_SATURATION_OK'.
/**
  * The actuator is not saturated
 */
enum
{
  px4_msgs__msg__ControlAllocatorStatus__ACTUATOR_SATURATION_OK = 0
};

/// Constant 'ACTUATOR_SATURATION_UPPER_DYN'.
/**
  * The actuator is saturated (with a value <= the desired value) because it cannot increase its value faster
 */
enum
{
  px4_msgs__msg__ControlAllocatorStatus__ACTUATOR_SATURATION_UPPER_DYN = 1
};

/// Constant 'ACTUATOR_SATURATION_UPPER'.
/**
  * The actuator is saturated (with a value <= the desired value) because it has reached its maximum value
 */
enum
{
  px4_msgs__msg__ControlAllocatorStatus__ACTUATOR_SATURATION_UPPER = 2
};

/// Constant 'ACTUATOR_SATURATION_LOWER_DYN'.
/**
  * The actuator is saturated (with a value >= the desired value) because it cannot decrease its value faster
 */
enum
{
  px4_msgs__msg__ControlAllocatorStatus__ACTUATOR_SATURATION_LOWER_DYN = -1
};

/// Constant 'ACTUATOR_SATURATION_LOWER'.
/**
  * The actuator is saturated (with a value >= the desired value) because it has reached its minimum value
 */
enum
{
  px4_msgs__msg__ControlAllocatorStatus__ACTUATOR_SATURATION_LOWER = -2
};

/// Struct defined in msg/ControlAllocatorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__ControlAllocatorStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Boolean indicating whether the 3D torque setpoint was correctly allocated to actuators. 0 if not achieved, 1 if achieved.
  bool torque_setpoint_achieved;
  /// Unallocated torque. Equal to 0 if the setpoint was achieved.
  /// Computed as: unallocated_torque = torque_setpoint - allocated_torque
  float unallocated_torque[3];
  /// Boolean indicating whether the 3D thrust setpoint was correctly allocated to actuators. 0 if not achieved, 1 if achieved.
  bool thrust_setpoint_achieved;
  /// Unallocated thrust. Equal to 0 if the setpoint was achieved.
  /// Computed as: unallocated_thrust = thrust_setpoint - allocated_thrust
  float unallocated_thrust[3];
  /// Indicates actuator saturation status.
  /// Note 1: actuator saturation does not necessarily imply that the thrust setpoint or the torque setpoint were not achieved.
  /// Note 2: an actuator with limited dynamics can be indicated as upper-saturated even if it as not reached its maximum value.
  int8_t actuator_saturation[16];
  /// Bitmask of failed motors that were removed from the allocation / effectiveness matrix. Not necessarily identical to the report from FailureDetector
  uint16_t handled_motor_failure_mask;
} px4_msgs__msg__ControlAllocatorStatus;

// Struct for a sequence of px4_msgs__msg__ControlAllocatorStatus.
typedef struct px4_msgs__msg__ControlAllocatorStatus__Sequence
{
  px4_msgs__msg__ControlAllocatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ControlAllocatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_H_
