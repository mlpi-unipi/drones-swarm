// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ObstacleDistance __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ObstacleDistance __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDistance_
{
  using Type = ObstacleDistance_<ContainerAllocator>;

  explicit ObstacleDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->frame = 0;
      this->sensor_type = 0;
      std::fill<typename std::array<uint16_t, 72>::iterator, uint16_t>(this->distances.begin(), this->distances.end(), 0);
      this->increment = 0.0f;
      this->min_distance = 0;
      this->max_distance = 0;
      this->angle_offset = 0.0f;
    }
  }

  explicit ObstacleDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distances(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->frame = 0;
      this->sensor_type = 0;
      std::fill<typename std::array<uint16_t, 72>::iterator, uint16_t>(this->distances.begin(), this->distances.end(), 0);
      this->increment = 0.0f;
      this->min_distance = 0;
      this->max_distance = 0;
      this->angle_offset = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _frame_type =
    uint8_t;
  _frame_type frame;
  using _sensor_type_type =
    uint8_t;
  _sensor_type_type sensor_type;
  using _distances_type =
    std::array<uint16_t, 72>;
  _distances_type distances;
  using _increment_type =
    float;
  _increment_type increment;
  using _min_distance_type =
    uint16_t;
  _min_distance_type min_distance;
  using _max_distance_type =
    uint16_t;
  _max_distance_type max_distance;
  using _angle_offset_type =
    float;
  _angle_offset_type angle_offset;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__frame(
    const uint8_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const uint8_t & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }
  Type & set__distances(
    const std::array<uint16_t, 72> & _arg)
  {
    this->distances = _arg;
    return *this;
  }
  Type & set__increment(
    const float & _arg)
  {
    this->increment = _arg;
    return *this;
  }
  Type & set__min_distance(
    const uint16_t & _arg)
  {
    this->min_distance = _arg;
    return *this;
  }
  Type & set__max_distance(
    const uint16_t & _arg)
  {
    this->max_distance = _arg;
    return *this;
  }
  Type & set__angle_offset(
    const float & _arg)
  {
    this->angle_offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAV_FRAME_GLOBAL =
    0u;
  static constexpr uint8_t MAV_FRAME_LOCAL_NED =
    1u;
  static constexpr uint8_t MAV_FRAME_BODY_FRD =
    12u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_LASER =
    0u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_ULTRASOUND =
    1u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_INFRARED =
    2u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_RADAR =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ObstacleDistance
    std::shared_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ObstacleDistance
    std::shared_ptr<px4_msgs::msg::ObstacleDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDistance_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    if (this->distances != other.distances) {
      return false;
    }
    if (this->increment != other.increment) {
      return false;
    }
    if (this->min_distance != other.min_distance) {
      return false;
    }
    if (this->max_distance != other.max_distance) {
      return false;
    }
    if (this->angle_offset != other.angle_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDistance_

// alias to use template instance with default allocator
using ObstacleDistance =
  px4_msgs::msg::ObstacleDistance_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_FRAME_GLOBAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_FRAME_LOCAL_NED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_FRAME_BODY_FRD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_DISTANCE_SENSOR_LASER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_DISTANCE_SENSOR_ULTRASOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_DISTANCE_SENSOR_INFRARED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObstacleDistance_<ContainerAllocator>::MAV_DISTANCE_SENSOR_RADAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
