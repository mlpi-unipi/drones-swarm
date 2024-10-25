// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/performance_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sensors'
#include "gazebo_msgs/msg/detail/sensor_performance_metric__traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerformanceMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: real_time_factor
  {
    out << "real_time_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.real_time_factor, out);
    out << ", ";
  }

  // member: sensors
  {
    if (msg.sensors.size() == 0) {
      out << "sensors: []";
    } else {
      out << "sensors: [";
      size_t pending_items = msg.sensors.size();
      for (auto item : msg.sensors) {
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
  const PerformanceMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: real_time_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_time_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.real_time_factor, out);
    out << "\n";
  }

  // member: sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors.size() == 0) {
      out << "sensors: []\n";
    } else {
      out << "sensors:\n";
      for (auto item : msg.sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerformanceMetrics & msg, bool use_flow_style = false)
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

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::msg::PerformanceMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::PerformanceMetrics & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::PerformanceMetrics>()
{
  return "gazebo_msgs::msg::PerformanceMetrics";
}

template<>
inline const char * name<gazebo_msgs::msg::PerformanceMetrics>()
{
  return "gazebo_msgs/msg/PerformanceMetrics";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::PerformanceMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::PerformanceMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::PerformanceMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__TRAITS_HPP_
