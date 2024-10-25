// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LoggerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LoggerStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LoggerStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoggerStatus_
{
  using Type = LoggerStatus_<ContainerAllocator>;

  explicit LoggerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->backend = 0;
      this->total_written_kb = 0.0f;
      this->write_rate_kb_s = 0.0f;
      this->dropouts = 0ul;
      this->message_gaps = 0ul;
      this->buffer_used_bytes = 0ul;
      this->buffer_size_bytes = 0ul;
      this->num_messages = 0;
    }
  }

  explicit LoggerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->backend = 0;
      this->total_written_kb = 0.0f;
      this->write_rate_kb_s = 0.0f;
      this->dropouts = 0ul;
      this->message_gaps = 0ul;
      this->buffer_used_bytes = 0ul;
      this->buffer_size_bytes = 0ul;
      this->num_messages = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _backend_type =
    uint8_t;
  _backend_type backend;
  using _total_written_kb_type =
    float;
  _total_written_kb_type total_written_kb;
  using _write_rate_kb_s_type =
    float;
  _write_rate_kb_s_type write_rate_kb_s;
  using _dropouts_type =
    uint32_t;
  _dropouts_type dropouts;
  using _message_gaps_type =
    uint32_t;
  _message_gaps_type message_gaps;
  using _buffer_used_bytes_type =
    uint32_t;
  _buffer_used_bytes_type buffer_used_bytes;
  using _buffer_size_bytes_type =
    uint32_t;
  _buffer_size_bytes_type buffer_size_bytes;
  using _num_messages_type =
    uint8_t;
  _num_messages_type num_messages;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__backend(
    const uint8_t & _arg)
  {
    this->backend = _arg;
    return *this;
  }
  Type & set__total_written_kb(
    const float & _arg)
  {
    this->total_written_kb = _arg;
    return *this;
  }
  Type & set__write_rate_kb_s(
    const float & _arg)
  {
    this->write_rate_kb_s = _arg;
    return *this;
  }
  Type & set__dropouts(
    const uint32_t & _arg)
  {
    this->dropouts = _arg;
    return *this;
  }
  Type & set__message_gaps(
    const uint32_t & _arg)
  {
    this->message_gaps = _arg;
    return *this;
  }
  Type & set__buffer_used_bytes(
    const uint32_t & _arg)
  {
    this->buffer_used_bytes = _arg;
    return *this;
  }
  Type & set__buffer_size_bytes(
    const uint32_t & _arg)
  {
    this->buffer_size_bytes = _arg;
    return *this;
  }
  Type & set__num_messages(
    const uint8_t & _arg)
  {
    this->num_messages = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOGGER_TYPE_FULL =
    0u;
  static constexpr uint8_t LOGGER_TYPE_MISSION =
    1u;
  static constexpr uint8_t BACKEND_FILE =
    1u;
  static constexpr uint8_t BACKEND_MAVLINK =
    2u;
  static constexpr uint8_t BACKEND_ALL =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LoggerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LoggerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LoggerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LoggerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LoggerStatus
    std::shared_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LoggerStatus
    std::shared_ptr<px4_msgs::msg::LoggerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoggerStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->backend != other.backend) {
      return false;
    }
    if (this->total_written_kb != other.total_written_kb) {
      return false;
    }
    if (this->write_rate_kb_s != other.write_rate_kb_s) {
      return false;
    }
    if (this->dropouts != other.dropouts) {
      return false;
    }
    if (this->message_gaps != other.message_gaps) {
      return false;
    }
    if (this->buffer_used_bytes != other.buffer_used_bytes) {
      return false;
    }
    if (this->buffer_size_bytes != other.buffer_size_bytes) {
      return false;
    }
    if (this->num_messages != other.num_messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoggerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoggerStatus_

// alias to use template instance with default allocator
using LoggerStatus =
  px4_msgs::msg::LoggerStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoggerStatus_<ContainerAllocator>::LOGGER_TYPE_FULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoggerStatus_<ContainerAllocator>::LOGGER_TYPE_MISSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoggerStatus_<ContainerAllocator>::BACKEND_FILE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoggerStatus_<ContainerAllocator>::BACKEND_MAVLINK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoggerStatus_<ContainerAllocator>::BACKEND_ALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__STRUCT_HPP_
