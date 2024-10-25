// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FigureEightStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FigureEightStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FigureEightStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FigureEightStatus_
{
  using Type = FigureEightStatus_<ContainerAllocator>;

  explicit FigureEightStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->major_radius = 0.0f;
      this->minor_radius = 0.0f;
      this->orientation = 0.0f;
      this->frame = 0;
      this->x = 0l;
      this->y = 0l;
      this->z = 0.0f;
    }
  }

  explicit FigureEightStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->major_radius = 0.0f;
      this->minor_radius = 0.0f;
      this->orientation = 0.0f;
      this->frame = 0;
      this->x = 0l;
      this->y = 0l;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _major_radius_type =
    float;
  _major_radius_type major_radius;
  using _minor_radius_type =
    float;
  _minor_radius_type minor_radius;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _frame_type =
    uint8_t;
  _frame_type frame;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__major_radius(
    const float & _arg)
  {
    this->major_radius = _arg;
    return *this;
  }
  Type & set__minor_radius(
    const float & _arg)
  {
    this->minor_radius = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__frame(
    const uint8_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FigureEightStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FigureEightStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FigureEightStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FigureEightStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FigureEightStatus
    std::shared_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FigureEightStatus
    std::shared_ptr<px4_msgs::msg::FigureEightStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FigureEightStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->major_radius != other.major_radius) {
      return false;
    }
    if (this->minor_radius != other.minor_radius) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const FigureEightStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FigureEightStatus_

// alias to use template instance with default allocator
using FigureEightStatus =
  px4_msgs::msg::FigureEightStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__STRUCT_HPP_
