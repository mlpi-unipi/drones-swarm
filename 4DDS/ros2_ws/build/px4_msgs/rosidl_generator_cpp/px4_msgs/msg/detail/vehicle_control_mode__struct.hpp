// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleControlMode __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleControlMode __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleControlMode_
{
  using Type = VehicleControlMode_<ContainerAllocator>;

  explicit VehicleControlMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flag_armed = false;
      this->flag_multicopter_position_control_enabled = false;
      this->flag_control_manual_enabled = false;
      this->flag_control_auto_enabled = false;
      this->flag_control_offboard_enabled = false;
      this->flag_control_position_enabled = false;
      this->flag_control_velocity_enabled = false;
      this->flag_control_altitude_enabled = false;
      this->flag_control_climb_rate_enabled = false;
      this->flag_control_acceleration_enabled = false;
      this->flag_control_attitude_enabled = false;
      this->flag_control_rates_enabled = false;
      this->flag_control_allocation_enabled = false;
      this->flag_control_termination_enabled = false;
      this->source_id = 0;
    }
  }

  explicit VehicleControlMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flag_armed = false;
      this->flag_multicopter_position_control_enabled = false;
      this->flag_control_manual_enabled = false;
      this->flag_control_auto_enabled = false;
      this->flag_control_offboard_enabled = false;
      this->flag_control_position_enabled = false;
      this->flag_control_velocity_enabled = false;
      this->flag_control_altitude_enabled = false;
      this->flag_control_climb_rate_enabled = false;
      this->flag_control_acceleration_enabled = false;
      this->flag_control_attitude_enabled = false;
      this->flag_control_rates_enabled = false;
      this->flag_control_allocation_enabled = false;
      this->flag_control_termination_enabled = false;
      this->source_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _flag_armed_type =
    bool;
  _flag_armed_type flag_armed;
  using _flag_multicopter_position_control_enabled_type =
    bool;
  _flag_multicopter_position_control_enabled_type flag_multicopter_position_control_enabled;
  using _flag_control_manual_enabled_type =
    bool;
  _flag_control_manual_enabled_type flag_control_manual_enabled;
  using _flag_control_auto_enabled_type =
    bool;
  _flag_control_auto_enabled_type flag_control_auto_enabled;
  using _flag_control_offboard_enabled_type =
    bool;
  _flag_control_offboard_enabled_type flag_control_offboard_enabled;
  using _flag_control_position_enabled_type =
    bool;
  _flag_control_position_enabled_type flag_control_position_enabled;
  using _flag_control_velocity_enabled_type =
    bool;
  _flag_control_velocity_enabled_type flag_control_velocity_enabled;
  using _flag_control_altitude_enabled_type =
    bool;
  _flag_control_altitude_enabled_type flag_control_altitude_enabled;
  using _flag_control_climb_rate_enabled_type =
    bool;
  _flag_control_climb_rate_enabled_type flag_control_climb_rate_enabled;
  using _flag_control_acceleration_enabled_type =
    bool;
  _flag_control_acceleration_enabled_type flag_control_acceleration_enabled;
  using _flag_control_attitude_enabled_type =
    bool;
  _flag_control_attitude_enabled_type flag_control_attitude_enabled;
  using _flag_control_rates_enabled_type =
    bool;
  _flag_control_rates_enabled_type flag_control_rates_enabled;
  using _flag_control_allocation_enabled_type =
    bool;
  _flag_control_allocation_enabled_type flag_control_allocation_enabled;
  using _flag_control_termination_enabled_type =
    bool;
  _flag_control_termination_enabled_type flag_control_termination_enabled;
  using _source_id_type =
    uint8_t;
  _source_id_type source_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__flag_armed(
    const bool & _arg)
  {
    this->flag_armed = _arg;
    return *this;
  }
  Type & set__flag_multicopter_position_control_enabled(
    const bool & _arg)
  {
    this->flag_multicopter_position_control_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_manual_enabled(
    const bool & _arg)
  {
    this->flag_control_manual_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_auto_enabled(
    const bool & _arg)
  {
    this->flag_control_auto_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_offboard_enabled(
    const bool & _arg)
  {
    this->flag_control_offboard_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_position_enabled(
    const bool & _arg)
  {
    this->flag_control_position_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_velocity_enabled(
    const bool & _arg)
  {
    this->flag_control_velocity_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_altitude_enabled(
    const bool & _arg)
  {
    this->flag_control_altitude_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_climb_rate_enabled(
    const bool & _arg)
  {
    this->flag_control_climb_rate_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_acceleration_enabled(
    const bool & _arg)
  {
    this->flag_control_acceleration_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_attitude_enabled(
    const bool & _arg)
  {
    this->flag_control_attitude_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_rates_enabled(
    const bool & _arg)
  {
    this->flag_control_rates_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_allocation_enabled(
    const bool & _arg)
  {
    this->flag_control_allocation_enabled = _arg;
    return *this;
  }
  Type & set__flag_control_termination_enabled(
    const bool & _arg)
  {
    this->flag_control_termination_enabled = _arg;
    return *this;
  }
  Type & set__source_id(
    const uint8_t & _arg)
  {
    this->source_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleControlMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleControlMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleControlMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleControlMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleControlMode
    std::shared_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleControlMode
    std::shared_ptr<px4_msgs::msg::VehicleControlMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleControlMode_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->flag_armed != other.flag_armed) {
      return false;
    }
    if (this->flag_multicopter_position_control_enabled != other.flag_multicopter_position_control_enabled) {
      return false;
    }
    if (this->flag_control_manual_enabled != other.flag_control_manual_enabled) {
      return false;
    }
    if (this->flag_control_auto_enabled != other.flag_control_auto_enabled) {
      return false;
    }
    if (this->flag_control_offboard_enabled != other.flag_control_offboard_enabled) {
      return false;
    }
    if (this->flag_control_position_enabled != other.flag_control_position_enabled) {
      return false;
    }
    if (this->flag_control_velocity_enabled != other.flag_control_velocity_enabled) {
      return false;
    }
    if (this->flag_control_altitude_enabled != other.flag_control_altitude_enabled) {
      return false;
    }
    if (this->flag_control_climb_rate_enabled != other.flag_control_climb_rate_enabled) {
      return false;
    }
    if (this->flag_control_acceleration_enabled != other.flag_control_acceleration_enabled) {
      return false;
    }
    if (this->flag_control_attitude_enabled != other.flag_control_attitude_enabled) {
      return false;
    }
    if (this->flag_control_rates_enabled != other.flag_control_rates_enabled) {
      return false;
    }
    if (this->flag_control_allocation_enabled != other.flag_control_allocation_enabled) {
      return false;
    }
    if (this->flag_control_termination_enabled != other.flag_control_termination_enabled) {
      return false;
    }
    if (this->source_id != other.source_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleControlMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleControlMode_

// alias to use template instance with default allocator
using VehicleControlMode =
  px4_msgs::msg::VehicleControlMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_HPP_
