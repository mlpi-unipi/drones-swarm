// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fdds_messages__msg__GeoPing __attribute__((deprecated))
#else
# define DEPRECATED__fdds_messages__msg__GeoPing __declspec(deprecated)
#endif

namespace fdds_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoPing_
{
  using Type = GeoPing_<ContainerAllocator>;

  explicit GeoPing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = 0;
      this->latitude_m = 0.0;
      this->longitude_m = 0.0;
      this->speed_north_m_s = 0.0f;
      this->speed_east_m_s = 0.0f;
    }
  }

  explicit GeoPing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = 0;
      this->latitude_m = 0.0;
      this->longitude_m = 0.0;
      this->speed_north_m_s = 0.0f;
      this->speed_east_m_s = 0.0f;
    }
  }

  // field types and members
  using _vehicle_id_type =
    uint8_t;
  _vehicle_id_type vehicle_id;
  using _latitude_m_type =
    double;
  _latitude_m_type latitude_m;
  using _longitude_m_type =
    double;
  _longitude_m_type longitude_m;
  using _speed_north_m_s_type =
    float;
  _speed_north_m_s_type speed_north_m_s;
  using _speed_east_m_s_type =
    float;
  _speed_east_m_s_type speed_east_m_s;

  // setters for named parameter idiom
  Type & set__vehicle_id(
    const uint8_t & _arg)
  {
    this->vehicle_id = _arg;
    return *this;
  }
  Type & set__latitude_m(
    const double & _arg)
  {
    this->latitude_m = _arg;
    return *this;
  }
  Type & set__longitude_m(
    const double & _arg)
  {
    this->longitude_m = _arg;
    return *this;
  }
  Type & set__speed_north_m_s(
    const float & _arg)
  {
    this->speed_north_m_s = _arg;
    return *this;
  }
  Type & set__speed_east_m_s(
    const float & _arg)
  {
    this->speed_east_m_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fdds_messages::msg::GeoPing_<ContainerAllocator> *;
  using ConstRawPtr =
    const fdds_messages::msg::GeoPing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fdds_messages::msg::GeoPing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fdds_messages::msg::GeoPing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fdds_messages__msg__GeoPing
    std::shared_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fdds_messages__msg__GeoPing
    std::shared_ptr<fdds_messages::msg::GeoPing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoPing_ & other) const
  {
    if (this->vehicle_id != other.vehicle_id) {
      return false;
    }
    if (this->latitude_m != other.latitude_m) {
      return false;
    }
    if (this->longitude_m != other.longitude_m) {
      return false;
    }
    if (this->speed_north_m_s != other.speed_north_m_s) {
      return false;
    }
    if (this->speed_east_m_s != other.speed_east_m_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoPing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoPing_

// alias to use template instance with default allocator
using GeoPing =
  fdds_messages::msg::GeoPing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fdds_messages

#endif  // FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_HPP_
