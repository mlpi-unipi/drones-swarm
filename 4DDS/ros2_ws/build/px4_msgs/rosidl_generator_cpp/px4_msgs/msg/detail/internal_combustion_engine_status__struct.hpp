// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__InternalCombustionEngineStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__InternalCombustionEngineStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InternalCombustionEngineStatus_
{
  using Type = InternalCombustionEngineStatus_<ContainerAllocator>;

  explicit InternalCombustionEngineStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
      this->flags = 0ul;
      this->engine_load_percent = 0;
      this->engine_speed_rpm = 0ul;
      this->spark_dwell_time_ms = 0.0f;
      this->atmospheric_pressure_kpa = 0.0f;
      this->intake_manifold_pressure_kpa = 0.0f;
      this->intake_manifold_temperature = 0.0f;
      this->coolant_temperature = 0.0f;
      this->oil_pressure = 0.0f;
      this->oil_temperature = 0.0f;
      this->fuel_pressure = 0.0f;
      this->fuel_consumption_rate_cm3pm = 0.0f;
      this->estimated_consumed_fuel_volume_cm3 = 0.0f;
      this->throttle_position_percent = 0;
      this->ecu_index = 0;
      this->spark_plug_usage = 0;
      this->ignition_timing_deg = 0.0f;
      this->injection_time_ms = 0.0f;
      this->cylinder_head_temperature = 0.0f;
      this->exhaust_gas_temperature = 0.0f;
      this->lambda_coefficient = 0.0f;
    }
  }

  explicit InternalCombustionEngineStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
      this->flags = 0ul;
      this->engine_load_percent = 0;
      this->engine_speed_rpm = 0ul;
      this->spark_dwell_time_ms = 0.0f;
      this->atmospheric_pressure_kpa = 0.0f;
      this->intake_manifold_pressure_kpa = 0.0f;
      this->intake_manifold_temperature = 0.0f;
      this->coolant_temperature = 0.0f;
      this->oil_pressure = 0.0f;
      this->oil_temperature = 0.0f;
      this->fuel_pressure = 0.0f;
      this->fuel_consumption_rate_cm3pm = 0.0f;
      this->estimated_consumed_fuel_volume_cm3 = 0.0f;
      this->throttle_position_percent = 0;
      this->ecu_index = 0;
      this->spark_plug_usage = 0;
      this->ignition_timing_deg = 0.0f;
      this->injection_time_ms = 0.0f;
      this->cylinder_head_temperature = 0.0f;
      this->exhaust_gas_temperature = 0.0f;
      this->lambda_coefficient = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _state_type =
    uint8_t;
  _state_type state;
  using _flags_type =
    uint32_t;
  _flags_type flags;
  using _engine_load_percent_type =
    uint8_t;
  _engine_load_percent_type engine_load_percent;
  using _engine_speed_rpm_type =
    uint32_t;
  _engine_speed_rpm_type engine_speed_rpm;
  using _spark_dwell_time_ms_type =
    float;
  _spark_dwell_time_ms_type spark_dwell_time_ms;
  using _atmospheric_pressure_kpa_type =
    float;
  _atmospheric_pressure_kpa_type atmospheric_pressure_kpa;
  using _intake_manifold_pressure_kpa_type =
    float;
  _intake_manifold_pressure_kpa_type intake_manifold_pressure_kpa;
  using _intake_manifold_temperature_type =
    float;
  _intake_manifold_temperature_type intake_manifold_temperature;
  using _coolant_temperature_type =
    float;
  _coolant_temperature_type coolant_temperature;
  using _oil_pressure_type =
    float;
  _oil_pressure_type oil_pressure;
  using _oil_temperature_type =
    float;
  _oil_temperature_type oil_temperature;
  using _fuel_pressure_type =
    float;
  _fuel_pressure_type fuel_pressure;
  using _fuel_consumption_rate_cm3pm_type =
    float;
  _fuel_consumption_rate_cm3pm_type fuel_consumption_rate_cm3pm;
  using _estimated_consumed_fuel_volume_cm3_type =
    float;
  _estimated_consumed_fuel_volume_cm3_type estimated_consumed_fuel_volume_cm3;
  using _throttle_position_percent_type =
    uint8_t;
  _throttle_position_percent_type throttle_position_percent;
  using _ecu_index_type =
    uint8_t;
  _ecu_index_type ecu_index;
  using _spark_plug_usage_type =
    uint8_t;
  _spark_plug_usage_type spark_plug_usage;
  using _ignition_timing_deg_type =
    float;
  _ignition_timing_deg_type ignition_timing_deg;
  using _injection_time_ms_type =
    float;
  _injection_time_ms_type injection_time_ms;
  using _cylinder_head_temperature_type =
    float;
  _cylinder_head_temperature_type cylinder_head_temperature;
  using _exhaust_gas_temperature_type =
    float;
  _exhaust_gas_temperature_type exhaust_gas_temperature;
  using _lambda_coefficient_type =
    float;
  _lambda_coefficient_type lambda_coefficient;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__flags(
    const uint32_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__engine_load_percent(
    const uint8_t & _arg)
  {
    this->engine_load_percent = _arg;
    return *this;
  }
  Type & set__engine_speed_rpm(
    const uint32_t & _arg)
  {
    this->engine_speed_rpm = _arg;
    return *this;
  }
  Type & set__spark_dwell_time_ms(
    const float & _arg)
  {
    this->spark_dwell_time_ms = _arg;
    return *this;
  }
  Type & set__atmospheric_pressure_kpa(
    const float & _arg)
  {
    this->atmospheric_pressure_kpa = _arg;
    return *this;
  }
  Type & set__intake_manifold_pressure_kpa(
    const float & _arg)
  {
    this->intake_manifold_pressure_kpa = _arg;
    return *this;
  }
  Type & set__intake_manifold_temperature(
    const float & _arg)
  {
    this->intake_manifold_temperature = _arg;
    return *this;
  }
  Type & set__coolant_temperature(
    const float & _arg)
  {
    this->coolant_temperature = _arg;
    return *this;
  }
  Type & set__oil_pressure(
    const float & _arg)
  {
    this->oil_pressure = _arg;
    return *this;
  }
  Type & set__oil_temperature(
    const float & _arg)
  {
    this->oil_temperature = _arg;
    return *this;
  }
  Type & set__fuel_pressure(
    const float & _arg)
  {
    this->fuel_pressure = _arg;
    return *this;
  }
  Type & set__fuel_consumption_rate_cm3pm(
    const float & _arg)
  {
    this->fuel_consumption_rate_cm3pm = _arg;
    return *this;
  }
  Type & set__estimated_consumed_fuel_volume_cm3(
    const float & _arg)
  {
    this->estimated_consumed_fuel_volume_cm3 = _arg;
    return *this;
  }
  Type & set__throttle_position_percent(
    const uint8_t & _arg)
  {
    this->throttle_position_percent = _arg;
    return *this;
  }
  Type & set__ecu_index(
    const uint8_t & _arg)
  {
    this->ecu_index = _arg;
    return *this;
  }
  Type & set__spark_plug_usage(
    const uint8_t & _arg)
  {
    this->spark_plug_usage = _arg;
    return *this;
  }
  Type & set__ignition_timing_deg(
    const float & _arg)
  {
    this->ignition_timing_deg = _arg;
    return *this;
  }
  Type & set__injection_time_ms(
    const float & _arg)
  {
    this->injection_time_ms = _arg;
    return *this;
  }
  Type & set__cylinder_head_temperature(
    const float & _arg)
  {
    this->cylinder_head_temperature = _arg;
    return *this;
  }
  Type & set__exhaust_gas_temperature(
    const float & _arg)
  {
    this->exhaust_gas_temperature = _arg;
    return *this;
  }
  Type & set__lambda_coefficient(
    const float & _arg)
  {
    this->lambda_coefficient = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_STOPPED =
    0u;
  static constexpr uint8_t STATE_STARTING =
    1u;
  static constexpr uint8_t STATE_RUNNING =
    2u;
  static constexpr uint8_t STATE_FAULT =
    3u;
  static constexpr uint32_t FLAG_GENERAL_ERROR =
    1u;
  static constexpr uint32_t FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED =
    2u;
  static constexpr uint32_t FLAG_CRANKSHAFT_SENSOR_ERROR =
    4u;
  static constexpr uint32_t FLAG_TEMPERATURE_SUPPORTED =
    8u;
  static constexpr uint32_t FLAG_TEMPERATURE_BELOW_NOMINAL =
    16u;
  static constexpr uint32_t FLAG_TEMPERATURE_ABOVE_NOMINAL =
    32u;
  static constexpr uint32_t FLAG_TEMPERATURE_OVERHEATING =
    64u;
  static constexpr uint32_t FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL =
    128u;
  static constexpr uint32_t FLAG_FUEL_PRESSURE_SUPPORTED =
    256u;
  static constexpr uint32_t FLAG_FUEL_PRESSURE_BELOW_NOMINAL =
    512u;
  static constexpr uint32_t FLAG_FUEL_PRESSURE_ABOVE_NOMINAL =
    1024u;
  static constexpr uint32_t FLAG_DETONATION_SUPPORTED =
    2048u;
  static constexpr uint32_t FLAG_DETONATION_OBSERVED =
    4096u;
  static constexpr uint32_t FLAG_MISFIRE_SUPPORTED =
    8192u;
  static constexpr uint32_t FLAG_MISFIRE_OBSERVED =
    16384u;
  static constexpr uint32_t FLAG_OIL_PRESSURE_SUPPORTED =
    32768u;
  static constexpr uint32_t FLAG_OIL_PRESSURE_BELOW_NOMINAL =
    65536u;
  static constexpr uint32_t FLAG_OIL_PRESSURE_ABOVE_NOMINAL =
    131072u;
  static constexpr uint32_t FLAG_DEBRIS_SUPPORTED =
    262144u;
  static constexpr uint32_t FLAG_DEBRIS_DETECTED =
    524288u;
  static constexpr uint8_t SPARK_PLUG_SINGLE =
    0u;
  static constexpr uint8_t SPARK_PLUG_FIRST_ACTIVE =
    1u;
  static constexpr uint8_t SPARK_PLUG_SECOND_ACTIVE =
    2u;
  static constexpr uint8_t SPARK_PLUG_BOTH_ACTIVE =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__InternalCombustionEngineStatus
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__InternalCombustionEngineStatus
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InternalCombustionEngineStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->engine_load_percent != other.engine_load_percent) {
      return false;
    }
    if (this->engine_speed_rpm != other.engine_speed_rpm) {
      return false;
    }
    if (this->spark_dwell_time_ms != other.spark_dwell_time_ms) {
      return false;
    }
    if (this->atmospheric_pressure_kpa != other.atmospheric_pressure_kpa) {
      return false;
    }
    if (this->intake_manifold_pressure_kpa != other.intake_manifold_pressure_kpa) {
      return false;
    }
    if (this->intake_manifold_temperature != other.intake_manifold_temperature) {
      return false;
    }
    if (this->coolant_temperature != other.coolant_temperature) {
      return false;
    }
    if (this->oil_pressure != other.oil_pressure) {
      return false;
    }
    if (this->oil_temperature != other.oil_temperature) {
      return false;
    }
    if (this->fuel_pressure != other.fuel_pressure) {
      return false;
    }
    if (this->fuel_consumption_rate_cm3pm != other.fuel_consumption_rate_cm3pm) {
      return false;
    }
    if (this->estimated_consumed_fuel_volume_cm3 != other.estimated_consumed_fuel_volume_cm3) {
      return false;
    }
    if (this->throttle_position_percent != other.throttle_position_percent) {
      return false;
    }
    if (this->ecu_index != other.ecu_index) {
      return false;
    }
    if (this->spark_plug_usage != other.spark_plug_usage) {
      return false;
    }
    if (this->ignition_timing_deg != other.ignition_timing_deg) {
      return false;
    }
    if (this->injection_time_ms != other.injection_time_ms) {
      return false;
    }
    if (this->cylinder_head_temperature != other.cylinder_head_temperature) {
      return false;
    }
    if (this->exhaust_gas_temperature != other.exhaust_gas_temperature) {
      return false;
    }
    if (this->lambda_coefficient != other.lambda_coefficient) {
      return false;
    }
    return true;
  }
  bool operator!=(const InternalCombustionEngineStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InternalCombustionEngineStatus_

// alias to use template instance with default allocator
using InternalCombustionEngineStatus =
  px4_msgs::msg::InternalCombustionEngineStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::STATE_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::STATE_STARTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::STATE_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::STATE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_GENERAL_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_CRANKSHAFT_SENSOR_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_TEMPERATURE_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_TEMPERATURE_BELOW_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_TEMPERATURE_ABOVE_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_TEMPERATURE_OVERHEATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_FUEL_PRESSURE_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_FUEL_PRESSURE_BELOW_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_FUEL_PRESSURE_ABOVE_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_DETONATION_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_DETONATION_OBSERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_MISFIRE_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_MISFIRE_OBSERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_OIL_PRESSURE_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_OIL_PRESSURE_BELOW_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_OIL_PRESSURE_ABOVE_NOMINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_DEBRIS_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t InternalCombustionEngineStatus_<ContainerAllocator>::FLAG_DEBRIS_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::SPARK_PLUG_SINGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::SPARK_PLUG_FIRST_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::SPARK_PLUG_SECOND_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InternalCombustionEngineStatus_<ContainerAllocator>::SPARK_PLUG_BOTH_ACTIVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__STRUCT_HPP_
