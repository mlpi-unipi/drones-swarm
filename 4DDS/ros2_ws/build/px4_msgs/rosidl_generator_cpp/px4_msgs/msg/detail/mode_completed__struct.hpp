// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ModeCompleted.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ModeCompleted __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ModeCompleted __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModeCompleted_
{
  using Type = ModeCompleted_<ContainerAllocator>;

  explicit ModeCompleted_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->result = 0;
      this->nav_state = 0;
    }
  }

  explicit ModeCompleted_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->result = 0;
      this->nav_state = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _result_type =
    uint8_t;
  _result_type result;
  using _nav_state_type =
    uint8_t;
  _nav_state_type nav_state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__nav_state(
    const uint8_t & _arg)
  {
    this->nav_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_SUCCESS =
    0u;
  static constexpr uint8_t RESULT_FAILURE_OTHER =
    100u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ModeCompleted_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ModeCompleted_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ModeCompleted_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ModeCompleted_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ModeCompleted
    std::shared_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ModeCompleted
    std::shared_ptr<px4_msgs::msg::ModeCompleted_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeCompleted_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->nav_state != other.nav_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeCompleted_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeCompleted_

// alias to use template instance with default allocator
using ModeCompleted =
  px4_msgs::msg::ModeCompleted_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCompleted_<ContainerAllocator>::RESULT_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ModeCompleted_<ContainerAllocator>::RESULT_FAILURE_OTHER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__STRUCT_HPP_
