// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#ifndef STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "stigmergy/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "stigmergy/msg/detail/pheromone_gradient__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace stigmergy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
cdr_serialize(
  const stigmergy::msg::PheromoneGradient & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stigmergy::msg::PheromoneGradient & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
get_serialized_size(
  const stigmergy::msg::PheromoneGradient & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
max_serialized_size_PheromoneGradient(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stigmergy

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stigmergy, msg, PheromoneGradient)();

#ifdef __cplusplus
}
#endif

#endif  // STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
