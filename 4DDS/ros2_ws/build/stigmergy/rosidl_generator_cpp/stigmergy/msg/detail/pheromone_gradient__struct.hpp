// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#ifndef STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_HPP_
#define STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stigmergy__msg__PheromoneGradient __attribute__((deprecated))
#else
# define DEPRECATED__stigmergy__msg__PheromoneGradient __declspec(deprecated)
#endif

namespace stigmergy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PheromoneGradient_
{
  using Type = PheromoneGradient_<ContainerAllocator>;

  explicit PheromoneGradient_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dx = 0.0f;
      this->dy = 0.0f;
    }
  }

  explicit PheromoneGradient_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dx = 0.0f;
      this->dy = 0.0f;
    }
  }

  // field types and members
  using _dx_type =
    float;
  _dx_type dx;
  using _dy_type =
    float;
  _dy_type dy;

  // setters for named parameter idiom
  Type & set__dx(
    const float & _arg)
  {
    this->dx = _arg;
    return *this;
  }
  Type & set__dy(
    const float & _arg)
  {
    this->dy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stigmergy::msg::PheromoneGradient_<ContainerAllocator> *;
  using ConstRawPtr =
    const stigmergy::msg::PheromoneGradient_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stigmergy::msg::PheromoneGradient_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stigmergy::msg::PheromoneGradient_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stigmergy__msg__PheromoneGradient
    std::shared_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stigmergy__msg__PheromoneGradient
    std::shared_ptr<stigmergy::msg::PheromoneGradient_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PheromoneGradient_ & other) const
  {
    if (this->dx != other.dx) {
      return false;
    }
    if (this->dy != other.dy) {
      return false;
    }
    return true;
  }
  bool operator!=(const PheromoneGradient_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PheromoneGradient_

// alias to use template instance with default allocator
using PheromoneGradient =
  stigmergy::msg::PheromoneGradient_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stigmergy

#endif  // STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_HPP_
