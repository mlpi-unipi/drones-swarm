// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Ekf2Timestamps __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Ekf2Timestamps __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ekf2Timestamps_
{
  using Type = Ekf2Timestamps_<ContainerAllocator>;

  explicit Ekf2Timestamps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->airspeed_timestamp_rel = 0;
      this->distance_sensor_timestamp_rel = 0;
      this->optical_flow_timestamp_rel = 0;
      this->vehicle_air_data_timestamp_rel = 0;
      this->vehicle_magnetometer_timestamp_rel = 0;
      this->visual_odometry_timestamp_rel = 0;
    }
  }

  explicit Ekf2Timestamps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->airspeed_timestamp_rel = 0;
      this->distance_sensor_timestamp_rel = 0;
      this->optical_flow_timestamp_rel = 0;
      this->vehicle_air_data_timestamp_rel = 0;
      this->vehicle_magnetometer_timestamp_rel = 0;
      this->visual_odometry_timestamp_rel = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _airspeed_timestamp_rel_type =
    int16_t;
  _airspeed_timestamp_rel_type airspeed_timestamp_rel;
  using _distance_sensor_timestamp_rel_type =
    int16_t;
  _distance_sensor_timestamp_rel_type distance_sensor_timestamp_rel;
  using _optical_flow_timestamp_rel_type =
    int16_t;
  _optical_flow_timestamp_rel_type optical_flow_timestamp_rel;
  using _vehicle_air_data_timestamp_rel_type =
    int16_t;
  _vehicle_air_data_timestamp_rel_type vehicle_air_data_timestamp_rel;
  using _vehicle_magnetometer_timestamp_rel_type =
    int16_t;
  _vehicle_magnetometer_timestamp_rel_type vehicle_magnetometer_timestamp_rel;
  using _visual_odometry_timestamp_rel_type =
    int16_t;
  _visual_odometry_timestamp_rel_type visual_odometry_timestamp_rel;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__airspeed_timestamp_rel(
    const int16_t & _arg)
  {
    this->airspeed_timestamp_rel = _arg;
    return *this;
  }
  Type & set__distance_sensor_timestamp_rel(
    const int16_t & _arg)
  {
    this->distance_sensor_timestamp_rel = _arg;
    return *this;
  }
  Type & set__optical_flow_timestamp_rel(
    const int16_t & _arg)
  {
    this->optical_flow_timestamp_rel = _arg;
    return *this;
  }
  Type & set__vehicle_air_data_timestamp_rel(
    const int16_t & _arg)
  {
    this->vehicle_air_data_timestamp_rel = _arg;
    return *this;
  }
  Type & set__vehicle_magnetometer_timestamp_rel(
    const int16_t & _arg)
  {
    this->vehicle_magnetometer_timestamp_rel = _arg;
    return *this;
  }
  Type & set__visual_odometry_timestamp_rel(
    const int16_t & _arg)
  {
    this->visual_odometry_timestamp_rel = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t RELATIVE_TIMESTAMP_INVALID =
    32767;

  // pointer types
  using RawPtr =
    px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Ekf2Timestamps
    std::shared_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Ekf2Timestamps
    std::shared_ptr<px4_msgs::msg::Ekf2Timestamps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ekf2Timestamps_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->airspeed_timestamp_rel != other.airspeed_timestamp_rel) {
      return false;
    }
    if (this->distance_sensor_timestamp_rel != other.distance_sensor_timestamp_rel) {
      return false;
    }
    if (this->optical_flow_timestamp_rel != other.optical_flow_timestamp_rel) {
      return false;
    }
    if (this->vehicle_air_data_timestamp_rel != other.vehicle_air_data_timestamp_rel) {
      return false;
    }
    if (this->vehicle_magnetometer_timestamp_rel != other.vehicle_magnetometer_timestamp_rel) {
      return false;
    }
    if (this->visual_odometry_timestamp_rel != other.visual_odometry_timestamp_rel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ekf2Timestamps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ekf2Timestamps_

// alias to use template instance with default allocator
using Ekf2Timestamps =
  px4_msgs::msg::Ekf2Timestamps_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Ekf2Timestamps_<ContainerAllocator>::RELATIVE_TIMESTAMP_INVALID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__STRUCT_HPP_
