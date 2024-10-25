// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleLocalPosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleLocalPosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLocalPosition_
{
  using Type = VehicleLocalPosition_<ContainerAllocator>;

  explicit VehicleLocalPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->xy_valid = false;
      this->z_valid = false;
      this->v_xy_valid = false;
      this->v_z_valid = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->delta_xy.begin(), this->delta_xy.end(), 0.0f);
      this->xy_reset_counter = 0;
      this->delta_z = 0.0f;
      this->z_reset_counter = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->z_deriv = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->delta_vxy.begin(), this->delta_vxy.end(), 0.0f);
      this->vxy_reset_counter = 0;
      this->delta_vz = 0.0f;
      this->vz_reset_counter = 0;
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->heading = 0.0f;
      this->heading_var = 0.0f;
      this->unaided_heading = 0.0f;
      this->delta_heading = 0.0f;
      this->heading_reset_counter = 0;
      this->heading_good_for_control = false;
      this->tilt_var = 0.0f;
      this->xy_global = false;
      this->z_global = false;
      this->ref_timestamp = 0ull;
      this->ref_lat = 0.0;
      this->ref_lon = 0.0;
      this->ref_alt = 0.0f;
      this->dist_bottom = 0.0f;
      this->dist_bottom_valid = false;
      this->dist_bottom_sensor_bitfield = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->evh = 0.0f;
      this->evv = 0.0f;
      this->dead_reckoning = false;
      this->vxy_max = 0.0f;
      this->vz_max = 0.0f;
      this->hagl_min = 0.0f;
      this->hagl_max = 0.0f;
    }
  }

  explicit VehicleLocalPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta_xy(_alloc),
    delta_vxy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->xy_valid = false;
      this->z_valid = false;
      this->v_xy_valid = false;
      this->v_z_valid = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->delta_xy.begin(), this->delta_xy.end(), 0.0f);
      this->xy_reset_counter = 0;
      this->delta_z = 0.0f;
      this->z_reset_counter = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->z_deriv = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->delta_vxy.begin(), this->delta_vxy.end(), 0.0f);
      this->vxy_reset_counter = 0;
      this->delta_vz = 0.0f;
      this->vz_reset_counter = 0;
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->heading = 0.0f;
      this->heading_var = 0.0f;
      this->unaided_heading = 0.0f;
      this->delta_heading = 0.0f;
      this->heading_reset_counter = 0;
      this->heading_good_for_control = false;
      this->tilt_var = 0.0f;
      this->xy_global = false;
      this->z_global = false;
      this->ref_timestamp = 0ull;
      this->ref_lat = 0.0;
      this->ref_lon = 0.0;
      this->ref_alt = 0.0f;
      this->dist_bottom = 0.0f;
      this->dist_bottom_valid = false;
      this->dist_bottom_sensor_bitfield = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->evh = 0.0f;
      this->evv = 0.0f;
      this->dead_reckoning = false;
      this->vxy_max = 0.0f;
      this->vz_max = 0.0f;
      this->hagl_min = 0.0f;
      this->hagl_max = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _xy_valid_type =
    bool;
  _xy_valid_type xy_valid;
  using _z_valid_type =
    bool;
  _z_valid_type z_valid;
  using _v_xy_valid_type =
    bool;
  _v_xy_valid_type v_xy_valid;
  using _v_z_valid_type =
    bool;
  _v_z_valid_type v_z_valid;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _delta_xy_type =
    std::array<float, 2>;
  _delta_xy_type delta_xy;
  using _xy_reset_counter_type =
    uint8_t;
  _xy_reset_counter_type xy_reset_counter;
  using _delta_z_type =
    float;
  _delta_z_type delta_z;
  using _z_reset_counter_type =
    uint8_t;
  _z_reset_counter_type z_reset_counter;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _z_deriv_type =
    float;
  _z_deriv_type z_deriv;
  using _delta_vxy_type =
    std::array<float, 2>;
  _delta_vxy_type delta_vxy;
  using _vxy_reset_counter_type =
    uint8_t;
  _vxy_reset_counter_type vxy_reset_counter;
  using _delta_vz_type =
    float;
  _delta_vz_type delta_vz;
  using _vz_reset_counter_type =
    uint8_t;
  _vz_reset_counter_type vz_reset_counter;
  using _ax_type =
    float;
  _ax_type ax;
  using _ay_type =
    float;
  _ay_type ay;
  using _az_type =
    float;
  _az_type az;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_var_type =
    float;
  _heading_var_type heading_var;
  using _unaided_heading_type =
    float;
  _unaided_heading_type unaided_heading;
  using _delta_heading_type =
    float;
  _delta_heading_type delta_heading;
  using _heading_reset_counter_type =
    uint8_t;
  _heading_reset_counter_type heading_reset_counter;
  using _heading_good_for_control_type =
    bool;
  _heading_good_for_control_type heading_good_for_control;
  using _tilt_var_type =
    float;
  _tilt_var_type tilt_var;
  using _xy_global_type =
    bool;
  _xy_global_type xy_global;
  using _z_global_type =
    bool;
  _z_global_type z_global;
  using _ref_timestamp_type =
    uint64_t;
  _ref_timestamp_type ref_timestamp;
  using _ref_lat_type =
    double;
  _ref_lat_type ref_lat;
  using _ref_lon_type =
    double;
  _ref_lon_type ref_lon;
  using _ref_alt_type =
    float;
  _ref_alt_type ref_alt;
  using _dist_bottom_type =
    float;
  _dist_bottom_type dist_bottom;
  using _dist_bottom_valid_type =
    bool;
  _dist_bottom_valid_type dist_bottom_valid;
  using _dist_bottom_sensor_bitfield_type =
    uint8_t;
  _dist_bottom_sensor_bitfield_type dist_bottom_sensor_bitfield;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _evh_type =
    float;
  _evh_type evh;
  using _evv_type =
    float;
  _evv_type evv;
  using _dead_reckoning_type =
    bool;
  _dead_reckoning_type dead_reckoning;
  using _vxy_max_type =
    float;
  _vxy_max_type vxy_max;
  using _vz_max_type =
    float;
  _vz_max_type vz_max;
  using _hagl_min_type =
    float;
  _hagl_min_type hagl_min;
  using _hagl_max_type =
    float;
  _hagl_max_type hagl_max;

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
  Type & set__xy_valid(
    const bool & _arg)
  {
    this->xy_valid = _arg;
    return *this;
  }
  Type & set__z_valid(
    const bool & _arg)
  {
    this->z_valid = _arg;
    return *this;
  }
  Type & set__v_xy_valid(
    const bool & _arg)
  {
    this->v_xy_valid = _arg;
    return *this;
  }
  Type & set__v_z_valid(
    const bool & _arg)
  {
    this->v_z_valid = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__delta_xy(
    const std::array<float, 2> & _arg)
  {
    this->delta_xy = _arg;
    return *this;
  }
  Type & set__xy_reset_counter(
    const uint8_t & _arg)
  {
    this->xy_reset_counter = _arg;
    return *this;
  }
  Type & set__delta_z(
    const float & _arg)
  {
    this->delta_z = _arg;
    return *this;
  }
  Type & set__z_reset_counter(
    const uint8_t & _arg)
  {
    this->z_reset_counter = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__z_deriv(
    const float & _arg)
  {
    this->z_deriv = _arg;
    return *this;
  }
  Type & set__delta_vxy(
    const std::array<float, 2> & _arg)
  {
    this->delta_vxy = _arg;
    return *this;
  }
  Type & set__vxy_reset_counter(
    const uint8_t & _arg)
  {
    this->vxy_reset_counter = _arg;
    return *this;
  }
  Type & set__delta_vz(
    const float & _arg)
  {
    this->delta_vz = _arg;
    return *this;
  }
  Type & set__vz_reset_counter(
    const uint8_t & _arg)
  {
    this->vz_reset_counter = _arg;
    return *this;
  }
  Type & set__ax(
    const float & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const float & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__az(
    const float & _arg)
  {
    this->az = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_var(
    const float & _arg)
  {
    this->heading_var = _arg;
    return *this;
  }
  Type & set__unaided_heading(
    const float & _arg)
  {
    this->unaided_heading = _arg;
    return *this;
  }
  Type & set__delta_heading(
    const float & _arg)
  {
    this->delta_heading = _arg;
    return *this;
  }
  Type & set__heading_reset_counter(
    const uint8_t & _arg)
  {
    this->heading_reset_counter = _arg;
    return *this;
  }
  Type & set__heading_good_for_control(
    const bool & _arg)
  {
    this->heading_good_for_control = _arg;
    return *this;
  }
  Type & set__tilt_var(
    const float & _arg)
  {
    this->tilt_var = _arg;
    return *this;
  }
  Type & set__xy_global(
    const bool & _arg)
  {
    this->xy_global = _arg;
    return *this;
  }
  Type & set__z_global(
    const bool & _arg)
  {
    this->z_global = _arg;
    return *this;
  }
  Type & set__ref_timestamp(
    const uint64_t & _arg)
  {
    this->ref_timestamp = _arg;
    return *this;
  }
  Type & set__ref_lat(
    const double & _arg)
  {
    this->ref_lat = _arg;
    return *this;
  }
  Type & set__ref_lon(
    const double & _arg)
  {
    this->ref_lon = _arg;
    return *this;
  }
  Type & set__ref_alt(
    const float & _arg)
  {
    this->ref_alt = _arg;
    return *this;
  }
  Type & set__dist_bottom(
    const float & _arg)
  {
    this->dist_bottom = _arg;
    return *this;
  }
  Type & set__dist_bottom_valid(
    const bool & _arg)
  {
    this->dist_bottom_valid = _arg;
    return *this;
  }
  Type & set__dist_bottom_sensor_bitfield(
    const uint8_t & _arg)
  {
    this->dist_bottom_sensor_bitfield = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__evh(
    const float & _arg)
  {
    this->evh = _arg;
    return *this;
  }
  Type & set__evv(
    const float & _arg)
  {
    this->evv = _arg;
    return *this;
  }
  Type & set__dead_reckoning(
    const bool & _arg)
  {
    this->dead_reckoning = _arg;
    return *this;
  }
  Type & set__vxy_max(
    const float & _arg)
  {
    this->vxy_max = _arg;
    return *this;
  }
  Type & set__vz_max(
    const float & _arg)
  {
    this->vz_max = _arg;
    return *this;
  }
  Type & set__hagl_min(
    const float & _arg)
  {
    this->hagl_min = _arg;
    return *this;
  }
  Type & set__hagl_max(
    const float & _arg)
  {
    this->hagl_max = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DIST_BOTTOM_SENSOR_NONE =
    0u;
  static constexpr uint8_t DIST_BOTTOM_SENSOR_RANGE =
    1u;
  static constexpr uint8_t DIST_BOTTOM_SENSOR_FLOW =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleLocalPosition
    std::shared_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleLocalPosition
    std::shared_ptr<px4_msgs::msg::VehicleLocalPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLocalPosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->xy_valid != other.xy_valid) {
      return false;
    }
    if (this->z_valid != other.z_valid) {
      return false;
    }
    if (this->v_xy_valid != other.v_xy_valid) {
      return false;
    }
    if (this->v_z_valid != other.v_z_valid) {
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
    if (this->delta_xy != other.delta_xy) {
      return false;
    }
    if (this->xy_reset_counter != other.xy_reset_counter) {
      return false;
    }
    if (this->delta_z != other.delta_z) {
      return false;
    }
    if (this->z_reset_counter != other.z_reset_counter) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->z_deriv != other.z_deriv) {
      return false;
    }
    if (this->delta_vxy != other.delta_vxy) {
      return false;
    }
    if (this->vxy_reset_counter != other.vxy_reset_counter) {
      return false;
    }
    if (this->delta_vz != other.delta_vz) {
      return false;
    }
    if (this->vz_reset_counter != other.vz_reset_counter) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_var != other.heading_var) {
      return false;
    }
    if (this->unaided_heading != other.unaided_heading) {
      return false;
    }
    if (this->delta_heading != other.delta_heading) {
      return false;
    }
    if (this->heading_reset_counter != other.heading_reset_counter) {
      return false;
    }
    if (this->heading_good_for_control != other.heading_good_for_control) {
      return false;
    }
    if (this->tilt_var != other.tilt_var) {
      return false;
    }
    if (this->xy_global != other.xy_global) {
      return false;
    }
    if (this->z_global != other.z_global) {
      return false;
    }
    if (this->ref_timestamp != other.ref_timestamp) {
      return false;
    }
    if (this->ref_lat != other.ref_lat) {
      return false;
    }
    if (this->ref_lon != other.ref_lon) {
      return false;
    }
    if (this->ref_alt != other.ref_alt) {
      return false;
    }
    if (this->dist_bottom != other.dist_bottom) {
      return false;
    }
    if (this->dist_bottom_valid != other.dist_bottom_valid) {
      return false;
    }
    if (this->dist_bottom_sensor_bitfield != other.dist_bottom_sensor_bitfield) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->evh != other.evh) {
      return false;
    }
    if (this->evv != other.evv) {
      return false;
    }
    if (this->dead_reckoning != other.dead_reckoning) {
      return false;
    }
    if (this->vxy_max != other.vxy_max) {
      return false;
    }
    if (this->vz_max != other.vz_max) {
      return false;
    }
    if (this->hagl_min != other.hagl_min) {
      return false;
    }
    if (this->hagl_max != other.hagl_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLocalPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLocalPosition_

// alias to use template instance with default allocator
using VehicleLocalPosition =
  px4_msgs::msg::VehicleLocalPosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLocalPosition_<ContainerAllocator>::DIST_BOTTOM_SENSOR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLocalPosition_<ContainerAllocator>::DIST_BOTTOM_SENSOR_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLocalPosition_<ContainerAllocator>::DIST_BOTTOM_SENSOR_FLOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__STRUCT_HPP_
