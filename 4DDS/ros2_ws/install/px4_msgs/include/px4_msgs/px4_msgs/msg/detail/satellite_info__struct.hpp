// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SatelliteInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SatelliteInfo __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SatelliteInfo __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SatelliteInfo_
{
  using Type = SatelliteInfo_<ContainerAllocator>;

  explicit SatelliteInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->count = 0;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->svid.begin(), this->svid.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->used.begin(), this->used.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->elevation.begin(), this->elevation.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->azimuth.begin(), this->azimuth.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->snr.begin(), this->snr.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->prn.begin(), this->prn.end(), 0);
    }
  }

  explicit SatelliteInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : svid(_alloc),
    used(_alloc),
    elevation(_alloc),
    azimuth(_alloc),
    snr(_alloc),
    prn(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->count = 0;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->svid.begin(), this->svid.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->used.begin(), this->used.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->elevation.begin(), this->elevation.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->azimuth.begin(), this->azimuth.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->snr.begin(), this->snr.end(), 0);
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->prn.begin(), this->prn.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _count_type =
    uint8_t;
  _count_type count;
  using _svid_type =
    std::array<uint8_t, 20>;
  _svid_type svid;
  using _used_type =
    std::array<uint8_t, 20>;
  _used_type used;
  using _elevation_type =
    std::array<uint8_t, 20>;
  _elevation_type elevation;
  using _azimuth_type =
    std::array<uint8_t, 20>;
  _azimuth_type azimuth;
  using _snr_type =
    std::array<uint8_t, 20>;
  _snr_type snr;
  using _prn_type =
    std::array<uint8_t, 20>;
  _prn_type prn;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__svid(
    const std::array<uint8_t, 20> & _arg)
  {
    this->svid = _arg;
    return *this;
  }
  Type & set__used(
    const std::array<uint8_t, 20> & _arg)
  {
    this->used = _arg;
    return *this;
  }
  Type & set__elevation(
    const std::array<uint8_t, 20> & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__azimuth(
    const std::array<uint8_t, 20> & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__snr(
    const std::array<uint8_t, 20> & _arg)
  {
    this->snr = _arg;
    return *this;
  }
  Type & set__prn(
    const std::array<uint8_t, 20> & _arg)
  {
    this->prn = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SAT_INFO_MAX_SATELLITES =
    20u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SatelliteInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SatelliteInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SatelliteInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SatelliteInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SatelliteInfo
    std::shared_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SatelliteInfo
    std::shared_ptr<px4_msgs::msg::SatelliteInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SatelliteInfo_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->svid != other.svid) {
      return false;
    }
    if (this->used != other.used) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->snr != other.snr) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    return true;
  }
  bool operator!=(const SatelliteInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SatelliteInfo_

// alias to use template instance with default allocator
using SatelliteInfo =
  px4_msgs::msg::SatelliteInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SatelliteInfo_<ContainerAllocator>::SAT_INFO_MAX_SATELLITES;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_HPP_
