// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FollowTarget.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FollowTarget __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FollowTarget __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_
{
  using Type = FollowTarget_<ContainerAllocator>;

  explicit FollowTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->vy = 0.0f;
      this->vx = 0.0f;
      this->vz = 0.0f;
      this->est_cap = 0;
    }
  }

  explicit FollowTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->vy = 0.0f;
      this->vx = 0.0f;
      this->vz = 0.0f;
      this->est_cap = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _vy_type =
    float;
  _vy_type vy;
  using _vx_type =
    float;
  _vx_type vx;
  using _vz_type =
    float;
  _vz_type vz;
  using _est_cap_type =
    uint8_t;
  _est_cap_type est_cap;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__est_cap(
    const uint8_t & _arg)
  {
    this->est_cap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FollowTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FollowTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FollowTarget
    std::shared_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FollowTarget
    std::shared_ptr<px4_msgs::msg::FollowTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->est_cap != other.est_cap) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_

// alias to use template instance with default allocator
using FollowTarget =
  px4_msgs::msg::FollowTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_HPP_
