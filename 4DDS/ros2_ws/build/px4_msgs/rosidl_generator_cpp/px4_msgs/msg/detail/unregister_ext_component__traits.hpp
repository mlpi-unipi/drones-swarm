// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/unregister_ext_component__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UnregisterExtComponent & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arming_check_id
  {
    out << "arming_check_id: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_check_id, out);
    out << ", ";
  }

  // member: mode_id
  {
    out << "mode_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_id, out);
    out << ", ";
  }

  // member: mode_executor_id
  {
    out << "mode_executor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_executor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnregisterExtComponent & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arming_check_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_check_id: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_check_id, out);
    out << "\n";
  }

  // member: mode_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_id, out);
    out << "\n";
  }

  // member: mode_executor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_executor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_executor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnregisterExtComponent & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::UnregisterExtComponent & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::UnregisterExtComponent & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::UnregisterExtComponent>()
{
  return "px4_msgs::msg::UnregisterExtComponent";
}

template<>
inline const char * name<px4_msgs::msg::UnregisterExtComponent>()
{
  return "px4_msgs/msg/UnregisterExtComponent";
}

template<>
struct has_fixed_size<px4_msgs::msg::UnregisterExtComponent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::UnregisterExtComponent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::UnregisterExtComponent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__TRAITS_HPP_
