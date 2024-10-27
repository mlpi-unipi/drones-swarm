// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/model_states__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/model_states__functions.h"
#include "gazebo_msgs/msg/detail/model_states__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__ModelStates__init(message_memory);
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_fini_function(void * message_memory)
{
  gazebo_msgs__msg__ModelStates__fini(message_memory);
}

size_t gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__pose(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__pose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__pose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__pose(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__pose(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__pose(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__twist(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__twist(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__twist(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__twist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Twist * item =
    ((const geometry_msgs__msg__Twist *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__twist(untyped_member, index));
  geometry_msgs__msg__Twist * value =
    (geometry_msgs__msg__Twist *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__twist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Twist * item =
    ((geometry_msgs__msg__Twist *)
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__twist(untyped_member, index));
  const geometry_msgs__msg__Twist * value =
    (const geometry_msgs__msg__Twist *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__twist(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ModelStates, name),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__name,  // size() function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__name,  // get_const(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__name,  // get(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__name,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__name,  // assign(index, value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__name  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ModelStates, pose),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__pose,  // size() function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__pose,  // get_const(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__pose,  // get(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__pose,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__pose,  // assign(index, value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__pose  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__ModelStates, twist),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__size_function__ModelStates__twist,  // size() function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_const_function__ModelStates__twist,  // get_const(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__get_function__ModelStates__twist,  // get(index) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__fetch_function__ModelStates__twist,  // fetch(index, &value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__assign_function__ModelStates__twist,  // assign(index, value) function pointer
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__resize_function__ModelStates__twist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "ModelStates",  // message name
  3,  // number of fields
  sizeof(gazebo_msgs__msg__ModelStates),
  gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_member_array,  // message members
  gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_type_support_handle = {
  0,
  &gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ModelStates)() {
  gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__msg__ModelStates__rosidl_typesupport_introspection_c__ModelStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
