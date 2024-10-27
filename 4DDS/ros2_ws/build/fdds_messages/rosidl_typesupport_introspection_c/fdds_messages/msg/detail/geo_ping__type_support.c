// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fdds_messages/msg/detail/geo_ping__rosidl_typesupport_introspection_c.h"
#include "fdds_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fdds_messages/msg/detail/geo_ping__functions.h"
#include "fdds_messages/msg/detail/geo_ping__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fdds_messages__msg__GeoPing__init(message_memory);
}

void fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_fini_function(void * message_memory)
{
  fdds_messages__msg__GeoPing__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_member_array[5] = {
  {
    "vehicle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fdds_messages__msg__GeoPing, vehicle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fdds_messages__msg__GeoPing, latitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fdds_messages__msg__GeoPing, longitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_north_m_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fdds_messages__msg__GeoPing, speed_north_m_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_east_m_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fdds_messages__msg__GeoPing, speed_east_m_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_members = {
  "fdds_messages__msg",  // message namespace
  "GeoPing",  // message name
  5,  // number of fields
  sizeof(fdds_messages__msg__GeoPing),
  fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_member_array,  // message members
  fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_init_function,  // function to initialize message memory (memory has to be allocated)
  fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_type_support_handle = {
  0,
  &fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fdds_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fdds_messages, msg, GeoPing)() {
  if (!fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_type_support_handle.typesupport_identifier) {
    fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fdds_messages__msg__GeoPing__rosidl_typesupport_introspection_c__GeoPing_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
