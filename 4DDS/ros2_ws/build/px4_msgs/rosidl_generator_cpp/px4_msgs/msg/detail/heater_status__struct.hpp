// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/HeaterStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__HeaterStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__HeaterStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeaterStatus_
{
  using Type = HeaterStatus_<ContainerAllocator>;

  explicit HeaterStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->heater_on = false;
      this->temperature_target_met = false;
      this->temperature_sensor = 0.0f;
      this->temperature_target = 0.0f;
      this->controller_period_usec = 0ul;
      this->controller_time_on_usec = 0ul;
      this->proportional_value = 0.0f;
      this->integrator_value = 0.0f;
      this->feed_forward_value = 0.0f;
      this->mode = 0;
    }
  }

  explicit HeaterStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->heater_on = false;
      this->temperature_target_met = false;
      this->temperature_sensor = 0.0f;
      this->temperature_target = 0.0f;
      this->controller_period_usec = 0ul;
      this->controller_time_on_usec = 0ul;
      this->proportional_value = 0.0f;
      this->integrator_value = 0.0f;
      this->feed_forward_value = 0.0f;
      this->mode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _heater_on_type =
    bool;
  _heater_on_type heater_on;
  using _temperature_target_met_type =
    bool;
  _temperature_target_met_type temperature_target_met;
  using _temperature_sensor_type =
    float;
  _temperature_sensor_type temperature_sensor;
  using _temperature_target_type =
    float;
  _temperature_target_type temperature_target;
  using _controller_period_usec_type =
    uint32_t;
  _controller_period_usec_type controller_period_usec;
  using _controller_time_on_usec_type =
    uint32_t;
  _controller_time_on_usec_type controller_time_on_usec;
  using _proportional_value_type =
    float;
  _proportional_value_type proportional_value;
  using _integrator_value_type =
    float;
  _integrator_value_type integrator_value;
  using _feed_forward_value_type =
    float;
  _feed_forward_value_type feed_forward_value;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__heater_on(
    const bool & _arg)
  {
    this->heater_on = _arg;
    return *this;
  }
  Type & set__temperature_target_met(
    const bool & _arg)
  {
    this->temperature_target_met = _arg;
    return *this;
  }
  Type & set__temperature_sensor(
    const float & _arg)
  {
    this->temperature_sensor = _arg;
    return *this;
  }
  Type & set__temperature_target(
    const float & _arg)
  {
    this->temperature_target = _arg;
    return *this;
  }
  Type & set__controller_period_usec(
    const uint32_t & _arg)
  {
    this->controller_period_usec = _arg;
    return *this;
  }
  Type & set__controller_time_on_usec(
    const uint32_t & _arg)
  {
    this->controller_time_on_usec = _arg;
    return *this;
  }
  Type & set__proportional_value(
    const float & _arg)
  {
    this->proportional_value = _arg;
    return *this;
  }
  Type & set__integrator_value(
    const float & _arg)
  {
    this->integrator_value = _arg;
    return *this;
  }
  Type & set__feed_forward_value(
    const float & _arg)
  {
    this->feed_forward_value = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_GPIO =
    1u;
  static constexpr uint8_t MODE_PX4IO =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::HeaterStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::HeaterStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HeaterStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HeaterStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__HeaterStatus
    std::shared_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__HeaterStatus
    std::shared_ptr<px4_msgs::msg::HeaterStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeaterStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->heater_on != other.heater_on) {
      return false;
    }
    if (this->temperature_target_met != other.temperature_target_met) {
      return false;
    }
    if (this->temperature_sensor != other.temperature_sensor) {
      return false;
    }
    if (this->temperature_target != other.temperature_target) {
      return false;
    }
    if (this->controller_period_usec != other.controller_period_usec) {
      return false;
    }
    if (this->controller_time_on_usec != other.controller_time_on_usec) {
      return false;
    }
    if (this->proportional_value != other.proportional_value) {
      return false;
    }
    if (this->integrator_value != other.integrator_value) {
      return false;
    }
    if (this->feed_forward_value != other.feed_forward_value) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeaterStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeaterStatus_

// alias to use template instance with default allocator
using HeaterStatus =
  px4_msgs::msg::HeaterStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeaterStatus_<ContainerAllocator>::MODE_GPIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeaterStatus_<ContainerAllocator>::MODE_PX4IO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_HPP_
