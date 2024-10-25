// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CameraCapture __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CameraCapture __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraCapture_
{
  using Type = CameraCapture_<ContainerAllocator>;

  explicit CameraCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_utc = 0ull;
      this->seq = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->ground_distance = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->result = 0;
    }
  }

  explicit CameraCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_utc = 0ull;
      this->seq = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->ground_distance = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->result = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_utc_type =
    uint64_t;
  _timestamp_utc_type timestamp_utc;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _ground_distance_type =
    float;
  _ground_distance_type ground_distance;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _result_type =
    int8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_utc(
    const uint64_t & _arg)
  {
    this->timestamp_utc = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
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
  Type & set__ground_distance(
    const float & _arg)
  {
    this->ground_distance = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::CameraCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CameraCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CameraCapture
    std::shared_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CameraCapture
    std::shared_ptr<px4_msgs::msg::CameraCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCapture_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_utc != other.timestamp_utc) {
      return false;
    }
    if (this->seq != other.seq) {
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
    if (this->ground_distance != other.ground_distance) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCapture_

// alias to use template instance with default allocator
using CameraCapture =
  px4_msgs::msg::CameraCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_
