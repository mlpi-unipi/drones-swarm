// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RateCtrlStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RateCtrlStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RateCtrlStatus_
{
  using Type = RateCtrlStatus_<ContainerAllocator>;

  explicit RateCtrlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rollspeed_integ = 0.0f;
      this->pitchspeed_integ = 0.0f;
      this->yawspeed_integ = 0.0f;
      this->wheel_rate_integ = 0.0f;
    }
  }

  explicit RateCtrlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rollspeed_integ = 0.0f;
      this->pitchspeed_integ = 0.0f;
      this->yawspeed_integ = 0.0f;
      this->wheel_rate_integ = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rollspeed_integ_type =
    float;
  _rollspeed_integ_type rollspeed_integ;
  using _pitchspeed_integ_type =
    float;
  _pitchspeed_integ_type pitchspeed_integ;
  using _yawspeed_integ_type =
    float;
  _yawspeed_integ_type yawspeed_integ;
  using _wheel_rate_integ_type =
    float;
  _wheel_rate_integ_type wheel_rate_integ;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rollspeed_integ(
    const float & _arg)
  {
    this->rollspeed_integ = _arg;
    return *this;
  }
  Type & set__pitchspeed_integ(
    const float & _arg)
  {
    this->pitchspeed_integ = _arg;
    return *this;
  }
  Type & set__yawspeed_integ(
    const float & _arg)
  {
    this->yawspeed_integ = _arg;
    return *this;
  }
  Type & set__wheel_rate_integ(
    const float & _arg)
  {
    this->wheel_rate_integ = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RateCtrlStatus
    std::shared_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RateCtrlStatus
    std::shared_ptr<px4_msgs::msg::RateCtrlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RateCtrlStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rollspeed_integ != other.rollspeed_integ) {
      return false;
    }
    if (this->pitchspeed_integ != other.pitchspeed_integ) {
      return false;
    }
    if (this->yawspeed_integ != other.yawspeed_integ) {
      return false;
    }
    if (this->wheel_rate_integ != other.wheel_rate_integ) {
      return false;
    }
    return true;
  }
  bool operator!=(const RateCtrlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RateCtrlStatus_

// alias to use template instance with default allocator
using RateCtrlStatus =
  px4_msgs::msg::RateCtrlStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_HPP_
