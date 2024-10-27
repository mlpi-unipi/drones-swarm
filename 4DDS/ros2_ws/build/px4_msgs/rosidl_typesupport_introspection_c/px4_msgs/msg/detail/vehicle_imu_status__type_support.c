// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/vehicle_imu_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/vehicle_imu_status__functions.h"
#include "px4_msgs/msg/detail/vehicle_imu_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__VehicleImuStatus__init(message_memory);
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__VehicleImuStatus__fini(message_memory);
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__accel_clipping(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__accel_clipping(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__accel_clipping(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__accel_clipping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__accel_clipping(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__accel_clipping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__accel_clipping(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__gyro_clipping(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__gyro_clipping(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__gyro_clipping(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__gyro_clipping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__gyro_clipping(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__gyro_clipping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__gyro_clipping(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__mean_accel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_accel(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_accel(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__mean_accel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_accel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__mean_accel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_accel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__mean_gyro(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_gyro(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_gyro(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__mean_gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_gyro(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__mean_gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_gyro(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__var_accel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_accel(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_accel(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__var_accel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_accel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__var_accel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_accel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__var_gyro(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_gyro(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_gyro(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__var_gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_gyro(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__var_gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_gyro(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_member_array[20] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_clipping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_clipping),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__accel_clipping,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__accel_clipping,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__accel_clipping,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__accel_clipping,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__accel_clipping,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_clipping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_clipping),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__gyro_clipping,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__gyro_clipping,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__gyro_clipping,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__gyro_clipping,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__gyro_clipping,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_error_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_error_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_raw_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_raw_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_raw_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_raw_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_vibration_metric",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, accel_vibration_metric),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_vibration_metric",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, gyro_vibration_metric),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta_angle_coning_metric",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, delta_angle_coning_metric),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mean_accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, mean_accel),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__mean_accel,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_accel,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_accel,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__mean_accel,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__mean_accel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mean_gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, mean_gyro),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__mean_gyro,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__mean_gyro,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__mean_gyro,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__mean_gyro,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__mean_gyro,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "var_accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, var_accel),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__var_accel,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_accel,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_accel,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__var_accel,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__var_accel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "var_gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, var_gyro),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__size_function__VehicleImuStatus__var_gyro,  // size() function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_const_function__VehicleImuStatus__var_gyro,  // get_const(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__get_function__VehicleImuStatus__var_gyro,  // get(index) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__fetch_function__VehicleImuStatus__var_gyro,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__assign_function__VehicleImuStatus__var_gyro,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, temperature_accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleImuStatus, temperature_gyro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "VehicleImuStatus",  // message name
  20,  // number of fields
  sizeof(px4_msgs__msg__VehicleImuStatus),
  px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_member_array,  // message members
  px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_type_support_handle = {
  0,
  &px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleImuStatus)() {
  if (!px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__VehicleImuStatus__rosidl_typesupport_introspection_c__VehicleImuStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
