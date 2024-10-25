// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FailsafeFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FailsafeFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailsafeFlags_
{
  using Type = FailsafeFlags_<ContainerAllocator>;

  explicit FailsafeFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode_req_angular_velocity = 0ul;
      this->mode_req_attitude = 0ul;
      this->mode_req_local_alt = 0ul;
      this->mode_req_local_position = 0ul;
      this->mode_req_local_position_relaxed = 0ul;
      this->mode_req_global_position = 0ul;
      this->mode_req_mission = 0ul;
      this->mode_req_offboard_signal = 0ul;
      this->mode_req_home_position = 0ul;
      this->mode_req_wind_and_flight_time_compliance = 0ul;
      this->mode_req_prevent_arming = 0ul;
      this->mode_req_manual_control = 0ul;
      this->mode_req_other = 0ul;
      this->angular_velocity_invalid = false;
      this->attitude_invalid = false;
      this->local_altitude_invalid = false;
      this->local_position_invalid = false;
      this->local_position_invalid_relaxed = false;
      this->local_velocity_invalid = false;
      this->global_position_invalid = false;
      this->auto_mission_missing = false;
      this->offboard_control_signal_lost = false;
      this->home_position_invalid = false;
      this->manual_control_signal_lost = false;
      this->gcs_connection_lost = false;
      this->battery_warning = 0;
      this->battery_low_remaining_time = false;
      this->battery_unhealthy = false;
      this->geofence_breached = false;
      this->mission_failure = false;
      this->vtol_fixed_wing_system_failure = false;
      this->wind_limit_exceeded = false;
      this->flight_time_limit_exceeded = false;
      this->local_position_accuracy_low = false;
      this->fd_critical_failure = false;
      this->fd_esc_arming_failure = false;
      this->fd_imbalanced_prop = false;
      this->fd_motor_failure = false;
    }
  }

  explicit FailsafeFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode_req_angular_velocity = 0ul;
      this->mode_req_attitude = 0ul;
      this->mode_req_local_alt = 0ul;
      this->mode_req_local_position = 0ul;
      this->mode_req_local_position_relaxed = 0ul;
      this->mode_req_global_position = 0ul;
      this->mode_req_mission = 0ul;
      this->mode_req_offboard_signal = 0ul;
      this->mode_req_home_position = 0ul;
      this->mode_req_wind_and_flight_time_compliance = 0ul;
      this->mode_req_prevent_arming = 0ul;
      this->mode_req_manual_control = 0ul;
      this->mode_req_other = 0ul;
      this->angular_velocity_invalid = false;
      this->attitude_invalid = false;
      this->local_altitude_invalid = false;
      this->local_position_invalid = false;
      this->local_position_invalid_relaxed = false;
      this->local_velocity_invalid = false;
      this->global_position_invalid = false;
      this->auto_mission_missing = false;
      this->offboard_control_signal_lost = false;
      this->home_position_invalid = false;
      this->manual_control_signal_lost = false;
      this->gcs_connection_lost = false;
      this->battery_warning = 0;
      this->battery_low_remaining_time = false;
      this->battery_unhealthy = false;
      this->geofence_breached = false;
      this->mission_failure = false;
      this->vtol_fixed_wing_system_failure = false;
      this->wind_limit_exceeded = false;
      this->flight_time_limit_exceeded = false;
      this->local_position_accuracy_low = false;
      this->fd_critical_failure = false;
      this->fd_esc_arming_failure = false;
      this->fd_imbalanced_prop = false;
      this->fd_motor_failure = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _mode_req_angular_velocity_type =
    uint32_t;
  _mode_req_angular_velocity_type mode_req_angular_velocity;
  using _mode_req_attitude_type =
    uint32_t;
  _mode_req_attitude_type mode_req_attitude;
  using _mode_req_local_alt_type =
    uint32_t;
  _mode_req_local_alt_type mode_req_local_alt;
  using _mode_req_local_position_type =
    uint32_t;
  _mode_req_local_position_type mode_req_local_position;
  using _mode_req_local_position_relaxed_type =
    uint32_t;
  _mode_req_local_position_relaxed_type mode_req_local_position_relaxed;
  using _mode_req_global_position_type =
    uint32_t;
  _mode_req_global_position_type mode_req_global_position;
  using _mode_req_mission_type =
    uint32_t;
  _mode_req_mission_type mode_req_mission;
  using _mode_req_offboard_signal_type =
    uint32_t;
  _mode_req_offboard_signal_type mode_req_offboard_signal;
  using _mode_req_home_position_type =
    uint32_t;
  _mode_req_home_position_type mode_req_home_position;
  using _mode_req_wind_and_flight_time_compliance_type =
    uint32_t;
  _mode_req_wind_and_flight_time_compliance_type mode_req_wind_and_flight_time_compliance;
  using _mode_req_prevent_arming_type =
    uint32_t;
  _mode_req_prevent_arming_type mode_req_prevent_arming;
  using _mode_req_manual_control_type =
    uint32_t;
  _mode_req_manual_control_type mode_req_manual_control;
  using _mode_req_other_type =
    uint32_t;
  _mode_req_other_type mode_req_other;
  using _angular_velocity_invalid_type =
    bool;
  _angular_velocity_invalid_type angular_velocity_invalid;
  using _attitude_invalid_type =
    bool;
  _attitude_invalid_type attitude_invalid;
  using _local_altitude_invalid_type =
    bool;
  _local_altitude_invalid_type local_altitude_invalid;
  using _local_position_invalid_type =
    bool;
  _local_position_invalid_type local_position_invalid;
  using _local_position_invalid_relaxed_type =
    bool;
  _local_position_invalid_relaxed_type local_position_invalid_relaxed;
  using _local_velocity_invalid_type =
    bool;
  _local_velocity_invalid_type local_velocity_invalid;
  using _global_position_invalid_type =
    bool;
  _global_position_invalid_type global_position_invalid;
  using _auto_mission_missing_type =
    bool;
  _auto_mission_missing_type auto_mission_missing;
  using _offboard_control_signal_lost_type =
    bool;
  _offboard_control_signal_lost_type offboard_control_signal_lost;
  using _home_position_invalid_type =
    bool;
  _home_position_invalid_type home_position_invalid;
  using _manual_control_signal_lost_type =
    bool;
  _manual_control_signal_lost_type manual_control_signal_lost;
  using _gcs_connection_lost_type =
    bool;
  _gcs_connection_lost_type gcs_connection_lost;
  using _battery_warning_type =
    uint8_t;
  _battery_warning_type battery_warning;
  using _battery_low_remaining_time_type =
    bool;
  _battery_low_remaining_time_type battery_low_remaining_time;
  using _battery_unhealthy_type =
    bool;
  _battery_unhealthy_type battery_unhealthy;
  using _geofence_breached_type =
    bool;
  _geofence_breached_type geofence_breached;
  using _mission_failure_type =
    bool;
  _mission_failure_type mission_failure;
  using _vtol_fixed_wing_system_failure_type =
    bool;
  _vtol_fixed_wing_system_failure_type vtol_fixed_wing_system_failure;
  using _wind_limit_exceeded_type =
    bool;
  _wind_limit_exceeded_type wind_limit_exceeded;
  using _flight_time_limit_exceeded_type =
    bool;
  _flight_time_limit_exceeded_type flight_time_limit_exceeded;
  using _local_position_accuracy_low_type =
    bool;
  _local_position_accuracy_low_type local_position_accuracy_low;
  using _fd_critical_failure_type =
    bool;
  _fd_critical_failure_type fd_critical_failure;
  using _fd_esc_arming_failure_type =
    bool;
  _fd_esc_arming_failure_type fd_esc_arming_failure;
  using _fd_imbalanced_prop_type =
    bool;
  _fd_imbalanced_prop_type fd_imbalanced_prop;
  using _fd_motor_failure_type =
    bool;
  _fd_motor_failure_type fd_motor_failure;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__mode_req_angular_velocity(
    const uint32_t & _arg)
  {
    this->mode_req_angular_velocity = _arg;
    return *this;
  }
  Type & set__mode_req_attitude(
    const uint32_t & _arg)
  {
    this->mode_req_attitude = _arg;
    return *this;
  }
  Type & set__mode_req_local_alt(
    const uint32_t & _arg)
  {
    this->mode_req_local_alt = _arg;
    return *this;
  }
  Type & set__mode_req_local_position(
    const uint32_t & _arg)
  {
    this->mode_req_local_position = _arg;
    return *this;
  }
  Type & set__mode_req_local_position_relaxed(
    const uint32_t & _arg)
  {
    this->mode_req_local_position_relaxed = _arg;
    return *this;
  }
  Type & set__mode_req_global_position(
    const uint32_t & _arg)
  {
    this->mode_req_global_position = _arg;
    return *this;
  }
  Type & set__mode_req_mission(
    const uint32_t & _arg)
  {
    this->mode_req_mission = _arg;
    return *this;
  }
  Type & set__mode_req_offboard_signal(
    const uint32_t & _arg)
  {
    this->mode_req_offboard_signal = _arg;
    return *this;
  }
  Type & set__mode_req_home_position(
    const uint32_t & _arg)
  {
    this->mode_req_home_position = _arg;
    return *this;
  }
  Type & set__mode_req_wind_and_flight_time_compliance(
    const uint32_t & _arg)
  {
    this->mode_req_wind_and_flight_time_compliance = _arg;
    return *this;
  }
  Type & set__mode_req_prevent_arming(
    const uint32_t & _arg)
  {
    this->mode_req_prevent_arming = _arg;
    return *this;
  }
  Type & set__mode_req_manual_control(
    const uint32_t & _arg)
  {
    this->mode_req_manual_control = _arg;
    return *this;
  }
  Type & set__mode_req_other(
    const uint32_t & _arg)
  {
    this->mode_req_other = _arg;
    return *this;
  }
  Type & set__angular_velocity_invalid(
    const bool & _arg)
  {
    this->angular_velocity_invalid = _arg;
    return *this;
  }
  Type & set__attitude_invalid(
    const bool & _arg)
  {
    this->attitude_invalid = _arg;
    return *this;
  }
  Type & set__local_altitude_invalid(
    const bool & _arg)
  {
    this->local_altitude_invalid = _arg;
    return *this;
  }
  Type & set__local_position_invalid(
    const bool & _arg)
  {
    this->local_position_invalid = _arg;
    return *this;
  }
  Type & set__local_position_invalid_relaxed(
    const bool & _arg)
  {
    this->local_position_invalid_relaxed = _arg;
    return *this;
  }
  Type & set__local_velocity_invalid(
    const bool & _arg)
  {
    this->local_velocity_invalid = _arg;
    return *this;
  }
  Type & set__global_position_invalid(
    const bool & _arg)
  {
    this->global_position_invalid = _arg;
    return *this;
  }
  Type & set__auto_mission_missing(
    const bool & _arg)
  {
    this->auto_mission_missing = _arg;
    return *this;
  }
  Type & set__offboard_control_signal_lost(
    const bool & _arg)
  {
    this->offboard_control_signal_lost = _arg;
    return *this;
  }
  Type & set__home_position_invalid(
    const bool & _arg)
  {
    this->home_position_invalid = _arg;
    return *this;
  }
  Type & set__manual_control_signal_lost(
    const bool & _arg)
  {
    this->manual_control_signal_lost = _arg;
    return *this;
  }
  Type & set__gcs_connection_lost(
    const bool & _arg)
  {
    this->gcs_connection_lost = _arg;
    return *this;
  }
  Type & set__battery_warning(
    const uint8_t & _arg)
  {
    this->battery_warning = _arg;
    return *this;
  }
  Type & set__battery_low_remaining_time(
    const bool & _arg)
  {
    this->battery_low_remaining_time = _arg;
    return *this;
  }
  Type & set__battery_unhealthy(
    const bool & _arg)
  {
    this->battery_unhealthy = _arg;
    return *this;
  }
  Type & set__geofence_breached(
    const bool & _arg)
  {
    this->geofence_breached = _arg;
    return *this;
  }
  Type & set__mission_failure(
    const bool & _arg)
  {
    this->mission_failure = _arg;
    return *this;
  }
  Type & set__vtol_fixed_wing_system_failure(
    const bool & _arg)
  {
    this->vtol_fixed_wing_system_failure = _arg;
    return *this;
  }
  Type & set__wind_limit_exceeded(
    const bool & _arg)
  {
    this->wind_limit_exceeded = _arg;
    return *this;
  }
  Type & set__flight_time_limit_exceeded(
    const bool & _arg)
  {
    this->flight_time_limit_exceeded = _arg;
    return *this;
  }
  Type & set__local_position_accuracy_low(
    const bool & _arg)
  {
    this->local_position_accuracy_low = _arg;
    return *this;
  }
  Type & set__fd_critical_failure(
    const bool & _arg)
  {
    this->fd_critical_failure = _arg;
    return *this;
  }
  Type & set__fd_esc_arming_failure(
    const bool & _arg)
  {
    this->fd_esc_arming_failure = _arg;
    return *this;
  }
  Type & set__fd_imbalanced_prop(
    const bool & _arg)
  {
    this->fd_imbalanced_prop = _arg;
    return *this;
  }
  Type & set__fd_motor_failure(
    const bool & _arg)
  {
    this->fd_motor_failure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FailsafeFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FailsafeFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailsafeFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailsafeFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FailsafeFlags
    std::shared_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FailsafeFlags
    std::shared_ptr<px4_msgs::msg::FailsafeFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailsafeFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->mode_req_angular_velocity != other.mode_req_angular_velocity) {
      return false;
    }
    if (this->mode_req_attitude != other.mode_req_attitude) {
      return false;
    }
    if (this->mode_req_local_alt != other.mode_req_local_alt) {
      return false;
    }
    if (this->mode_req_local_position != other.mode_req_local_position) {
      return false;
    }
    if (this->mode_req_local_position_relaxed != other.mode_req_local_position_relaxed) {
      return false;
    }
    if (this->mode_req_global_position != other.mode_req_global_position) {
      return false;
    }
    if (this->mode_req_mission != other.mode_req_mission) {
      return false;
    }
    if (this->mode_req_offboard_signal != other.mode_req_offboard_signal) {
      return false;
    }
    if (this->mode_req_home_position != other.mode_req_home_position) {
      return false;
    }
    if (this->mode_req_wind_and_flight_time_compliance != other.mode_req_wind_and_flight_time_compliance) {
      return false;
    }
    if (this->mode_req_prevent_arming != other.mode_req_prevent_arming) {
      return false;
    }
    if (this->mode_req_manual_control != other.mode_req_manual_control) {
      return false;
    }
    if (this->mode_req_other != other.mode_req_other) {
      return false;
    }
    if (this->angular_velocity_invalid != other.angular_velocity_invalid) {
      return false;
    }
    if (this->attitude_invalid != other.attitude_invalid) {
      return false;
    }
    if (this->local_altitude_invalid != other.local_altitude_invalid) {
      return false;
    }
    if (this->local_position_invalid != other.local_position_invalid) {
      return false;
    }
    if (this->local_position_invalid_relaxed != other.local_position_invalid_relaxed) {
      return false;
    }
    if (this->local_velocity_invalid != other.local_velocity_invalid) {
      return false;
    }
    if (this->global_position_invalid != other.global_position_invalid) {
      return false;
    }
    if (this->auto_mission_missing != other.auto_mission_missing) {
      return false;
    }
    if (this->offboard_control_signal_lost != other.offboard_control_signal_lost) {
      return false;
    }
    if (this->home_position_invalid != other.home_position_invalid) {
      return false;
    }
    if (this->manual_control_signal_lost != other.manual_control_signal_lost) {
      return false;
    }
    if (this->gcs_connection_lost != other.gcs_connection_lost) {
      return false;
    }
    if (this->battery_warning != other.battery_warning) {
      return false;
    }
    if (this->battery_low_remaining_time != other.battery_low_remaining_time) {
      return false;
    }
    if (this->battery_unhealthy != other.battery_unhealthy) {
      return false;
    }
    if (this->geofence_breached != other.geofence_breached) {
      return false;
    }
    if (this->mission_failure != other.mission_failure) {
      return false;
    }
    if (this->vtol_fixed_wing_system_failure != other.vtol_fixed_wing_system_failure) {
      return false;
    }
    if (this->wind_limit_exceeded != other.wind_limit_exceeded) {
      return false;
    }
    if (this->flight_time_limit_exceeded != other.flight_time_limit_exceeded) {
      return false;
    }
    if (this->local_position_accuracy_low != other.local_position_accuracy_low) {
      return false;
    }
    if (this->fd_critical_failure != other.fd_critical_failure) {
      return false;
    }
    if (this->fd_esc_arming_failure != other.fd_esc_arming_failure) {
      return false;
    }
    if (this->fd_imbalanced_prop != other.fd_imbalanced_prop) {
      return false;
    }
    if (this->fd_motor_failure != other.fd_motor_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailsafeFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailsafeFlags_

// alias to use template instance with default allocator
using FailsafeFlags =
  px4_msgs::msg::FailsafeFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_HPP_
