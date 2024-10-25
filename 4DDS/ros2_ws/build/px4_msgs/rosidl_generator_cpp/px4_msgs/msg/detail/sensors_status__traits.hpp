// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensors_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: device_id_primary
  {
    out << "device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id_primary, out);
    out << ", ";
  }

  // member: device_ids
  {
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []";
    } else {
      out << "device_ids: [";
      size_t pending_items = msg.device_ids.size();
      for (auto item : msg.device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inconsistency
  {
    if (msg.inconsistency.size() == 0) {
      out << "inconsistency: []";
    } else {
      out << "inconsistency: [";
      size_t pending_items = msg.inconsistency.size();
      for (auto item : msg.inconsistency) {
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

  // member: priority
  {
    if (msg.priority.size() == 0) {
      out << "priority: []";
    } else {
      out << "priority: [";
      size_t pending_items = msg.priority.size();
      for (auto item : msg.priority) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enabled
  {
    if (msg.enabled.size() == 0) {
      out << "enabled: []";
    } else {
      out << "enabled: [";
      size_t pending_items = msg.enabled.size();
      for (auto item : msg.enabled) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: external
  {
    if (msg.external.size() == 0) {
      out << "external: []";
    } else {
      out << "external: [";
      size_t pending_items = msg.external.size();
      for (auto item : msg.external) {
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
  const SensorsStatus & msg,
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

  // member: device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id_primary, out);
    out << "\n";
  }

  // member: device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []\n";
    } else {
      out << "device_ids:\n";
      for (auto item : msg.device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inconsistency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inconsistency.size() == 0) {
      out << "inconsistency: []\n";
    } else {
      out << "inconsistency:\n";
      for (auto item : msg.inconsistency) {
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

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.priority.size() == 0) {
      out << "priority: []\n";
    } else {
      out << "priority:\n";
      for (auto item : msg.priority) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled.size() == 0) {
      out << "enabled: []\n";
    } else {
      out << "enabled:\n";
      for (auto item : msg.enabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: external
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.external.size() == 0) {
      out << "external: []\n";
    } else {
      out << "external:\n";
      for (auto item : msg.external) {
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

inline std::string to_yaml(const SensorsStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorsStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorsStatus>()
{
  return "px4_msgs::msg::SensorsStatus";
}

template<>
inline const char * name<px4_msgs::msg::SensorsStatus>()
{
  return "px4_msgs/msg/SensorsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_
