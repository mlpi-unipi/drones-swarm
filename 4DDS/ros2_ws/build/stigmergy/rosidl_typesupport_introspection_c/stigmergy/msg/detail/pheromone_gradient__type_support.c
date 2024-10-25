// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stigmergy/msg/detail/pheromone_gradient__rosidl_typesupport_introspection_c.h"
#include "stigmergy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stigmergy/msg/detail/pheromone_gradient__functions.h"
#include "stigmergy/msg/detail/pheromone_gradient__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stigmergy__msg__PheromoneGradient__init(message_memory);
}

void stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_fini_function(void * message_memory)
{
  stigmergy__msg__PheromoneGradient__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_member_array[2] = {
  {
    "dx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stigmergy__msg__PheromoneGradient, dx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stigmergy__msg__PheromoneGradient, dy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_members = {
  "stigmergy__msg",  // message namespace
  "PheromoneGradient",  // message name
  2,  // number of fields
  sizeof(stigmergy__msg__PheromoneGradient),
  stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_member_array,  // message members
  stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_init_function,  // function to initialize message memory (memory has to be allocated)
  stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_type_support_handle = {
  0,
  &stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stigmergy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stigmergy, msg, PheromoneGradient)() {
  if (!stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_type_support_handle.typesupport_identifier) {
    stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stigmergy__msg__PheromoneGradient__rosidl_typesupport_introspection_c__PheromoneGradient_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
