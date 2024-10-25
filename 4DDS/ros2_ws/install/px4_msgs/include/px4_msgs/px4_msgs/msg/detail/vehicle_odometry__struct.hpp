// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleOdometry __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleOdometry __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleOdometry_
{
  using Type = VehicleOdometry_<ContainerAllocator>;

  explicit VehicleOdometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->pose_frame = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->velocity_frame = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_variance.begin(), this->position_variance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->orientation_variance.begin(), this->orientation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity_variance.begin(), this->velocity_variance.end(), 0.0f);
      this->reset_counter = 0;
      this->quality = 0;
    }
  }

  explicit VehicleOdometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    q(_alloc),
    velocity(_alloc),
    angular_velocity(_alloc),
    position_variance(_alloc),
    orientation_variance(_alloc),
    velocity_variance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->pose_frame = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->velocity_frame = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_variance.begin(), this->position_variance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->orientation_variance.begin(), this->orientation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity_variance.begin(), this->velocity_variance.end(), 0.0f);
      this->reset_counter = 0;
      this->quality = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _pose_frame_type =
    uint8_t;
  _pose_frame_type pose_frame;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _velocity_frame_type =
    uint8_t;
  _velocity_frame_type velocity_frame;
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;
  using _angular_velocity_type =
    std::array<float, 3>;
  _angular_velocity_type angular_velocity;
  using _position_variance_type =
    std::array<float, 3>;
  _position_variance_type position_variance;
  using _orientation_variance_type =
    std::array<float, 3>;
  _orientation_variance_type orientation_variance;
  using _velocity_variance_type =
    std::array<float, 3>;
  _velocity_variance_type velocity_variance;
  using _reset_counter_type =
    uint8_t;
  _reset_counter_type reset_counter;
  using _quality_type =
    int8_t;
  _quality_type quality;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__pose_frame(
    const uint8_t & _arg)
  {
    this->pose_frame = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__velocity_frame(
    const uint8_t & _arg)
  {
    this->velocity_frame = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__position_variance(
    const std::array<float, 3> & _arg)
  {
    this->position_variance = _arg;
    return *this;
  }
  Type & set__orientation_variance(
    const std::array<float, 3> & _arg)
  {
    this->orientation_variance = _arg;
    return *this;
  }
  Type & set__velocity_variance(
    const std::array<float, 3> & _arg)
  {
    this->velocity_variance = _arg;
    return *this;
  }
  Type & set__reset_counter(
    const uint8_t & _arg)
  {
    this->reset_counter = _arg;
    return *this;
  }
  Type & set__quality(
    const int8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSE_FRAME_UNKNOWN =
    0u;
  static constexpr uint8_t POSE_FRAME_NED =
    1u;
  static constexpr uint8_t POSE_FRAME_FRD =
    2u;
  static constexpr uint8_t VELOCITY_FRAME_UNKNOWN =
    0u;
  static constexpr uint8_t VELOCITY_FRAME_NED =
    1u;
  static constexpr uint8_t VELOCITY_FRAME_FRD =
    2u;
  static constexpr uint8_t VELOCITY_FRAME_BODY_FRD =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleOdometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleOdometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleOdometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleOdometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleOdometry
    std::shared_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleOdometry
    std::shared_ptr<px4_msgs::msg::VehicleOdometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleOdometry_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->pose_frame != other.pose_frame) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->velocity_frame != other.velocity_frame) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->position_variance != other.position_variance) {
      return false;
    }
    if (this->orientation_variance != other.orientation_variance) {
      return false;
    }
    if (this->velocity_variance != other.velocity_variance) {
      return false;
    }
    if (this->reset_counter != other.reset_counter) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleOdometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleOdometry_

// alias to use template instance with default allocator
using VehicleOdometry =
  px4_msgs::msg::VehicleOdometry_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::POSE_FRAME_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::POSE_FRAME_NED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::POSE_FRAME_FRD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::VELOCITY_FRAME_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::VELOCITY_FRAME_NED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::VELOCITY_FRAME_FRD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleOdometry_<ContainerAllocator>::VELOCITY_FRAME_BODY_FRD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_
