// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Buffer128.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BUFFER128__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__BUFFER128__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Buffer128 __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Buffer128 __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Buffer128_
{
  using Type = Buffer128_<ContainerAllocator>;

  explicit Buffer128_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 128>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit Buffer128_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 128>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _len_type =
    uint8_t;
  _len_type len;
  using _data_type =
    std::array<uint8_t, 128>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 128> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MAX_BUFLEN =
    128u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::Buffer128_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Buffer128_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Buffer128_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Buffer128_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Buffer128
    std::shared_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Buffer128
    std::shared_ptr<px4_msgs::msg::Buffer128_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buffer128_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buffer128_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buffer128_

// alias to use template instance with default allocator
using Buffer128 =
  px4_msgs::msg::Buffer128_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Buffer128_<ContainerAllocator>::MAX_BUFLEN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BUFFER128__STRUCT_HPP_
