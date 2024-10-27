// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorArmed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorArmed __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorArmed __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorArmed_
{
  using Type = ActuatorArmed_<ContainerAllocator>;

  explicit ActuatorArmed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->armed = false;
      this->prearmed = false;
      this->ready_to_arm = false;
      this->lockdown = false;
      this->manual_lockdown = false;
      this->force_failsafe = false;
      this->in_esc_calibration_mode = false;
    }
  }

  explicit ActuatorArmed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->armed = false;
      this->prearmed = false;
      this->ready_to_arm = false;
      this->lockdown = false;
      this->manual_lockdown = false;
      this->force_failsafe = false;
      this->in_esc_calibration_mode = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _armed_type =
    bool;
  _armed_type armed;
  using _prearmed_type =
    bool;
  _prearmed_type prearmed;
  using _ready_to_arm_type =
    bool;
  _ready_to_arm_type ready_to_arm;
  using _lockdown_type =
    bool;
  _lockdown_type lockdown;
  using _manual_lockdown_type =
    bool;
  _manual_lockdown_type manual_lockdown;
  using _force_failsafe_type =
    bool;
  _force_failsafe_type force_failsafe;
  using _in_esc_calibration_mode_type =
    bool;
  _in_esc_calibration_mode_type in_esc_calibration_mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__prearmed(
    const bool & _arg)
  {
    this->prearmed = _arg;
    return *this;
  }
  Type & set__ready_to_arm(
    const bool & _arg)
  {
    this->ready_to_arm = _arg;
    return *this;
  }
  Type & set__lockdown(
    const bool & _arg)
  {
    this->lockdown = _arg;
    return *this;
  }
  Type & set__manual_lockdown(
    const bool & _arg)
  {
    this->manual_lockdown = _arg;
    return *this;
  }
  Type & set__force_failsafe(
    const bool & _arg)
  {
    this->force_failsafe = _arg;
    return *this;
  }
  Type & set__in_esc_calibration_mode(
    const bool & _arg)
  {
    this->in_esc_calibration_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorArmed_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorArmed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorArmed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorArmed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorArmed
    std::shared_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorArmed
    std::shared_ptr<px4_msgs::msg::ActuatorArmed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorArmed_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->prearmed != other.prearmed) {
      return false;
    }
    if (this->ready_to_arm != other.ready_to_arm) {
      return false;
    }
    if (this->lockdown != other.lockdown) {
      return false;
    }
    if (this->manual_lockdown != other.manual_lockdown) {
      return false;
    }
    if (this->force_failsafe != other.force_failsafe) {
      return false;
    }
    if (this->in_esc_calibration_mode != other.in_esc_calibration_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorArmed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorArmed_

// alias to use template instance with default allocator
using ActuatorArmed =
  px4_msgs::msg::ActuatorArmed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__STRUCT_HPP_
