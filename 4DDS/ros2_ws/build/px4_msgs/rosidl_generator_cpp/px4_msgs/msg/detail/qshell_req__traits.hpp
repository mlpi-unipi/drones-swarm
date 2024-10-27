// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/QshellReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_REQ__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_REQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/qshell_req__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QshellReq & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: cmd
  {
    if (msg.cmd.size() == 0) {
      out << "cmd: []";
    } else {
      out << "cmd: [";
      size_t pending_items = msg.cmd.size();
      for (auto item : msg.cmd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: strlen
  {
    out << "strlen: ";
    rosidl_generator_traits::value_to_yaml(msg.strlen, out);
    out << ", ";
  }

  // member: request_sequence
  {
    out << "request_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.request_sequence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QshellReq & msg,
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

  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmd.size() == 0) {
      out << "cmd: []\n";
    } else {
      out << "cmd:\n";
      for (auto item : msg.cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: strlen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strlen: ";
    rosidl_generator_traits::value_to_yaml(msg.strlen, out);
    out << "\n";
  }

  // member: request_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.request_sequence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QshellReq & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::QshellReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::QshellReq & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::QshellReq>()
{
  return "px4_msgs::msg::QshellReq";
}

template<>
inline const char * name<px4_msgs::msg::QshellReq>()
{
  return "px4_msgs/msg/QshellReq";
}

template<>
struct has_fixed_size<px4_msgs::msg::QshellReq>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::QshellReq>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::QshellReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_REQ__TRAITS_HPP_
