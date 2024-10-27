// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DebugArray.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DebugArray __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DebugArray __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugArray_
{
  using Type = DebugArray_<ContainerAllocator>;

  explicit DebugArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0;
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      std::fill<typename std::array<float, 58>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
    }
  }

  explicit DebugArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0;
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      std::fill<typename std::array<float, 58>::iterator, float>(this->data.begin(), this->data.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _id_type =
    uint16_t;
  _id_type id;
  using _name_type =
    std::array<uint8_t, 10>;
  _name_type name;
  using _data_type =
    std::array<float, 58>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::array<uint8_t, 10> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<float, 58> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ARRAY_SIZE =
    58u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::DebugArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DebugArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DebugArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DebugArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DebugArray
    std::shared_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DebugArray
    std::shared_ptr<px4_msgs::msg::DebugArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugArray_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugArray_

// alias to use template instance with default allocator
using DebugArray =
  px4_msgs::msg::DebugArray_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DebugArray_<ContainerAllocator>::ARRAY_SIZE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_HPP_
