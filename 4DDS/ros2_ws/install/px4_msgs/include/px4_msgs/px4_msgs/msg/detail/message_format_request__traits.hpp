// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MessageFormatRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/message_format_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MessageFormatRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << ", ";
  }

  // member: topic_name
  {
    if (msg.topic_name.size() == 0) {
      out << "topic_name: []";
    } else {
      out << "topic_name: [";
      size_t pending_items = msg.topic_name.size();
      for (auto item : msg.topic_name) {
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
  const MessageFormatRequest & msg,
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

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topic_name.size() == 0) {
      out << "topic_name: []\n";
    } else {
      out << "topic_name:\n";
      for (auto item : msg.topic_name) {
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

inline std::string to_yaml(const MessageFormatRequest & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::MessageFormatRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::MessageFormatRequest & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::MessageFormatRequest>()
{
  return "px4_msgs::msg::MessageFormatRequest";
}

template<>
inline const char * name<px4_msgs::msg::MessageFormatRequest>()
{
  return "px4_msgs/msg/MessageFormatRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::MessageFormatRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MessageFormatRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MessageFormatRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_
