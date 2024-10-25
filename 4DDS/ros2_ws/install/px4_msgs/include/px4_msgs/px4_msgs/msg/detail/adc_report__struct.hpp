// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/AdcReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ADC_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ADC_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__AdcReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__AdcReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdcReport_
{
  using Type = AdcReport_<ContainerAllocator>;

  explicit AdcReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->channel_id.begin(), this->channel_id.end(), 0);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->raw_data.begin(), this->raw_data.end(), 0l);
      this->resolution = 0ul;
      this->v_ref = 0.0f;
    }
  }

  explicit AdcReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : channel_id(_alloc),
    raw_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->channel_id.begin(), this->channel_id.end(), 0);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->raw_data.begin(), this->raw_data.end(), 0l);
      this->resolution = 0ul;
      this->v_ref = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _channel_id_type =
    std::array<int16_t, 12>;
  _channel_id_type channel_id;
  using _raw_data_type =
    std::array<int32_t, 12>;
  _raw_data_type raw_data;
  using _resolution_type =
    uint32_t;
  _resolution_type resolution;
  using _v_ref_type =
    float;
  _v_ref_type v_ref;

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
  Type & set__channel_id(
    const std::array<int16_t, 12> & _arg)
  {
    this->channel_id = _arg;
    return *this;
  }
  Type & set__raw_data(
    const std::array<int32_t, 12> & _arg)
  {
    this->raw_data = _arg;
    return *this;
  }
  Type & set__resolution(
    const uint32_t & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__v_ref(
    const float & _arg)
  {
    this->v_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::AdcReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::AdcReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AdcReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AdcReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__AdcReport
    std::shared_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__AdcReport
    std::shared_ptr<px4_msgs::msg::AdcReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdcReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->channel_id != other.channel_id) {
      return false;
    }
    if (this->raw_data != other.raw_data) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->v_ref != other.v_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdcReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdcReport_

// alias to use template instance with default allocator
using AdcReport =
  px4_msgs::msg::AdcReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ADC_REPORT__STRUCT_HPP_
