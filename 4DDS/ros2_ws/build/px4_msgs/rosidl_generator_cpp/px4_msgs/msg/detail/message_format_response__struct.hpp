// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/MessageFormatResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__MessageFormatResponse __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__MessageFormatResponse __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MessageFormatResponse_
{
  using Type = MessageFormatResponse_<ContainerAllocator>;

  explicit MessageFormatResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->protocol_version = 0;
      std::fill<typename std::array<uint8_t, 50>::iterator, uint8_t>(this->topic_name.begin(), this->topic_name.end(), 0);
      this->success = false;
      this->message_hash = 0ul;
    }
  }

  explicit MessageFormatResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->protocol_version = 0;
      std::fill<typename std::array<uint8_t, 50>::iterator, uint8_t>(this->topic_name.begin(), this->topic_name.end(), 0);
      this->success = false;
      this->message_hash = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _protocol_version_type =
    uint16_t;
  _protocol_version_type protocol_version;
  using _topic_name_type =
    std::array<uint8_t, 50>;
  _topic_name_type topic_name;
  using _success_type =
    bool;
  _success_type success;
  using _message_hash_type =
    uint32_t;
  _message_hash_type message_hash;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const uint16_t & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__topic_name(
    const std::array<uint8_t, 50> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message_hash(
    const uint32_t & _arg)
  {
    this->message_hash = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__MessageFormatResponse
    std::shared_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__MessageFormatResponse
    std::shared_ptr<px4_msgs::msg::MessageFormatResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageFormatResponse_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message_hash != other.message_hash) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageFormatResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageFormatResponse_

// alias to use template instance with default allocator
using MessageFormatResponse =
  px4_msgs::msg::MessageFormatResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__STRUCT_HPP_
