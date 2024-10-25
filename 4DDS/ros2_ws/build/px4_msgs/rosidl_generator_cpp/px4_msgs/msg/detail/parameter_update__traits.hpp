// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ParameterUpdate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/parameter_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParameterUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: instance
  {
    out << "instance: ";
    rosidl_generator_traits::value_to_yaml(msg.instance, out);
    out << ", ";
  }

  // member: get_count
  {
    out << "get_count: ";
    rosidl_generator_traits::value_to_yaml(msg.get_count, out);
    out << ", ";
  }

  // member: set_count
  {
    out << "set_count: ";
    rosidl_generator_traits::value_to_yaml(msg.set_count, out);
    out << ", ";
  }

  // member: find_count
  {
    out << "find_count: ";
    rosidl_generator_traits::value_to_yaml(msg.find_count, out);
    out << ", ";
  }

  // member: export_count
  {
    out << "export_count: ";
    rosidl_generator_traits::value_to_yaml(msg.export_count, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: changed
  {
    out << "changed: ";
    rosidl_generator_traits::value_to_yaml(msg.changed, out);
    out << ", ";
  }

  // member: custom_default
  {
    out << "custom_default: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_default, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParameterUpdate & msg,
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

  // member: instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance: ";
    rosidl_generator_traits::value_to_yaml(msg.instance, out);
    out << "\n";
  }

  // member: get_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_count: ";
    rosidl_generator_traits::value_to_yaml(msg.get_count, out);
    out << "\n";
  }

  // member: set_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_count: ";
    rosidl_generator_traits::value_to_yaml(msg.set_count, out);
    out << "\n";
  }

  // member: find_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "find_count: ";
    rosidl_generator_traits::value_to_yaml(msg.find_count, out);
    out << "\n";
  }

  // member: export_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "export_count: ";
    rosidl_generator_traits::value_to_yaml(msg.export_count, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changed: ";
    rosidl_generator_traits::value_to_yaml(msg.changed, out);
    out << "\n";
  }

  // member: custom_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_default: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_default, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParameterUpdate & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ParameterUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ParameterUpdate & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ParameterUpdate>()
{
  return "px4_msgs::msg::ParameterUpdate";
}

template<>
inline const char * name<px4_msgs::msg::ParameterUpdate>()
{
  return "px4_msgs/msg/ParameterUpdate";
}

template<>
struct has_fixed_size<px4_msgs::msg::ParameterUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ParameterUpdate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ParameterUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__TRAITS_HPP_
