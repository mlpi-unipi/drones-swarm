// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/QshellReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_REQ__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_REQ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__QshellReq __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__QshellReq __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QshellReq_
{
  using Type = QshellReq_<ContainerAllocator>;

  explicit QshellReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 100>::iterator, uint8_t>(this->cmd.begin(), this->cmd.end(), 0);
      this->strlen = 0ul;
      this->request_sequence = 0ul;
    }
  }

  explicit QshellReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 100>::iterator, uint8_t>(this->cmd.begin(), this->cmd.end(), 0);
      this->strlen = 0ul;
      this->request_sequence = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _cmd_type =
    std::array<uint8_t, 100>;
  _cmd_type cmd;
  using _strlen_type =
    uint32_t;
  _strlen_type strlen;
  using _request_sequence_type =
    uint32_t;
  _request_sequence_type request_sequence;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__cmd(
    const std::array<uint8_t, 100> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__strlen(
    const uint32_t & _arg)
  {
    this->strlen = _arg;
    return *this;
  }
  Type & set__request_sequence(
    const uint32_t & _arg)
  {
    this->request_sequence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MAX_STRLEN =
    100u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::QshellReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::QshellReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::QshellReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::QshellReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__QshellReq
    std::shared_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__QshellReq
    std::shared_ptr<px4_msgs::msg::QshellReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QshellReq_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->strlen != other.strlen) {
      return false;
    }
    if (this->request_sequence != other.request_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const QshellReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QshellReq_

// alias to use template instance with default allocator
using QshellReq =
  px4_msgs::msg::QshellReq_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QshellReq_<ContainerAllocator>::MAX_STRLEN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_REQ__STRUCT_HPP_
