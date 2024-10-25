// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleRoi __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleRoi __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleRoi_
{
  using Type = VehicleRoi_<ContainerAllocator>;

  explicit VehicleRoi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->roll_offset = 0.0f;
      this->pitch_offset = 0.0f;
      this->yaw_offset = 0.0f;
    }
  }

  explicit VehicleRoi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->roll_offset = 0.0f;
      this->pitch_offset = 0.0f;
      this->yaw_offset = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _roll_offset_type =
    float;
  _roll_offset_type roll_offset;
  using _pitch_offset_type =
    float;
  _pitch_offset_type pitch_offset;
  using _yaw_offset_type =
    float;
  _yaw_offset_type yaw_offset;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
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
  Type & set__roll_offset(
    const float & _arg)
  {
    this->roll_offset = _arg;
    return *this;
  }
  Type & set__pitch_offset(
    const float & _arg)
  {
    this->pitch_offset = _arg;
    return *this;
  }
  Type & set__yaw_offset(
    const float & _arg)
  {
    this->yaw_offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROI_NONE =
    0u;
  static constexpr uint8_t ROI_WPNEXT =
    1u;
  static constexpr uint8_t ROI_WPINDEX =
    2u;
  static constexpr uint8_t ROI_LOCATION =
    3u;
  static constexpr uint8_t ROI_TARGET =
    4u;
  static constexpr uint8_t ROI_ENUM_END =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleRoi_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleRoi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleRoi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleRoi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleRoi
    std::shared_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleRoi
    std::shared_ptr<px4_msgs::msg::VehicleRoi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleRoi_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->mode != other.mode) {
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
    if (this->roll_offset != other.roll_offset) {
      return false;
    }
    if (this->pitch_offset != other.pitch_offset) {
      return false;
    }
    if (this->yaw_offset != other.yaw_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleRoi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleRoi_

// alias to use template instance with default allocator
using VehicleRoi =
  px4_msgs::msg::VehicleRoi_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_WPNEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_WPINDEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_LOCATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_TARGET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRoi_<ContainerAllocator>::ROI_ENUM_END;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__STRUCT_HPP_
