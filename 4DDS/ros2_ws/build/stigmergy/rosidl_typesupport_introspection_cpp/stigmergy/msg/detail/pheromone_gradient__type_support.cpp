// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stigmergy/msg/detail/pheromone_gradient__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stigmergy
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PheromoneGradient_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stigmergy::msg::PheromoneGradient(_init);
}

void PheromoneGradient_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stigmergy::msg::PheromoneGradient *>(message_memory);
  typed_message->~PheromoneGradient();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PheromoneGradient_message_member_array[2] = {
  {
    "dx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stigmergy::msg::PheromoneGradient, dx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stigmergy::msg::PheromoneGradient, dy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PheromoneGradient_message_members = {
  "stigmergy::msg",  // message namespace
  "PheromoneGradient",  // message name
  2,  // number of fields
  sizeof(stigmergy::msg::PheromoneGradient),
  PheromoneGradient_message_member_array,  // message members
  PheromoneGradient_init_function,  // function to initialize message memory (memory has to be allocated)
  PheromoneGradient_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PheromoneGradient_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PheromoneGradient_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stigmergy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stigmergy::msg::PheromoneGradient>()
{
  return &::stigmergy::msg::rosidl_typesupport_introspection_cpp::PheromoneGradient_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stigmergy, msg, PheromoneGradient)() {
  return &::stigmergy::msg::rosidl_typesupport_introspection_cpp::PheromoneGradient_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
