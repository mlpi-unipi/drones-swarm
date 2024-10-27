// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_selector_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorSelectorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: primary_instance
  {
    out << "primary_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_instance, out);
    out << ", ";
  }

  // member: instances_available
  {
    out << "instances_available: ";
    rosidl_generator_traits::value_to_yaml(msg.instances_available, out);
    out << ", ";
  }

  // member: instance_changed_count
  {
    out << "instance_changed_count: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_changed_count, out);
    out << ", ";
  }

  // member: last_instance_change
  {
    out << "last_instance_change: ";
    rosidl_generator_traits::value_to_yaml(msg.last_instance_change, out);
    out << ", ";
  }

  // member: accel_device_id
  {
    out << "accel_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id, out);
    out << ", ";
  }

  // member: baro_device_id
  {
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << ", ";
  }

  // member: gyro_device_id
  {
    out << "gyro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id, out);
    out << ", ";
  }

  // member: mag_device_id
  {
    out << "mag_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_device_id, out);
    out << ", ";
  }

  // member: combined_test_ratio
  {
    if (msg.combined_test_ratio.size() == 0) {
      out << "combined_test_ratio: []";
    } else {
      out << "combined_test_ratio: [";
      size_t pending_items = msg.combined_test_ratio.size();
      for (auto item : msg.combined_test_ratio) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: relative_test_ratio
  {
    if (msg.relative_test_ratio.size() == 0) {
      out << "relative_test_ratio: []";
    } else {
      out << "relative_test_ratio: [";
      size_t pending_items = msg.relative_test_ratio.size();
      for (auto item : msg.relative_test_ratio) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: healthy
  {
    if (msg.healthy.size() == 0) {
      out << "healthy: []";
    } else {
      out << "healthy: [";
      size_t pending_items = msg.healthy.size();
      for (auto item : msg.healthy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accumulated_gyro_error
  {
    if (msg.accumulated_gyro_error.size() == 0) {
      out << "accumulated_gyro_error: []";
    } else {
      out << "accumulated_gyro_error: [";
      size_t pending_items = msg.accumulated_gyro_error.size();
      for (auto item : msg.accumulated_gyro_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accumulated_accel_error
  {
    if (msg.accumulated_accel_error.size() == 0) {
      out << "accumulated_accel_error: []";
    } else {
      out << "accumulated_accel_error: [";
      size_t pending_items = msg.accumulated_accel_error.size();
      for (auto item : msg.accumulated_accel_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_fault_detected
  {
    out << "gyro_fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_fault_detected, out);
    out << ", ";
  }

  // member: accel_fault_detected
  {
    out << "accel_fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_fault_detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorSelectorStatus & msg,
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

  // member: primary_instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_instance, out);
    out << "\n";
  }

  // member: instances_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instances_available: ";
    rosidl_generator_traits::value_to_yaml(msg.instances_available, out);
    out << "\n";
  }

  // member: instance_changed_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance_changed_count: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_changed_count, out);
    out << "\n";
  }

  // member: last_instance_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_instance_change: ";
    rosidl_generator_traits::value_to_yaml(msg.last_instance_change, out);
    out << "\n";
  }

  // member: accel_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id, out);
    out << "\n";
  }

  // member: baro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << "\n";
  }

  // member: gyro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id, out);
    out << "\n";
  }

  // member: mag_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_device_id, out);
    out << "\n";
  }

  // member: combined_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.combined_test_ratio.size() == 0) {
      out << "combined_test_ratio: []\n";
    } else {
      out << "combined_test_ratio:\n";
      for (auto item : msg.combined_test_ratio) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: relative_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.relative_test_ratio.size() == 0) {
      out << "relative_test_ratio: []\n";
    } else {
      out << "relative_test_ratio:\n";
      for (auto item : msg.relative_test_ratio) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.healthy.size() == 0) {
      out << "healthy: []\n";
    } else {
      out << "healthy:\n";
      for (auto item : msg.healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accumulated_gyro_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accumulated_gyro_error.size() == 0) {
      out << "accumulated_gyro_error: []\n";
    } else {
      out << "accumulated_gyro_error:\n";
      for (auto item : msg.accumulated_gyro_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accumulated_accel_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accumulated_accel_error.size() == 0) {
      out << "accumulated_accel_error: []\n";
    } else {
      out << "accumulated_accel_error:\n";
      for (auto item : msg.accumulated_accel_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_fault_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_fault_detected, out);
    out << "\n";
  }

  // member: accel_fault_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_fault_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorSelectorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorSelectorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorSelectorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorSelectorStatus>()
{
  return "px4_msgs::msg::EstimatorSelectorStatus";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorSelectorStatus>()
{
  return "px4_msgs/msg/EstimatorSelectorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorSelectorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorSelectorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorSelectorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__TRAITS_HPP_
