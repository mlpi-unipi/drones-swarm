// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Px4ioStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Px4ioStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Px4ioStatus_
{
  using Type = Px4ioStatus_<ContainerAllocator>;

  explicit Px4ioStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->free_memory_bytes = 0;
      this->voltage_v = 0.0f;
      this->rssi_v = 0.0f;
      this->status_arm_sync = false;
      this->status_failsafe = false;
      this->status_fmu_initialized = false;
      this->status_fmu_ok = false;
      this->status_init_ok = false;
      this->status_outputs_armed = false;
      this->status_raw_pwm = false;
      this->status_rc_ok = false;
      this->status_rc_dsm = false;
      this->status_rc_ppm = false;
      this->status_rc_sbus = false;
      this->status_rc_st24 = false;
      this->status_rc_sumd = false;
      this->status_safety_button_event = false;
      this->alarm_pwm_error = false;
      this->alarm_rc_lost = false;
      this->arming_failsafe_custom = false;
      this->arming_fmu_armed = false;
      this->arming_fmu_prearmed = false;
      this->arming_force_failsafe = false;
      this->arming_io_arm_ok = false;
      this->arming_lockdown = false;
      this->arming_termination_failsafe = false;
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm.begin(), this->pwm.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_disarmed.begin(), this->pwm_disarmed.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_failsafe.begin(), this->pwm_failsafe.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_rate_hz.begin(), this->pwm_rate_hz.end(), 0);
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->raw_inputs.begin(), this->raw_inputs.end(), 0);
    }
  }

  explicit Px4ioStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pwm(_alloc),
    pwm_disarmed(_alloc),
    pwm_failsafe(_alloc),
    pwm_rate_hz(_alloc),
    raw_inputs(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->free_memory_bytes = 0;
      this->voltage_v = 0.0f;
      this->rssi_v = 0.0f;
      this->status_arm_sync = false;
      this->status_failsafe = false;
      this->status_fmu_initialized = false;
      this->status_fmu_ok = false;
      this->status_init_ok = false;
      this->status_outputs_armed = false;
      this->status_raw_pwm = false;
      this->status_rc_ok = false;
      this->status_rc_dsm = false;
      this->status_rc_ppm = false;
      this->status_rc_sbus = false;
      this->status_rc_st24 = false;
      this->status_rc_sumd = false;
      this->status_safety_button_event = false;
      this->alarm_pwm_error = false;
      this->alarm_rc_lost = false;
      this->arming_failsafe_custom = false;
      this->arming_fmu_armed = false;
      this->arming_fmu_prearmed = false;
      this->arming_force_failsafe = false;
      this->arming_io_arm_ok = false;
      this->arming_lockdown = false;
      this->arming_termination_failsafe = false;
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm.begin(), this->pwm.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_disarmed.begin(), this->pwm_disarmed.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_failsafe.begin(), this->pwm_failsafe.end(), 0);
      std::fill<typename std::array<uint16_t, 8>::iterator, uint16_t>(this->pwm_rate_hz.begin(), this->pwm_rate_hz.end(), 0);
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->raw_inputs.begin(), this->raw_inputs.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _free_memory_bytes_type =
    uint16_t;
  _free_memory_bytes_type free_memory_bytes;
  using _voltage_v_type =
    float;
  _voltage_v_type voltage_v;
  using _rssi_v_type =
    float;
  _rssi_v_type rssi_v;
  using _status_arm_sync_type =
    bool;
  _status_arm_sync_type status_arm_sync;
  using _status_failsafe_type =
    bool;
  _status_failsafe_type status_failsafe;
  using _status_fmu_initialized_type =
    bool;
  _status_fmu_initialized_type status_fmu_initialized;
  using _status_fmu_ok_type =
    bool;
  _status_fmu_ok_type status_fmu_ok;
  using _status_init_ok_type =
    bool;
  _status_init_ok_type status_init_ok;
  using _status_outputs_armed_type =
    bool;
  _status_outputs_armed_type status_outputs_armed;
  using _status_raw_pwm_type =
    bool;
  _status_raw_pwm_type status_raw_pwm;
  using _status_rc_ok_type =
    bool;
  _status_rc_ok_type status_rc_ok;
  using _status_rc_dsm_type =
    bool;
  _status_rc_dsm_type status_rc_dsm;
  using _status_rc_ppm_type =
    bool;
  _status_rc_ppm_type status_rc_ppm;
  using _status_rc_sbus_type =
    bool;
  _status_rc_sbus_type status_rc_sbus;
  using _status_rc_st24_type =
    bool;
  _status_rc_st24_type status_rc_st24;
  using _status_rc_sumd_type =
    bool;
  _status_rc_sumd_type status_rc_sumd;
  using _status_safety_button_event_type =
    bool;
  _status_safety_button_event_type status_safety_button_event;
  using _alarm_pwm_error_type =
    bool;
  _alarm_pwm_error_type alarm_pwm_error;
  using _alarm_rc_lost_type =
    bool;
  _alarm_rc_lost_type alarm_rc_lost;
  using _arming_failsafe_custom_type =
    bool;
  _arming_failsafe_custom_type arming_failsafe_custom;
  using _arming_fmu_armed_type =
    bool;
  _arming_fmu_armed_type arming_fmu_armed;
  using _arming_fmu_prearmed_type =
    bool;
  _arming_fmu_prearmed_type arming_fmu_prearmed;
  using _arming_force_failsafe_type =
    bool;
  _arming_force_failsafe_type arming_force_failsafe;
  using _arming_io_arm_ok_type =
    bool;
  _arming_io_arm_ok_type arming_io_arm_ok;
  using _arming_lockdown_type =
    bool;
  _arming_lockdown_type arming_lockdown;
  using _arming_termination_failsafe_type =
    bool;
  _arming_termination_failsafe_type arming_termination_failsafe;
  using _pwm_type =
    std::array<uint16_t, 8>;
  _pwm_type pwm;
  using _pwm_disarmed_type =
    std::array<uint16_t, 8>;
  _pwm_disarmed_type pwm_disarmed;
  using _pwm_failsafe_type =
    std::array<uint16_t, 8>;
  _pwm_failsafe_type pwm_failsafe;
  using _pwm_rate_hz_type =
    std::array<uint16_t, 8>;
  _pwm_rate_hz_type pwm_rate_hz;
  using _raw_inputs_type =
    std::array<uint16_t, 18>;
  _raw_inputs_type raw_inputs;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__free_memory_bytes(
    const uint16_t & _arg)
  {
    this->free_memory_bytes = _arg;
    return *this;
  }
  Type & set__voltage_v(
    const float & _arg)
  {
    this->voltage_v = _arg;
    return *this;
  }
  Type & set__rssi_v(
    const float & _arg)
  {
    this->rssi_v = _arg;
    return *this;
  }
  Type & set__status_arm_sync(
    const bool & _arg)
  {
    this->status_arm_sync = _arg;
    return *this;
  }
  Type & set__status_failsafe(
    const bool & _arg)
  {
    this->status_failsafe = _arg;
    return *this;
  }
  Type & set__status_fmu_initialized(
    const bool & _arg)
  {
    this->status_fmu_initialized = _arg;
    return *this;
  }
  Type & set__status_fmu_ok(
    const bool & _arg)
  {
    this->status_fmu_ok = _arg;
    return *this;
  }
  Type & set__status_init_ok(
    const bool & _arg)
  {
    this->status_init_ok = _arg;
    return *this;
  }
  Type & set__status_outputs_armed(
    const bool & _arg)
  {
    this->status_outputs_armed = _arg;
    return *this;
  }
  Type & set__status_raw_pwm(
    const bool & _arg)
  {
    this->status_raw_pwm = _arg;
    return *this;
  }
  Type & set__status_rc_ok(
    const bool & _arg)
  {
    this->status_rc_ok = _arg;
    return *this;
  }
  Type & set__status_rc_dsm(
    const bool & _arg)
  {
    this->status_rc_dsm = _arg;
    return *this;
  }
  Type & set__status_rc_ppm(
    const bool & _arg)
  {
    this->status_rc_ppm = _arg;
    return *this;
  }
  Type & set__status_rc_sbus(
    const bool & _arg)
  {
    this->status_rc_sbus = _arg;
    return *this;
  }
  Type & set__status_rc_st24(
    const bool & _arg)
  {
    this->status_rc_st24 = _arg;
    return *this;
  }
  Type & set__status_rc_sumd(
    const bool & _arg)
  {
    this->status_rc_sumd = _arg;
    return *this;
  }
  Type & set__status_safety_button_event(
    const bool & _arg)
  {
    this->status_safety_button_event = _arg;
    return *this;
  }
  Type & set__alarm_pwm_error(
    const bool & _arg)
  {
    this->alarm_pwm_error = _arg;
    return *this;
  }
  Type & set__alarm_rc_lost(
    const bool & _arg)
  {
    this->alarm_rc_lost = _arg;
    return *this;
  }
  Type & set__arming_failsafe_custom(
    const bool & _arg)
  {
    this->arming_failsafe_custom = _arg;
    return *this;
  }
  Type & set__arming_fmu_armed(
    const bool & _arg)
  {
    this->arming_fmu_armed = _arg;
    return *this;
  }
  Type & set__arming_fmu_prearmed(
    const bool & _arg)
  {
    this->arming_fmu_prearmed = _arg;
    return *this;
  }
  Type & set__arming_force_failsafe(
    const bool & _arg)
  {
    this->arming_force_failsafe = _arg;
    return *this;
  }
  Type & set__arming_io_arm_ok(
    const bool & _arg)
  {
    this->arming_io_arm_ok = _arg;
    return *this;
  }
  Type & set__arming_lockdown(
    const bool & _arg)
  {
    this->arming_lockdown = _arg;
    return *this;
  }
  Type & set__arming_termination_failsafe(
    const bool & _arg)
  {
    this->arming_termination_failsafe = _arg;
    return *this;
  }
  Type & set__pwm(
    const std::array<uint16_t, 8> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }
  Type & set__pwm_disarmed(
    const std::array<uint16_t, 8> & _arg)
  {
    this->pwm_disarmed = _arg;
    return *this;
  }
  Type & set__pwm_failsafe(
    const std::array<uint16_t, 8> & _arg)
  {
    this->pwm_failsafe = _arg;
    return *this;
  }
  Type & set__pwm_rate_hz(
    const std::array<uint16_t, 8> & _arg)
  {
    this->pwm_rate_hz = _arg;
    return *this;
  }
  Type & set__raw_inputs(
    const std::array<uint16_t, 18> & _arg)
  {
    this->raw_inputs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Px4ioStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Px4ioStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Px4ioStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Px4ioStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Px4ioStatus
    std::shared_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Px4ioStatus
    std::shared_ptr<px4_msgs::msg::Px4ioStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Px4ioStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->free_memory_bytes != other.free_memory_bytes) {
      return false;
    }
    if (this->voltage_v != other.voltage_v) {
      return false;
    }
    if (this->rssi_v != other.rssi_v) {
      return false;
    }
    if (this->status_arm_sync != other.status_arm_sync) {
      return false;
    }
    if (this->status_failsafe != other.status_failsafe) {
      return false;
    }
    if (this->status_fmu_initialized != other.status_fmu_initialized) {
      return false;
    }
    if (this->status_fmu_ok != other.status_fmu_ok) {
      return false;
    }
    if (this->status_init_ok != other.status_init_ok) {
      return false;
    }
    if (this->status_outputs_armed != other.status_outputs_armed) {
      return false;
    }
    if (this->status_raw_pwm != other.status_raw_pwm) {
      return false;
    }
    if (this->status_rc_ok != other.status_rc_ok) {
      return false;
    }
    if (this->status_rc_dsm != other.status_rc_dsm) {
      return false;
    }
    if (this->status_rc_ppm != other.status_rc_ppm) {
      return false;
    }
    if (this->status_rc_sbus != other.status_rc_sbus) {
      return false;
    }
    if (this->status_rc_st24 != other.status_rc_st24) {
      return false;
    }
    if (this->status_rc_sumd != other.status_rc_sumd) {
      return false;
    }
    if (this->status_safety_button_event != other.status_safety_button_event) {
      return false;
    }
    if (this->alarm_pwm_error != other.alarm_pwm_error) {
      return false;
    }
    if (this->alarm_rc_lost != other.alarm_rc_lost) {
      return false;
    }
    if (this->arming_failsafe_custom != other.arming_failsafe_custom) {
      return false;
    }
    if (this->arming_fmu_armed != other.arming_fmu_armed) {
      return false;
    }
    if (this->arming_fmu_prearmed != other.arming_fmu_prearmed) {
      return false;
    }
    if (this->arming_force_failsafe != other.arming_force_failsafe) {
      return false;
    }
    if (this->arming_io_arm_ok != other.arming_io_arm_ok) {
      return false;
    }
    if (this->arming_lockdown != other.arming_lockdown) {
      return false;
    }
    if (this->arming_termination_failsafe != other.arming_termination_failsafe) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    if (this->pwm_disarmed != other.pwm_disarmed) {
      return false;
    }
    if (this->pwm_failsafe != other.pwm_failsafe) {
      return false;
    }
    if (this->pwm_rate_hz != other.pwm_rate_hz) {
      return false;
    }
    if (this->raw_inputs != other.raw_inputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Px4ioStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Px4ioStatus_

// alias to use template instance with default allocator
using Px4ioStatus =
  px4_msgs::msg::Px4ioStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__STRUCT_HPP_
