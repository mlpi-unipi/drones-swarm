// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fdds_messages__msg__Flocking __attribute__((deprecated))
#else
# define DEPRECATED__fdds_messages__msg__Flocking __declspec(deprecated)
#endif

namespace fdds_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Flocking_
{
  using Type = Flocking_<ContainerAllocator>;

  explicit Flocking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cohesion_x = 0.0f;
      this->cohesion_y = 0.0f;
      this->alignment_x = 0.0f;
      this->alignment_y = 0.0f;
      this->separation_x = 0.0f;
      this->separation_y = 0.0f;
    }
  }

  explicit Flocking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cohesion_x = 0.0f;
      this->cohesion_y = 0.0f;
      this->alignment_x = 0.0f;
      this->alignment_y = 0.0f;
      this->separation_x = 0.0f;
      this->separation_y = 0.0f;
    }
  }

  // field types and members
  using _cohesion_x_type =
    float;
  _cohesion_x_type cohesion_x;
  using _cohesion_y_type =
    float;
  _cohesion_y_type cohesion_y;
  using _alignment_x_type =
    float;
  _alignment_x_type alignment_x;
  using _alignment_y_type =
    float;
  _alignment_y_type alignment_y;
  using _separation_x_type =
    float;
  _separation_x_type separation_x;
  using _separation_y_type =
    float;
  _separation_y_type separation_y;

  // setters for named parameter idiom
  Type & set__cohesion_x(
    const float & _arg)
  {
    this->cohesion_x = _arg;
    return *this;
  }
  Type & set__cohesion_y(
    const float & _arg)
  {
    this->cohesion_y = _arg;
    return *this;
  }
  Type & set__alignment_x(
    const float & _arg)
  {
    this->alignment_x = _arg;
    return *this;
  }
  Type & set__alignment_y(
    const float & _arg)
  {
    this->alignment_y = _arg;
    return *this;
  }
  Type & set__separation_x(
    const float & _arg)
  {
    this->separation_x = _arg;
    return *this;
  }
  Type & set__separation_y(
    const float & _arg)
  {
    this->separation_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fdds_messages::msg::Flocking_<ContainerAllocator> *;
  using ConstRawPtr =
    const fdds_messages::msg::Flocking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fdds_messages::msg::Flocking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fdds_messages::msg::Flocking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fdds_messages::msg::Flocking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fdds_messages::msg::Flocking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fdds_messages::msg::Flocking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fdds_messages::msg::Flocking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fdds_messages::msg::Flocking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fdds_messages::msg::Flocking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fdds_messages__msg__Flocking
    std::shared_ptr<fdds_messages::msg::Flocking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fdds_messages__msg__Flocking
    std::shared_ptr<fdds_messages::msg::Flocking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flocking_ & other) const
  {
    if (this->cohesion_x != other.cohesion_x) {
      return false;
    }
    if (this->cohesion_y != other.cohesion_y) {
      return false;
    }
    if (this->alignment_x != other.alignment_x) {
      return false;
    }
    if (this->alignment_y != other.alignment_y) {
      return false;
    }
    if (this->separation_x != other.separation_x) {
      return false;
    }
    if (this->separation_y != other.separation_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flocking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flocking_

// alias to use template instance with default allocator
using Flocking =
  fdds_messages::msg::Flocking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fdds_messages

#endif  // FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_HPP_
