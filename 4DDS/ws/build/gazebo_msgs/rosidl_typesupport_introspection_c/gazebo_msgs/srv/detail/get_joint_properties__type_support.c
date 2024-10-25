// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/GetJointProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/detail/get_joint_properties__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/detail/get_joint_properties__functions.h"
#include "gazebo_msgs/srv/detail/get_joint_properties__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__GetJointProperties_Request__init(message_memory);
}

void gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_fini_function(void * message_memory)
{
  gazebo_msgs__srv__GetJointProperties_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_member_array[1] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Request, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetJointProperties_Request",  // message name
  1,  // number of fields
  sizeof(gazebo_msgs__srv__GetJointProperties_Request),
  gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_member_array,  // message members
  gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_type_support_handle = {
  0,
  &gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Request)() {
  if (!gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__srv__GetJointProperties_Request__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/detail/get_joint_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_joint_properties__functions.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_joint_properties__struct.h"


// Include directives for member types
// Member `damping`
// Member `position`
// Member `rate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__GetJointProperties_Response__init(message_memory);
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_fini_function(void * message_memory)
{
  gazebo_msgs__srv__GetJointProperties_Response__fini(message_memory);
}

size_t gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__damping(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__damping(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__damping(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__damping(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__damping(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__damping(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__rate(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__rate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__rate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__rate(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__rate(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__rate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_member_array[6] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, damping),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__damping,  // size() function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__damping,  // get_const(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__damping,  // get(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__damping,  // fetch(index, &value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__damping,  // assign(index, value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__damping  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, position),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__position,  // size() function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__position,  // get_const(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__position,  // get(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__position,  // fetch(index, &value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__position,  // assign(index, value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__position  // resize(index) function pointer
  },
  {
    "rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, rate),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__size_function__GetJointProperties_Response__rate,  // size() function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetJointProperties_Response__rate,  // get_const(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__get_function__GetJointProperties_Response__rate,  // get(index) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetJointProperties_Response__rate,  // fetch(index, &value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetJointProperties_Response__rate,  // assign(index, value) function pointer
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetJointProperties_Response__rate  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetJointProperties_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetJointProperties_Response",  // message name
  6,  // number of fields
  sizeof(gazebo_msgs__srv__GetJointProperties_Response),
  gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_member_array,  // message members
  gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_type_support_handle = {
  0,
  &gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Response)() {
  if (!gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__srv__GetJointProperties_Response__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_joint_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "GetJointProperties",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties)() {
  if (!gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetJointProperties_Response)()->data;
  }

  return &gazebo_msgs__srv__detail__get_joint_properties__rosidl_typesupport_introspection_c__GetJointProperties_service_type_support_handle;
}
