// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorPerformanceMetric in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__SensorPerformanceMetric
{
  rosidl_runtime_c__String name;
  double sim_update_rate;
  double real_update_rate;
  double fps;
} gazebo_msgs__msg__SensorPerformanceMetric;

// Struct for a sequence of gazebo_msgs__msg__SensorPerformanceMetric.
typedef struct gazebo_msgs__msg__SensorPerformanceMetric__Sequence
{
  gazebo_msgs__msg__SensorPerformanceMetric * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__SensorPerformanceMetric__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_H_
