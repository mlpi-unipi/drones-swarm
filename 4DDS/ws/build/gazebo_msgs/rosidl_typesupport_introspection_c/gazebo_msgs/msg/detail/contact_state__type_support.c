// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/contact_state__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/contact_state__functions.h"
#include "gazebo_msgs/msg/detail/contact_state__struct.h"


// Include directives for member types
// Member `info`
// Member `collision1_name`
// Member `collision2_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `wrenches`
// Member `total_wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrenches`
// Member `total_wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
// Member `contact_positions`
// Member `contact_normals`
#include "geometry_msgs/msg/vector3.h"
// Member `contact_positions`
// Member `contact_normals`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__ContactState__init(message_memory);
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_fini_function(void * message_memory)
{
  gazebo_msgs__msg__ContactState__fini(message_memory);
}

size_t gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__wrenches(
  const void * untyped_member)
{
  const geometry_msgs__msg__Wrench__Sequence * member =
    (const geometry_msgs__msg__Wrench__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__wrenches(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Wrench__Sequence * member =
    (const geometry_msgs__msg__Wrench__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__wrenches(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Wrench__Sequence * member =
    (geometry_msgs__msg__Wrench__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__wrenches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Wrench * item =
    ((const geometry_msgs__msg__Wrench *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__wrenches(untyped_member, index));
  geometry_msgs__msg__Wrench * value =
    (geometry_msgs__msg__Wrench *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__wrenches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Wrench * item =
    ((geometry_msgs__msg__Wrench *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__wrenches(untyped_member, index));
  const geometry_msgs__msg__Wrench * value =
    (const geometry_msgs__msg__Wrench *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__wrenches(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Wrench__Sequence * member =
    (geometry_msgs__msg__Wrench__Sequence *)(untyped_member);
  geometry_msgs__msg__Wrench__Sequence__fini(member);
  return geometry_msgs__msg__Wrench__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__contact_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__contact_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_positions(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__contact_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_positions(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__contact_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__contact_normals(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_normals(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_normals(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__contact_normals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_normals(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__contact_normals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_normals(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__contact_normals(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__depths(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__depths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__depths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__depths(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__depths(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__depths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array[8] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision1_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, collision1_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision2_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, collision2_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrenches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, wrenches),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__wrenches,  // size() function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__wrenches,  // get_const(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__wrenches,  // get(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__wrenches,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__wrenches,  // assign(index, value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__wrenches  // resize(index) function pointer
  },
  {
    "total_wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, total_wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, contact_positions),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__contact_positions,  // size() function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_positions,  // get_const(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_positions,  // get(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__contact_positions,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__contact_positions,  // assign(index, value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__contact_positions  // resize(index) function pointer
  },
  {
    "contact_normals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, contact_normals),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__contact_normals,  // size() function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__contact_normals,  // get_const(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__contact_normals,  // get(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__contact_normals,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__contact_normals,  // assign(index, value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__contact_normals  // resize(index) function pointer
  },
  {
    "depths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ContactState, depths),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__size_function__ContactState__depths,  // size() function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_const_function__ContactState__depths,  // get_const(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__get_function__ContactState__depths,  // get(index) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__fetch_function__ContactState__depths,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__assign_function__ContactState__depths,  // assign(index, value) function pointer
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__resize_function__ContactState__depths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "ContactState",  // message name
  8,  // number of fields
  sizeof(gazebo_msgs__msg__ContactState),
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array,  // message members
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_type_support_handle = {
  0,
  &gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ContactState)() {
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__msg__ContactState__rosidl_typesupport_introspection_c__ContactState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
