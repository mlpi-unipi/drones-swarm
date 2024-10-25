// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/cellular_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CellularStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: failure_reason
  {
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: mcc
  {
    out << "mcc: ";
    rosidl_generator_traits::value_to_yaml(msg.mcc, out);
    out << ", ";
  }

  // member: mnc
  {
    out << "mnc: ";
    rosidl_generator_traits::value_to_yaml(msg.mnc, out);
    out << ", ";
  }

  // member: lac
  {
    out << "lac: ";
    rosidl_generator_traits::value_to_yaml(msg.lac, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CellularStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: failure_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: mcc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcc: ";
    rosidl_generator_traits::value_to_yaml(msg.mcc, out);
    out << "\n";
  }

  // member: mnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mnc: ";
    rosidl_generator_traits::value_to_yaml(msg.mnc, out);
    out << "\n";
  }

  // member: lac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lac: ";
    rosidl_generator_traits::value_to_yaml(msg.lac, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CellularStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::CellularStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::CellularStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs::msg::CellularStatus";
}

template<>
inline const char * name<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs/msg/CellularStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CellularStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
