// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ManualControlSwitches __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ManualControlSwitches __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManualControlSwitches_
{
  using Type = ManualControlSwitches_<ContainerAllocator>;

  explicit ManualControlSwitches_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->mode_slot = 0;
      this->arm_switch = 0;
      this->return_switch = 0;
      this->loiter_switch = 0;
      this->offboard_switch = 0;
      this->kill_switch = 0;
      this->gear_switch = 0;
      this->transition_switch = 0;
      this->photo_switch = 0;
      this->video_switch = 0;
      this->engage_main_motor_switch = 0;
      this->switch_changes = 0ul;
    }
  }

  explicit ManualControlSwitches_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->mode_slot = 0;
      this->arm_switch = 0;
      this->return_switch = 0;
      this->loiter_switch = 0;
      this->offboard_switch = 0;
      this->kill_switch = 0;
      this->gear_switch = 0;
      this->transition_switch = 0;
      this->photo_switch = 0;
      this->video_switch = 0;
      this->engage_main_motor_switch = 0;
      this->switch_changes = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _mode_slot_type =
    uint8_t;
  _mode_slot_type mode_slot;
  using _arm_switch_type =
    uint8_t;
  _arm_switch_type arm_switch;
  using _return_switch_type =
    uint8_t;
  _return_switch_type return_switch;
  using _loiter_switch_type =
    uint8_t;
  _loiter_switch_type loiter_switch;
  using _offboard_switch_type =
    uint8_t;
  _offboard_switch_type offboard_switch;
  using _kill_switch_type =
    uint8_t;
  _kill_switch_type kill_switch;
  using _gear_switch_type =
    uint8_t;
  _gear_switch_type gear_switch;
  using _transition_switch_type =
    uint8_t;
  _transition_switch_type transition_switch;
  using _photo_switch_type =
    uint8_t;
  _photo_switch_type photo_switch;
  using _video_switch_type =
    uint8_t;
  _video_switch_type video_switch;
  using _engage_main_motor_switch_type =
    uint8_t;
  _engage_main_motor_switch_type engage_main_motor_switch;
  using _switch_changes_type =
    uint32_t;
  _switch_changes_type switch_changes;

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
  Type & set__mode_slot(
    const uint8_t & _arg)
  {
    this->mode_slot = _arg;
    return *this;
  }
  Type & set__arm_switch(
    const uint8_t & _arg)
  {
    this->arm_switch = _arg;
    return *this;
  }
  Type & set__return_switch(
    const uint8_t & _arg)
  {
    this->return_switch = _arg;
    return *this;
  }
  Type & set__loiter_switch(
    const uint8_t & _arg)
  {
    this->loiter_switch = _arg;
    return *this;
  }
  Type & set__offboard_switch(
    const uint8_t & _arg)
  {
    this->offboard_switch = _arg;
    return *this;
  }
  Type & set__kill_switch(
    const uint8_t & _arg)
  {
    this->kill_switch = _arg;
    return *this;
  }
  Type & set__gear_switch(
    const uint8_t & _arg)
  {
    this->gear_switch = _arg;
    return *this;
  }
  Type & set__transition_switch(
    const uint8_t & _arg)
  {
    this->transition_switch = _arg;
    return *this;
  }
  Type & set__photo_switch(
    const uint8_t & _arg)
  {
    this->photo_switch = _arg;
    return *this;
  }
  Type & set__video_switch(
    const uint8_t & _arg)
  {
    this->video_switch = _arg;
    return *this;
  }
  Type & set__engage_main_motor_switch(
    const uint8_t & _arg)
  {
    this->engage_main_motor_switch = _arg;
    return *this;
  }
  Type & set__switch_changes(
    const uint32_t & _arg)
  {
    this->switch_changes = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SWITCH_POS_NONE =
    0u;
  static constexpr uint8_t SWITCH_POS_ON =
    1u;
  static constexpr uint8_t SWITCH_POS_MIDDLE =
    2u;
  static constexpr uint8_t SWITCH_POS_OFF =
    3u;
  static constexpr uint8_t MODE_SLOT_NONE =
    0u;
  static constexpr uint8_t MODE_SLOT_1 =
    1u;
  static constexpr uint8_t MODE_SLOT_2 =
    2u;
  static constexpr uint8_t MODE_SLOT_3 =
    3u;
  static constexpr uint8_t MODE_SLOT_4 =
    4u;
  static constexpr uint8_t MODE_SLOT_5 =
    5u;
  static constexpr uint8_t MODE_SLOT_6 =
    6u;
  static constexpr uint8_t MODE_SLOT_NUM =
    6u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ManualControlSwitches
    std::shared_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ManualControlSwitches
    std::shared_ptr<px4_msgs::msg::ManualControlSwitches_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualControlSwitches_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->mode_slot != other.mode_slot) {
      return false;
    }
    if (this->arm_switch != other.arm_switch) {
      return false;
    }
    if (this->return_switch != other.return_switch) {
      return false;
    }
    if (this->loiter_switch != other.loiter_switch) {
      return false;
    }
    if (this->offboard_switch != other.offboard_switch) {
      return false;
    }
    if (this->kill_switch != other.kill_switch) {
      return false;
    }
    if (this->gear_switch != other.gear_switch) {
      return false;
    }
    if (this->transition_switch != other.transition_switch) {
      return false;
    }
    if (this->photo_switch != other.photo_switch) {
      return false;
    }
    if (this->video_switch != other.video_switch) {
      return false;
    }
    if (this->engage_main_motor_switch != other.engage_main_motor_switch) {
      return false;
    }
    if (this->switch_changes != other.switch_changes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualControlSwitches_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualControlSwitches_

// alias to use template instance with default allocator
using ManualControlSwitches =
  px4_msgs::msg::ManualControlSwitches_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::SWITCH_POS_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::SWITCH_POS_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::SWITCH_POS_MIDDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::SWITCH_POS_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManualControlSwitches_<ContainerAllocator>::MODE_SLOT_NUM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_HPP_
