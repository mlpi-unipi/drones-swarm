// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorTest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorTest __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorTest __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorTest_
{
  using Type = ActuatorTest_<ContainerAllocator>;

  explicit ActuatorTest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->function = 0;
      this->value = 0.0f;
      this->timeout_ms = 0ul;
    }
  }

  explicit ActuatorTest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->function = 0;
      this->value = 0.0f;
      this->timeout_ms = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _action_type =
    uint8_t;
  _action_type action;
  using _function_type =
    uint16_t;
  _function_type function;
  using _value_type =
    float;
  _value_type value;
  using _timeout_ms_type =
    uint32_t;
  _timeout_ms_type timeout_ms;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__function(
    const uint16_t & _arg)
  {
    this->function = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTION_RELEASE_CONTROL =
    0u;
  static constexpr uint8_t ACTION_DO_CONTROL =
    1u;
  static constexpr uint8_t FUNCTION_MOTOR1 =
    101u;
  static constexpr uint8_t MAX_NUM_MOTORS =
    12u;
  static constexpr uint8_t FUNCTION_SERVO1 =
    201u;
  static constexpr uint8_t MAX_NUM_SERVOS =
    8u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorTest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorTest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorTest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorTest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorTest
    std::shared_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorTest
    std::shared_ptr<px4_msgs::msg::ActuatorTest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorTest_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorTest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorTest_

// alias to use template instance with default allocator
using ActuatorTest =
  px4_msgs::msg::ActuatorTest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::ACTION_RELEASE_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::ACTION_DO_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::FUNCTION_MOTOR1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::MAX_NUM_MOTORS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::FUNCTION_SERVO1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::MAX_NUM_SERVOS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorTest_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__STRUCT_HPP_
