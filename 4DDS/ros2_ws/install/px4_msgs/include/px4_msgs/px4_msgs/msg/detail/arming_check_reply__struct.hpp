// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'events'
#include "px4_msgs/msg/detail/event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ArmingCheckReply __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ArmingCheckReply __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmingCheckReply_
{
  using Type = ArmingCheckReply_<ContainerAllocator>;

  explicit ArmingCheckReply_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0;
      this->registration_id = 0;
      this->health_component_index = 0;
      this->health_component_is_present = false;
      this->health_component_warning = false;
      this->health_component_error = false;
      this->can_arm_and_run = false;
      this->num_events = 0;
      this->events.fill(px4_msgs::msg::Event_<ContainerAllocator>{_init});
      this->mode_req_angular_velocity = false;
      this->mode_req_attitude = false;
      this->mode_req_local_alt = false;
      this->mode_req_local_position = false;
      this->mode_req_local_position_relaxed = false;
      this->mode_req_global_position = false;
      this->mode_req_mission = false;
      this->mode_req_home_position = false;
      this->mode_req_prevent_arming = false;
      this->mode_req_manual_control = false;
    }
  }

  explicit ArmingCheckReply_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : events(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0;
      this->registration_id = 0;
      this->health_component_index = 0;
      this->health_component_is_present = false;
      this->health_component_warning = false;
      this->health_component_error = false;
      this->can_arm_and_run = false;
      this->num_events = 0;
      this->events.fill(px4_msgs::msg::Event_<ContainerAllocator>{_alloc, _init});
      this->mode_req_angular_velocity = false;
      this->mode_req_attitude = false;
      this->mode_req_local_alt = false;
      this->mode_req_local_position = false;
      this->mode_req_local_position_relaxed = false;
      this->mode_req_global_position = false;
      this->mode_req_mission = false;
      this->mode_req_home_position = false;
      this->mode_req_prevent_arming = false;
      this->mode_req_manual_control = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _request_id_type =
    uint8_t;
  _request_id_type request_id;
  using _registration_id_type =
    uint8_t;
  _registration_id_type registration_id;
  using _health_component_index_type =
    uint8_t;
  _health_component_index_type health_component_index;
  using _health_component_is_present_type =
    bool;
  _health_component_is_present_type health_component_is_present;
  using _health_component_warning_type =
    bool;
  _health_component_warning_type health_component_warning;
  using _health_component_error_type =
    bool;
  _health_component_error_type health_component_error;
  using _can_arm_and_run_type =
    bool;
  _can_arm_and_run_type can_arm_and_run;
  using _num_events_type =
    uint8_t;
  _num_events_type num_events;
  using _events_type =
    std::array<px4_msgs::msg::Event_<ContainerAllocator>, 5>;
  _events_type events;
  using _mode_req_angular_velocity_type =
    bool;
  _mode_req_angular_velocity_type mode_req_angular_velocity;
  using _mode_req_attitude_type =
    bool;
  _mode_req_attitude_type mode_req_attitude;
  using _mode_req_local_alt_type =
    bool;
  _mode_req_local_alt_type mode_req_local_alt;
  using _mode_req_local_position_type =
    bool;
  _mode_req_local_position_type mode_req_local_position;
  using _mode_req_local_position_relaxed_type =
    bool;
  _mode_req_local_position_relaxed_type mode_req_local_position_relaxed;
  using _mode_req_global_position_type =
    bool;
  _mode_req_global_position_type mode_req_global_position;
  using _mode_req_mission_type =
    bool;
  _mode_req_mission_type mode_req_mission;
  using _mode_req_home_position_type =
    bool;
  _mode_req_home_position_type mode_req_home_position;
  using _mode_req_prevent_arming_type =
    bool;
  _mode_req_prevent_arming_type mode_req_prevent_arming;
  using _mode_req_manual_control_type =
    bool;
  _mode_req_manual_control_type mode_req_manual_control;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint8_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__registration_id(
    const uint8_t & _arg)
  {
    this->registration_id = _arg;
    return *this;
  }
  Type & set__health_component_index(
    const uint8_t & _arg)
  {
    this->health_component_index = _arg;
    return *this;
  }
  Type & set__health_component_is_present(
    const bool & _arg)
  {
    this->health_component_is_present = _arg;
    return *this;
  }
  Type & set__health_component_warning(
    const bool & _arg)
  {
    this->health_component_warning = _arg;
    return *this;
  }
  Type & set__health_component_error(
    const bool & _arg)
  {
    this->health_component_error = _arg;
    return *this;
  }
  Type & set__can_arm_and_run(
    const bool & _arg)
  {
    this->can_arm_and_run = _arg;
    return *this;
  }
  Type & set__num_events(
    const uint8_t & _arg)
  {
    this->num_events = _arg;
    return *this;
  }
  Type & set__events(
    const std::array<px4_msgs::msg::Event_<ContainerAllocator>, 5> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__mode_req_angular_velocity(
    const bool & _arg)
  {
    this->mode_req_angular_velocity = _arg;
    return *this;
  }
  Type & set__mode_req_attitude(
    const bool & _arg)
  {
    this->mode_req_attitude = _arg;
    return *this;
  }
  Type & set__mode_req_local_alt(
    const bool & _arg)
  {
    this->mode_req_local_alt = _arg;
    return *this;
  }
  Type & set__mode_req_local_position(
    const bool & _arg)
  {
    this->mode_req_local_position = _arg;
    return *this;
  }
  Type & set__mode_req_local_position_relaxed(
    const bool & _arg)
  {
    this->mode_req_local_position_relaxed = _arg;
    return *this;
  }
  Type & set__mode_req_global_position(
    const bool & _arg)
  {
    this->mode_req_global_position = _arg;
    return *this;
  }
  Type & set__mode_req_mission(
    const bool & _arg)
  {
    this->mode_req_mission = _arg;
    return *this;
  }
  Type & set__mode_req_home_position(
    const bool & _arg)
  {
    this->mode_req_home_position = _arg;
    return *this;
  }
  Type & set__mode_req_prevent_arming(
    const bool & _arg)
  {
    this->mode_req_prevent_arming = _arg;
    return *this;
  }
  Type & set__mode_req_manual_control(
    const bool & _arg)
  {
    this->mode_req_manual_control = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HEALTH_COMPONENT_INDEX_NONE =
    0u;
  static constexpr uint8_t HEALTH_COMPONENT_INDEX_AVOIDANCE =
    19u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ArmingCheckReply
    std::shared_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ArmingCheckReply
    std::shared_ptr<px4_msgs::msg::ArmingCheckReply_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmingCheckReply_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->registration_id != other.registration_id) {
      return false;
    }
    if (this->health_component_index != other.health_component_index) {
      return false;
    }
    if (this->health_component_is_present != other.health_component_is_present) {
      return false;
    }
    if (this->health_component_warning != other.health_component_warning) {
      return false;
    }
    if (this->health_component_error != other.health_component_error) {
      return false;
    }
    if (this->can_arm_and_run != other.can_arm_and_run) {
      return false;
    }
    if (this->num_events != other.num_events) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->mode_req_angular_velocity != other.mode_req_angular_velocity) {
      return false;
    }
    if (this->mode_req_attitude != other.mode_req_attitude) {
      return false;
    }
    if (this->mode_req_local_alt != other.mode_req_local_alt) {
      return false;
    }
    if (this->mode_req_local_position != other.mode_req_local_position) {
      return false;
    }
    if (this->mode_req_local_position_relaxed != other.mode_req_local_position_relaxed) {
      return false;
    }
    if (this->mode_req_global_position != other.mode_req_global_position) {
      return false;
    }
    if (this->mode_req_mission != other.mode_req_mission) {
      return false;
    }
    if (this->mode_req_home_position != other.mode_req_home_position) {
      return false;
    }
    if (this->mode_req_prevent_arming != other.mode_req_prevent_arming) {
      return false;
    }
    if (this->mode_req_manual_control != other.mode_req_manual_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmingCheckReply_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmingCheckReply_

// alias to use template instance with default allocator
using ArmingCheckReply =
  px4_msgs::msg::ArmingCheckReply_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmingCheckReply_<ContainerAllocator>::HEALTH_COMPONENT_INDEX_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmingCheckReply_<ContainerAllocator>::HEALTH_COMPONENT_INDEX_AVOIDANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmingCheckReply_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_HPP_
