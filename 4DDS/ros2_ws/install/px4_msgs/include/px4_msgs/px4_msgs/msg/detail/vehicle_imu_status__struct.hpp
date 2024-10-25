// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleImuStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleImuStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleImuStatus_
{
  using Type = VehicleImuStatus_<ContainerAllocator>;

  explicit VehicleImuStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->accel_clipping.begin(), this->accel_clipping.end(), 0ul);
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->gyro_clipping.begin(), this->gyro_clipping.end(), 0ul);
      this->accel_error_count = 0ul;
      this->gyro_error_count = 0ul;
      this->accel_rate_hz = 0.0f;
      this->gyro_rate_hz = 0.0f;
      this->accel_raw_rate_hz = 0.0f;
      this->gyro_raw_rate_hz = 0.0f;
      this->accel_vibration_metric = 0.0f;
      this->gyro_vibration_metric = 0.0f;
      this->delta_angle_coning_metric = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mean_accel.begin(), this->mean_accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mean_gyro.begin(), this->mean_gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->var_accel.begin(), this->var_accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->var_gyro.begin(), this->var_gyro.end(), 0.0f);
      this->temperature_accel = 0.0f;
      this->temperature_gyro = 0.0f;
    }
  }

  explicit VehicleImuStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accel_clipping(_alloc),
    gyro_clipping(_alloc),
    mean_accel(_alloc),
    mean_gyro(_alloc),
    var_accel(_alloc),
    var_gyro(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->accel_clipping.begin(), this->accel_clipping.end(), 0ul);
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->gyro_clipping.begin(), this->gyro_clipping.end(), 0ul);
      this->accel_error_count = 0ul;
      this->gyro_error_count = 0ul;
      this->accel_rate_hz = 0.0f;
      this->gyro_rate_hz = 0.0f;
      this->accel_raw_rate_hz = 0.0f;
      this->gyro_raw_rate_hz = 0.0f;
      this->accel_vibration_metric = 0.0f;
      this->gyro_vibration_metric = 0.0f;
      this->delta_angle_coning_metric = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mean_accel.begin(), this->mean_accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mean_gyro.begin(), this->mean_gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->var_accel.begin(), this->var_accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->var_gyro.begin(), this->var_gyro.end(), 0.0f);
      this->temperature_accel = 0.0f;
      this->temperature_gyro = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;
  using _accel_clipping_type =
    std::array<uint32_t, 3>;
  _accel_clipping_type accel_clipping;
  using _gyro_clipping_type =
    std::array<uint32_t, 3>;
  _gyro_clipping_type gyro_clipping;
  using _accel_error_count_type =
    uint32_t;
  _accel_error_count_type accel_error_count;
  using _gyro_error_count_type =
    uint32_t;
  _gyro_error_count_type gyro_error_count;
  using _accel_rate_hz_type =
    float;
  _accel_rate_hz_type accel_rate_hz;
  using _gyro_rate_hz_type =
    float;
  _gyro_rate_hz_type gyro_rate_hz;
  using _accel_raw_rate_hz_type =
    float;
  _accel_raw_rate_hz_type accel_raw_rate_hz;
  using _gyro_raw_rate_hz_type =
    float;
  _gyro_raw_rate_hz_type gyro_raw_rate_hz;
  using _accel_vibration_metric_type =
    float;
  _accel_vibration_metric_type accel_vibration_metric;
  using _gyro_vibration_metric_type =
    float;
  _gyro_vibration_metric_type gyro_vibration_metric;
  using _delta_angle_coning_metric_type =
    float;
  _delta_angle_coning_metric_type delta_angle_coning_metric;
  using _mean_accel_type =
    std::array<float, 3>;
  _mean_accel_type mean_accel;
  using _mean_gyro_type =
    std::array<float, 3>;
  _mean_gyro_type mean_gyro;
  using _var_accel_type =
    std::array<float, 3>;
  _var_accel_type var_accel;
  using _var_gyro_type =
    std::array<float, 3>;
  _var_gyro_type var_gyro;
  using _temperature_accel_type =
    float;
  _temperature_accel_type temperature_accel;
  using _temperature_gyro_type =
    float;
  _temperature_gyro_type temperature_gyro;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__accel_device_id(
    const uint32_t & _arg)
  {
    this->accel_device_id = _arg;
    return *this;
  }
  Type & set__gyro_device_id(
    const uint32_t & _arg)
  {
    this->gyro_device_id = _arg;
    return *this;
  }
  Type & set__accel_clipping(
    const std::array<uint32_t, 3> & _arg)
  {
    this->accel_clipping = _arg;
    return *this;
  }
  Type & set__gyro_clipping(
    const std::array<uint32_t, 3> & _arg)
  {
    this->gyro_clipping = _arg;
    return *this;
  }
  Type & set__accel_error_count(
    const uint32_t & _arg)
  {
    this->accel_error_count = _arg;
    return *this;
  }
  Type & set__gyro_error_count(
    const uint32_t & _arg)
  {
    this->gyro_error_count = _arg;
    return *this;
  }
  Type & set__accel_rate_hz(
    const float & _arg)
  {
    this->accel_rate_hz = _arg;
    return *this;
  }
  Type & set__gyro_rate_hz(
    const float & _arg)
  {
    this->gyro_rate_hz = _arg;
    return *this;
  }
  Type & set__accel_raw_rate_hz(
    const float & _arg)
  {
    this->accel_raw_rate_hz = _arg;
    return *this;
  }
  Type & set__gyro_raw_rate_hz(
    const float & _arg)
  {
    this->gyro_raw_rate_hz = _arg;
    return *this;
  }
  Type & set__accel_vibration_metric(
    const float & _arg)
  {
    this->accel_vibration_metric = _arg;
    return *this;
  }
  Type & set__gyro_vibration_metric(
    const float & _arg)
  {
    this->gyro_vibration_metric = _arg;
    return *this;
  }
  Type & set__delta_angle_coning_metric(
    const float & _arg)
  {
    this->delta_angle_coning_metric = _arg;
    return *this;
  }
  Type & set__mean_accel(
    const std::array<float, 3> & _arg)
  {
    this->mean_accel = _arg;
    return *this;
  }
  Type & set__mean_gyro(
    const std::array<float, 3> & _arg)
  {
    this->mean_gyro = _arg;
    return *this;
  }
  Type & set__var_accel(
    const std::array<float, 3> & _arg)
  {
    this->var_accel = _arg;
    return *this;
  }
  Type & set__var_gyro(
    const std::array<float, 3> & _arg)
  {
    this->var_gyro = _arg;
    return *this;
  }
  Type & set__temperature_accel(
    const float & _arg)
  {
    this->temperature_accel = _arg;
    return *this;
  }
  Type & set__temperature_gyro(
    const float & _arg)
  {
    this->temperature_gyro = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleImuStatus
    std::shared_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleImuStatus
    std::shared_ptr<px4_msgs::msg::VehicleImuStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleImuStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    if (this->accel_clipping != other.accel_clipping) {
      return false;
    }
    if (this->gyro_clipping != other.gyro_clipping) {
      return false;
    }
    if (this->accel_error_count != other.accel_error_count) {
      return false;
    }
    if (this->gyro_error_count != other.gyro_error_count) {
      return false;
    }
    if (this->accel_rate_hz != other.accel_rate_hz) {
      return false;
    }
    if (this->gyro_rate_hz != other.gyro_rate_hz) {
      return false;
    }
    if (this->accel_raw_rate_hz != other.accel_raw_rate_hz) {
      return false;
    }
    if (this->gyro_raw_rate_hz != other.gyro_raw_rate_hz) {
      return false;
    }
    if (this->accel_vibration_metric != other.accel_vibration_metric) {
      return false;
    }
    if (this->gyro_vibration_metric != other.gyro_vibration_metric) {
      return false;
    }
    if (this->delta_angle_coning_metric != other.delta_angle_coning_metric) {
      return false;
    }
    if (this->mean_accel != other.mean_accel) {
      return false;
    }
    if (this->mean_gyro != other.mean_gyro) {
      return false;
    }
    if (this->var_accel != other.var_accel) {
      return false;
    }
    if (this->var_gyro != other.var_gyro) {
      return false;
    }
    if (this->temperature_accel != other.temperature_accel) {
      return false;
    }
    if (this->temperature_gyro != other.temperature_gyro) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleImuStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleImuStatus_

// alias to use template instance with default allocator
using VehicleImuStatus =
  px4_msgs::msg::VehicleImuStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_HPP_
