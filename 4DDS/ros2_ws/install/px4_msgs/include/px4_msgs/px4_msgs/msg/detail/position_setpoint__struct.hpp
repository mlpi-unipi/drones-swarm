// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionSetpoint_
{
  using Type = PositionSetpoint_<ContainerAllocator>;

  explicit PositionSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->type = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->yaw = 0.0f;
      this->loiter_radius = 0.0f;
      this->loiter_minor_radius = 0.0f;
      this->loiter_direction_counter_clockwise = false;
      this->loiter_orientation = 0.0f;
      this->loiter_pattern = 0;
      this->acceptance_radius = 0.0f;
      this->cruising_speed = 0.0f;
      this->gliding_enabled = false;
      this->cruising_throttle = 0.0f;
    }
  }

  explicit PositionSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->type = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->yaw = 0.0f;
      this->loiter_radius = 0.0f;
      this->loiter_minor_radius = 0.0f;
      this->loiter_direction_counter_clockwise = false;
      this->loiter_orientation = 0.0f;
      this->loiter_pattern = 0;
      this->acceptance_radius = 0.0f;
      this->cruising_speed = 0.0f;
      this->gliding_enabled = false;
      this->cruising_throttle = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _valid_type =
    bool;
  _valid_type valid;
  using _type_type =
    uint8_t;
  _type_type type;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _loiter_radius_type =
    float;
  _loiter_radius_type loiter_radius;
  using _loiter_minor_radius_type =
    float;
  _loiter_minor_radius_type loiter_minor_radius;
  using _loiter_direction_counter_clockwise_type =
    bool;
  _loiter_direction_counter_clockwise_type loiter_direction_counter_clockwise;
  using _loiter_orientation_type =
    float;
  _loiter_orientation_type loiter_orientation;
  using _loiter_pattern_type =
    uint8_t;
  _loiter_pattern_type loiter_pattern;
  using _acceptance_radius_type =
    float;
  _acceptance_radius_type acceptance_radius;
  using _cruising_speed_type =
    float;
  _cruising_speed_type cruising_speed;
  using _gliding_enabled_type =
    bool;
  _gliding_enabled_type gliding_enabled;
  using _cruising_throttle_type =
    float;
  _cruising_throttle_type cruising_throttle;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
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
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__loiter_radius(
    const float & _arg)
  {
    this->loiter_radius = _arg;
    return *this;
  }
  Type & set__loiter_minor_radius(
    const float & _arg)
  {
    this->loiter_minor_radius = _arg;
    return *this;
  }
  Type & set__loiter_direction_counter_clockwise(
    const bool & _arg)
  {
    this->loiter_direction_counter_clockwise = _arg;
    return *this;
  }
  Type & set__loiter_orientation(
    const float & _arg)
  {
    this->loiter_orientation = _arg;
    return *this;
  }
  Type & set__loiter_pattern(
    const uint8_t & _arg)
  {
    this->loiter_pattern = _arg;
    return *this;
  }
  Type & set__acceptance_radius(
    const float & _arg)
  {
    this->acceptance_radius = _arg;
    return *this;
  }
  Type & set__cruising_speed(
    const float & _arg)
  {
    this->cruising_speed = _arg;
    return *this;
  }
  Type & set__gliding_enabled(
    const bool & _arg)
  {
    this->gliding_enabled = _arg;
    return *this;
  }
  Type & set__cruising_throttle(
    const float & _arg)
  {
    this->cruising_throttle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SETPOINT_TYPE_POSITION =
    0u;
  static constexpr uint8_t SETPOINT_TYPE_VELOCITY =
    1u;
  static constexpr uint8_t SETPOINT_TYPE_LOITER =
    2u;
  static constexpr uint8_t SETPOINT_TYPE_TAKEOFF =
    3u;
  static constexpr uint8_t SETPOINT_TYPE_LAND =
    4u;
  static constexpr uint8_t SETPOINT_TYPE_IDLE =
    5u;
  static constexpr uint8_t LOITER_TYPE_ORBIT =
    0u;
  static constexpr uint8_t LOITER_TYPE_FIGUREEIGHT =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionSetpoint
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionSetpoint
    std::shared_ptr<px4_msgs::msg::PositionSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
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
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->loiter_radius != other.loiter_radius) {
      return false;
    }
    if (this->loiter_minor_radius != other.loiter_minor_radius) {
      return false;
    }
    if (this->loiter_direction_counter_clockwise != other.loiter_direction_counter_clockwise) {
      return false;
    }
    if (this->loiter_orientation != other.loiter_orientation) {
      return false;
    }
    if (this->loiter_pattern != other.loiter_pattern) {
      return false;
    }
    if (this->acceptance_radius != other.acceptance_radius) {
      return false;
    }
    if (this->cruising_speed != other.cruising_speed) {
      return false;
    }
    if (this->gliding_enabled != other.gliding_enabled) {
      return false;
    }
    if (this->cruising_throttle != other.cruising_throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionSetpoint_

// alias to use template instance with default allocator
using PositionSetpoint =
  px4_msgs::msg::PositionSetpoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_LOITER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_LAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::SETPOINT_TYPE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::LOITER_TYPE_ORBIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionSetpoint_<ContainerAllocator>::LOITER_TYPE_FIGUREEIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_HPP_
