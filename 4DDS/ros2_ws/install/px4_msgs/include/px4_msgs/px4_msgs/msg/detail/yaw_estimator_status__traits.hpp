// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/yaw_estimator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const YawEstimatorStatus & msg,
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

  // member: yaw_composite
  {
    out << "yaw_composite: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_composite, out);
    out << ", ";
  }

  // member: yaw_variance
  {
    out << "yaw_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_variance, out);
    out << ", ";
  }

  // member: yaw_composite_valid
  {
    out << "yaw_composite_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_composite_valid, out);
    out << ", ";
  }

  // member: yaw
  {
    if (msg.yaw.size() == 0) {
      out << "yaw: []";
    } else {
      out << "yaw: [";
      size_t pending_items = msg.yaw.size();
      for (auto item : msg.yaw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innov_vn
  {
    if (msg.innov_vn.size() == 0) {
      out << "innov_vn: []";
    } else {
      out << "innov_vn: [";
      size_t pending_items = msg.innov_vn.size();
      for (auto item : msg.innov_vn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innov_ve
  {
    if (msg.innov_ve.size() == 0) {
      out << "innov_ve: []";
    } else {
      out << "innov_ve: [";
      size_t pending_items = msg.innov_ve.size();
      for (auto item : msg.innov_ve) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weight
  {
    if (msg.weight.size() == 0) {
      out << "weight: []";
    } else {
      out << "weight: [";
      size_t pending_items = msg.weight.size();
      for (auto item : msg.weight) {
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
  const YawEstimatorStatus & msg,
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

  // member: yaw_composite
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_composite: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_composite, out);
    out << "\n";
  }

  // member: yaw_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_variance, out);
    out << "\n";
  }

  // member: yaw_composite_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_composite_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_composite_valid, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw.size() == 0) {
      out << "yaw: []\n";
    } else {
      out << "yaw:\n";
      for (auto item : msg.yaw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_vn.size() == 0) {
      out << "innov_vn: []\n";
    } else {
      out << "innov_vn:\n";
      for (auto item : msg.innov_vn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_ve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_ve.size() == 0) {
      out << "innov_ve: []\n";
    } else {
      out << "innov_ve:\n";
      for (auto item : msg.innov_ve) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weight.size() == 0) {
      out << "weight: []\n";
    } else {
      out << "weight:\n";
      for (auto item : msg.weight) {
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

inline std::string to_yaml(const YawEstimatorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::YawEstimatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::YawEstimatorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::YawEstimatorStatus>()
{
  return "px4_msgs::msg::YawEstimatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::YawEstimatorStatus>()
{
  return "px4_msgs/msg/YawEstimatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::YawEstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::YawEstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::YawEstimatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_
