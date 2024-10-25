// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorAidSource1d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE1D__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE1D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_aid_source1d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorAidSource1d & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: estimator_instance
  {
    out << "estimator_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_instance, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: time_last_fuse
  {
    out << "time_last_fuse: ";
    rosidl_generator_traits::value_to_yaml(msg.time_last_fuse, out);
    out << ", ";
  }

  // member: observation
  {
    out << "observation: ";
    rosidl_generator_traits::value_to_yaml(msg.observation, out);
    out << ", ";
  }

  // member: observation_variance
  {
    out << "observation_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_variance, out);
    out << ", ";
  }

  // member: innovation
  {
    out << "innovation: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation, out);
    out << ", ";
  }

  // member: innovation_variance
  {
    out << "innovation_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_variance, out);
    out << ", ";
  }

  // member: test_ratio
  {
    out << "test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.test_ratio, out);
    out << ", ";
  }

  // member: innovation_rejected
  {
    out << "innovation_rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_rejected, out);
    out << ", ";
  }

  // member: fused
  {
    out << "fused: ";
    rosidl_generator_traits::value_to_yaml(msg.fused, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorAidSource1d & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: estimator_instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.estimator_instance, out);
    out << "\n";
  }

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: time_last_fuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_last_fuse: ";
    rosidl_generator_traits::value_to_yaml(msg.time_last_fuse, out);
    out << "\n";
  }

  // member: observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation: ";
    rosidl_generator_traits::value_to_yaml(msg.observation, out);
    out << "\n";
  }

  // member: observation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_variance, out);
    out << "\n";
  }

  // member: innovation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation, out);
    out << "\n";
  }

  // member: innovation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_variance, out);
    out << "\n";
  }

  // member: test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.test_ratio, out);
    out << "\n";
  }

  // member: innovation_rejected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_rejected, out);
    out << "\n";
  }

  // member: fused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fused: ";
    rosidl_generator_traits::value_to_yaml(msg.fused, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorAidSource1d & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorAidSource1d & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorAidSource1d & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorAidSource1d>()
{
  return "px4_msgs::msg::EstimatorAidSource1d";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorAidSource1d>()
{
  return "px4_msgs/msg/EstimatorAidSource1d";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorAidSource1d>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorAidSource1d>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorAidSource1d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE1D__TRAITS_HPP_
