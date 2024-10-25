// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorGyroFifo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorGyroFifo __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorGyroFifo __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorGyroFifo_
{
  using Type = SensorGyroFifo_<ContainerAllocator>;

  explicit SensorGyroFifo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->dt = 0.0f;
      this->scale = 0.0f;
      this->samples = 0;
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->x.begin(), this->x.end(), 0);
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->y.begin(), this->y.end(), 0);
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->z.begin(), this->z.end(), 0);
    }
  }

  explicit SensorGyroFifo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc),
    y(_alloc),
    z(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->dt = 0.0f;
      this->scale = 0.0f;
      this->samples = 0;
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->x.begin(), this->x.end(), 0);
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->y.begin(), this->y.end(), 0);
      std::fill<typename std::array<int16_t, 32>::iterator, int16_t>(this->z.begin(), this->z.end(), 0);
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
  using _dt_type =
    float;
  _dt_type dt;
  using _scale_type =
    float;
  _scale_type scale;
  using _samples_type =
    uint8_t;
  _samples_type samples;
  using _x_type =
    std::array<int16_t, 32>;
  _x_type x;
  using _y_type =
    std::array<int16_t, 32>;
  _y_type y;
  using _z_type =
    std::array<int16_t, 32>;
  _z_type z;

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
  Type & set__dt(
    const float & _arg)
  {
    this->dt = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__samples(
    const uint8_t & _arg)
  {
    this->samples = _arg;
    return *this;
  }
  Type & set__x(
    const std::array<int16_t, 32> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::array<int16_t, 32> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::array<int16_t, 32> & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorGyroFifo
    std::shared_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorGyroFifo
    std::shared_ptr<px4_msgs::msg::SensorGyroFifo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorGyroFifo_ & other) const
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
    if (this->dt != other.dt) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->samples != other.samples) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorGyroFifo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorGyroFifo_

// alias to use template instance with default allocator
using SensorGyroFifo =
  px4_msgs::msg::SensorGyroFifo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGyroFifo_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_HPP_
