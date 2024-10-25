// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DistanceSensor __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DistanceSensor __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DistanceSensor_
{
  using Type = DistanceSensor_<ContainerAllocator>;

  explicit DistanceSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->min_distance = 0.0f;
      this->max_distance = 0.0f;
      this->current_distance = 0.0f;
      this->variance = 0.0f;
      this->signal_quality = 0;
      this->type = 0;
      this->h_fov = 0.0f;
      this->v_fov = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->orientation = 0;
    }
  }

  explicit DistanceSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->min_distance = 0.0f;
      this->max_distance = 0.0f;
      this->current_distance = 0.0f;
      this->variance = 0.0f;
      this->signal_quality = 0;
      this->type = 0;
      this->h_fov = 0.0f;
      this->v_fov = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->orientation = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _min_distance_type =
    float;
  _min_distance_type min_distance;
  using _max_distance_type =
    float;
  _max_distance_type max_distance;
  using _current_distance_type =
    float;
  _current_distance_type current_distance;
  using _variance_type =
    float;
  _variance_type variance;
  using _signal_quality_type =
    int8_t;
  _signal_quality_type signal_quality;
  using _type_type =
    uint8_t;
  _type_type type;
  using _h_fov_type =
    float;
  _h_fov_type h_fov;
  using _v_fov_type =
    float;
  _v_fov_type v_fov;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _orientation_type =
    uint8_t;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__min_distance(
    const float & _arg)
  {
    this->min_distance = _arg;
    return *this;
  }
  Type & set__max_distance(
    const float & _arg)
  {
    this->max_distance = _arg;
    return *this;
  }
  Type & set__current_distance(
    const float & _arg)
  {
    this->current_distance = _arg;
    return *this;
  }
  Type & set__variance(
    const float & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__signal_quality(
    const int8_t & _arg)
  {
    this->signal_quality = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__h_fov(
    const float & _arg)
  {
    this->h_fov = _arg;
    return *this;
  }
  Type & set__v_fov(
    const float & _arg)
  {
    this->v_fov = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__orientation(
    const uint8_t & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAV_DISTANCE_SENSOR_LASER =
    0u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_ULTRASOUND =
    1u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_INFRARED =
    2u;
  static constexpr uint8_t MAV_DISTANCE_SENSOR_RADAR =
    3u;
  static constexpr uint8_t ROTATION_YAW_0 =
    0u;
  static constexpr uint8_t ROTATION_YAW_45 =
    1u;
  static constexpr uint8_t ROTATION_YAW_90 =
    2u;
  static constexpr uint8_t ROTATION_YAW_135 =
    3u;
  static constexpr uint8_t ROTATION_YAW_180 =
    4u;
  static constexpr uint8_t ROTATION_YAW_225 =
    5u;
  static constexpr uint8_t ROTATION_YAW_270 =
    6u;
  static constexpr uint8_t ROTATION_YAW_315 =
    7u;
  static constexpr uint8_t ROTATION_FORWARD_FACING =
    0u;
  static constexpr uint8_t ROTATION_RIGHT_FACING =
    2u;
  static constexpr uint8_t ROTATION_BACKWARD_FACING =
    4u;
  static constexpr uint8_t ROTATION_LEFT_FACING =
    6u;
  static constexpr uint8_t ROTATION_UPWARD_FACING =
    24u;
  static constexpr uint8_t ROTATION_DOWNWARD_FACING =
    25u;
  static constexpr uint8_t ROTATION_CUSTOM =
    100u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::DistanceSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DistanceSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DistanceSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DistanceSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DistanceSensor
    std::shared_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DistanceSensor
    std::shared_ptr<px4_msgs::msg::DistanceSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanceSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->min_distance != other.min_distance) {
      return false;
    }
    if (this->max_distance != other.max_distance) {
      return false;
    }
    if (this->current_distance != other.current_distance) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->signal_quality != other.signal_quality) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->h_fov != other.h_fov) {
      return false;
    }
    if (this->v_fov != other.v_fov) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanceSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanceSensor_

// alias to use template instance with default allocator
using DistanceSensor =
  px4_msgs::msg::DistanceSensor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::MAV_DISTANCE_SENSOR_LASER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::MAV_DISTANCE_SENSOR_ULTRASOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::MAV_DISTANCE_SENSOR_INFRARED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::MAV_DISTANCE_SENSOR_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_45;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_90;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_135;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_180;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_225;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_270;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_YAW_315;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_FORWARD_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_RIGHT_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_BACKWARD_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_LEFT_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_UPWARD_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_DOWNWARD_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DistanceSensor_<ContainerAllocator>::ROTATION_CUSTOM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_HPP_
