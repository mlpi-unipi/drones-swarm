// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GeneratorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GeneratorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeneratorStatus_
{
  using Type = GeneratorStatus_<ContainerAllocator>;

  explicit GeneratorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0ull;
      this->battery_current = 0.0f;
      this->load_current = 0.0f;
      this->power_generated = 0.0f;
      this->bus_voltage = 0.0f;
      this->bat_current_setpoint = 0.0f;
      this->runtime = 0ul;
      this->time_until_maintenance = 0l;
      this->generator_speed = 0;
      this->rectifier_temperature = 0;
      this->generator_temperature = 0;
    }
  }

  explicit GeneratorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0ull;
      this->battery_current = 0.0f;
      this->load_current = 0.0f;
      this->power_generated = 0.0f;
      this->bus_voltage = 0.0f;
      this->bat_current_setpoint = 0.0f;
      this->runtime = 0ul;
      this->time_until_maintenance = 0l;
      this->generator_speed = 0;
      this->rectifier_temperature = 0;
      this->generator_temperature = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _status_type =
    uint64_t;
  _status_type status;
  using _battery_current_type =
    float;
  _battery_current_type battery_current;
  using _load_current_type =
    float;
  _load_current_type load_current;
  using _power_generated_type =
    float;
  _power_generated_type power_generated;
  using _bus_voltage_type =
    float;
  _bus_voltage_type bus_voltage;
  using _bat_current_setpoint_type =
    float;
  _bat_current_setpoint_type bat_current_setpoint;
  using _runtime_type =
    uint32_t;
  _runtime_type runtime;
  using _time_until_maintenance_type =
    int32_t;
  _time_until_maintenance_type time_until_maintenance;
  using _generator_speed_type =
    uint16_t;
  _generator_speed_type generator_speed;
  using _rectifier_temperature_type =
    int16_t;
  _rectifier_temperature_type rectifier_temperature;
  using _generator_temperature_type =
    int16_t;
  _generator_temperature_type generator_temperature;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__status(
    const uint64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__battery_current(
    const float & _arg)
  {
    this->battery_current = _arg;
    return *this;
  }
  Type & set__load_current(
    const float & _arg)
  {
    this->load_current = _arg;
    return *this;
  }
  Type & set__power_generated(
    const float & _arg)
  {
    this->power_generated = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const float & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__bat_current_setpoint(
    const float & _arg)
  {
    this->bat_current_setpoint = _arg;
    return *this;
  }
  Type & set__runtime(
    const uint32_t & _arg)
  {
    this->runtime = _arg;
    return *this;
  }
  Type & set__time_until_maintenance(
    const int32_t & _arg)
  {
    this->time_until_maintenance = _arg;
    return *this;
  }
  Type & set__generator_speed(
    const uint16_t & _arg)
  {
    this->generator_speed = _arg;
    return *this;
  }
  Type & set__rectifier_temperature(
    const int16_t & _arg)
  {
    this->rectifier_temperature = _arg;
    return *this;
  }
  Type & set__generator_temperature(
    const int16_t & _arg)
  {
    this->generator_temperature = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint64_t STATUS_FLAG_OFF =
    1u;
  static constexpr uint64_t STATUS_FLAG_READY =
    2u;
  static constexpr uint64_t STATUS_FLAG_GENERATING =
    4u;
  static constexpr uint64_t STATUS_FLAG_CHARGING =
    8u;
  static constexpr uint64_t STATUS_FLAG_REDUCED_POWER =
    16u;
  static constexpr uint64_t STATUS_FLAG_MAXPOWER =
    32u;
  static constexpr uint64_t STATUS_FLAG_OVERTEMP_WARNING =
    64u;
  static constexpr uint64_t STATUS_FLAG_OVERTEMP_FAULT =
    128u;
  static constexpr uint64_t STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING =
    256u;
  static constexpr uint64_t STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT =
    512u;
  static constexpr uint64_t STATUS_FLAG_ELECTRONICS_FAULT =
    1024u;
  static constexpr uint64_t STATUS_FLAG_POWERSOURCE_FAULT =
    2048u;
  static constexpr uint64_t STATUS_FLAG_COMMUNICATION_WARNING =
    4096u;
  static constexpr uint64_t STATUS_FLAG_COOLING_WARNING =
    8192u;
  static constexpr uint64_t STATUS_FLAG_POWER_RAIL_FAULT =
    16384u;
  static constexpr uint64_t STATUS_FLAG_OVERCURRENT_FAULT =
    32768u;
  static constexpr uint64_t STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT =
    65536u;
  static constexpr uint64_t STATUS_FLAG_OVERVOLTAGE_FAULT =
    131072u;
  static constexpr uint64_t STATUS_FLAG_BATTERY_UNDERVOLT_FAULT =
    262144u;
  static constexpr uint64_t STATUS_FLAG_START_INHIBITED =
    524288u;
  static constexpr uint64_t STATUS_FLAG_MAINTENANCE_REQUIRED =
    1048576u;
  static constexpr uint64_t STATUS_FLAG_WARMING_UP =
    2097152u;
  static constexpr uint64_t STATUS_FLAG_IDLE =
    4194304u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GeneratorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GeneratorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GeneratorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GeneratorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GeneratorStatus
    std::shared_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GeneratorStatus
    std::shared_ptr<px4_msgs::msg::GeneratorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneratorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->battery_current != other.battery_current) {
      return false;
    }
    if (this->load_current != other.load_current) {
      return false;
    }
    if (this->power_generated != other.power_generated) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->bat_current_setpoint != other.bat_current_setpoint) {
      return false;
    }
    if (this->runtime != other.runtime) {
      return false;
    }
    if (this->time_until_maintenance != other.time_until_maintenance) {
      return false;
    }
    if (this->generator_speed != other.generator_speed) {
      return false;
    }
    if (this->rectifier_temperature != other.rectifier_temperature) {
      return false;
    }
    if (this->generator_temperature != other.generator_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneratorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneratorStatus_

// alias to use template instance with default allocator
using GeneratorStatus =
  px4_msgs::msg::GeneratorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_GENERATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_REDUCED_POWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_MAXPOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_OVERTEMP_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_OVERTEMP_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_ELECTRONICS_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_POWERSOURCE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_COMMUNICATION_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_COOLING_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_POWER_RAIL_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_OVERCURRENT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_OVERVOLTAGE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_BATTERY_UNDERVOLT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_START_INHIBITED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_MAINTENANCE_REQUIRED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_WARMING_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t GeneratorStatus_<ContainerAllocator>::STATUS_FLAG_IDLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_HPP_
