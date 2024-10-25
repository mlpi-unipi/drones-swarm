// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GotoSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GotoSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GotoSetpoint_
{
  using Type = GotoSetpoint_<ContainerAllocator>;

  explicit GotoSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      this->flag_control_heading = false;
      this->heading = 0.0f;
      this->flag_set_max_horizontal_speed = false;
      this->max_horizontal_speed = 0.0f;
      this->flag_set_max_vertical_speed = false;
      this->max_vertical_speed = 0.0f;
      this->flag_set_max_heading_rate = false;
      this->max_heading_rate = 0.0f;
    }
  }

  explicit GotoSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      this->flag_control_heading = false;
      this->heading = 0.0f;
      this->flag_set_max_horizontal_speed = false;
      this->max_horizontal_speed = 0.0f;
      this->flag_set_max_vertical_speed = false;
      this->max_vertical_speed = 0.0f;
      this->flag_set_max_heading_rate = false;
      this->max_heading_rate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _flag_control_heading_type =
    bool;
  _flag_control_heading_type flag_control_heading;
  using _heading_type =
    float;
  _heading_type heading;
  using _flag_set_max_horizontal_speed_type =
    bool;
  _flag_set_max_horizontal_speed_type flag_set_max_horizontal_speed;
  using _max_horizontal_speed_type =
    float;
  _max_horizontal_speed_type max_horizontal_speed;
  using _flag_set_max_vertical_speed_type =
    bool;
  _flag_set_max_vertical_speed_type flag_set_max_vertical_speed;
  using _max_vertical_speed_type =
    float;
  _max_vertical_speed_type max_vertical_speed;
  using _flag_set_max_heading_rate_type =
    bool;
  _flag_set_max_heading_rate_type flag_set_max_heading_rate;
  using _max_heading_rate_type =
    float;
  _max_heading_rate_type max_heading_rate;

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
  Type & set__flag_control_heading(
    const bool & _arg)
  {
    this->flag_control_heading = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__flag_set_max_horizontal_speed(
    const bool & _arg)
  {
    this->flag_set_max_horizontal_speed = _arg;
    return *this;
  }
  Type & set__max_horizontal_speed(
    const float & _arg)
  {
    this->max_horizontal_speed = _arg;
    return *this;
  }
  Type & set__flag_set_max_vertical_speed(
    const bool & _arg)
  {
    this->flag_set_max_vertical_speed = _arg;
    return *this;
  }
  Type & set__max_vertical_speed(
    const float & _arg)
  {
    this->max_vertical_speed = _arg;
    return *this;
  }
  Type & set__flag_set_max_heading_rate(
    const bool & _arg)
  {
    this->flag_set_max_heading_rate = _arg;
    return *this;
  }
  Type & set__max_heading_rate(
    const float & _arg)
  {
    this->max_heading_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::GotoSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GotoSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GotoSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GotoSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GotoSetpoint
    std::shared_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GotoSetpoint
    std::shared_ptr<px4_msgs::msg::GotoSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GotoSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->flag_control_heading != other.flag_control_heading) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->flag_set_max_horizontal_speed != other.flag_set_max_horizontal_speed) {
      return false;
    }
    if (this->max_horizontal_speed != other.max_horizontal_speed) {
      return false;
    }
    if (this->flag_set_max_vertical_speed != other.flag_set_max_vertical_speed) {
      return false;
    }
    if (this->max_vertical_speed != other.max_vertical_speed) {
      return false;
    }
    if (this->flag_set_max_heading_rate != other.flag_set_max_heading_rate) {
      return false;
    }
    if (this->max_heading_rate != other.max_heading_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const GotoSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GotoSetpoint_

// alias to use template instance with default allocator
using GotoSetpoint =
  px4_msgs::msg::GotoSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_HPP_
