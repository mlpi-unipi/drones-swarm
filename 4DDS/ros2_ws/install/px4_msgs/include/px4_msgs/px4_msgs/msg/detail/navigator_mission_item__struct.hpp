// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__NavigatorMissionItem __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__NavigatorMissionItem __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigatorMissionItem_
{
  using Type = NavigatorMissionItem_<ContainerAllocator>;

  explicit NavigatorMissionItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance_count = 0ul;
      this->sequence_current = 0;
      this->nav_cmd = 0;
      this->latitude = 0.0f;
      this->longitude = 0.0f;
      this->time_inside = 0.0f;
      this->acceptance_radius = 0.0f;
      this->loiter_radius = 0.0f;
      this->yaw = 0.0f;
      this->altitude = 0.0f;
      this->frame = 0;
      this->origin = 0;
      this->loiter_exit_xtrack = false;
      this->force_heading = false;
      this->altitude_is_relative = false;
      this->autocontinue = false;
      this->vtol_back_transition = false;
    }
  }

  explicit NavigatorMissionItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance_count = 0ul;
      this->sequence_current = 0;
      this->nav_cmd = 0;
      this->latitude = 0.0f;
      this->longitude = 0.0f;
      this->time_inside = 0.0f;
      this->acceptance_radius = 0.0f;
      this->loiter_radius = 0.0f;
      this->yaw = 0.0f;
      this->altitude = 0.0f;
      this->frame = 0;
      this->origin = 0;
      this->loiter_exit_xtrack = false;
      this->force_heading = false;
      this->altitude_is_relative = false;
      this->autocontinue = false;
      this->vtol_back_transition = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _instance_count_type =
    uint32_t;
  _instance_count_type instance_count;
  using _sequence_current_type =
    uint16_t;
  _sequence_current_type sequence_current;
  using _nav_cmd_type =
    uint16_t;
  _nav_cmd_type nav_cmd;
  using _latitude_type =
    float;
  _latitude_type latitude;
  using _longitude_type =
    float;
  _longitude_type longitude;
  using _time_inside_type =
    float;
  _time_inside_type time_inside;
  using _acceptance_radius_type =
    float;
  _acceptance_radius_type acceptance_radius;
  using _loiter_radius_type =
    float;
  _loiter_radius_type loiter_radius;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _frame_type =
    uint8_t;
  _frame_type frame;
  using _origin_type =
    uint8_t;
  _origin_type origin;
  using _loiter_exit_xtrack_type =
    bool;
  _loiter_exit_xtrack_type loiter_exit_xtrack;
  using _force_heading_type =
    bool;
  _force_heading_type force_heading;
  using _altitude_is_relative_type =
    bool;
  _altitude_is_relative_type altitude_is_relative;
  using _autocontinue_type =
    bool;
  _autocontinue_type autocontinue;
  using _vtol_back_transition_type =
    bool;
  _vtol_back_transition_type vtol_back_transition;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__instance_count(
    const uint32_t & _arg)
  {
    this->instance_count = _arg;
    return *this;
  }
  Type & set__sequence_current(
    const uint16_t & _arg)
  {
    this->sequence_current = _arg;
    return *this;
  }
  Type & set__nav_cmd(
    const uint16_t & _arg)
  {
    this->nav_cmd = _arg;
    return *this;
  }
  Type & set__latitude(
    const float & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const float & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__time_inside(
    const float & _arg)
  {
    this->time_inside = _arg;
    return *this;
  }
  Type & set__acceptance_radius(
    const float & _arg)
  {
    this->acceptance_radius = _arg;
    return *this;
  }
  Type & set__loiter_radius(
    const float & _arg)
  {
    this->loiter_radius = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__frame(
    const uint8_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__origin(
    const uint8_t & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__loiter_exit_xtrack(
    const bool & _arg)
  {
    this->loiter_exit_xtrack = _arg;
    return *this;
  }
  Type & set__force_heading(
    const bool & _arg)
  {
    this->force_heading = _arg;
    return *this;
  }
  Type & set__altitude_is_relative(
    const bool & _arg)
  {
    this->altitude_is_relative = _arg;
    return *this;
  }
  Type & set__autocontinue(
    const bool & _arg)
  {
    this->autocontinue = _arg;
    return *this;
  }
  Type & set__vtol_back_transition(
    const bool & _arg)
  {
    this->vtol_back_transition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__NavigatorMissionItem
    std::shared_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__NavigatorMissionItem
    std::shared_ptr<px4_msgs::msg::NavigatorMissionItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatorMissionItem_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->instance_count != other.instance_count) {
      return false;
    }
    if (this->sequence_current != other.sequence_current) {
      return false;
    }
    if (this->nav_cmd != other.nav_cmd) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->time_inside != other.time_inside) {
      return false;
    }
    if (this->acceptance_radius != other.acceptance_radius) {
      return false;
    }
    if (this->loiter_radius != other.loiter_radius) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->loiter_exit_xtrack != other.loiter_exit_xtrack) {
      return false;
    }
    if (this->force_heading != other.force_heading) {
      return false;
    }
    if (this->altitude_is_relative != other.altitude_is_relative) {
      return false;
    }
    if (this->autocontinue != other.autocontinue) {
      return false;
    }
    if (this->vtol_back_transition != other.vtol_back_transition) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatorMissionItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatorMissionItem_

// alias to use template instance with default allocator
using NavigatorMissionItem =
  px4_msgs::msg::NavigatorMissionItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__STRUCT_HPP_
