// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorUwb __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorUwb __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorUwb_
{
  using Type = SensorUwb_<ContainerAllocator>;

  explicit SensorUwb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->sessionid = 0ul;
      this->time_offset = 0ul;
      this->counter = 0ul;
      this->mac = 0;
      this->mac_dest = 0;
      this->status = 0;
      this->nlos = 0;
      this->distance = 0.0f;
      this->aoa_azimuth_dev = 0.0f;
      this->aoa_elevation_dev = 0.0f;
      this->aoa_azimuth_resp = 0.0f;
      this->aoa_elevation_resp = 0.0f;
      this->aoa_azimuth_fom = 0;
      this->aoa_elevation_fom = 0;
      this->aoa_dest_azimuth_fom = 0;
      this->aoa_dest_elevation_fom = 0;
      this->orientation = 0;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->offset_z = 0.0f;
    }
  }

  explicit SensorUwb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->sessionid = 0ul;
      this->time_offset = 0ul;
      this->counter = 0ul;
      this->mac = 0;
      this->mac_dest = 0;
      this->status = 0;
      this->nlos = 0;
      this->distance = 0.0f;
      this->aoa_azimuth_dev = 0.0f;
      this->aoa_elevation_dev = 0.0f;
      this->aoa_azimuth_resp = 0.0f;
      this->aoa_elevation_resp = 0.0f;
      this->aoa_azimuth_fom = 0;
      this->aoa_elevation_fom = 0;
      this->aoa_dest_azimuth_fom = 0;
      this->aoa_dest_elevation_fom = 0;
      this->orientation = 0;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->offset_z = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _sessionid_type =
    uint32_t;
  _sessionid_type sessionid;
  using _time_offset_type =
    uint32_t;
  _time_offset_type time_offset;
  using _counter_type =
    uint32_t;
  _counter_type counter;
  using _mac_type =
    uint16_t;
  _mac_type mac;
  using _mac_dest_type =
    uint16_t;
  _mac_dest_type mac_dest;
  using _status_type =
    uint16_t;
  _status_type status;
  using _nlos_type =
    uint8_t;
  _nlos_type nlos;
  using _distance_type =
    float;
  _distance_type distance;
  using _aoa_azimuth_dev_type =
    float;
  _aoa_azimuth_dev_type aoa_azimuth_dev;
  using _aoa_elevation_dev_type =
    float;
  _aoa_elevation_dev_type aoa_elevation_dev;
  using _aoa_azimuth_resp_type =
    float;
  _aoa_azimuth_resp_type aoa_azimuth_resp;
  using _aoa_elevation_resp_type =
    float;
  _aoa_elevation_resp_type aoa_elevation_resp;
  using _aoa_azimuth_fom_type =
    uint8_t;
  _aoa_azimuth_fom_type aoa_azimuth_fom;
  using _aoa_elevation_fom_type =
    uint8_t;
  _aoa_elevation_fom_type aoa_elevation_fom;
  using _aoa_dest_azimuth_fom_type =
    uint8_t;
  _aoa_dest_azimuth_fom_type aoa_dest_azimuth_fom;
  using _aoa_dest_elevation_fom_type =
    uint8_t;
  _aoa_dest_elevation_fom_type aoa_dest_elevation_fom;
  using _orientation_type =
    uint8_t;
  _orientation_type orientation;
  using _offset_x_type =
    float;
  _offset_x_type offset_x;
  using _offset_y_type =
    float;
  _offset_y_type offset_y;
  using _offset_z_type =
    float;
  _offset_z_type offset_z;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__sessionid(
    const uint32_t & _arg)
  {
    this->sessionid = _arg;
    return *this;
  }
  Type & set__time_offset(
    const uint32_t & _arg)
  {
    this->time_offset = _arg;
    return *this;
  }
  Type & set__counter(
    const uint32_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__mac(
    const uint16_t & _arg)
  {
    this->mac = _arg;
    return *this;
  }
  Type & set__mac_dest(
    const uint16_t & _arg)
  {
    this->mac_dest = _arg;
    return *this;
  }
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__nlos(
    const uint8_t & _arg)
  {
    this->nlos = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__aoa_azimuth_dev(
    const float & _arg)
  {
    this->aoa_azimuth_dev = _arg;
    return *this;
  }
  Type & set__aoa_elevation_dev(
    const float & _arg)
  {
    this->aoa_elevation_dev = _arg;
    return *this;
  }
  Type & set__aoa_azimuth_resp(
    const float & _arg)
  {
    this->aoa_azimuth_resp = _arg;
    return *this;
  }
  Type & set__aoa_elevation_resp(
    const float & _arg)
  {
    this->aoa_elevation_resp = _arg;
    return *this;
  }
  Type & set__aoa_azimuth_fom(
    const uint8_t & _arg)
  {
    this->aoa_azimuth_fom = _arg;
    return *this;
  }
  Type & set__aoa_elevation_fom(
    const uint8_t & _arg)
  {
    this->aoa_elevation_fom = _arg;
    return *this;
  }
  Type & set__aoa_dest_azimuth_fom(
    const uint8_t & _arg)
  {
    this->aoa_dest_azimuth_fom = _arg;
    return *this;
  }
  Type & set__aoa_dest_elevation_fom(
    const uint8_t & _arg)
  {
    this->aoa_dest_elevation_fom = _arg;
    return *this;
  }
  Type & set__orientation(
    const uint8_t & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__offset_x(
    const float & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const float & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__offset_z(
    const float & _arg)
  {
    this->offset_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorUwb_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorUwb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorUwb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorUwb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorUwb
    std::shared_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorUwb
    std::shared_ptr<px4_msgs::msg::SensorUwb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorUwb_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->sessionid != other.sessionid) {
      return false;
    }
    if (this->time_offset != other.time_offset) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->mac != other.mac) {
      return false;
    }
    if (this->mac_dest != other.mac_dest) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->nlos != other.nlos) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->aoa_azimuth_dev != other.aoa_azimuth_dev) {
      return false;
    }
    if (this->aoa_elevation_dev != other.aoa_elevation_dev) {
      return false;
    }
    if (this->aoa_azimuth_resp != other.aoa_azimuth_resp) {
      return false;
    }
    if (this->aoa_elevation_resp != other.aoa_elevation_resp) {
      return false;
    }
    if (this->aoa_azimuth_fom != other.aoa_azimuth_fom) {
      return false;
    }
    if (this->aoa_elevation_fom != other.aoa_elevation_fom) {
      return false;
    }
    if (this->aoa_dest_azimuth_fom != other.aoa_dest_azimuth_fom) {
      return false;
    }
    if (this->aoa_dest_elevation_fom != other.aoa_dest_elevation_fom) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->offset_z != other.offset_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorUwb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorUwb_

// alias to use template instance with default allocator
using SensorUwb =
  px4_msgs::msg::SensorUwb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_UWB__STRUCT_HPP_
