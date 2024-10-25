// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorBias3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_bias3d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorBias3d & msg,
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

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: bias
  {
    if (msg.bias.size() == 0) {
      out << "bias: []";
    } else {
      out << "bias: [";
      size_t pending_items = msg.bias.size();
      for (auto item : msg.bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias_var
  {
    if (msg.bias_var.size() == 0) {
      out << "bias_var: []";
    } else {
      out << "bias_var: [";
      size_t pending_items = msg.bias_var.size();
      for (auto item : msg.bias_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innov
  {
    if (msg.innov.size() == 0) {
      out << "innov: []";
    } else {
      out << "innov: [";
      size_t pending_items = msg.innov.size();
      for (auto item : msg.innov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innov_var
  {
    if (msg.innov_var.size() == 0) {
      out << "innov_var: []";
    } else {
      out << "innov_var: [";
      size_t pending_items = msg.innov_var.size();
      for (auto item : msg.innov_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innov_test_ratio
  {
    if (msg.innov_test_ratio.size() == 0) {
      out << "innov_test_ratio: []";
    } else {
      out << "innov_test_ratio: [";
      size_t pending_items = msg.innov_test_ratio.size();
      for (auto item : msg.innov_test_ratio) {
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
  const EstimatorBias3d & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias.size() == 0) {
      out << "bias: []\n";
    } else {
      out << "bias:\n";
      for (auto item : msg.bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_var.size() == 0) {
      out << "bias_var: []\n";
    } else {
      out << "bias_var:\n";
      for (auto item : msg.bias_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov.size() == 0) {
      out << "innov: []\n";
    } else {
      out << "innov:\n";
      for (auto item : msg.innov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_var.size() == 0) {
      out << "innov_var: []\n";
    } else {
      out << "innov_var:\n";
      for (auto item : msg.innov_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_test_ratio.size() == 0) {
      out << "innov_test_ratio: []\n";
    } else {
      out << "innov_test_ratio:\n";
      for (auto item : msg.innov_test_ratio) {
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

inline std::string to_yaml(const EstimatorBias3d & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorBias3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorBias3d & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorBias3d>()
{
  return "px4_msgs::msg::EstimatorBias3d";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorBias3d>()
{
  return "px4_msgs/msg/EstimatorBias3d";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorBias3d>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorBias3d>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorBias3d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__TRAITS_HPP_
