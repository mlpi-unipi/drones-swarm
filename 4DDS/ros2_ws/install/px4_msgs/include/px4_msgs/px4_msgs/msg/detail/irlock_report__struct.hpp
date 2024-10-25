// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/IrlockReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__IrlockReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__IrlockReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrlockReport_
{
  using Type = IrlockReport_<ContainerAllocator>;

  explicit IrlockReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->signature = 0;
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->size_x = 0.0f;
      this->size_y = 0.0f;
    }
  }

  explicit IrlockReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->signature = 0;
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->size_x = 0.0f;
      this->size_y = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _signature_type =
    uint16_t;
  _signature_type signature;
  using _pos_x_type =
    float;
  _pos_x_type pos_x;
  using _pos_y_type =
    float;
  _pos_y_type pos_y;
  using _size_x_type =
    float;
  _size_x_type size_x;
  using _size_y_type =
    float;
  _size_y_type size_y;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__signature(
    const uint16_t & _arg)
  {
    this->signature = _arg;
    return *this;
  }
  Type & set__pos_x(
    const float & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const float & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__size_x(
    const float & _arg)
  {
    this->size_x = _arg;
    return *this;
  }
  Type & set__size_y(
    const float & _arg)
  {
    this->size_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::IrlockReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::IrlockReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::IrlockReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::IrlockReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__IrlockReport
    std::shared_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__IrlockReport
    std::shared_ptr<px4_msgs::msg::IrlockReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrlockReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->signature != other.signature) {
      return false;
    }
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->size_x != other.size_x) {
      return false;
    }
    if (this->size_y != other.size_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrlockReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrlockReport_

// alias to use template instance with default allocator
using IrlockReport =
  px4_msgs::msg::IrlockReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__STRUCT_HPP_
