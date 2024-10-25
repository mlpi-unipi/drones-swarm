// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/px4io_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Px4ioStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: free_memory_bytes
  {
    out << "free_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.free_memory_bytes, out);
    out << ", ";
  }

  // member: voltage_v
  {
    out << "voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_v, out);
    out << ", ";
  }

  // member: rssi_v
  {
    out << "rssi_v: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_v, out);
    out << ", ";
  }

  // member: status_arm_sync
  {
    out << "status_arm_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.status_arm_sync, out);
    out << ", ";
  }

  // member: status_failsafe
  {
    out << "status_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.status_failsafe, out);
    out << ", ";
  }

  // member: status_fmu_initialized
  {
    out << "status_fmu_initialized: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fmu_initialized, out);
    out << ", ";
  }

  // member: status_fmu_ok
  {
    out << "status_fmu_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fmu_ok, out);
    out << ", ";
  }

  // member: status_init_ok
  {
    out << "status_init_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_init_ok, out);
    out << ", ";
  }

  // member: status_outputs_armed
  {
    out << "status_outputs_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.status_outputs_armed, out);
    out << ", ";
  }

  // member: status_raw_pwm
  {
    out << "status_raw_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_raw_pwm, out);
    out << ", ";
  }

  // member: status_rc_ok
  {
    out << "status_rc_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_ok, out);
    out << ", ";
  }

  // member: status_rc_dsm
  {
    out << "status_rc_dsm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_dsm, out);
    out << ", ";
  }

  // member: status_rc_ppm
  {
    out << "status_rc_ppm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_ppm, out);
    out << ", ";
  }

  // member: status_rc_sbus
  {
    out << "status_rc_sbus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_sbus, out);
    out << ", ";
  }

  // member: status_rc_st24
  {
    out << "status_rc_st24: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_st24, out);
    out << ", ";
  }

  // member: status_rc_sumd
  {
    out << "status_rc_sumd: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_sumd, out);
    out << ", ";
  }

  // member: status_safety_button_event
  {
    out << "status_safety_button_event: ";
    rosidl_generator_traits::value_to_yaml(msg.status_safety_button_event, out);
    out << ", ";
  }

  // member: alarm_pwm_error
  {
    out << "alarm_pwm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_pwm_error, out);
    out << ", ";
  }

  // member: alarm_rc_lost
  {
    out << "alarm_rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_rc_lost, out);
    out << ", ";
  }

  // member: arming_failsafe_custom
  {
    out << "arming_failsafe_custom: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_failsafe_custom, out);
    out << ", ";
  }

  // member: arming_fmu_armed
  {
    out << "arming_fmu_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_fmu_armed, out);
    out << ", ";
  }

  // member: arming_fmu_prearmed
  {
    out << "arming_fmu_prearmed: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_fmu_prearmed, out);
    out << ", ";
  }

  // member: arming_force_failsafe
  {
    out << "arming_force_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_force_failsafe, out);
    out << ", ";
  }

  // member: arming_io_arm_ok
  {
    out << "arming_io_arm_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_io_arm_ok, out);
    out << ", ";
  }

  // member: arming_lockdown
  {
    out << "arming_lockdown: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_lockdown, out);
    out << ", ";
  }

  // member: arming_termination_failsafe
  {
    out << "arming_termination_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_termination_failsafe, out);
    out << ", ";
  }

  // member: pwm
  {
    if (msg.pwm.size() == 0) {
      out << "pwm: []";
    } else {
      out << "pwm: [";
      size_t pending_items = msg.pwm.size();
      for (auto item : msg.pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pwm_disarmed
  {
    if (msg.pwm_disarmed.size() == 0) {
      out << "pwm_disarmed: []";
    } else {
      out << "pwm_disarmed: [";
      size_t pending_items = msg.pwm_disarmed.size();
      for (auto item : msg.pwm_disarmed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pwm_failsafe
  {
    if (msg.pwm_failsafe.size() == 0) {
      out << "pwm_failsafe: []";
    } else {
      out << "pwm_failsafe: [";
      size_t pending_items = msg.pwm_failsafe.size();
      for (auto item : msg.pwm_failsafe) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pwm_rate_hz
  {
    if (msg.pwm_rate_hz.size() == 0) {
      out << "pwm_rate_hz: []";
    } else {
      out << "pwm_rate_hz: [";
      size_t pending_items = msg.pwm_rate_hz.size();
      for (auto item : msg.pwm_rate_hz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_inputs
  {
    if (msg.raw_inputs.size() == 0) {
      out << "raw_inputs: []";
    } else {
      out << "raw_inputs: [";
      size_t pending_items = msg.raw_inputs.size();
      for (auto item : msg.raw_inputs) {
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
  const Px4ioStatus & msg,
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

  // member: free_memory_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_memory_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.free_memory_bytes, out);
    out << "\n";
  }

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_v, out);
    out << "\n";
  }

  // member: rssi_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_v: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_v, out);
    out << "\n";
  }

  // member: status_arm_sync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_arm_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.status_arm_sync, out);
    out << "\n";
  }

  // member: status_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.status_failsafe, out);
    out << "\n";
  }

  // member: status_fmu_initialized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fmu_initialized: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fmu_initialized, out);
    out << "\n";
  }

  // member: status_fmu_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fmu_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_fmu_ok, out);
    out << "\n";
  }

  // member: status_init_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_init_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_init_ok, out);
    out << "\n";
  }

  // member: status_outputs_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_outputs_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.status_outputs_armed, out);
    out << "\n";
  }

  // member: status_raw_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_raw_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_raw_pwm, out);
    out << "\n";
  }

  // member: status_rc_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_ok, out);
    out << "\n";
  }

  // member: status_rc_dsm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_dsm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_dsm, out);
    out << "\n";
  }

  // member: status_rc_ppm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_ppm: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_ppm, out);
    out << "\n";
  }

  // member: status_rc_sbus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_sbus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_sbus, out);
    out << "\n";
  }

  // member: status_rc_st24
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_st24: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_st24, out);
    out << "\n";
  }

  // member: status_rc_sumd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_sumd: ";
    rosidl_generator_traits::value_to_yaml(msg.status_rc_sumd, out);
    out << "\n";
  }

  // member: status_safety_button_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_safety_button_event: ";
    rosidl_generator_traits::value_to_yaml(msg.status_safety_button_event, out);
    out << "\n";
  }

  // member: alarm_pwm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_pwm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_pwm_error, out);
    out << "\n";
  }

  // member: alarm_rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_rc_lost, out);
    out << "\n";
  }

  // member: arming_failsafe_custom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_failsafe_custom: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_failsafe_custom, out);
    out << "\n";
  }

  // member: arming_fmu_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_fmu_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_fmu_armed, out);
    out << "\n";
  }

  // member: arming_fmu_prearmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_fmu_prearmed: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_fmu_prearmed, out);
    out << "\n";
  }

  // member: arming_force_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_force_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_force_failsafe, out);
    out << "\n";
  }

  // member: arming_io_arm_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_io_arm_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_io_arm_ok, out);
    out << "\n";
  }

  // member: arming_lockdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_lockdown: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_lockdown, out);
    out << "\n";
  }

  // member: arming_termination_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_termination_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_termination_failsafe, out);
    out << "\n";
  }

  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_disarmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_disarmed.size() == 0) {
      out << "pwm_disarmed: []\n";
    } else {
      out << "pwm_disarmed:\n";
      for (auto item : msg.pwm_disarmed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_failsafe.size() == 0) {
      out << "pwm_failsafe: []\n";
    } else {
      out << "pwm_failsafe:\n";
      for (auto item : msg.pwm_failsafe) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_rate_hz.size() == 0) {
      out << "pwm_rate_hz: []\n";
    } else {
      out << "pwm_rate_hz:\n";
      for (auto item : msg.pwm_rate_hz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw_inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_inputs.size() == 0) {
      out << "raw_inputs: []\n";
    } else {
      out << "raw_inputs:\n";
      for (auto item : msg.raw_inputs) {
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

inline std::string to_yaml(const Px4ioStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::Px4ioStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::Px4ioStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::Px4ioStatus>()
{
  return "px4_msgs::msg::Px4ioStatus";
}

template<>
inline const char * name<px4_msgs::msg::Px4ioStatus>()
{
  return "px4_msgs/msg/Px4ioStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::Px4ioStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Px4ioStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Px4ioStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__TRAITS_HPP_
