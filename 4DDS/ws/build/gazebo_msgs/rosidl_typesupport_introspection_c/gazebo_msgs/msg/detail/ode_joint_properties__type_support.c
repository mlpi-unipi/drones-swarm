// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/ode_joint_properties__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__functions.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.h"


// Include directives for member types
// Member `damping`
// Member `hi_stop`
// Member `lo_stop`
// Member `erp`
// Member `cfm`
// Member `stop_erp`
// Member `stop_cfm`
// Member `fudge_factor`
// Member `fmax`
// Member `vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__ODEJointProperties__init(message_memory);
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_fini_function(void * message_memory)
{
  gazebo_msgs__msg__ODEJointProperties__fini(message_memory);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__damping(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__damping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__damping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__damping(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__damping(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__damping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__hi_stop(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__hi_stop(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__hi_stop(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__hi_stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__hi_stop(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__hi_stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__hi_stop(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__hi_stop(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__lo_stop(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__lo_stop(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__lo_stop(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__lo_stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__lo_stop(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__lo_stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__lo_stop(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__lo_stop(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__erp(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__erp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__erp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__erp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__erp(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__erp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__erp(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__erp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__cfm(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__cfm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__cfm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__cfm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__cfm(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__cfm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__cfm(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__cfm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__stop_erp(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_erp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_erp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__stop_erp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_erp(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__stop_erp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_erp(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__stop_erp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__stop_cfm(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_cfm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_cfm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__stop_cfm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_cfm(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__stop_cfm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_cfm(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__stop_cfm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__fudge_factor(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fudge_factor(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fudge_factor(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__fudge_factor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fudge_factor(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__fudge_factor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fudge_factor(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__fudge_factor(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__fmax(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fmax(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fmax(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__fmax(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fmax(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__fmax(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fmax(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__fmax(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__vel(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__vel(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_member_array[10] = {
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, damping),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__damping,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__damping,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__damping,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__damping,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__damping,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__damping  // resize(index) function pointer
  },
  {
    "hi_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, hi_stop),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__hi_stop,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__hi_stop,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__hi_stop,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__hi_stop,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__hi_stop,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__hi_stop  // resize(index) function pointer
  },
  {
    "lo_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, lo_stop),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__lo_stop,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__lo_stop,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__lo_stop,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__lo_stop,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__lo_stop,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__lo_stop  // resize(index) function pointer
  },
  {
    "erp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, erp),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__erp,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__erp,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__erp,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__erp,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__erp,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__erp  // resize(index) function pointer
  },
  {
    "cfm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, cfm),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__cfm,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__cfm,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__cfm,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__cfm,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__cfm,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__cfm  // resize(index) function pointer
  },
  {
    "stop_erp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, stop_erp),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__stop_erp,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_erp,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_erp,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__stop_erp,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__stop_erp,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__stop_erp  // resize(index) function pointer
  },
  {
    "stop_cfm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, stop_cfm),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__stop_cfm,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__stop_cfm,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__stop_cfm,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__stop_cfm,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__stop_cfm,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__stop_cfm  // resize(index) function pointer
  },
  {
    "fudge_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, fudge_factor),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__fudge_factor,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fudge_factor,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fudge_factor,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__fudge_factor,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__fudge_factor,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__fudge_factor  // resize(index) function pointer
  },
  {
    "fmax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, fmax),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__fmax,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__fmax,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__fmax,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__fmax,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__fmax,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__fmax  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ODEJointProperties, vel),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__size_function__ODEJointProperties__vel,  // size() function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_const_function__ODEJointProperties__vel,  // get_const(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__get_function__ODEJointProperties__vel,  // get(index) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__fetch_function__ODEJointProperties__vel,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__assign_function__ODEJointProperties__vel,  // assign(index, value) function pointer
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__resize_function__ODEJointProperties__vel  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "ODEJointProperties",  // message name
  10,  // number of fields
  sizeof(gazebo_msgs__msg__ODEJointProperties),
  gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_member_array,  // message members
  gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_type_support_handle = {
  0,
  &gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ODEJointProperties)() {
  if (!gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__msg__ODEJointProperties__rosidl_typesupport_introspection_c__ODEJointProperties_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
