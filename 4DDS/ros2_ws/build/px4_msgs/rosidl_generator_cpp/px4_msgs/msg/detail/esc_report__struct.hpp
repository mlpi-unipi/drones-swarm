// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EscReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EscReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EscReport_
{
  using Type = EscReport_<ContainerAllocator>;

  explicit EscReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->esc_errorcount = 0ul;
      this->esc_rpm = 0l;
      this->esc_voltage = 0.0f;
      this->esc_current = 0.0f;
      this->esc_temperature = 0.0f;
      this->esc_address = 0;
      this->esc_cmdcount = 0;
      this->esc_state = 0;
      this->actuator_function = 0;
      this->failures = 0;
      this->esc_power = 0;
    }
  }

  explicit EscReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->esc_errorcount = 0ul;
      this->esc_rpm = 0l;
      this->esc_voltage = 0.0f;
      this->esc_current = 0.0f;
      this->esc_temperature = 0.0f;
      this->esc_address = 0;
      this->esc_cmdcount = 0;
      this->esc_state = 0;
      this->actuator_function = 0;
      this->failures = 0;
      this->esc_power = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _esc_errorcount_type =
    uint32_t;
  _esc_errorcount_type esc_errorcount;
  using _esc_rpm_type =
    int32_t;
  _esc_rpm_type esc_rpm;
  using _esc_voltage_type =
    float;
  _esc_voltage_type esc_voltage;
  using _esc_current_type =
    float;
  _esc_current_type esc_current;
  using _esc_temperature_type =
    float;
  _esc_temperature_type esc_temperature;
  using _esc_address_type =
    uint8_t;
  _esc_address_type esc_address;
  using _esc_cmdcount_type =
    uint8_t;
  _esc_cmdcount_type esc_cmdcount;
  using _esc_state_type =
    uint8_t;
  _esc_state_type esc_state;
  using _actuator_function_type =
    uint8_t;
  _actuator_function_type actuator_function;
  using _failures_type =
    uint16_t;
  _failures_type failures;
  using _esc_power_type =
    int8_t;
  _esc_power_type esc_power;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__esc_errorcount(
    const uint32_t & _arg)
  {
    this->esc_errorcount = _arg;
    return *this;
  }
  Type & set__esc_rpm(
    const int32_t & _arg)
  {
    this->esc_rpm = _arg;
    return *this;
  }
  Type & set__esc_voltage(
    const float & _arg)
  {
    this->esc_voltage = _arg;
    return *this;
  }
  Type & set__esc_current(
    const float & _arg)
  {
    this->esc_current = _arg;
    return *this;
  }
  Type & set__esc_temperature(
    const float & _arg)
  {
    this->esc_temperature = _arg;
    return *this;
  }
  Type & set__esc_address(
    const uint8_t & _arg)
  {
    this->esc_address = _arg;
    return *this;
  }
  Type & set__esc_cmdcount(
    const uint8_t & _arg)
  {
    this->esc_cmdcount = _arg;
    return *this;
  }
  Type & set__esc_state(
    const uint8_t & _arg)
  {
    this->esc_state = _arg;
    return *this;
  }
  Type & set__actuator_function(
    const uint8_t & _arg)
  {
    this->actuator_function = _arg;
    return *this;
  }
  Type & set__failures(
    const uint16_t & _arg)
  {
    this->failures = _arg;
    return *this;
  }
  Type & set__esc_power(
    const int8_t & _arg)
  {
    this->esc_power = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FAILURE_OVER_CURRENT =
    0u;
  static constexpr uint8_t FAILURE_OVER_VOLTAGE =
    1u;
  static constexpr uint8_t FAILURE_MOTOR_OVER_TEMPERATURE =
    2u;
  static constexpr uint8_t FAILURE_OVER_RPM =
    3u;
  static constexpr uint8_t FAILURE_INCONSISTENT_CMD =
    4u;
  static constexpr uint8_t FAILURE_MOTOR_STUCK =
    5u;
  static constexpr uint8_t FAILURE_GENERIC =
    6u;
  static constexpr uint8_t FAILURE_MOTOR_WARN_TEMPERATURE =
    7u;
  static constexpr uint8_t FAILURE_WARN_ESC_TEMPERATURE =
    8u;
  static constexpr uint8_t FAILURE_OVER_ESC_TEMPERATURE =
    9u;
  static constexpr uint8_t ESC_FAILURE_COUNT =
    10u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EscReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EscReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EscReport
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EscReport
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->esc_errorcount != other.esc_errorcount) {
      return false;
    }
    if (this->esc_rpm != other.esc_rpm) {
      return false;
    }
    if (this->esc_voltage != other.esc_voltage) {
      return false;
    }
    if (this->esc_current != other.esc_current) {
      return false;
    }
    if (this->esc_temperature != other.esc_temperature) {
      return false;
    }
    if (this->esc_address != other.esc_address) {
      return false;
    }
    if (this->esc_cmdcount != other.esc_cmdcount) {
      return false;
    }
    if (this->esc_state != other.esc_state) {
      return false;
    }
    if (this->actuator_function != other.actuator_function) {
      return false;
    }
    if (this->failures != other.failures) {
      return false;
    }
    if (this->esc_power != other.esc_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscReport_

// alias to use template instance with default allocator
using EscReport =
  px4_msgs::msg::EscReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_MOTOR_OVER_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_RPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_INCONSISTENT_CMD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_MOTOR_STUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_GENERIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_MOTOR_WARN_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_WARN_ESC_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_ESC_TEMPERATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::ESC_FAILURE_COUNT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_REPORT__STRUCT_HPP_
