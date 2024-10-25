// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__WheelEncoders __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__WheelEncoders __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoders_
{
  using Type = WheelEncoders_<ContainerAllocator>;

  explicit WheelEncoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->wheel_speed.begin(), this->wheel_speed.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->wheel_angle.begin(), this->wheel_angle.end(), 0.0f);
    }
  }

  explicit WheelEncoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheel_speed(_alloc),
    wheel_angle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->wheel_speed.begin(), this->wheel_speed.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->wheel_angle.begin(), this->wheel_angle.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _wheel_speed_type =
    std::array<float, 2>;
  _wheel_speed_type wheel_speed;
  using _wheel_angle_type =
    std::array<float, 2>;
  _wheel_angle_type wheel_angle;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__wheel_speed(
    const std::array<float, 2> & _arg)
  {
    this->wheel_speed = _arg;
    return *this;
  }
  Type & set__wheel_angle(
    const std::array<float, 2> & _arg)
  {
    this->wheel_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::WheelEncoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::WheelEncoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::WheelEncoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::WheelEncoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__WheelEncoders
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__WheelEncoders
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoders_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->wheel_speed != other.wheel_speed) {
      return false;
    }
    if (this->wheel_angle != other.wheel_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoders_

// alias to use template instance with default allocator
using WheelEncoders =
  px4_msgs::msg::WheelEncoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
