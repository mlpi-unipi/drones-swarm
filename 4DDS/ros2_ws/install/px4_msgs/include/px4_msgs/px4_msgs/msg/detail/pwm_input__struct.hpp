// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PwmInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PWM_INPUT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PWM_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PwmInput __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PwmInput __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PwmInput_
{
  using Type = PwmInput_<ContainerAllocator>;

  explicit PwmInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->error_count = 0ull;
      this->pulse_width = 0ul;
      this->period = 0ul;
    }
  }

  explicit PwmInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->error_count = 0ull;
      this->pulse_width = 0ul;
      this->period = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _error_count_type =
    uint64_t;
  _error_count_type error_count;
  using _pulse_width_type =
    uint32_t;
  _pulse_width_type pulse_width;
  using _period_type =
    uint32_t;
  _period_type period;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__error_count(
    const uint64_t & _arg)
  {
    this->error_count = _arg;
    return *this;
  }
  Type & set__pulse_width(
    const uint32_t & _arg)
  {
    this->pulse_width = _arg;
    return *this;
  }
  Type & set__period(
    const uint32_t & _arg)
  {
    this->period = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PwmInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PwmInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PwmInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PwmInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PwmInput
    std::shared_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PwmInput
    std::shared_ptr<px4_msgs::msg::PwmInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PwmInput_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->error_count != other.error_count) {
      return false;
    }
    if (this->pulse_width != other.pulse_width) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    return true;
  }
  bool operator!=(const PwmInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PwmInput_

// alias to use template instance with default allocator
using PwmInput =
  px4_msgs::msg::PwmInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PWM_INPUT__STRUCT_HPP_
