// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TaskStackInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TaskStackInfo __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TaskStackInfo __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskStackInfo_
{
  using Type = TaskStackInfo_<ContainerAllocator>;

  explicit TaskStackInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->stack_free = 0;
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->task_name.begin(), this->task_name.end(), 0);
    }
  }

  explicit TaskStackInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->stack_free = 0;
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->task_name.begin(), this->task_name.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _stack_free_type =
    uint16_t;
  _stack_free_type stack_free;
  using _task_name_type =
    std::array<uint8_t, 24>;
  _task_name_type task_name;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__stack_free(
    const uint16_t & _arg)
  {
    this->stack_free = _arg;
    return *this;
  }
  Type & set__task_name(
    const std::array<uint8_t, 24> & _arg)
  {
    this->task_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TaskStackInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TaskStackInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TaskStackInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TaskStackInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TaskStackInfo
    std::shared_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TaskStackInfo
    std::shared_ptr<px4_msgs::msg::TaskStackInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskStackInfo_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->stack_free != other.stack_free) {
      return false;
    }
    if (this->task_name != other.task_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskStackInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskStackInfo_

// alias to use template instance with default allocator
using TaskStackInfo =
  px4_msgs::msg::TaskStackInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStackInfo_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__STRUCT_HPP_
