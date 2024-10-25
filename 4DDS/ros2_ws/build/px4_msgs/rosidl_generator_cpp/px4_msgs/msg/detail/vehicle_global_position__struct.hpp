// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleGlobalPosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleGlobalPosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleGlobalPosition_
{
  using Type = VehicleGlobalPosition_<ContainerAllocator>;

  explicit VehicleGlobalPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->alt_ellipsoid = 0.0f;
      this->delta_alt = 0.0f;
      this->lat_lon_reset_counter = 0;
      this->alt_reset_counter = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->terrain_alt = 0.0f;
      this->terrain_alt_valid = false;
      this->dead_reckoning = false;
    }
  }

  explicit VehicleGlobalPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->alt_ellipsoid = 0.0f;
      this->delta_alt = 0.0f;
      this->lat_lon_reset_counter = 0;
      this->alt_reset_counter = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->terrain_alt = 0.0f;
      this->terrain_alt_valid = false;
      this->dead_reckoning = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _alt_ellipsoid_type =
    float;
  _alt_ellipsoid_type alt_ellipsoid;
  using _delta_alt_type =
    float;
  _delta_alt_type delta_alt;
  using _lat_lon_reset_counter_type =
    uint8_t;
  _lat_lon_reset_counter_type lat_lon_reset_counter;
  using _alt_reset_counter_type =
    uint8_t;
  _alt_reset_counter_type alt_reset_counter;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _terrain_alt_type =
    float;
  _terrain_alt_type terrain_alt;
  using _terrain_alt_valid_type =
    bool;
  _terrain_alt_valid_type terrain_alt_valid;
  using _dead_reckoning_type =
    bool;
  _dead_reckoning_type dead_reckoning;

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
  Type & set__alt_ellipsoid(
    const float & _arg)
  {
    this->alt_ellipsoid = _arg;
    return *this;
  }
  Type & set__delta_alt(
    const float & _arg)
  {
    this->delta_alt = _arg;
    return *this;
  }
  Type & set__lat_lon_reset_counter(
    const uint8_t & _arg)
  {
    this->lat_lon_reset_counter = _arg;
    return *this;
  }
  Type & set__alt_reset_counter(
    const uint8_t & _arg)
  {
    this->alt_reset_counter = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__terrain_alt(
    const float & _arg)
  {
    this->terrain_alt = _arg;
    return *this;
  }
  Type & set__terrain_alt_valid(
    const bool & _arg)
  {
    this->terrain_alt_valid = _arg;
    return *this;
  }
  Type & set__dead_reckoning(
    const bool & _arg)
  {
    this->dead_reckoning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleGlobalPosition
    std::shared_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleGlobalPosition
    std::shared_ptr<px4_msgs::msg::VehicleGlobalPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleGlobalPosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
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
    if (this->alt_ellipsoid != other.alt_ellipsoid) {
      return false;
    }
    if (this->delta_alt != other.delta_alt) {
      return false;
    }
    if (this->lat_lon_reset_counter != other.lat_lon_reset_counter) {
      return false;
    }
    if (this->alt_reset_counter != other.alt_reset_counter) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->terrain_alt != other.terrain_alt) {
      return false;
    }
    if (this->terrain_alt_valid != other.terrain_alt_valid) {
      return false;
    }
    if (this->dead_reckoning != other.dead_reckoning) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleGlobalPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleGlobalPosition_

// alias to use template instance with default allocator
using VehicleGlobalPosition =
  px4_msgs::msg::VehicleGlobalPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_HPP_
