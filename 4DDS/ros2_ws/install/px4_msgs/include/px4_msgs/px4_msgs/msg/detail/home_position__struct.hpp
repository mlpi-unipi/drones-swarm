// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__HomePosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__HomePosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HomePosition_
{
  using Type = HomePosition_<ContainerAllocator>;

  explicit HomePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->valid_alt = false;
      this->valid_hpos = false;
      this->valid_lpos = false;
      this->manual_home = false;
      this->update_count = 0ul;
    }
  }

  explicit HomePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->yaw = 0.0f;
      this->valid_alt = false;
      this->valid_hpos = false;
      this->valid_lpos = false;
      this->manual_home = false;
      this->update_count = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _valid_alt_type =
    bool;
  _valid_alt_type valid_alt;
  using _valid_hpos_type =
    bool;
  _valid_hpos_type valid_hpos;
  using _valid_lpos_type =
    bool;
  _valid_lpos_type valid_lpos;
  using _manual_home_type =
    bool;
  _manual_home_type manual_home;
  using _update_count_type =
    uint32_t;
  _update_count_type update_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
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
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__valid_alt(
    const bool & _arg)
  {
    this->valid_alt = _arg;
    return *this;
  }
  Type & set__valid_hpos(
    const bool & _arg)
  {
    this->valid_hpos = _arg;
    return *this;
  }
  Type & set__valid_lpos(
    const bool & _arg)
  {
    this->valid_lpos = _arg;
    return *this;
  }
  Type & set__manual_home(
    const bool & _arg)
  {
    this->manual_home = _arg;
    return *this;
  }
  Type & set__update_count(
    const uint32_t & _arg)
  {
    this->update_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::HomePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::HomePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HomePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HomePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__HomePosition
    std::shared_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__HomePosition
    std::shared_ptr<px4_msgs::msg::HomePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomePosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
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
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->valid_alt != other.valid_alt) {
      return false;
    }
    if (this->valid_hpos != other.valid_hpos) {
      return false;
    }
    if (this->valid_lpos != other.valid_lpos) {
      return false;
    }
    if (this->manual_home != other.manual_home) {
      return false;
    }
    if (this->update_count != other.update_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomePosition_

// alias to use template instance with default allocator
using HomePosition =
  px4_msgs::msg::HomePosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_HPP_
