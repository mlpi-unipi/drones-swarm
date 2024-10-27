// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:srv/SetJointProperties.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gazebo_msgs/srv/detail/set_joint_properties__struct.h"
#include "gazebo_msgs/srv/detail/set_joint_properties__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointProperties_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointProperties_Request_type_support_ids_t;

static const _SetJointProperties_Request_type_support_ids_t _SetJointProperties_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointProperties_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointProperties_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointProperties_Request_type_support_symbol_names_t _SetJointProperties_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetJointProperties_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointProperties_Request)),
  }
};

typedef struct _SetJointProperties_Request_type_support_data_t
{
  void * data[2];
} _SetJointProperties_Request_type_support_data_t;

static _SetJointProperties_Request_type_support_data_t _SetJointProperties_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointProperties_Request_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetJointProperties_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointProperties_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointProperties_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointProperties_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointProperties_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetJointProperties_Request)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetJointProperties_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_joint_properties__struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_joint_properties__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointProperties_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointProperties_Response_type_support_ids_t;

static const _SetJointProperties_Response_type_support_ids_t _SetJointProperties_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointProperties_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointProperties_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointProperties_Response_type_support_symbol_names_t _SetJointProperties_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetJointProperties_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointProperties_Response)),
  }
};

typedef struct _SetJointProperties_Response_type_support_data_t
{
  void * data[2];
} _SetJointProperties_Response_type_support_data_t;

static _SetJointProperties_Response_type_support_data_t _SetJointProperties_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointProperties_Response_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetJointProperties_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointProperties_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointProperties_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointProperties_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointProperties_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetJointProperties_Response)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetJointProperties_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_joint_properties__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointProperties_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointProperties_type_support_ids_t;

static const _SetJointProperties_type_support_ids_t _SetJointProperties_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointProperties_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointProperties_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointProperties_type_support_symbol_names_t _SetJointProperties_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, SetJointProperties)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointProperties)),
  }
};

typedef struct _SetJointProperties_type_support_data_t
{
  void * data[2];
} _SetJointProperties_type_support_data_t;

static _SetJointProperties_type_support_data_t _SetJointProperties_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointProperties_service_typesupport_map = {
  2,
  "gazebo_msgs",
  &_SetJointProperties_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointProperties_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointProperties_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointProperties_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointProperties_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gazebo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gazebo_msgs, srv, SetJointProperties)() {
  return &::gazebo_msgs::srv::rosidl_typesupport_c::SetJointProperties_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
