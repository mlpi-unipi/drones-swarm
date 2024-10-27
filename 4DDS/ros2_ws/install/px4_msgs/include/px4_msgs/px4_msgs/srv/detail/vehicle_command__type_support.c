// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:srv/VehicleCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/srv/detail/vehicle_command__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/srv/detail/vehicle_command__functions.h"
#include "px4_msgs/srv/detail/vehicle_command__struct.h"


// Include directives for member types
// Member `request`
#include "px4_msgs/msg/vehicle_command.h"
// Member `request`
#include "px4_msgs/msg/detail/vehicle_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__srv__VehicleCommand_Request__init(message_memory);
}

void px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_fini_function(void * message_memory)
{
  px4_msgs__srv__VehicleCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__srv__VehicleCommand_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_members = {
  "px4_msgs__srv",  // message namespace
  "VehicleCommand_Request",  // message name
  1,  // number of fields
  sizeof(px4_msgs__srv__VehicleCommand_Request),
  px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_member_array,  // message members
  px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_type_support_handle = {
  0,
  &px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Request)() {
  px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleCommand)();
  if (!px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_type_support_handle.typesupport_identifier) {
    px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__srv__VehicleCommand_Request__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "px4_msgs/srv/detail/vehicle_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "px4_msgs/srv/detail/vehicle_command__functions.h"
// already included above
// #include "px4_msgs/srv/detail/vehicle_command__struct.h"


// Include directives for member types
// Member `reply`
#include "px4_msgs/msg/vehicle_command_ack.h"
// Member `reply`
#include "px4_msgs/msg/detail/vehicle_command_ack__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__srv__VehicleCommand_Response__init(message_memory);
}

void px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_fini_function(void * message_memory)
{
  px4_msgs__srv__VehicleCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_member_array[1] = {
  {
    "reply",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__srv__VehicleCommand_Response, reply),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_members = {
  "px4_msgs__srv",  // message namespace
  "VehicleCommand_Response",  // message name
  1,  // number of fields
  sizeof(px4_msgs__srv__VehicleCommand_Response),
  px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_member_array,  // message members
  px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_type_support_handle = {
  0,
  &px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Response)() {
  px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleCommandAck)();
  if (!px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_type_support_handle.typesupport_identifier) {
    px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__srv__VehicleCommand_Response__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "px4_msgs/srv/detail/vehicle_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_members = {
  "px4_msgs__srv",  // service namespace
  "VehicleCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_Request_message_type_support_handle,
  NULL  // response message
  // px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_type_support_handle = {
  0,
  &px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand)() {
  if (!px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_type_support_handle.typesupport_identifier) {
    px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, srv, VehicleCommand_Response)()->data;
  }

  return &px4_msgs__srv__detail__vehicle_command__rosidl_typesupport_introspection_c__VehicleCommand_service_type_support_handle;
}
