// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/wheel_slip__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/wheel_slip__functions.h"
#include "gazebo_msgs/msg/detail/wheel_slip__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `lateral_slip`
// Member `longitudinal_slip`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__WheelSlip__init(message_memory);
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_fini_function(void * message_memory)
{
  gazebo_msgs__msg__WheelSlip__fini(message_memory);
}

size_t gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__lateral_slip(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__lateral_slip(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__lateral_slip(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__lateral_slip(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__lateral_slip(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__lateral_slip(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__lateral_slip(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__lateral_slip(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__longitudinal_slip(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__longitudinal_slip(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__longitudinal_slip(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__longitudinal_slip(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__longitudinal_slip(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__longitudinal_slip(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__longitudinal_slip(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__longitudinal_slip(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__WheelSlip, name),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__name,  // size() function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__name,  // get_const(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__name,  // get(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__name,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__name,  // assign(index, value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__name  // resize(index) function pointer
  },
  {
    "lateral_slip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__WheelSlip, lateral_slip),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__lateral_slip,  // size() function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__lateral_slip,  // get_const(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__lateral_slip,  // get(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__lateral_slip,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__lateral_slip,  // assign(index, value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__lateral_slip  // resize(index) function pointer
  },
  {
    "longitudinal_slip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__WheelSlip, longitudinal_slip),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__size_function__WheelSlip__longitudinal_slip,  // size() function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_const_function__WheelSlip__longitudinal_slip,  // get_const(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__get_function__WheelSlip__longitudinal_slip,  // get(index) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__fetch_function__WheelSlip__longitudinal_slip,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__assign_function__WheelSlip__longitudinal_slip,  // assign(index, value) function pointer
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__resize_function__WheelSlip__longitudinal_slip  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "WheelSlip",  // message name
  3,  // number of fields
  sizeof(gazebo_msgs__msg__WheelSlip),
  gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_member_array,  // message members
  gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_type_support_handle = {
  0,
  &gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, WheelSlip)() {
  if (!gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__msg__WheelSlip__rosidl_typesupport_introspection_c__WheelSlip_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
