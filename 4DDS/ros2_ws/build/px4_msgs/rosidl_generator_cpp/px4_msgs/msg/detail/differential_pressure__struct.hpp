// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DifferentialPressure __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DifferentialPressure __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DifferentialPressure_
{
  using Type = DifferentialPressure_<ContainerAllocator>;

  explicit DifferentialPressure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->differential_pressure_pa = 0.0f;
      this->temperature = 0.0f;
      this->error_count = 0ul;
    }
  }

  explicit DifferentialPressure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->differential_pressure_pa = 0.0f;
      this->temperature = 0.0f;
      this->error_count = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _differential_pressure_pa_type =
    float;
  _differential_pressure_pa_type differential_pressure_pa;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _error_count_type =
    uint32_t;
  _error_count_type error_count;

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
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__differential_pressure_pa(
    const float & _arg)
  {
    this->differential_pressure_pa = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__error_count(
    const uint32_t & _arg)
  {
    this->error_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::DifferentialPressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DifferentialPressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DifferentialPressure
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DifferentialPressure
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DifferentialPressure_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->differential_pressure_pa != other.differential_pressure_pa) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->error_count != other.error_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const DifferentialPressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DifferentialPressure_

// alias to use template instance with default allocator
using DifferentialPressure =
  px4_msgs::msg::DifferentialPressure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_HPP_
