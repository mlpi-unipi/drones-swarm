// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CameraTrigger.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CameraTrigger __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CameraTrigger __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraTrigger_
{
  using Type = CameraTrigger_<ContainerAllocator>;

  explicit CameraTrigger_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_utc = 0ull;
      this->seq = 0ul;
      this->feedback = false;
    }
  }

  explicit CameraTrigger_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_utc = 0ull;
      this->seq = 0ul;
      this->feedback = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_utc_type =
    uint64_t;
  _timestamp_utc_type timestamp_utc;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _feedback_type =
    bool;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_utc(
    const uint64_t & _arg)
  {
    this->timestamp_utc = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__feedback(
    const bool & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ORB_QUEUE_LENGTH =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::CameraTrigger_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CameraTrigger_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraTrigger_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraTrigger_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CameraTrigger
    std::shared_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CameraTrigger
    std::shared_ptr<px4_msgs::msg::CameraTrigger_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraTrigger_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_utc != other.timestamp_utc) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraTrigger_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraTrigger_

// alias to use template instance with default allocator
using CameraTrigger =
  px4_msgs::msg::CameraTrigger_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraTrigger_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_TRIGGER__STRUCT_HPP_
