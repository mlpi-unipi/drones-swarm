// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/register_ext_component_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegisterExtComponentRequest & msg,
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

  // member: register_arming_check
  {
    out << "register_arming_check: ";
    rosidl_generator_traits::value_to_yaml(msg.register_arming_check, out);
    out << ", ";
  }

  // member: register_mode
  {
    out << "register_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.register_mode, out);
    out << ", ";
  }

  // member: register_mode_executor
  {
    out << "register_mode_executor: ";
    rosidl_generator_traits::value_to_yaml(msg.register_mode_executor, out);
    out << ", ";
  }

  // member: enable_replace_internal_mode
  {
    out << "enable_replace_internal_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_replace_internal_mode, out);
    out << ", ";
  }

  // member: replace_internal_mode
  {
    out << "replace_internal_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_internal_mode, out);
    out << ", ";
  }

  // member: activate_mode_immediately
  {
    out << "activate_mode_immediately: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_mode_immediately, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterExtComponentRequest & msg,
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

  // member: register_arming_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_arming_check: ";
    rosidl_generator_traits::value_to_yaml(msg.register_arming_check, out);
    out << "\n";
  }

  // member: register_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.register_mode, out);
    out << "\n";
  }

  // member: register_mode_executor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "register_mode_executor: ";
    rosidl_generator_traits::value_to_yaml(msg.register_mode_executor, out);
    out << "\n";
  }

  // member: enable_replace_internal_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_replace_internal_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_replace_internal_mode, out);
    out << "\n";
  }

  // member: replace_internal_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replace_internal_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.replace_internal_mode, out);
    out << "\n";
  }

  // member: activate_mode_immediately
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate_mode_immediately: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_mode_immediately, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterExtComponentRequest & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RegisterExtComponentRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RegisterExtComponentRequest & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RegisterExtComponentRequest>()
{
  return "px4_msgs::msg::RegisterExtComponentRequest";
}

template<>
inline const char * name<px4_msgs::msg::RegisterExtComponentRequest>()
{
  return "px4_msgs/msg/RegisterExtComponentRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::RegisterExtComponentRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RegisterExtComponentRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RegisterExtComponentRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__TRAITS_HPP_
