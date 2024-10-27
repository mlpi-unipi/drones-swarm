// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RadioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RADIO_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RADIO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/radio_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadioStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: remote_rssi
  {
    out << "remote_rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_rssi, out);
    out << ", ";
  }

  // member: txbuf
  {
    out << "txbuf: ";
    rosidl_generator_traits::value_to_yaml(msg.txbuf, out);
    out << ", ";
  }

  // member: noise
  {
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
    out << ", ";
  }

  // member: remote_noise
  {
    out << "remote_noise: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_noise, out);
    out << ", ";
  }

  // member: rxerrors
  {
    out << "rxerrors: ";
    rosidl_generator_traits::value_to_yaml(msg.rxerrors, out);
    out << ", ";
  }

  // member: fix
  {
    out << "fix: ";
    rosidl_generator_traits::value_to_yaml(msg.fix, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadioStatus & msg,
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

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: remote_rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_rssi, out);
    out << "\n";
  }

  // member: txbuf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "txbuf: ";
    rosidl_generator_traits::value_to_yaml(msg.txbuf, out);
    out << "\n";
  }

  // member: noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
    out << "\n";
  }

  // member: remote_noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_noise: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_noise, out);
    out << "\n";
  }

  // member: rxerrors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rxerrors: ";
    rosidl_generator_traits::value_to_yaml(msg.rxerrors, out);
    out << "\n";
  }

  // member: fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix: ";
    rosidl_generator_traits::value_to_yaml(msg.fix, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadioStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RadioStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RadioStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RadioStatus>()
{
  return "px4_msgs::msg::RadioStatus";
}

template<>
inline const char * name<px4_msgs::msg::RadioStatus>()
{
  return "px4_msgs/msg/RadioStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RadioStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RadioStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RadioStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RADIO_STATUS__TRAITS_HPP_
