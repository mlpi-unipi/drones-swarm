// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: voltage_v
  {
    out << "voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_v, out);
    out << ", ";
  }

  // member: voltage_filtered_v
  {
    out << "voltage_filtered_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_filtered_v, out);
    out << ", ";
  }

  // member: current_a
  {
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << ", ";
  }

  // member: current_filtered_a
  {
    out << "current_filtered_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_filtered_a, out);
    out << ", ";
  }

  // member: current_average_a
  {
    out << "current_average_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_average_a, out);
    out << ", ";
  }

  // member: discharged_mah
  {
    out << "discharged_mah: ";
    rosidl_generator_traits::value_to_yaml(msg.discharged_mah, out);
    out << ", ";
  }

  // member: remaining
  {
    out << "remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << ", ";
  }

  // member: time_remaining_s
  {
    out << "time_remaining_s: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining_s, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: cell_count
  {
    out << "cell_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_count, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: capacity
  {
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << ", ";
  }

  // member: cycle_count
  {
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << ", ";
  }

  // member: average_time_to_empty
  {
    out << "average_time_to_empty: ";
    rosidl_generator_traits::value_to_yaml(msg.average_time_to_empty, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: manufacture_date
  {
    out << "manufacture_date: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacture_date, out);
    out << ", ";
  }

  // member: state_of_health
  {
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << ", ";
  }

  // member: max_error
  {
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: interface_error
  {
    out << "interface_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_error, out);
    out << ", ";
  }

  // member: voltage_cell_v
  {
    if (msg.voltage_cell_v.size() == 0) {
      out << "voltage_cell_v: []";
    } else {
      out << "voltage_cell_v: [";
      size_t pending_items = msg.voltage_cell_v.size();
      for (auto item : msg.voltage_cell_v) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_cell_voltage_delta
  {
    out << "max_cell_voltage_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cell_voltage_delta, out);
    out << ", ";
  }

  // member: is_powering_off
  {
    out << "is_powering_off: ";
    rosidl_generator_traits::value_to_yaml(msg.is_powering_off, out);
    out << ", ";
  }

  // member: is_required
  {
    out << "is_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_required, out);
    out << ", ";
  }

  // member: faults
  {
    out << "faults: ";
    rosidl_generator_traits::value_to_yaml(msg.faults, out);
    out << ", ";
  }

  // member: custom_faults
  {
    out << "custom_faults: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_faults, out);
    out << ", ";
  }

  // member: warning
  {
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: average_power
  {
    out << "average_power: ";
    rosidl_generator_traits::value_to_yaml(msg.average_power, out);
    out << ", ";
  }

  // member: available_energy
  {
    out << "available_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.available_energy, out);
    out << ", ";
  }

  // member: full_charge_capacity_wh
  {
    out << "full_charge_capacity_wh: ";
    rosidl_generator_traits::value_to_yaml(msg.full_charge_capacity_wh, out);
    out << ", ";
  }

  // member: remaining_capacity_wh
  {
    out << "remaining_capacity_wh: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_capacity_wh, out);
    out << ", ";
  }

  // member: design_capacity
  {
    out << "design_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.design_capacity, out);
    out << ", ";
  }

  // member: average_time_to_full
  {
    out << "average_time_to_full: ";
    rosidl_generator_traits::value_to_yaml(msg.average_time_to_full, out);
    out << ", ";
  }

  // member: over_discharge_count
  {
    out << "over_discharge_count: ";
    rosidl_generator_traits::value_to_yaml(msg.over_discharge_count, out);
    out << ", ";
  }

  // member: nominal_voltage
  {
    out << "nominal_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryStatus & msg,
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

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
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

  // member: voltage_filtered_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_filtered_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_filtered_v, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: current_filtered_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_filtered_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_filtered_a, out);
    out << "\n";
  }

  // member: current_average_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_average_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_average_a, out);
    out << "\n";
  }

  // member: discharged_mah
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharged_mah: ";
    rosidl_generator_traits::value_to_yaml(msg.discharged_mah, out);
    out << "\n";
  }

  // member: remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: time_remaining_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining_s: ";
    rosidl_generator_traits::value_to_yaml(msg.time_remaining_s, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: cell_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_count, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity, out);
    out << "\n";
  }

  // member: cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << "\n";
  }

  // member: average_time_to_empty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_time_to_empty: ";
    rosidl_generator_traits::value_to_yaml(msg.average_time_to_empty, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: manufacture_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manufacture_date: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacture_date, out);
    out << "\n";
  }

  // member: state_of_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << "\n";
  }

  // member: max_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: interface_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_error, out);
    out << "\n";
  }

  // member: voltage_cell_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voltage_cell_v.size() == 0) {
      out << "voltage_cell_v: []\n";
    } else {
      out << "voltage_cell_v:\n";
      for (auto item : msg.voltage_cell_v) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_cell_voltage_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cell_voltage_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cell_voltage_delta, out);
    out << "\n";
  }

  // member: is_powering_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_powering_off: ";
    rosidl_generator_traits::value_to_yaml(msg.is_powering_off, out);
    out << "\n";
  }

  // member: is_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_required: ";
    rosidl_generator_traits::value_to_yaml(msg.is_required, out);
    out << "\n";
  }

  // member: faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faults: ";
    rosidl_generator_traits::value_to_yaml(msg.faults, out);
    out << "\n";
  }

  // member: custom_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_faults: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_faults, out);
    out << "\n";
  }

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: average_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_power: ";
    rosidl_generator_traits::value_to_yaml(msg.average_power, out);
    out << "\n";
  }

  // member: available_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.available_energy, out);
    out << "\n";
  }

  // member: full_charge_capacity_wh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_charge_capacity_wh: ";
    rosidl_generator_traits::value_to_yaml(msg.full_charge_capacity_wh, out);
    out << "\n";
  }

  // member: remaining_capacity_wh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_capacity_wh: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_capacity_wh, out);
    out << "\n";
  }

  // member: design_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "design_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.design_capacity, out);
    out << "\n";
  }

  // member: average_time_to_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_time_to_full: ";
    rosidl_generator_traits::value_to_yaml(msg.average_time_to_full, out);
    out << "\n";
  }

  // member: over_discharge_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_discharge_count: ";
    rosidl_generator_traits::value_to_yaml(msg.over_discharge_count, out);
    out << "\n";
  }

  // member: nominal_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::BatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::BatteryStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::BatteryStatus>()
{
  return "px4_msgs::msg::BatteryStatus";
}

template<>
inline const char * name<px4_msgs::msg::BatteryStatus>()
{
  return "px4_msgs/msg/BatteryStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::BatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
