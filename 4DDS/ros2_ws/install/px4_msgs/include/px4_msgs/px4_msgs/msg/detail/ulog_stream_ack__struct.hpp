// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/UlogStreamAck.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__UlogStreamAck __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__UlogStreamAck __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UlogStreamAck_
{
  using Type = UlogStreamAck_<ContainerAllocator>;

  explicit UlogStreamAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->msg_sequence = 0;
    }
  }

  explicit UlogStreamAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->msg_sequence = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _msg_sequence_type =
    uint16_t;
  _msg_sequence_type msg_sequence;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__msg_sequence(
    const uint16_t & _arg)
  {
    this->msg_sequence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ACK_TIMEOUT =
    50;
  static constexpr int32_t ACK_MAX_TRIES =
    50;

  // pointer types
  using RawPtr =
    px4_msgs::msg::UlogStreamAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::UlogStreamAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UlogStreamAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UlogStreamAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__UlogStreamAck
    std::shared_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__UlogStreamAck
    std::shared_ptr<px4_msgs::msg::UlogStreamAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlogStreamAck_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->msg_sequence != other.msg_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlogStreamAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlogStreamAck_

// alias to use template instance with default allocator
using UlogStreamAck =
  px4_msgs::msg::UlogStreamAck_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t UlogStreamAck_<ContainerAllocator>::ACK_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t UlogStreamAck_<ContainerAllocator>::ACK_MAX_TRIES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ULOG_STREAM_ACK__STRUCT_HPP_
