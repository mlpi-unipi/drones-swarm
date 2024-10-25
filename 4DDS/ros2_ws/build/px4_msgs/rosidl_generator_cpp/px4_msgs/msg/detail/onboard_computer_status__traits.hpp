// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/onboard_computer_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OnboardComputerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: uptime
  {
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: cpu_cores
  {
    if (msg.cpu_cores.size() == 0) {
      out << "cpu_cores: []";
    } else {
      out << "cpu_cores: [";
      size_t pending_items = msg.cpu_cores.size();
      for (auto item : msg.cpu_cores) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cpu_combined
  {
    if (msg.cpu_combined.size() == 0) {
      out << "cpu_combined: []";
    } else {
      out << "cpu_combined: [";
      size_t pending_items = msg.cpu_combined.size();
      for (auto item : msg.cpu_combined) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gpu_cores
  {
    if (msg.gpu_cores.size() == 0) {
      out << "gpu_cores: []";
    } else {
      out << "gpu_cores: [";
      size_t pending_items = msg.gpu_cores.size();
      for (auto item : msg.gpu_cores) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gpu_combined
  {
    if (msg.gpu_combined.size() == 0) {
      out << "gpu_combined: []";
    } else {
      out << "gpu_combined: [";
      size_t pending_items = msg.gpu_combined.size();
      for (auto item : msg.gpu_combined) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature_board
  {
    out << "temperature_board: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_board, out);
    out << ", ";
  }

  // member: temperature_core
  {
    if (msg.temperature_core.size() == 0) {
      out << "temperature_core: []";
    } else {
      out << "temperature_core: [";
      size_t pending_items = msg.temperature_core.size();
      for (auto item : msg.temperature_core) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fan_speed
  {
    if (msg.fan_speed.size() == 0) {
      out << "fan_speed: []";
    } else {
      out << "fan_speed: [";
      size_t pending_items = msg.fan_speed.size();
      for (auto item : msg.fan_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ram_usage
  {
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << ", ";
  }

  // member: ram_total
  {
    out << "ram_total: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_total, out);
    out << ", ";
  }

  // member: storage_type
  {
    if (msg.storage_type.size() == 0) {
      out << "storage_type: []";
    } else {
      out << "storage_type: [";
      size_t pending_items = msg.storage_type.size();
      for (auto item : msg.storage_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: storage_usage
  {
    if (msg.storage_usage.size() == 0) {
      out << "storage_usage: []";
    } else {
      out << "storage_usage: [";
      size_t pending_items = msg.storage_usage.size();
      for (auto item : msg.storage_usage) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: storage_total
  {
    if (msg.storage_total.size() == 0) {
      out << "storage_total: []";
    } else {
      out << "storage_total: [";
      size_t pending_items = msg.storage_total.size();
      for (auto item : msg.storage_total) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_type
  {
    if (msg.link_type.size() == 0) {
      out << "link_type: []";
    } else {
      out << "link_type: [";
      size_t pending_items = msg.link_type.size();
      for (auto item : msg.link_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_tx_rate
  {
    if (msg.link_tx_rate.size() == 0) {
      out << "link_tx_rate: []";
    } else {
      out << "link_tx_rate: [";
      size_t pending_items = msg.link_tx_rate.size();
      for (auto item : msg.link_tx_rate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_rx_rate
  {
    if (msg.link_rx_rate.size() == 0) {
      out << "link_rx_rate: []";
    } else {
      out << "link_rx_rate: [";
      size_t pending_items = msg.link_rx_rate.size();
      for (auto item : msg.link_rx_rate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_tx_max
  {
    if (msg.link_tx_max.size() == 0) {
      out << "link_tx_max: []";
    } else {
      out << "link_tx_max: [";
      size_t pending_items = msg.link_tx_max.size();
      for (auto item : msg.link_tx_max) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_rx_max
  {
    if (msg.link_rx_max.size() == 0) {
      out << "link_rx_max: []";
    } else {
      out << "link_rx_max: [";
      size_t pending_items = msg.link_rx_max.size();
      for (auto item : msg.link_rx_max) {
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
  const OnboardComputerStatus & msg,
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

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
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

  // member: cpu_cores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_cores.size() == 0) {
      out << "cpu_cores: []\n";
    } else {
      out << "cpu_cores:\n";
      for (auto item : msg.cpu_cores) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cpu_combined
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_combined.size() == 0) {
      out << "cpu_combined: []\n";
    } else {
      out << "cpu_combined:\n";
      for (auto item : msg.cpu_combined) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gpu_cores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gpu_cores.size() == 0) {
      out << "gpu_cores: []\n";
    } else {
      out << "gpu_cores:\n";
      for (auto item : msg.gpu_cores) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gpu_combined
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gpu_combined.size() == 0) {
      out << "gpu_combined: []\n";
    } else {
      out << "gpu_combined:\n";
      for (auto item : msg.gpu_combined) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature_board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_board: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_board, out);
    out << "\n";
  }

  // member: temperature_core
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature_core.size() == 0) {
      out << "temperature_core: []\n";
    } else {
      out << "temperature_core:\n";
      for (auto item : msg.temperature_core) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fan_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fan_speed.size() == 0) {
      out << "fan_speed: []\n";
    } else {
      out << "fan_speed:\n";
      for (auto item : msg.fan_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ram_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << "\n";
  }

  // member: ram_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_total: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_total, out);
    out << "\n";
  }

  // member: storage_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_type.size() == 0) {
      out << "storage_type: []\n";
    } else {
      out << "storage_type:\n";
      for (auto item : msg.storage_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: storage_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_usage.size() == 0) {
      out << "storage_usage: []\n";
    } else {
      out << "storage_usage:\n";
      for (auto item : msg.storage_usage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: storage_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_total.size() == 0) {
      out << "storage_total: []\n";
    } else {
      out << "storage_total:\n";
      for (auto item : msg.storage_total) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_type.size() == 0) {
      out << "link_type: []\n";
    } else {
      out << "link_type:\n";
      for (auto item : msg.link_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_tx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_tx_rate.size() == 0) {
      out << "link_tx_rate: []\n";
    } else {
      out << "link_tx_rate:\n";
      for (auto item : msg.link_tx_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_rx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_rx_rate.size() == 0) {
      out << "link_rx_rate: []\n";
    } else {
      out << "link_rx_rate:\n";
      for (auto item : msg.link_rx_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_tx_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_tx_max.size() == 0) {
      out << "link_tx_max: []\n";
    } else {
      out << "link_tx_max:\n";
      for (auto item : msg.link_tx_max) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_rx_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_rx_max.size() == 0) {
      out << "link_rx_max: []\n";
    } else {
      out << "link_rx_max:\n";
      for (auto item : msg.link_rx_max) {
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

inline std::string to_yaml(const OnboardComputerStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OnboardComputerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OnboardComputerStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OnboardComputerStatus>()
{
  return "px4_msgs::msg::OnboardComputerStatus";
}

template<>
inline const char * name<px4_msgs::msg::OnboardComputerStatus>()
{
  return "px4_msgs/msg/OnboardComputerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::OnboardComputerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OnboardComputerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OnboardComputerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_
