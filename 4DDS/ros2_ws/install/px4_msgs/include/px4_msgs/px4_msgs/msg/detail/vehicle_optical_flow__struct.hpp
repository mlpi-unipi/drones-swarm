// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleOpticalFlow __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleOpticalFlow __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleOpticalFlow_
{
  using Type = VehicleOpticalFlow_<ContainerAllocator>;

  explicit VehicleOpticalFlow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<float, 2>::iterator, float>(this->pixel_flow.begin(), this->pixel_flow.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_angle.begin(), this->delta_angle.end(), 0.0f);
      this->distance_m = 0.0f;
      this->integration_timespan_us = 0ul;
      this->quality = 0;
      this->max_flow_rate = 0.0f;
      this->min_ground_distance = 0.0f;
      this->max_ground_distance = 0.0f;
    }
  }

  explicit VehicleOpticalFlow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pixel_flow(_alloc),
    delta_angle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<float, 2>::iterator, float>(this->pixel_flow.begin(), this->pixel_flow.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_angle.begin(), this->delta_angle.end(), 0.0f);
      this->distance_m = 0.0f;
      this->integration_timespan_us = 0ul;
      this->quality = 0;
      this->max_flow_rate = 0.0f;
      this->min_ground_distance = 0.0f;
      this->max_ground_distance = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _pixel_flow_type =
    std::array<float, 2>;
  _pixel_flow_type pixel_flow;
  using _delta_angle_type =
    std::array<float, 3>;
  _delta_angle_type delta_angle;
  using _distance_m_type =
    float;
  _distance_m_type distance_m;
  using _integration_timespan_us_type =
    uint32_t;
  _integration_timespan_us_type integration_timespan_us;
  using _quality_type =
    uint8_t;
  _quality_type quality;
  using _max_flow_rate_type =
    float;
  _max_flow_rate_type max_flow_rate;
  using _min_ground_distance_type =
    float;
  _min_ground_distance_type min_ground_distance;
  using _max_ground_distance_type =
    float;
  _max_ground_distance_type max_ground_distance;

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
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__pixel_flow(
    const std::array<float, 2> & _arg)
  {
    this->pixel_flow = _arg;
    return *this;
  }
  Type & set__delta_angle(
    const std::array<float, 3> & _arg)
  {
    this->delta_angle = _arg;
    return *this;
  }
  Type & set__distance_m(
    const float & _arg)
  {
    this->distance_m = _arg;
    return *this;
  }
  Type & set__integration_timespan_us(
    const uint32_t & _arg)
  {
    this->integration_timespan_us = _arg;
    return *this;
  }
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__max_flow_rate(
    const float & _arg)
  {
    this->max_flow_rate = _arg;
    return *this;
  }
  Type & set__min_ground_distance(
    const float & _arg)
  {
    this->min_ground_distance = _arg;
    return *this;
  }
  Type & set__max_ground_distance(
    const float & _arg)
  {
    this->max_ground_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleOpticalFlow
    std::shared_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleOpticalFlow
    std::shared_ptr<px4_msgs::msg::VehicleOpticalFlow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleOpticalFlow_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->pixel_flow != other.pixel_flow) {
      return false;
    }
    if (this->delta_angle != other.delta_angle) {
      return false;
    }
    if (this->distance_m != other.distance_m) {
      return false;
    }
    if (this->integration_timespan_us != other.integration_timespan_us) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->max_flow_rate != other.max_flow_rate) {
      return false;
    }
    if (this->min_ground_distance != other.min_ground_distance) {
      return false;
    }
    if (this->max_ground_distance != other.max_ground_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleOpticalFlow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleOpticalFlow_

// alias to use template instance with default allocator
using VehicleOpticalFlow =
  px4_msgs::msg::VehicleOpticalFlow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__STRUCT_HPP_
