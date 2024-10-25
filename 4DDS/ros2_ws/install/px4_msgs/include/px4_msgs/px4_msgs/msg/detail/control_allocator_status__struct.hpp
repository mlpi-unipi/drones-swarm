// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ControlAllocatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ControlAllocatorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlAllocatorStatus_
{
  using Type = ControlAllocatorStatus_<ContainerAllocator>;

  explicit ControlAllocatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->torque_setpoint_achieved = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->unallocated_torque.begin(), this->unallocated_torque.end(), 0.0f);
      this->thrust_setpoint_achieved = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->unallocated_thrust.begin(), this->unallocated_thrust.end(), 0.0f);
      std::fill<typename std::array<int8_t, 16>::iterator, int8_t>(this->actuator_saturation.begin(), this->actuator_saturation.end(), 0);
      this->handled_motor_failure_mask = 0;
    }
  }

  explicit ControlAllocatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unallocated_torque(_alloc),
    unallocated_thrust(_alloc),
    actuator_saturation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->torque_setpoint_achieved = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->unallocated_torque.begin(), this->unallocated_torque.end(), 0.0f);
      this->thrust_setpoint_achieved = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->unallocated_thrust.begin(), this->unallocated_thrust.end(), 0.0f);
      std::fill<typename std::array<int8_t, 16>::iterator, int8_t>(this->actuator_saturation.begin(), this->actuator_saturation.end(), 0);
      this->handled_motor_failure_mask = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _torque_setpoint_achieved_type =
    bool;
  _torque_setpoint_achieved_type torque_setpoint_achieved;
  using _unallocated_torque_type =
    std::array<float, 3>;
  _unallocated_torque_type unallocated_torque;
  using _thrust_setpoint_achieved_type =
    bool;
  _thrust_setpoint_achieved_type thrust_setpoint_achieved;
  using _unallocated_thrust_type =
    std::array<float, 3>;
  _unallocated_thrust_type unallocated_thrust;
  using _actuator_saturation_type =
    std::array<int8_t, 16>;
  _actuator_saturation_type actuator_saturation;
  using _handled_motor_failure_mask_type =
    uint16_t;
  _handled_motor_failure_mask_type handled_motor_failure_mask;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__torque_setpoint_achieved(
    const bool & _arg)
  {
    this->torque_setpoint_achieved = _arg;
    return *this;
  }
  Type & set__unallocated_torque(
    const std::array<float, 3> & _arg)
  {
    this->unallocated_torque = _arg;
    return *this;
  }
  Type & set__thrust_setpoint_achieved(
    const bool & _arg)
  {
    this->thrust_setpoint_achieved = _arg;
    return *this;
  }
  Type & set__unallocated_thrust(
    const std::array<float, 3> & _arg)
  {
    this->unallocated_thrust = _arg;
    return *this;
  }
  Type & set__actuator_saturation(
    const std::array<int8_t, 16> & _arg)
  {
    this->actuator_saturation = _arg;
    return *this;
  }
  Type & set__handled_motor_failure_mask(
    const uint16_t & _arg)
  {
    this->handled_motor_failure_mask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ACTUATOR_SATURATION_OK =
    0;
  static constexpr int8_t ACTUATOR_SATURATION_UPPER_DYN =
    1;
  static constexpr int8_t ACTUATOR_SATURATION_UPPER =
    2;
  static constexpr int8_t ACTUATOR_SATURATION_LOWER_DYN =
    -1;
  static constexpr int8_t ACTUATOR_SATURATION_LOWER =
    -2;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ControlAllocatorStatus
    std::shared_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ControlAllocatorStatus
    std::shared_ptr<px4_msgs::msg::ControlAllocatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlAllocatorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->torque_setpoint_achieved != other.torque_setpoint_achieved) {
      return false;
    }
    if (this->unallocated_torque != other.unallocated_torque) {
      return false;
    }
    if (this->thrust_setpoint_achieved != other.thrust_setpoint_achieved) {
      return false;
    }
    if (this->unallocated_thrust != other.unallocated_thrust) {
      return false;
    }
    if (this->actuator_saturation != other.actuator_saturation) {
      return false;
    }
    if (this->handled_motor_failure_mask != other.handled_motor_failure_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlAllocatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlAllocatorStatus_

// alias to use template instance with default allocator
using ControlAllocatorStatus =
  px4_msgs::msg::ControlAllocatorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ControlAllocatorStatus_<ContainerAllocator>::ACTUATOR_SATURATION_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ControlAllocatorStatus_<ContainerAllocator>::ACTUATOR_SATURATION_UPPER_DYN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ControlAllocatorStatus_<ContainerAllocator>::ACTUATOR_SATURATION_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ControlAllocatorStatus_<ContainerAllocator>::ACTUATOR_SATURATION_LOWER_DYN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ControlAllocatorStatus_<ContainerAllocator>::ACTUATOR_SATURATION_LOWER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__STRUCT_HPP_
