// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/esc_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'esc'
#include "px4_msgs/msg/detail/esc_report__traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EscStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: esc_count
  {
    out << "esc_count: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_count, out);
    out << ", ";
  }

  // member: esc_connectiontype
  {
    out << "esc_connectiontype: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_connectiontype, out);
    out << ", ";
  }

  // member: esc_online_flags
  {
    out << "esc_online_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_online_flags, out);
    out << ", ";
  }

  // member: esc_armed_flags
  {
    out << "esc_armed_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_armed_flags, out);
    out << ", ";
  }

  // member: esc
  {
    if (msg.esc.size() == 0) {
      out << "esc: []";
    } else {
      out << "esc: [";
      size_t pending_items = msg.esc.size();
      for (auto item : msg.esc) {
        to_flow_style_yaml(item, out);
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
  const EscStatus & msg,
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

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: esc_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_count: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_count, out);
    out << "\n";
  }

  // member: esc_connectiontype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_connectiontype: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_connectiontype, out);
    out << "\n";
  }

  // member: esc_online_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_online_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_online_flags, out);
    out << "\n";
  }

  // member: esc_armed_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_armed_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_armed_flags, out);
    out << "\n";
  }

  // member: esc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.esc.size() == 0) {
      out << "esc: []\n";
    } else {
      out << "esc:\n";
      for (auto item : msg.esc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EscStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EscStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EscStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EscStatus>()
{
  return "px4_msgs::msg::EscStatus";
}

template<>
inline const char * name<px4_msgs::msg::EscStatus>()
{
  return "px4_msgs/msg/EscStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::EscStatus>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::EscReport>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::EscStatus>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::EscReport>::value> {};

template<>
struct is_message<px4_msgs::msg::EscStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESC_STATUS__TRAITS_HPP_
