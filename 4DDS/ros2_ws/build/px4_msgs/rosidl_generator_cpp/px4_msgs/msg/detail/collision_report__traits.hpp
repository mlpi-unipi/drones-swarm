// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CollisionReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/collision_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: src
  {
    out << "src: ";
    rosidl_generator_traits::value_to_yaml(msg.src, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: threat_level
  {
    out << "threat_level: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_level, out);
    out << ", ";
  }

  // member: time_to_minimum_delta
  {
    out << "time_to_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_minimum_delta, out);
    out << ", ";
  }

  // member: altitude_minimum_delta
  {
    out << "altitude_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_minimum_delta, out);
    out << ", ";
  }

  // member: horizontal_minimum_delta
  {
    out << "horizontal_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_minimum_delta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "src: ";
    rosidl_generator_traits::value_to_yaml(msg.src, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: threat_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threat_level: ";
    rosidl_generator_traits::value_to_yaml(msg.threat_level, out);
    out << "\n";
  }

  // member: time_to_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_minimum_delta, out);
    out << "\n";
  }

  // member: altitude_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_minimum_delta, out);
    out << "\n";
  }

  // member: horizontal_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_minimum_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_minimum_delta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionReport & msg, bool use_flow_style = false)
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

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::CollisionReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::CollisionReport & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::CollisionReport>()
{
  return "px4_msgs::msg::CollisionReport";
}

template<>
inline const char * name<px4_msgs::msg::CollisionReport>()
{
  return "px4_msgs/msg/CollisionReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::CollisionReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CollisionReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CollisionReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_
