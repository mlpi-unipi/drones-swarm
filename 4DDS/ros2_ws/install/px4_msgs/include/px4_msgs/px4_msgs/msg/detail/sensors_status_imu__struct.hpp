// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorsStatusImu __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorsStatusImu __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorsStatusImu_
{
  using Type = SensorsStatusImu_<ContainerAllocator>;

  explicit SensorsStatusImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->accel_device_ids.begin(), this->accel_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accel_inconsistency_m_s_s.begin(), this->accel_inconsistency_m_s_s.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->accel_healthy.begin(), this->accel_healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->accel_priority.begin(), this->accel_priority.end(), 0);
      this->gyro_device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->gyro_device_ids.begin(), this->gyro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->gyro_inconsistency_rad_s.begin(), this->gyro_inconsistency_rad_s.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->gyro_healthy.begin(), this->gyro_healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->gyro_priority.begin(), this->gyro_priority.end(), 0);
    }
  }

  explicit SensorsStatusImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accel_device_ids(_alloc),
    accel_inconsistency_m_s_s(_alloc),
    accel_healthy(_alloc),
    accel_priority(_alloc),
    gyro_device_ids(_alloc),
    gyro_inconsistency_rad_s(_alloc),
    gyro_healthy(_alloc),
    gyro_priority(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->accel_device_ids.begin(), this->accel_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accel_inconsistency_m_s_s.begin(), this->accel_inconsistency_m_s_s.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->accel_healthy.begin(), this->accel_healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->accel_priority.begin(), this->accel_priority.end(), 0);
      this->gyro_device_id_primary = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->gyro_device_ids.begin(), this->gyro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->gyro_inconsistency_rad_s.begin(), this->gyro_inconsistency_rad_s.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->gyro_healthy.begin(), this->gyro_healthy.end(), false);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->gyro_priority.begin(), this->gyro_priority.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _accel_device_id_primary_type =
    uint32_t;
  _accel_device_id_primary_type accel_device_id_primary;
  using _accel_device_ids_type =
    std::array<uint32_t, 4>;
  _accel_device_ids_type accel_device_ids;
  using _accel_inconsistency_m_s_s_type =
    std::array<float, 4>;
  _accel_inconsistency_m_s_s_type accel_inconsistency_m_s_s;
  using _accel_healthy_type =
    std::array<bool, 4>;
  _accel_healthy_type accel_healthy;
  using _accel_priority_type =
    std::array<uint8_t, 4>;
  _accel_priority_type accel_priority;
  using _gyro_device_id_primary_type =
    uint32_t;
  _gyro_device_id_primary_type gyro_device_id_primary;
  using _gyro_device_ids_type =
    std::array<uint32_t, 4>;
  _gyro_device_ids_type gyro_device_ids;
  using _gyro_inconsistency_rad_s_type =
    std::array<float, 4>;
  _gyro_inconsistency_rad_s_type gyro_inconsistency_rad_s;
  using _gyro_healthy_type =
    std::array<bool, 4>;
  _gyro_healthy_type gyro_healthy;
  using _gyro_priority_type =
    std::array<uint8_t, 4>;
  _gyro_priority_type gyro_priority;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__accel_device_id_primary(
    const uint32_t & _arg)
  {
    this->accel_device_id_primary = _arg;
    return *this;
  }
  Type & set__accel_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->accel_device_ids = _arg;
    return *this;
  }
  Type & set__accel_inconsistency_m_s_s(
    const std::array<float, 4> & _arg)
  {
    this->accel_inconsistency_m_s_s = _arg;
    return *this;
  }
  Type & set__accel_healthy(
    const std::array<bool, 4> & _arg)
  {
    this->accel_healthy = _arg;
    return *this;
  }
  Type & set__accel_priority(
    const std::array<uint8_t, 4> & _arg)
  {
    this->accel_priority = _arg;
    return *this;
  }
  Type & set__gyro_device_id_primary(
    const uint32_t & _arg)
  {
    this->gyro_device_id_primary = _arg;
    return *this;
  }
  Type & set__gyro_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->gyro_device_ids = _arg;
    return *this;
  }
  Type & set__gyro_inconsistency_rad_s(
    const std::array<float, 4> & _arg)
  {
    this->gyro_inconsistency_rad_s = _arg;
    return *this;
  }
  Type & set__gyro_healthy(
    const std::array<bool, 4> & _arg)
  {
    this->gyro_healthy = _arg;
    return *this;
  }
  Type & set__gyro_priority(
    const std::array<uint8_t, 4> & _arg)
  {
    this->gyro_priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorsStatusImu
    std::shared_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorsStatusImu
    std::shared_ptr<px4_msgs::msg::SensorsStatusImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorsStatusImu_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->accel_device_id_primary != other.accel_device_id_primary) {
      return false;
    }
    if (this->accel_device_ids != other.accel_device_ids) {
      return false;
    }
    if (this->accel_inconsistency_m_s_s != other.accel_inconsistency_m_s_s) {
      return false;
    }
    if (this->accel_healthy != other.accel_healthy) {
      return false;
    }
    if (this->accel_priority != other.accel_priority) {
      return false;
    }
    if (this->gyro_device_id_primary != other.gyro_device_id_primary) {
      return false;
    }
    if (this->gyro_device_ids != other.gyro_device_ids) {
      return false;
    }
    if (this->gyro_inconsistency_rad_s != other.gyro_inconsistency_rad_s) {
      return false;
    }
    if (this->gyro_healthy != other.gyro_healthy) {
      return false;
    }
    if (this->gyro_priority != other.gyro_priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorsStatusImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorsStatusImu_

// alias to use template instance with default allocator
using SensorsStatusImu =
  px4_msgs::msg::SensorsStatusImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_HPP_
