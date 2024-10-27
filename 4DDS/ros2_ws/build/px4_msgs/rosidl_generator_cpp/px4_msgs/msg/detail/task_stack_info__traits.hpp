// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TaskStackInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/task_stack_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskStackInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: stack_free
  {
    out << "stack_free: ";
    rosidl_generator_traits::value_to_yaml(msg.stack_free, out);
    out << ", ";
  }

  // member: task_name
  {
    if (msg.task_name.size() == 0) {
      out << "task_name: []";
    } else {
      out << "task_name: [";
      size_t pending_items = msg.task_name.size();
      for (auto item : msg.task_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskStackInfo & msg,
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

  // member: stack_free
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stack_free: ";
    rosidl_generator_traits::value_to_yaml(msg.stack_free, out);
    out << "\n";
  }

  // member: task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.task_name.size() == 0) {
      out << "task_name: []\n";
    } else {
      out << "task_name:\n";
      for (auto item : msg.task_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskStackInfo & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::TaskStackInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TaskStackInfo & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TaskStackInfo>()
{
  return "px4_msgs::msg::TaskStackInfo";
}

template<>
inline const char * name<px4_msgs::msg::TaskStackInfo>()
{
  return "px4_msgs/msg/TaskStackInfo";
}

template<>
struct has_fixed_size<px4_msgs::msg::TaskStackInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TaskStackInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TaskStackInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_
