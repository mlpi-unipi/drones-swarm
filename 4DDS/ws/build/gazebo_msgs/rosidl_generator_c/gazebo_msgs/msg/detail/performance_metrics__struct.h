// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensors'
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.h"

/// Struct defined in msg/PerformanceMetrics in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__PerformanceMetrics
{
  std_msgs__msg__Header header;
  double real_time_factor;
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence sensors;
} gazebo_msgs__msg__PerformanceMetrics;

// Struct for a sequence of gazebo_msgs__msg__PerformanceMetrics.
typedef struct gazebo_msgs__msg__PerformanceMetrics__Sequence
{
  gazebo_msgs__msg__PerformanceMetrics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__PerformanceMetrics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_H_
