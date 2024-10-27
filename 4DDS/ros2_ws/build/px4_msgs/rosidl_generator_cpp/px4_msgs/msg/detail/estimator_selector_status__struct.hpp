// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorSelectorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorSelectorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorSelectorStatus_
{
  using Type = EstimatorSelectorStatus_<ContainerAllocator>;

  explicit EstimatorSelectorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->primary_instance = 0;
      this->instances_available = 0;
      this->instance_changed_count = 0ul;
      this->last_instance_change = 0ull;
      this->accel_device_id = 0ul;
      this->baro_device_id = 0ul;
      this->gyro_device_id = 0ul;
      this->mag_device_id = 0ul;
      std::fill<typename std::array<float, 9>::iterator, float>(this->combined_test_ratio.begin(), this->combined_test_ratio.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->relative_test_ratio.begin(), this->relative_test_ratio.end(), 0.0f);
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->healthy.begin(), this->healthy.end(), false);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accumulated_gyro_error.begin(), this->accumulated_gyro_error.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accumulated_accel_error.begin(), this->accumulated_accel_error.end(), 0.0f);
      this->gyro_fault_detected = false;
      this->accel_fault_detected = false;
    }
  }

  explicit EstimatorSelectorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : combined_test_ratio(_alloc),
    relative_test_ratio(_alloc),
    healthy(_alloc),
    accumulated_gyro_error(_alloc),
    accumulated_accel_error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->primary_instance = 0;
      this->instances_available = 0;
      this->instance_changed_count = 0ul;
      this->last_instance_change = 0ull;
      this->accel_device_id = 0ul;
      this->baro_device_id = 0ul;
      this->gyro_device_id = 0ul;
      this->mag_device_id = 0ul;
      std::fill<typename std::array<float, 9>::iterator, float>(this->combined_test_ratio.begin(), this->combined_test_ratio.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->relative_test_ratio.begin(), this->relative_test_ratio.end(), 0.0f);
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->healthy.begin(), this->healthy.end(), false);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accumulated_gyro_error.begin(), this->accumulated_gyro_error.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accumulated_accel_error.begin(), this->accumulated_accel_error.end(), 0.0f);
      this->gyro_fault_detected = false;
      this->accel_fault_detected = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _primary_instance_type =
    uint8_t;
  _primary_instance_type primary_instance;
  using _instances_available_type =
    uint8_t;
  _instances_available_type instances_available;
  using _instance_changed_count_type =
    uint32_t;
  _instance_changed_count_type instance_changed_count;
  using _last_instance_change_type =
    uint64_t;
  _last_instance_change_type last_instance_change;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _baro_device_id_type =
    uint32_t;
  _baro_device_id_type baro_device_id;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;
  using _mag_device_id_type =
    uint32_t;
  _mag_device_id_type mag_device_id;
  using _combined_test_ratio_type =
    std::array<float, 9>;
  _combined_test_ratio_type combined_test_ratio;
  using _relative_test_ratio_type =
    std::array<float, 9>;
  _relative_test_ratio_type relative_test_ratio;
  using _healthy_type =
    std::array<bool, 9>;
  _healthy_type healthy;
  using _accumulated_gyro_error_type =
    std::array<float, 4>;
  _accumulated_gyro_error_type accumulated_gyro_error;
  using _accumulated_accel_error_type =
    std::array<float, 4>;
  _accumulated_accel_error_type accumulated_accel_error;
  using _gyro_fault_detected_type =
    bool;
  _gyro_fault_detected_type gyro_fault_detected;
  using _accel_fault_detected_type =
    bool;
  _accel_fault_detected_type accel_fault_detected;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__primary_instance(
    const uint8_t & _arg)
  {
    this->primary_instance = _arg;
    return *this;
  }
  Type & set__instances_available(
    const uint8_t & _arg)
  {
    this->instances_available = _arg;
    return *this;
  }
  Type & set__instance_changed_count(
    const uint32_t & _arg)
  {
    this->instance_changed_count = _arg;
    return *this;
  }
  Type & set__last_instance_change(
    const uint64_t & _arg)
  {
    this->last_instance_change = _arg;
    return *this;
  }
  Type & set__accel_device_id(
    const uint32_t & _arg)
  {
    this->accel_device_id = _arg;
    return *this;
  }
  Type & set__baro_device_id(
    const uint32_t & _arg)
  {
    this->baro_device_id = _arg;
    return *this;
  }
  Type & set__gyro_device_id(
    const uint32_t & _arg)
  {
    this->gyro_device_id = _arg;
    return *this;
  }
  Type & set__mag_device_id(
    const uint32_t & _arg)
  {
    this->mag_device_id = _arg;
    return *this;
  }
  Type & set__combined_test_ratio(
    const std::array<float, 9> & _arg)
  {
    this->combined_test_ratio = _arg;
    return *this;
  }
  Type & set__relative_test_ratio(
    const std::array<float, 9> & _arg)
  {
    this->relative_test_ratio = _arg;
    return *this;
  }
  Type & set__healthy(
    const std::array<bool, 9> & _arg)
  {
    this->healthy = _arg;
    return *this;
  }
  Type & set__accumulated_gyro_error(
    const std::array<float, 4> & _arg)
  {
    this->accumulated_gyro_error = _arg;
    return *this;
  }
  Type & set__accumulated_accel_error(
    const std::array<float, 4> & _arg)
  {
    this->accumulated_accel_error = _arg;
    return *this;
  }
  Type & set__gyro_fault_detected(
    const bool & _arg)
  {
    this->gyro_fault_detected = _arg;
    return *this;
  }
  Type & set__accel_fault_detected(
    const bool & _arg)
  {
    this->accel_fault_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorSelectorStatus
    std::shared_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorSelectorStatus
    std::shared_ptr<px4_msgs::msg::EstimatorSelectorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorSelectorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->primary_instance != other.primary_instance) {
      return false;
    }
    if (this->instances_available != other.instances_available) {
      return false;
    }
    if (this->instance_changed_count != other.instance_changed_count) {
      return false;
    }
    if (this->last_instance_change != other.last_instance_change) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->baro_device_id != other.baro_device_id) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    if (this->mag_device_id != other.mag_device_id) {
      return false;
    }
    if (this->combined_test_ratio != other.combined_test_ratio) {
      return false;
    }
    if (this->relative_test_ratio != other.relative_test_ratio) {
      return false;
    }
    if (this->healthy != other.healthy) {
      return false;
    }
    if (this->accumulated_gyro_error != other.accumulated_gyro_error) {
      return false;
    }
    if (this->accumulated_accel_error != other.accumulated_accel_error) {
      return false;
    }
    if (this->gyro_fault_detected != other.gyro_fault_detected) {
      return false;
    }
    if (this->accel_fault_detected != other.accel_fault_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorSelectorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorSelectorStatus_

// alias to use template instance with default allocator
using EstimatorSelectorStatus =
  px4_msgs::msg::EstimatorSelectorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__STRUCT_HPP_
