// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/transponder_report__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/transponder_report__functions.h"
#include "px4_msgs/msg/detail/transponder_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__TransponderReport__init(message_memory);
}

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_fini_function(void * message_memory)
{
  px4_msgs__msg__TransponderReport__fini(message_memory);
}

size_t px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__size_function__TransponderReport__callsign(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__callsign(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__callsign(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__fetch_function__TransponderReport__callsign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__callsign(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__assign_function__TransponderReport__callsign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__callsign(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__size_function__TransponderReport__uas_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__uas_id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__uas_id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__fetch_function__TransponderReport__uas_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__uas_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__assign_function__TransponderReport__uas_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__uas_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_member_array[15] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icao_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, icao_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, altitude_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hor_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, hor_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ver_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, ver_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callsign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, callsign),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__size_function__TransponderReport__callsign,  // size() function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__callsign,  // get_const(index) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__callsign,  // get(index) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__fetch_function__TransponderReport__callsign,  // fetch(index, &value) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__assign_function__TransponderReport__callsign,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emitter_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, emitter_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tslc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, tslc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "squawk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, squawk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uas_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TransponderReport, uas_id),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__size_function__TransponderReport__uas_id,  // size() function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_const_function__TransponderReport__uas_id,  // get_const(index) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__get_function__TransponderReport__uas_id,  // get(index) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__fetch_function__TransponderReport__uas_id,  // fetch(index, &value) function pointer
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__assign_function__TransponderReport__uas_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_members = {
  "px4_msgs__msg",  // message namespace
  "TransponderReport",  // message name
  15,  // number of fields
  sizeof(px4_msgs__msg__TransponderReport),
  px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_member_array,  // message members
  px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_type_support_handle = {
  0,
  &px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, TransponderReport)() {
  if (!px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__TransponderReport__rosidl_typesupport_introspection_c__TransponderReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
