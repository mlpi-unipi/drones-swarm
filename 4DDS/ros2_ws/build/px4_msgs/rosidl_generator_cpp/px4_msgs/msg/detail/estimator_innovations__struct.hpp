// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorInnovations.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorInnovations __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorInnovations __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorInnovations_
{
  using Type = EstimatorInnovations_<ContainerAllocator>;

  explicit EstimatorInnovations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->gps_hvel.begin(), this->gps_hvel.end(), 0.0f);
      this->gps_vvel = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->gps_hpos.begin(), this->gps_hpos.end(), 0.0f);
      this->gps_vpos = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->ev_hvel.begin(), this->ev_hvel.end(), 0.0f);
      this->ev_vvel = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->ev_hpos.begin(), this->ev_hpos.end(), 0.0f);
      this->ev_vpos = 0.0f;
      this->rng_vpos = 0.0f;
      this->baro_vpos = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->aux_hvel.begin(), this->aux_hvel.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->flow.begin(), this->flow.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->terr_flow.begin(), this->terr_flow.end(), 0.0f);
      this->heading = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_field.begin(), this->mag_field.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gravity.begin(), this->gravity.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->drag.begin(), this->drag.end(), 0.0f);
      this->airspeed = 0.0f;
      this->beta = 0.0f;
      this->hagl = 0.0f;
      this->hagl_rate = 0.0f;
    }
  }

  explicit EstimatorInnovations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_hvel(_alloc),
    gps_hpos(_alloc),
    ev_hvel(_alloc),
    ev_hpos(_alloc),
    aux_hvel(_alloc),
    flow(_alloc),
    terr_flow(_alloc),
    mag_field(_alloc),
    gravity(_alloc),
    drag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->gps_hvel.begin(), this->gps_hvel.end(), 0.0f);
      this->gps_vvel = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->gps_hpos.begin(), this->gps_hpos.end(), 0.0f);
      this->gps_vpos = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->ev_hvel.begin(), this->ev_hvel.end(), 0.0f);
      this->ev_vvel = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->ev_hpos.begin(), this->ev_hpos.end(), 0.0f);
      this->ev_vpos = 0.0f;
      this->rng_vpos = 0.0f;
      this->baro_vpos = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->aux_hvel.begin(), this->aux_hvel.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->flow.begin(), this->flow.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->terr_flow.begin(), this->terr_flow.end(), 0.0f);
      this->heading = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_field.begin(), this->mag_field.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gravity.begin(), this->gravity.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->drag.begin(), this->drag.end(), 0.0f);
      this->airspeed = 0.0f;
      this->beta = 0.0f;
      this->hagl = 0.0f;
      this->hagl_rate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _gps_hvel_type =
    std::array<float, 2>;
  _gps_hvel_type gps_hvel;
  using _gps_vvel_type =
    float;
  _gps_vvel_type gps_vvel;
  using _gps_hpos_type =
    std::array<float, 2>;
  _gps_hpos_type gps_hpos;
  using _gps_vpos_type =
    float;
  _gps_vpos_type gps_vpos;
  using _ev_hvel_type =
    std::array<float, 2>;
  _ev_hvel_type ev_hvel;
  using _ev_vvel_type =
    float;
  _ev_vvel_type ev_vvel;
  using _ev_hpos_type =
    std::array<float, 2>;
  _ev_hpos_type ev_hpos;
  using _ev_vpos_type =
    float;
  _ev_vpos_type ev_vpos;
  using _rng_vpos_type =
    float;
  _rng_vpos_type rng_vpos;
  using _baro_vpos_type =
    float;
  _baro_vpos_type baro_vpos;
  using _aux_hvel_type =
    std::array<float, 2>;
  _aux_hvel_type aux_hvel;
  using _flow_type =
    std::array<float, 2>;
  _flow_type flow;
  using _terr_flow_type =
    std::array<float, 2>;
  _terr_flow_type terr_flow;
  using _heading_type =
    float;
  _heading_type heading;
  using _mag_field_type =
    std::array<float, 3>;
  _mag_field_type mag_field;
  using _gravity_type =
    std::array<float, 3>;
  _gravity_type gravity;
  using _drag_type =
    std::array<float, 2>;
  _drag_type drag;
  using _airspeed_type =
    float;
  _airspeed_type airspeed;
  using _beta_type =
    float;
  _beta_type beta;
  using _hagl_type =
    float;
  _hagl_type hagl;
  using _hagl_rate_type =
    float;
  _hagl_rate_type hagl_rate;

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
  Type & set__gps_hvel(
    const std::array<float, 2> & _arg)
  {
    this->gps_hvel = _arg;
    return *this;
  }
  Type & set__gps_vvel(
    const float & _arg)
  {
    this->gps_vvel = _arg;
    return *this;
  }
  Type & set__gps_hpos(
    const std::array<float, 2> & _arg)
  {
    this->gps_hpos = _arg;
    return *this;
  }
  Type & set__gps_vpos(
    const float & _arg)
  {
    this->gps_vpos = _arg;
    return *this;
  }
  Type & set__ev_hvel(
    const std::array<float, 2> & _arg)
  {
    this->ev_hvel = _arg;
    return *this;
  }
  Type & set__ev_vvel(
    const float & _arg)
  {
    this->ev_vvel = _arg;
    return *this;
  }
  Type & set__ev_hpos(
    const std::array<float, 2> & _arg)
  {
    this->ev_hpos = _arg;
    return *this;
  }
  Type & set__ev_vpos(
    const float & _arg)
  {
    this->ev_vpos = _arg;
    return *this;
  }
  Type & set__rng_vpos(
    const float & _arg)
  {
    this->rng_vpos = _arg;
    return *this;
  }
  Type & set__baro_vpos(
    const float & _arg)
  {
    this->baro_vpos = _arg;
    return *this;
  }
  Type & set__aux_hvel(
    const std::array<float, 2> & _arg)
  {
    this->aux_hvel = _arg;
    return *this;
  }
  Type & set__flow(
    const std::array<float, 2> & _arg)
  {
    this->flow = _arg;
    return *this;
  }
  Type & set__terr_flow(
    const std::array<float, 2> & _arg)
  {
    this->terr_flow = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__mag_field(
    const std::array<float, 3> & _arg)
  {
    this->mag_field = _arg;
    return *this;
  }
  Type & set__gravity(
    const std::array<float, 3> & _arg)
  {
    this->gravity = _arg;
    return *this;
  }
  Type & set__drag(
    const std::array<float, 2> & _arg)
  {
    this->drag = _arg;
    return *this;
  }
  Type & set__airspeed(
    const float & _arg)
  {
    this->airspeed = _arg;
    return *this;
  }
  Type & set__beta(
    const float & _arg)
  {
    this->beta = _arg;
    return *this;
  }
  Type & set__hagl(
    const float & _arg)
  {
    this->hagl = _arg;
    return *this;
  }
  Type & set__hagl_rate(
    const float & _arg)
  {
    this->hagl_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorInnovations
    std::shared_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorInnovations
    std::shared_ptr<px4_msgs::msg::EstimatorInnovations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorInnovations_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->gps_hvel != other.gps_hvel) {
      return false;
    }
    if (this->gps_vvel != other.gps_vvel) {
      return false;
    }
    if (this->gps_hpos != other.gps_hpos) {
      return false;
    }
    if (this->gps_vpos != other.gps_vpos) {
      return false;
    }
    if (this->ev_hvel != other.ev_hvel) {
      return false;
    }
    if (this->ev_vvel != other.ev_vvel) {
      return false;
    }
    if (this->ev_hpos != other.ev_hpos) {
      return false;
    }
    if (this->ev_vpos != other.ev_vpos) {
      return false;
    }
    if (this->rng_vpos != other.rng_vpos) {
      return false;
    }
    if (this->baro_vpos != other.baro_vpos) {
      return false;
    }
    if (this->aux_hvel != other.aux_hvel) {
      return false;
    }
    if (this->flow != other.flow) {
      return false;
    }
    if (this->terr_flow != other.terr_flow) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->mag_field != other.mag_field) {
      return false;
    }
    if (this->gravity != other.gravity) {
      return false;
    }
    if (this->drag != other.drag) {
      return false;
    }
    if (this->airspeed != other.airspeed) {
      return false;
    }
    if (this->beta != other.beta) {
      return false;
    }
    if (this->hagl != other.hagl) {
      return false;
    }
    if (this->hagl_rate != other.hagl_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorInnovations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorInnovations_

// alias to use template instance with default allocator
using EstimatorInnovations =
  px4_msgs::msg::EstimatorInnovations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__STRUCT_HPP_
