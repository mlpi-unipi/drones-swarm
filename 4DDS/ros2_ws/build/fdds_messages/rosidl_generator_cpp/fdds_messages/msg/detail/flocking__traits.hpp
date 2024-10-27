// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__FLOCKING__TRAITS_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__FLOCKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fdds_messages/msg/detail/flocking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fdds_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Flocking & msg,
  std::ostream & out)
{
  out << "{";
  // member: cohesion_x
  {
    out << "cohesion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cohesion_x, out);
    out << ", ";
  }

  // member: cohesion_y
  {
    out << "cohesion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cohesion_y, out);
    out << ", ";
  }

  // member: alignment_x
  {
    out << "alignment_x: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_x, out);
    out << ", ";
  }

  // member: alignment_y
  {
    out << "alignment_y: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_y, out);
    out << ", ";
  }

  // member: separation_x
  {
    out << "separation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.separation_x, out);
    out << ", ";
  }

  // member: separation_y
  {
    out << "separation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.separation_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Flocking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cohesion_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cohesion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cohesion_x, out);
    out << "\n";
  }

  // member: cohesion_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cohesion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cohesion_y, out);
    out << "\n";
  }

  // member: alignment_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment_x: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_x, out);
    out << "\n";
  }

  // member: alignment_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment_y: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment_y, out);
    out << "\n";
  }

  // member: separation_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "separation_x: ";
    rosidl_generator_traits::value_to_yaml(msg.separation_x, out);
    out << "\n";
  }

  // member: separation_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "separation_y: ";
    rosidl_generator_traits::value_to_yaml(msg.separation_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Flocking & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fdds_messages

namespace rosidl_generator_traits
{

[[deprecated("use fdds_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fdds_messages::msg::Flocking & msg,
  std::ostream & out, size_t indentation = 0)
{
  fdds_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fdds_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const fdds_messages::msg::Flocking & msg)
{
  return fdds_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fdds_messages::msg::Flocking>()
{
  return "fdds_messages::msg::Flocking";
}

template<>
inline const char * name<fdds_messages::msg::Flocking>()
{
  return "fdds_messages/msg/Flocking";
}

template<>
struct has_fixed_size<fdds_messages::msg::Flocking>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fdds_messages::msg::Flocking>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fdds_messages::msg::Flocking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FDDS_MESSAGES__MSG__DETAIL__FLOCKING__TRAITS_HPP_
