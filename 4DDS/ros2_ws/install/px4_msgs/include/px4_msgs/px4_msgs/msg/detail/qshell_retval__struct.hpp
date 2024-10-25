// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/QshellRetval.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__QshellRetval __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__QshellRetval __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QshellRetval_
{
  using Type = QshellRetval_<ContainerAllocator>;

  explicit QshellRetval_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->return_value = 0l;
      this->return_sequence = 0ul;
    }
  }

  explicit QshellRetval_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->return_value = 0l;
      this->return_sequence = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _return_value_type =
    int32_t;
  _return_value_type return_value;
  using _return_sequence_type =
    uint32_t;
  _return_sequence_type return_sequence;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__return_value(
    const int32_t & _arg)
  {
    this->return_value = _arg;
    return *this;
  }
  Type & set__return_sequence(
    const uint32_t & _arg)
  {
    this->return_sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::QshellRetval_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::QshellRetval_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::QshellRetval_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::QshellRetval_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__QshellRetval
    std::shared_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__QshellRetval
    std::shared_ptr<px4_msgs::msg::QshellRetval_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QshellRetval_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->return_value != other.return_value) {
      return false;
    }
    if (this->return_sequence != other.return_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const QshellRetval_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QshellRetval_

// alias to use template instance with default allocator
using QshellRetval =
  px4_msgs::msg::QshellRetval_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_HPP_
