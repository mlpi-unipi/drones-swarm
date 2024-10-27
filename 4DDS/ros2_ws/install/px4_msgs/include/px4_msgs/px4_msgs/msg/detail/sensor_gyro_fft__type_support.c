// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/sensor_gyro_fft__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/sensor_gyro_fft__functions.h"
#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__SensorGyroFft__init(message_memory);
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_fini_function(void * message_memory)
{
  px4_msgs__msg__SensorGyroFft__fini(message_memory);
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_x(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_x(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_x(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_y(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_y(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_y(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_z(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_z(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_z(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_x(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_x(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_x(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_y(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_y(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_y(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_z(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_z(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_z(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_member_array[11] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_sample_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, sensor_sample_rate_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, resolution_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_frequencies_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_frequencies_x),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_x,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_x,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_x,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_x,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_x,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_frequencies_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_frequencies_y),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_y,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_y,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_y,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_y,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_y,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_frequencies_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_frequencies_z),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_frequencies_z,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_frequencies_z,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_frequencies_z,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_frequencies_z,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_frequencies_z,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_snr_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_snr_x),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_x,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_x,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_x,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_x,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_x,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_snr_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_snr_y),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_y,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_y,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_y,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_y,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_y,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "peak_snr_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorGyroFft, peak_snr_z),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__size_function__SensorGyroFft__peak_snr_z,  // size() function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_const_function__SensorGyroFft__peak_snr_z,  // get_const(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__get_function__SensorGyroFft__peak_snr_z,  // get(index) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__fetch_function__SensorGyroFft__peak_snr_z,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__assign_function__SensorGyroFft__peak_snr_z,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_members = {
  "px4_msgs__msg",  // message namespace
  "SensorGyroFft",  // message name
  11,  // number of fields
  sizeof(px4_msgs__msg__SensorGyroFft),
  px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_member_array,  // message members
  px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_type_support_handle = {
  0,
  &px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, SensorGyroFft)() {
  if (!px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__SensorGyroFft__rosidl_typesupport_introspection_c__SensorGyroFft_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
