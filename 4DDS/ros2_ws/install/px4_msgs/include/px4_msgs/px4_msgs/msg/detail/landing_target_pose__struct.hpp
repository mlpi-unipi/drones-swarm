// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LandingTargetPose __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LandingTargetPose __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandingTargetPose_
{
  using Type = LandingTargetPose_<ContainerAllocator>;

  explicit LandingTargetPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->is_static = false;
      this->rel_pos_valid = false;
      this->rel_vel_valid = false;
      this->x_rel = 0.0f;
      this->y_rel = 0.0f;
      this->z_rel = 0.0f;
      this->vx_rel = 0.0f;
      this->vy_rel = 0.0f;
      this->cov_x_rel = 0.0f;
      this->cov_y_rel = 0.0f;
      this->cov_vx_rel = 0.0f;
      this->cov_vy_rel = 0.0f;
      this->abs_pos_valid = false;
      this->x_abs = 0.0f;
      this->y_abs = 0.0f;
      this->z_abs = 0.0f;
    }
  }

  explicit LandingTargetPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->is_static = false;
      this->rel_pos_valid = false;
      this->rel_vel_valid = false;
      this->x_rel = 0.0f;
      this->y_rel = 0.0f;
      this->z_rel = 0.0f;
      this->vx_rel = 0.0f;
      this->vy_rel = 0.0f;
      this->cov_x_rel = 0.0f;
      this->cov_y_rel = 0.0f;
      this->cov_vx_rel = 0.0f;
      this->cov_vy_rel = 0.0f;
      this->abs_pos_valid = false;
      this->x_abs = 0.0f;
      this->y_abs = 0.0f;
      this->z_abs = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _is_static_type =
    bool;
  _is_static_type is_static;
  using _rel_pos_valid_type =
    bool;
  _rel_pos_valid_type rel_pos_valid;
  using _rel_vel_valid_type =
    bool;
  _rel_vel_valid_type rel_vel_valid;
  using _x_rel_type =
    float;
  _x_rel_type x_rel;
  using _y_rel_type =
    float;
  _y_rel_type y_rel;
  using _z_rel_type =
    float;
  _z_rel_type z_rel;
  using _vx_rel_type =
    float;
  _vx_rel_type vx_rel;
  using _vy_rel_type =
    float;
  _vy_rel_type vy_rel;
  using _cov_x_rel_type =
    float;
  _cov_x_rel_type cov_x_rel;
  using _cov_y_rel_type =
    float;
  _cov_y_rel_type cov_y_rel;
  using _cov_vx_rel_type =
    float;
  _cov_vx_rel_type cov_vx_rel;
  using _cov_vy_rel_type =
    float;
  _cov_vy_rel_type cov_vy_rel;
  using _abs_pos_valid_type =
    bool;
  _abs_pos_valid_type abs_pos_valid;
  using _x_abs_type =
    float;
  _x_abs_type x_abs;
  using _y_abs_type =
    float;
  _y_abs_type y_abs;
  using _z_abs_type =
    float;
  _z_abs_type z_abs;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__is_static(
    const bool & _arg)
  {
    this->is_static = _arg;
    return *this;
  }
  Type & set__rel_pos_valid(
    const bool & _arg)
  {
    this->rel_pos_valid = _arg;
    return *this;
  }
  Type & set__rel_vel_valid(
    const bool & _arg)
  {
    this->rel_vel_valid = _arg;
    return *this;
  }
  Type & set__x_rel(
    const float & _arg)
  {
    this->x_rel = _arg;
    return *this;
  }
  Type & set__y_rel(
    const float & _arg)
  {
    this->y_rel = _arg;
    return *this;
  }
  Type & set__z_rel(
    const float & _arg)
  {
    this->z_rel = _arg;
    return *this;
  }
  Type & set__vx_rel(
    const float & _arg)
  {
    this->vx_rel = _arg;
    return *this;
  }
  Type & set__vy_rel(
    const float & _arg)
  {
    this->vy_rel = _arg;
    return *this;
  }
  Type & set__cov_x_rel(
    const float & _arg)
  {
    this->cov_x_rel = _arg;
    return *this;
  }
  Type & set__cov_y_rel(
    const float & _arg)
  {
    this->cov_y_rel = _arg;
    return *this;
  }
  Type & set__cov_vx_rel(
    const float & _arg)
  {
    this->cov_vx_rel = _arg;
    return *this;
  }
  Type & set__cov_vy_rel(
    const float & _arg)
  {
    this->cov_vy_rel = _arg;
    return *this;
  }
  Type & set__abs_pos_valid(
    const bool & _arg)
  {
    this->abs_pos_valid = _arg;
    return *this;
  }
  Type & set__x_abs(
    const float & _arg)
  {
    this->x_abs = _arg;
    return *this;
  }
  Type & set__y_abs(
    const float & _arg)
  {
    this->y_abs = _arg;
    return *this;
  }
  Type & set__z_abs(
    const float & _arg)
  {
    this->z_abs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::LandingTargetPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LandingTargetPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingTargetPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingTargetPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LandingTargetPose
    std::shared_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LandingTargetPose
    std::shared_ptr<px4_msgs::msg::LandingTargetPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingTargetPose_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->is_static != other.is_static) {
      return false;
    }
    if (this->rel_pos_valid != other.rel_pos_valid) {
      return false;
    }
    if (this->rel_vel_valid != other.rel_vel_valid) {
      return false;
    }
    if (this->x_rel != other.x_rel) {
      return false;
    }
    if (this->y_rel != other.y_rel) {
      return false;
    }
    if (this->z_rel != other.z_rel) {
      return false;
    }
    if (this->vx_rel != other.vx_rel) {
      return false;
    }
    if (this->vy_rel != other.vy_rel) {
      return false;
    }
    if (this->cov_x_rel != other.cov_x_rel) {
      return false;
    }
    if (this->cov_y_rel != other.cov_y_rel) {
      return false;
    }
    if (this->cov_vx_rel != other.cov_vx_rel) {
      return false;
    }
    if (this->cov_vy_rel != other.cov_vy_rel) {
      return false;
    }
    if (this->abs_pos_valid != other.abs_pos_valid) {
      return false;
    }
    if (this->x_abs != other.x_abs) {
      return false;
    }
    if (this->y_abs != other.y_abs) {
      return false;
    }
    if (this->z_abs != other.z_abs) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingTargetPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingTargetPose_

// alias to use template instance with default allocator
using LandingTargetPose =
  px4_msgs::msg::LandingTargetPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_HPP_
