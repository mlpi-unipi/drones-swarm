// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TrajectorySetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TrajectorySetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TrajectorySetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectorySetpoint_
{
  using Type = TrajectorySetpoint_<ContainerAllocator>;

  explicit TrajectorySetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->jerk.begin(), this->jerk.end(), 0.0f);
      this->yaw = 0.0f;
      this->yawspeed = 0.0f;
    }
  }

  explicit TrajectorySetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    velocity(_alloc),
    acceleration(_alloc),
    jerk(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->jerk.begin(), this->jerk.end(), 0.0f);
      this->yaw = 0.0f;
      this->yawspeed = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;
  using _acceleration_type =
    std::array<float, 3>;
  _acceleration_type acceleration;
  using _jerk_type =
    std::array<float, 3>;
  _jerk_type jerk;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _yawspeed_type =
    float;
  _yawspeed_type yawspeed;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::array<float, 3> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const std::array<float, 3> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yawspeed(
    const float & _arg)
  {
    this->yawspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TrajectorySetpoint
    std::shared_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TrajectorySetpoint
    std::shared_ptr<px4_msgs::msg::TrajectorySetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectorySetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yawspeed != other.yawspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectorySetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectorySetpoint_

// alias to use template instance with default allocator
using TrajectorySetpoint =
  px4_msgs::msg::TrajectorySetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_HPP_
