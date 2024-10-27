// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__BatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__BatteryStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_
{
  using Type = BatteryStatus_<ContainerAllocator>;

  explicit BatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->connected = false;
      this->voltage_v = 0.0f;
      this->voltage_filtered_v = 0.0f;
      this->current_a = 0.0f;
      this->current_filtered_a = 0.0f;
      this->current_average_a = 0.0f;
      this->discharged_mah = 0.0f;
      this->remaining = 0.0f;
      this->scale = 0.0f;
      this->time_remaining_s = 0.0f;
      this->temperature = 0.0f;
      this->cell_count = 0;
      this->source = 0;
      this->priority = 0;
      this->capacity = 0;
      this->cycle_count = 0;
      this->average_time_to_empty = 0;
      this->serial_number = 0;
      this->manufacture_date = 0;
      this->state_of_health = 0;
      this->max_error = 0;
      this->id = 0;
      this->interface_error = 0;
      std::fill<typename std::array<float, 14>::iterator, float>(this->voltage_cell_v.begin(), this->voltage_cell_v.end(), 0.0f);
      this->max_cell_voltage_delta = 0.0f;
      this->is_powering_off = false;
      this->is_required = false;
      this->faults = 0;
      this->custom_faults = 0ul;
      this->warning = 0;
      this->mode = 0;
      this->average_power = 0.0f;
      this->available_energy = 0.0f;
      this->full_charge_capacity_wh = 0.0f;
      this->remaining_capacity_wh = 0.0f;
      this->design_capacity = 0.0f;
      this->average_time_to_full = 0;
      this->over_discharge_count = 0;
      this->nominal_voltage = 0.0f;
    }
  }

  explicit BatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voltage_cell_v(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->connected = false;
      this->voltage_v = 0.0f;
      this->voltage_filtered_v = 0.0f;
      this->current_a = 0.0f;
      this->current_filtered_a = 0.0f;
      this->current_average_a = 0.0f;
      this->discharged_mah = 0.0f;
      this->remaining = 0.0f;
      this->scale = 0.0f;
      this->time_remaining_s = 0.0f;
      this->temperature = 0.0f;
      this->cell_count = 0;
      this->source = 0;
      this->priority = 0;
      this->capacity = 0;
      this->cycle_count = 0;
      this->average_time_to_empty = 0;
      this->serial_number = 0;
      this->manufacture_date = 0;
      this->state_of_health = 0;
      this->max_error = 0;
      this->id = 0;
      this->interface_error = 0;
      std::fill<typename std::array<float, 14>::iterator, float>(this->voltage_cell_v.begin(), this->voltage_cell_v.end(), 0.0f);
      this->max_cell_voltage_delta = 0.0f;
      this->is_powering_off = false;
      this->is_required = false;
      this->faults = 0;
      this->custom_faults = 0ul;
      this->warning = 0;
      this->mode = 0;
      this->average_power = 0.0f;
      this->available_energy = 0.0f;
      this->full_charge_capacity_wh = 0.0f;
      this->remaining_capacity_wh = 0.0f;
      this->design_capacity = 0.0f;
      this->average_time_to_full = 0;
      this->over_discharge_count = 0;
      this->nominal_voltage = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _connected_type =
    bool;
  _connected_type connected;
  using _voltage_v_type =
    float;
  _voltage_v_type voltage_v;
  using _voltage_filtered_v_type =
    float;
  _voltage_filtered_v_type voltage_filtered_v;
  using _current_a_type =
    float;
  _current_a_type current_a;
  using _current_filtered_a_type =
    float;
  _current_filtered_a_type current_filtered_a;
  using _current_average_a_type =
    float;
  _current_average_a_type current_average_a;
  using _discharged_mah_type =
    float;
  _discharged_mah_type discharged_mah;
  using _remaining_type =
    float;
  _remaining_type remaining;
  using _scale_type =
    float;
  _scale_type scale;
  using _time_remaining_s_type =
    float;
  _time_remaining_s_type time_remaining_s;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _cell_count_type =
    uint8_t;
  _cell_count_type cell_count;
  using _source_type =
    uint8_t;
  _source_type source;
  using _priority_type =
    uint8_t;
  _priority_type priority;
  using _capacity_type =
    uint16_t;
  _capacity_type capacity;
  using _cycle_count_type =
    uint16_t;
  _cycle_count_type cycle_count;
  using _average_time_to_empty_type =
    uint16_t;
  _average_time_to_empty_type average_time_to_empty;
  using _serial_number_type =
    uint16_t;
  _serial_number_type serial_number;
  using _manufacture_date_type =
    uint16_t;
  _manufacture_date_type manufacture_date;
  using _state_of_health_type =
    uint16_t;
  _state_of_health_type state_of_health;
  using _max_error_type =
    uint16_t;
  _max_error_type max_error;
  using _id_type =
    uint8_t;
  _id_type id;
  using _interface_error_type =
    uint16_t;
  _interface_error_type interface_error;
  using _voltage_cell_v_type =
    std::array<float, 14>;
  _voltage_cell_v_type voltage_cell_v;
  using _max_cell_voltage_delta_type =
    float;
  _max_cell_voltage_delta_type max_cell_voltage_delta;
  using _is_powering_off_type =
    bool;
  _is_powering_off_type is_powering_off;
  using _is_required_type =
    bool;
  _is_required_type is_required;
  using _faults_type =
    uint16_t;
  _faults_type faults;
  using _custom_faults_type =
    uint32_t;
  _custom_faults_type custom_faults;
  using _warning_type =
    uint8_t;
  _warning_type warning;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _average_power_type =
    float;
  _average_power_type average_power;
  using _available_energy_type =
    float;
  _available_energy_type available_energy;
  using _full_charge_capacity_wh_type =
    float;
  _full_charge_capacity_wh_type full_charge_capacity_wh;
  using _remaining_capacity_wh_type =
    float;
  _remaining_capacity_wh_type remaining_capacity_wh;
  using _design_capacity_type =
    float;
  _design_capacity_type design_capacity;
  using _average_time_to_full_type =
    uint16_t;
  _average_time_to_full_type average_time_to_full;
  using _over_discharge_count_type =
    uint16_t;
  _over_discharge_count_type over_discharge_count;
  using _nominal_voltage_type =
    float;
  _nominal_voltage_type nominal_voltage;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__voltage_v(
    const float & _arg)
  {
    this->voltage_v = _arg;
    return *this;
  }
  Type & set__voltage_filtered_v(
    const float & _arg)
  {
    this->voltage_filtered_v = _arg;
    return *this;
  }
  Type & set__current_a(
    const float & _arg)
  {
    this->current_a = _arg;
    return *this;
  }
  Type & set__current_filtered_a(
    const float & _arg)
  {
    this->current_filtered_a = _arg;
    return *this;
  }
  Type & set__current_average_a(
    const float & _arg)
  {
    this->current_average_a = _arg;
    return *this;
  }
  Type & set__discharged_mah(
    const float & _arg)
  {
    this->discharged_mah = _arg;
    return *this;
  }
  Type & set__remaining(
    const float & _arg)
  {
    this->remaining = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__time_remaining_s(
    const float & _arg)
  {
    this->time_remaining_s = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__cell_count(
    const uint8_t & _arg)
  {
    this->cell_count = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__capacity(
    const uint16_t & _arg)
  {
    this->capacity = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const uint16_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__average_time_to_empty(
    const uint16_t & _arg)
  {
    this->average_time_to_empty = _arg;
    return *this;
  }
  Type & set__serial_number(
    const uint16_t & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__manufacture_date(
    const uint16_t & _arg)
  {
    this->manufacture_date = _arg;
    return *this;
  }
  Type & set__state_of_health(
    const uint16_t & _arg)
  {
    this->state_of_health = _arg;
    return *this;
  }
  Type & set__max_error(
    const uint16_t & _arg)
  {
    this->max_error = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__interface_error(
    const uint16_t & _arg)
  {
    this->interface_error = _arg;
    return *this;
  }
  Type & set__voltage_cell_v(
    const std::array<float, 14> & _arg)
  {
    this->voltage_cell_v = _arg;
    return *this;
  }
  Type & set__max_cell_voltage_delta(
    const float & _arg)
  {
    this->max_cell_voltage_delta = _arg;
    return *this;
  }
  Type & set__is_powering_off(
    const bool & _arg)
  {
    this->is_powering_off = _arg;
    return *this;
  }
  Type & set__is_required(
    const bool & _arg)
  {
    this->is_required = _arg;
    return *this;
  }
  Type & set__faults(
    const uint16_t & _arg)
  {
    this->faults = _arg;
    return *this;
  }
  Type & set__custom_faults(
    const uint32_t & _arg)
  {
    this->custom_faults = _arg;
    return *this;
  }
  Type & set__warning(
    const uint8_t & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__average_power(
    const float & _arg)
  {
    this->average_power = _arg;
    return *this;
  }
  Type & set__available_energy(
    const float & _arg)
  {
    this->available_energy = _arg;
    return *this;
  }
  Type & set__full_charge_capacity_wh(
    const float & _arg)
  {
    this->full_charge_capacity_wh = _arg;
    return *this;
  }
  Type & set__remaining_capacity_wh(
    const float & _arg)
  {
    this->remaining_capacity_wh = _arg;
    return *this;
  }
  Type & set__design_capacity(
    const float & _arg)
  {
    this->design_capacity = _arg;
    return *this;
  }
  Type & set__average_time_to_full(
    const uint16_t & _arg)
  {
    this->average_time_to_full = _arg;
    return *this;
  }
  Type & set__over_discharge_count(
    const uint16_t & _arg)
  {
    this->over_discharge_count = _arg;
    return *this;
  }
  Type & set__nominal_voltage(
    const float & _arg)
  {
    this->nominal_voltage = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BATTERY_SOURCE_POWER_MODULE =
    0u;
  static constexpr uint8_t BATTERY_SOURCE_EXTERNAL =
    1u;
  static constexpr uint8_t BATTERY_SOURCE_ESCS =
    2u;
  static constexpr uint8_t BATTERY_WARNING_NONE =
    0u;
  static constexpr uint8_t BATTERY_WARNING_LOW =
    1u;
  static constexpr uint8_t BATTERY_WARNING_CRITICAL =
    2u;
  static constexpr uint8_t BATTERY_WARNING_EMERGENCY =
    3u;
  static constexpr uint8_t BATTERY_WARNING_FAILED =
    4u;
  static constexpr uint8_t BATTERY_STATE_UNHEALTHY =
    6u;
  static constexpr uint8_t BATTERY_STATE_CHARGING =
    7u;
  static constexpr uint8_t BATTERY_FAULT_DEEP_DISCHARGE =
    0u;
  static constexpr uint8_t BATTERY_FAULT_SPIKES =
    1u;
  static constexpr uint8_t BATTERY_FAULT_CELL_FAIL =
    2u;
  static constexpr uint8_t BATTERY_FAULT_OVER_CURRENT =
    3u;
  static constexpr uint8_t BATTERY_FAULT_OVER_TEMPERATURE =
    4u;
  static constexpr uint8_t BATTERY_FAULT_UNDER_TEMPERATURE =
    5u;
  static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_VOLTAGE =
    6u;
  static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_FIRMWARE =
    7u;
  static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_MODEL =
    8u;
  static constexpr uint8_t BATTERY_FAULT_HARDWARE_FAILURE =
    9u;
  static constexpr uint8_t BATTERY_WARNING_OVER_TEMPERATURE =
    10u;
  static constexpr uint8_t BATTERY_FAULT_COUNT =
    11u;
  static constexpr uint8_t BATTERY_MODE_UNKNOWN =
    0u;
  static constexpr uint8_t BATTERY_MODE_AUTO_DISCHARGING =
    1u;
  static constexpr uint8_t BATTERY_MODE_HOT_SWAP =
    2u;
  static constexpr uint8_t BATTERY_MODE_COUNT =
    3u;
  static constexpr uint8_t MAX_INSTANCES =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::BatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::BatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::BatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::BatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__BatteryStatus
    std::shared_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__BatteryStatus
    std::shared_ptr<px4_msgs::msg::BatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    if (this->voltage_v != other.voltage_v) {
      return false;
    }
    if (this->voltage_filtered_v != other.voltage_filtered_v) {
      return false;
    }
    if (this->current_a != other.current_a) {
      return false;
    }
    if (this->current_filtered_a != other.current_filtered_a) {
      return false;
    }
    if (this->current_average_a != other.current_average_a) {
      return false;
    }
    if (this->discharged_mah != other.discharged_mah) {
      return false;
    }
    if (this->remaining != other.remaining) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->time_remaining_s != other.time_remaining_s) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->cell_count != other.cell_count) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->capacity != other.capacity) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->average_time_to_empty != other.average_time_to_empty) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->manufacture_date != other.manufacture_date) {
      return false;
    }
    if (this->state_of_health != other.state_of_health) {
      return false;
    }
    if (this->max_error != other.max_error) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->interface_error != other.interface_error) {
      return false;
    }
    if (this->voltage_cell_v != other.voltage_cell_v) {
      return false;
    }
    if (this->max_cell_voltage_delta != other.max_cell_voltage_delta) {
      return false;
    }
    if (this->is_powering_off != other.is_powering_off) {
      return false;
    }
    if (this->is_required != other.is_required) {
      return false;
    }
    if (this->faults != other.faults) {
      return false;
    }
    if (this->custom_faults != other.custom_faults) {
      return false;
    }
    if (this->warning != other.warning) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->average_power != other.average_power) {
      return false;
    }
    if (this->available_energy != other.available_energy) {
      return false;
    }
    if (this->full_charge_capacity_wh != other.full_charge_capacity_wh) {
      return false;
    }
    if (this->remaining_capacity_wh != other.remaining_capacity_wh) {
      return false;
    }
    if (this->design_capacity != other.design_capacity) {
      return false;
    }
    if (this->average_time_to_full != other.average_time_to_full) {
      return false;
    }
    if (this->over_discharge_count != other.over_discharge_count) {
      return false;
    }
    if (this->nominal_voltage != other.nominal_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_

// alias to use template instance with default allocator
using BatteryStatus =
  px4_msgs::msg::BatteryStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_SOURCE_POWER_MODULE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_SOURCE_EXTERNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_SOURCE_ESCS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_CRITICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_STATE_UNHEALTHY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_STATE_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_DEEP_DISCHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_SPIKES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_CELL_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_OVER_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_UNDER_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_INCOMPATIBLE_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_INCOMPATIBLE_FIRMWARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_INCOMPATIBLE_MODEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_HARDWARE_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_WARNING_OVER_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_FAULT_COUNT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_MODE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_MODE_AUTO_DISCHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_MODE_HOT_SWAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::BATTERY_MODE_COUNT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BatteryStatus_<ContainerAllocator>::MAX_INSTANCES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
