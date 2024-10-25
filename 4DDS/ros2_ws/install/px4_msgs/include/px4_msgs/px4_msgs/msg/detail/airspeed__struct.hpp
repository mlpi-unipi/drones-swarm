// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Airspeed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Airspeed __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Airspeed __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Airspeed_
{
  using Type = Airspeed_<ContainerAllocator>;

  explicit Airspeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->indicated_airspeed_m_s = 0.0f;
      this->true_airspeed_m_s = 0.0f;
      this->air_temperature_celsius = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit Airspeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->indicated_airspeed_m_s = 0.0f;
      this->true_airspeed_m_s = 0.0f;
      this->air_temperature_celsius = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _indicated_airspeed_m_s_type =
    float;
  _indicated_airspeed_m_s_type indicated_airspeed_m_s;
  using _true_airspeed_m_s_type =
    float;
  _true_airspeed_m_s_type true_airspeed_m_s;
  using _air_temperature_celsius_type =
    float;
  _air_temperature_celsius_type air_temperature_celsius;
  using _confidence_type =
    float;
  _confidence_type confidence;

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
  Type & set__indicated_airspeed_m_s(
    const float & _arg)
  {
    this->indicated_airspeed_m_s = _arg;
    return *this;
  }
  Type & set__true_airspeed_m_s(
    const float & _arg)
  {
    this->true_airspeed_m_s = _arg;
    return *this;
  }
  Type & set__air_temperature_celsius(
    const float & _arg)
  {
    this->air_temperature_celsius = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Airspeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Airspeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Airspeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Airspeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Airspeed
    std::shared_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Airspeed
    std::shared_ptr<px4_msgs::msg::Airspeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Airspeed_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->indicated_airspeed_m_s != other.indicated_airspeed_m_s) {
      return false;
    }
    if (this->true_airspeed_m_s != other.true_airspeed_m_s) {
      return false;
    }
    if (this->air_temperature_celsius != other.air_temperature_celsius) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Airspeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Airspeed_

// alias to use template instance with default allocator
using Airspeed =
  px4_msgs::msg::Airspeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_HPP_
