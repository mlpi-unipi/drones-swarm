// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorGyroFft __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorGyroFft __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorGyroFft_
{
  using Type = SensorGyroFft_<ContainerAllocator>;

  explicit SensorGyroFft_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->sensor_sample_rate_hz = 0.0f;
      this->resolution_hz = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_x.begin(), this->peak_frequencies_x.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_y.begin(), this->peak_frequencies_y.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_z.begin(), this->peak_frequencies_z.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_x.begin(), this->peak_snr_x.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_y.begin(), this->peak_snr_y.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_z.begin(), this->peak_snr_z.end(), 0.0f);
    }
  }

  explicit SensorGyroFft_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : peak_frequencies_x(_alloc),
    peak_frequencies_y(_alloc),
    peak_frequencies_z(_alloc),
    peak_snr_x(_alloc),
    peak_snr_y(_alloc),
    peak_snr_z(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->sensor_sample_rate_hz = 0.0f;
      this->resolution_hz = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_x.begin(), this->peak_frequencies_x.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_y.begin(), this->peak_frequencies_y.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_frequencies_z.begin(), this->peak_frequencies_z.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_x.begin(), this->peak_snr_x.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_y.begin(), this->peak_snr_y.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->peak_snr_z.begin(), this->peak_snr_z.end(), 0.0f);
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
  using _sensor_sample_rate_hz_type =
    float;
  _sensor_sample_rate_hz_type sensor_sample_rate_hz;
  using _resolution_hz_type =
    float;
  _resolution_hz_type resolution_hz;
  using _peak_frequencies_x_type =
    std::array<float, 3>;
  _peak_frequencies_x_type peak_frequencies_x;
  using _peak_frequencies_y_type =
    std::array<float, 3>;
  _peak_frequencies_y_type peak_frequencies_y;
  using _peak_frequencies_z_type =
    std::array<float, 3>;
  _peak_frequencies_z_type peak_frequencies_z;
  using _peak_snr_x_type =
    std::array<float, 3>;
  _peak_snr_x_type peak_snr_x;
  using _peak_snr_y_type =
    std::array<float, 3>;
  _peak_snr_y_type peak_snr_y;
  using _peak_snr_z_type =
    std::array<float, 3>;
  _peak_snr_z_type peak_snr_z;

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
  Type & set__sensor_sample_rate_hz(
    const float & _arg)
  {
    this->sensor_sample_rate_hz = _arg;
    return *this;
  }
  Type & set__resolution_hz(
    const float & _arg)
  {
    this->resolution_hz = _arg;
    return *this;
  }
  Type & set__peak_frequencies_x(
    const std::array<float, 3> & _arg)
  {
    this->peak_frequencies_x = _arg;
    return *this;
  }
  Type & set__peak_frequencies_y(
    const std::array<float, 3> & _arg)
  {
    this->peak_frequencies_y = _arg;
    return *this;
  }
  Type & set__peak_frequencies_z(
    const std::array<float, 3> & _arg)
  {
    this->peak_frequencies_z = _arg;
    return *this;
  }
  Type & set__peak_snr_x(
    const std::array<float, 3> & _arg)
  {
    this->peak_snr_x = _arg;
    return *this;
  }
  Type & set__peak_snr_y(
    const std::array<float, 3> & _arg)
  {
    this->peak_snr_y = _arg;
    return *this;
  }
  Type & set__peak_snr_z(
    const std::array<float, 3> & _arg)
  {
    this->peak_snr_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorGyroFft_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorGyroFft_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGyroFft_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGyroFft_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorGyroFft
    std::shared_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorGyroFft
    std::shared_ptr<px4_msgs::msg::SensorGyroFft_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorGyroFft_ & other) const
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
    if (this->sensor_sample_rate_hz != other.sensor_sample_rate_hz) {
      return false;
    }
    if (this->resolution_hz != other.resolution_hz) {
      return false;
    }
    if (this->peak_frequencies_x != other.peak_frequencies_x) {
      return false;
    }
    if (this->peak_frequencies_y != other.peak_frequencies_y) {
      return false;
    }
    if (this->peak_frequencies_z != other.peak_frequencies_z) {
      return false;
    }
    if (this->peak_snr_x != other.peak_snr_x) {
      return false;
    }
    if (this->peak_snr_y != other.peak_snr_y) {
      return false;
    }
    if (this->peak_snr_z != other.peak_snr_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorGyroFft_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorGyroFft_

// alias to use template instance with default allocator
using SensorGyroFft =
  px4_msgs::msg::SensorGyroFft_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_HPP_
