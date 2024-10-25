// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/detail/get_world_properties__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/detail/get_world_properties__functions.h"
#include "gazebo_msgs/srv/detail/get_world_properties__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__GetWorldProperties_Request__init(message_memory);
}

void gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_fini_function(void * message_memory)
{
  gazebo_msgs__srv__GetWorldProperties_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetWorldProperties_Request",  // message name
  1,  // number of fields
  sizeof(gazebo_msgs__srv__GetWorldProperties_Request),
  gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_member_array,  // message members
  gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle = {
  0,
  &gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)() {
  if (!gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__srv__GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/detail/get_world_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_world_properties__functions.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_world_properties__struct.h"


// Include directives for member types
// Member `model_names`
// Member `status_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__srv__GetWorldProperties_Response__init(message_memory);
}

void gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_fini_function(void * message_memory)
{
  gazebo_msgs__srv__GetWorldProperties_Response__fini(message_memory);
}

size_t gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__size_function__GetWorldProperties_Response__model_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetWorldProperties_Response__model_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_function__GetWorldProperties_Response__model_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetWorldProperties_Response__model_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetWorldProperties_Response__model_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetWorldProperties_Response__model_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_function__GetWorldProperties_Response__model_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetWorldProperties_Response__model_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_member_array[5] = {
  {
    "sim_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, sim_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, model_names),  // bytes offset in struct
    NULL,  // default value
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__size_function__GetWorldProperties_Response__model_names,  // size() function pointer
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_const_function__GetWorldProperties_Response__model_names,  // get_const(index) function pointer
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__get_function__GetWorldProperties_Response__model_names,  // get(index) function pointer
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__fetch_function__GetWorldProperties_Response__model_names,  // fetch(index, &value) function pointer
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__assign_function__GetWorldProperties_Response__model_names,  // assign(index, value) function pointer
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__resize_function__GetWorldProperties_Response__model_names  // resize(index) function pointer
  },
  {
    "rendering_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, rendering_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, success),  // bytes offset in struct
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
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetWorldProperties_Response",  // message name
  5,  // number of fields
  sizeof(gazebo_msgs__srv__GetWorldProperties_Response),
  gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_member_array,  // message members
  gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle = {
  0,
  &gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)() {
  if (!gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gazebo_msgs__srv__GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/detail/get_world_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "GetWorldProperties",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties)() {
  if (!gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)()->data;
  }

  return &gazebo_msgs__srv__detail__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle;
}
