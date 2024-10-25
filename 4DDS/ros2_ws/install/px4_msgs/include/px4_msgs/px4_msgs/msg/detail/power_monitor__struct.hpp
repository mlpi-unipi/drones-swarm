// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PowerMonitor __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PowerMonitor __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerMonitor_
{
  using Type = PowerMonitor_<ContainerAllocator>;

  explicit PowerMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage_v = 0.0f;
      this->current_a = 0.0f;
      this->power_w = 0.0f;
      this->rconf = 0;
      this->rsv = 0;
      this->rbv = 0;
      this->rp = 0;
      this->rc = 0;
      this->rcal = 0;
      this->me = 0;
      this->al = 0;
    }
  }

  explicit PowerMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage_v = 0.0f;
      this->current_a = 0.0f;
      this->power_w = 0.0f;
      this->rconf = 0;
      this->rsv = 0;
      this->rbv = 0;
      this->rp = 0;
      this->rc = 0;
      this->rcal = 0;
      this->me = 0;
      this->al = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _voltage_v_type =
    float;
  _voltage_v_type voltage_v;
  using _current_a_type =
    float;
  _current_a_type current_a;
  using _power_w_type =
    float;
  _power_w_type power_w;
  using _rconf_type =
    int16_t;
  _rconf_type rconf;
  using _rsv_type =
    int16_t;
  _rsv_type rsv;
  using _rbv_type =
    int16_t;
  _rbv_type rbv;
  using _rp_type =
    int16_t;
  _rp_type rp;
  using _rc_type =
    int16_t;
  _rc_type rc;
  using _rcal_type =
    int16_t;
  _rcal_type rcal;
  using _me_type =
    int16_t;
  _me_type me;
  using _al_type =
    int16_t;
  _al_type al;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__voltage_v(
    const float & _arg)
  {
    this->voltage_v = _arg;
    return *this;
  }
  Type & set__current_a(
    const float & _arg)
  {
    this->current_a = _arg;
    return *this;
  }
  Type & set__power_w(
    const float & _arg)
  {
    this->power_w = _arg;
    return *this;
  }
  Type & set__rconf(
    const int16_t & _arg)
  {
    this->rconf = _arg;
    return *this;
  }
  Type & set__rsv(
    const int16_t & _arg)
  {
    this->rsv = _arg;
    return *this;
  }
  Type & set__rbv(
    const int16_t & _arg)
  {
    this->rbv = _arg;
    return *this;
  }
  Type & set__rp(
    const int16_t & _arg)
  {
    this->rp = _arg;
    return *this;
  }
  Type & set__rc(
    const int16_t & _arg)
  {
    this->rc = _arg;
    return *this;
  }
  Type & set__rcal(
    const int16_t & _arg)
  {
    this->rcal = _arg;
    return *this;
  }
  Type & set__me(
    const int16_t & _arg)
  {
    this->me = _arg;
    return *this;
  }
  Type & set__al(
    const int16_t & _arg)
  {
    this->al = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PowerMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PowerMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PowerMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PowerMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PowerMonitor
    std::shared_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PowerMonitor
    std::shared_ptr<px4_msgs::msg::PowerMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerMonitor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->voltage_v != other.voltage_v) {
      return false;
    }
    if (this->current_a != other.current_a) {
      return false;
    }
    if (this->power_w != other.power_w) {
      return false;
    }
    if (this->rconf != other.rconf) {
      return false;
    }
    if (this->rsv != other.rsv) {
      return false;
    }
    if (this->rbv != other.rbv) {
      return false;
    }
    if (this->rp != other.rp) {
      return false;
    }
    if (this->rc != other.rc) {
      return false;
    }
    if (this->rcal != other.rcal) {
      return false;
    }
    if (this->me != other.me) {
      return false;
    }
    if (this->al != other.al) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerMonitor_

// alias to use template instance with default allocator
using PowerMonitor =
  px4_msgs::msg::PowerMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_HPP_
