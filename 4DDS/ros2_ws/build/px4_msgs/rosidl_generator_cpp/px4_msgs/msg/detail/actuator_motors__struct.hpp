// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorMotors.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorMotors __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorMotors __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorMotors_
{
  using Type = ActuatorMotors_<ContainerAllocator>;

  explicit ActuatorMotors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->reversible_flags = 0;
      std::fill<typename std::array<float, 12>::iterator, float>(this->control.begin(), this->control.end(), 0.0f);
    }
  }

  explicit ActuatorMotors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->reversible_flags = 0;
      std::fill<typename std::array<float, 12>::iterator, float>(this->control.begin(), this->control.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _reversible_flags_type =
    uint16_t;
  _reversible_flags_type reversible_flags;
  using _control_type =
    std::array<float, 12>;
  _control_type control;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__reversible_flags(
    const uint16_t & _arg)
  {
    this->reversible_flags = _arg;
    return *this;
  }
  Type & set__control(
    const std::array<float, 12> & _arg)
  {
    this->control = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTUATOR_FUNCTION_MOTOR1 =
    101u;
  static constexpr uint8_t NUM_CONTROLS =
    12u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorMotors_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorMotors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorMotors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorMotors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorMotors
    std::shared_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorMotors
    std::shared_ptr<px4_msgs::msg::ActuatorMotors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMotors_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->reversible_flags != other.reversible_flags) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMotors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMotors_

// alias to use template instance with default allocator
using ActuatorMotors =
  px4_msgs::msg::ActuatorMotors_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorMotors_<ContainerAllocator>::ACTUATOR_FUNCTION_MOTOR1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorMotors_<ContainerAllocator>::NUM_CONTROLS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_MOTORS__STRUCT_HPP_
