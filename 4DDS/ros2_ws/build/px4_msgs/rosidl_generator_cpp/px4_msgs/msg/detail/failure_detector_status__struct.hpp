// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FailureDetectorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FailureDetectorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailureDetectorStatus_
{
  using Type = FailureDetectorStatus_<ContainerAllocator>;

  explicit FailureDetectorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->fd_roll = false;
      this->fd_pitch = false;
      this->fd_alt = false;
      this->fd_ext = false;
      this->fd_arm_escs = false;
      this->fd_battery = false;
      this->fd_imbalanced_prop = false;
      this->fd_motor = false;
      this->imbalanced_prop_metric = 0.0f;
      this->motor_failure_mask = 0;
    }
  }

  explicit FailureDetectorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->fd_roll = false;
      this->fd_pitch = false;
      this->fd_alt = false;
      this->fd_ext = false;
      this->fd_arm_escs = false;
      this->fd_battery = false;
      this->fd_imbalanced_prop = false;
      this->fd_motor = false;
      this->imbalanced_prop_metric = 0.0f;
      this->motor_failure_mask = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _fd_roll_type =
    bool;
  _fd_roll_type fd_roll;
  using _fd_pitch_type =
    bool;
  _fd_pitch_type fd_pitch;
  using _fd_alt_type =
    bool;
  _fd_alt_type fd_alt;
  using _fd_ext_type =
    bool;
  _fd_ext_type fd_ext;
  using _fd_arm_escs_type =
    bool;
  _fd_arm_escs_type fd_arm_escs;
  using _fd_battery_type =
    bool;
  _fd_battery_type fd_battery;
  using _fd_imbalanced_prop_type =
    bool;
  _fd_imbalanced_prop_type fd_imbalanced_prop;
  using _fd_motor_type =
    bool;
  _fd_motor_type fd_motor;
  using _imbalanced_prop_metric_type =
    float;
  _imbalanced_prop_metric_type imbalanced_prop_metric;
  using _motor_failure_mask_type =
    uint16_t;
  _motor_failure_mask_type motor_failure_mask;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__fd_roll(
    const bool & _arg)
  {
    this->fd_roll = _arg;
    return *this;
  }
  Type & set__fd_pitch(
    const bool & _arg)
  {
    this->fd_pitch = _arg;
    return *this;
  }
  Type & set__fd_alt(
    const bool & _arg)
  {
    this->fd_alt = _arg;
    return *this;
  }
  Type & set__fd_ext(
    const bool & _arg)
  {
    this->fd_ext = _arg;
    return *this;
  }
  Type & set__fd_arm_escs(
    const bool & _arg)
  {
    this->fd_arm_escs = _arg;
    return *this;
  }
  Type & set__fd_battery(
    const bool & _arg)
  {
    this->fd_battery = _arg;
    return *this;
  }
  Type & set__fd_imbalanced_prop(
    const bool & _arg)
  {
    this->fd_imbalanced_prop = _arg;
    return *this;
  }
  Type & set__fd_motor(
    const bool & _arg)
  {
    this->fd_motor = _arg;
    return *this;
  }
  Type & set__imbalanced_prop_metric(
    const float & _arg)
  {
    this->imbalanced_prop_metric = _arg;
    return *this;
  }
  Type & set__motor_failure_mask(
    const uint16_t & _arg)
  {
    this->motor_failure_mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FailureDetectorStatus
    std::shared_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FailureDetectorStatus
    std::shared_ptr<px4_msgs::msg::FailureDetectorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailureDetectorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->fd_roll != other.fd_roll) {
      return false;
    }
    if (this->fd_pitch != other.fd_pitch) {
      return false;
    }
    if (this->fd_alt != other.fd_alt) {
      return false;
    }
    if (this->fd_ext != other.fd_ext) {
      return false;
    }
    if (this->fd_arm_escs != other.fd_arm_escs) {
      return false;
    }
    if (this->fd_battery != other.fd_battery) {
      return false;
    }
    if (this->fd_imbalanced_prop != other.fd_imbalanced_prop) {
      return false;
    }
    if (this->fd_motor != other.fd_motor) {
      return false;
    }
    if (this->imbalanced_prop_metric != other.imbalanced_prop_metric) {
      return false;
    }
    if (this->motor_failure_mask != other.motor_failure_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailureDetectorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailureDetectorStatus_

// alias to use template instance with default allocator
using FailureDetectorStatus =
  px4_msgs::msg::FailureDetectorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_HPP_
