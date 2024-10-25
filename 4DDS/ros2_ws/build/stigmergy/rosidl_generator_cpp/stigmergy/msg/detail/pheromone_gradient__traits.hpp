// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#ifndef STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__TRAITS_HPP_
#define STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stigmergy/msg/detail/pheromone_gradient__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stigmergy
{

namespace msg
{

inline void to_flow_style_yaml(
  const PheromoneGradient & msg,
  std::ostream & out)
{
  out << "{";
  // member: dx
  {
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << ", ";
  }

  // member: dy
  {
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PheromoneGradient & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dx: ";
    rosidl_generator_traits::value_to_yaml(msg.dx, out);
    out << "\n";
  }

  // member: dy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dy: ";
    rosidl_generator_traits::value_to_yaml(msg.dy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PheromoneGradient & msg, bool use_flow_style = false)
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

}  // namespace stigmergy

namespace rosidl_generator_traits
{

[[deprecated("use stigmergy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stigmergy::msg::PheromoneGradient & msg,
  std::ostream & out, size_t indentation = 0)
{
  stigmergy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stigmergy::msg::to_yaml() instead")]]
inline std::string to_yaml(const stigmergy::msg::PheromoneGradient & msg)
{
  return stigmergy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stigmergy::msg::PheromoneGradient>()
{
  return "stigmergy::msg::PheromoneGradient";
}

template<>
inline const char * name<stigmergy::msg::PheromoneGradient>()
{
  return "stigmergy/msg/PheromoneGradient";
}

template<>
struct has_fixed_size<stigmergy::msg::PheromoneGradient>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stigmergy::msg::PheromoneGradient>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stigmergy::msg::PheromoneGradient>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__TRAITS_HPP_
