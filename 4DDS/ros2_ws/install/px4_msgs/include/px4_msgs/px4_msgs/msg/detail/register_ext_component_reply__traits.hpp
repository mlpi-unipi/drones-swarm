// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/register_ext_component_reply__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegisterExtComponentReply & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
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

  // member: px4_ros2_api_version
  {
    out << "px4_ros2_api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.px4_ros2_api_version, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const RegisterExtComponentReply & msg,
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

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
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

  // member: px4_ros2_api_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "px4_ros2_api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.px4_ros2_api_version, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
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

inline std::string to_yaml(const RegisterExtComponentReply & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RegisterExtComponentReply & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RegisterExtComponentReply & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RegisterExtComponentReply>()
{
  return "px4_msgs::msg::RegisterExtComponentReply";
}

template<>
inline const char * name<px4_msgs::msg::RegisterExtComponentReply>()
{
  return "px4_msgs/msg/RegisterExtComponentReply";
}

template<>
struct has_fixed_size<px4_msgs::msg::RegisterExtComponentReply>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RegisterExtComponentReply>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RegisterExtComponentReply>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__TRAITS_HPP_
