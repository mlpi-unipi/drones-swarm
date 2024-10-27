// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorPerformanceMetric & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: sim_update_rate
  {
    out << "sim_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_update_rate, out);
    out << ", ";
  }

  // member: real_update_rate
  {
    out << "real_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.real_update_rate, out);
    out << ", ";
  }

  // member: fps
  {
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorPerformanceMetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: sim_update_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sim_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_update_rate, out);
    out << "\n";
  }

  // member: real_update_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.real_update_rate, out);
    out << "\n";
  }

  // member: fps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorPerformanceMetric & msg, bool use_flow_style = false)
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
  const gazebo_msgs::msg::SensorPerformanceMetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::SensorPerformanceMetric & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return "gazebo_msgs::msg::SensorPerformanceMetric";
}

template<>
inline const char * name<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return "gazebo_msgs/msg/SensorPerformanceMetric";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_
