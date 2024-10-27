// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RtlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RTL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/rtl_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RtlStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: safe_points_id
  {
    out << "safe_points_id: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_points_id, out);
    out << ", ";
  }

  // member: is_evaluation_pending
  {
    out << "is_evaluation_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.is_evaluation_pending, out);
    out << ", ";
  }

  // member: has_vtol_approach
  {
    out << "has_vtol_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vtol_approach, out);
    out << ", ";
  }

  // member: rtl_type
  {
    out << "rtl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.rtl_type, out);
    out << ", ";
  }

  // member: safe_point_index
  {
    out << "safe_point_index: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_point_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RtlStatus & msg,
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

  // member: safe_points_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_points_id: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_points_id, out);
    out << "\n";
  }

  // member: is_evaluation_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_evaluation_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.is_evaluation_pending, out);
    out << "\n";
  }

  // member: has_vtol_approach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_vtol_approach: ";
    rosidl_generator_traits::value_to_yaml(msg.has_vtol_approach, out);
    out << "\n";
  }

  // member: rtl_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.rtl_type, out);
    out << "\n";
  }

  // member: safe_point_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_point_index: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_point_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RtlStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RtlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RtlStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RtlStatus>()
{
  return "px4_msgs::msg::RtlStatus";
}

template<>
inline const char * name<px4_msgs::msg::RtlStatus>()
{
  return "px4_msgs/msg/RtlStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RtlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RtlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RtlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RTL_STATUS__TRAITS_HPP_
