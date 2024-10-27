// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/UlogStream.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ULOG_STREAM__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ULOG_STREAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__UlogStream __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__UlogStream __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UlogStream_
{
  using Type = UlogStream_<ContainerAllocator>;

  explicit UlogStream_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->length = 0;
      this->first_message_offset = 0;
      this->msg_sequence = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 249>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit UlogStream_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->length = 0;
      this->first_message_offset = 0;
      this->msg_sequence = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 249>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _length_type =
    uint8_t;
  _length_type length;
  using _first_message_offset_type =
    uint8_t;
  _first_message_offset_type first_message_offset;
  using _msg_sequence_type =
    uint16_t;
  _msg_sequence_type msg_sequence;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _data_type =
    std::array<uint8_t, 249>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__length(
    const uint8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__first_message_offset(
    const uint8_t & _arg)
  {
    this->first_message_offset = _arg;
    return *this;
  }
  Type & set__msg_sequence(
    const uint16_t & _arg)
  {
    this->msg_sequence = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 249> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FLAGS_NEED_ACK =
    1u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::UlogStream_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::UlogStream_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UlogStream_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UlogStream_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__UlogStream
    std::shared_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__UlogStream
    std::shared_ptr<px4_msgs::msg::UlogStream_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UlogStream_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->first_message_offset != other.first_message_offset) {
      return false;
    }
    if (this->msg_sequence != other.msg_sequence) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UlogStream_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UlogStream_

// alias to use template instance with default allocator
using UlogStream =
  px4_msgs::msg::UlogStream_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UlogStream_<ContainerAllocator>::FLAGS_NEED_ACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UlogStream_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ULOG_STREAM__STRUCT_HPP_
