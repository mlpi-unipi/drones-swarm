// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/follow_target_estimator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FollowTargetEstimator & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: last_filter_reset_timestamp
  {
    out << "last_filter_reset_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_filter_reset_timestamp, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: stale
  {
    out << "stale: ";
    rosidl_generator_traits::value_to_yaml(msg.stale, out);
    out << ", ";
  }

  // member: lat_est
  {
    out << "lat_est: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_est, out);
    out << ", ";
  }

  // member: lon_est
  {
    out << "lon_est: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_est, out);
    out << ", ";
  }

  // member: alt_est
  {
    out << "alt_est: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_est, out);
    out << ", ";
  }

  // member: pos_est
  {
    if (msg.pos_est.size() == 0) {
      out << "pos_est: []";
    } else {
      out << "pos_est: [";
      size_t pending_items = msg.pos_est.size();
      for (auto item : msg.pos_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_est
  {
    if (msg.vel_est.size() == 0) {
      out << "vel_est: []";
    } else {
      out << "vel_est: [";
      size_t pending_items = msg.vel_est.size();
      for (auto item : msg.vel_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_est
  {
    if (msg.acc_est.size() == 0) {
      out << "acc_est: []";
    } else {
      out << "acc_est: [";
      size_t pending_items = msg.acc_est.size();
      for (auto item : msg.acc_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prediction_count
  {
    out << "prediction_count: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_count, out);
    out << ", ";
  }

  // member: fusion_count
  {
    out << "fusion_count: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowTargetEstimator & msg,
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

  // member: last_filter_reset_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_filter_reset_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_filter_reset_timestamp, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stale: ";
    rosidl_generator_traits::value_to_yaml(msg.stale, out);
    out << "\n";
  }

  // member: lat_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_est: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_est, out);
    out << "\n";
  }

  // member: lon_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_est: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_est, out);
    out << "\n";
  }

  // member: alt_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_est: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_est, out);
    out << "\n";
  }

  // member: pos_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_est.size() == 0) {
      out << "pos_est: []\n";
    } else {
      out << "pos_est:\n";
      for (auto item : msg.pos_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_est.size() == 0) {
      out << "vel_est: []\n";
    } else {
      out << "vel_est:\n";
      for (auto item : msg.vel_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_est.size() == 0) {
      out << "acc_est: []\n";
    } else {
      out << "acc_est:\n";
      for (auto item : msg.acc_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prediction_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_count: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_count, out);
    out << "\n";
  }

  // member: fusion_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_count: ";
    rosidl_generator_traits::value_to_yaml(msg.fusion_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowTargetEstimator & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::FollowTargetEstimator & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FollowTargetEstimator & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FollowTargetEstimator>()
{
  return "px4_msgs::msg::FollowTargetEstimator";
}

template<>
inline const char * name<px4_msgs::msg::FollowTargetEstimator>()
{
  return "px4_msgs/msg/FollowTargetEstimator";
}

template<>
struct has_fixed_size<px4_msgs::msg::FollowTargetEstimator>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FollowTargetEstimator>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FollowTargetEstimator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_
