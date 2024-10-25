// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/camera_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCapture_result
{
public:
  explicit Init_CameraCapture_result(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CameraCapture result(::px4_msgs::msg::CameraCapture::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_q
{
public:
  explicit Init_CameraCapture_q(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_result q(::px4_msgs::msg::CameraCapture::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_CameraCapture_result(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_ground_distance
{
public:
  explicit Init_CameraCapture_ground_distance(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_q ground_distance(::px4_msgs::msg::CameraCapture::_ground_distance_type arg)
  {
    msg_.ground_distance = std::move(arg);
    return Init_CameraCapture_q(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_alt
{
public:
  explicit Init_CameraCapture_alt(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_ground_distance alt(::px4_msgs::msg::CameraCapture::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_CameraCapture_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_lon
{
public:
  explicit Init_CameraCapture_lon(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_alt lon(::px4_msgs::msg::CameraCapture::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_CameraCapture_alt(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_lat
{
public:
  explicit Init_CameraCapture_lat(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_lon lat(::px4_msgs::msg::CameraCapture::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_CameraCapture_lon(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_seq
{
public:
  explicit Init_CameraCapture_seq(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_lat seq(::px4_msgs::msg::CameraCapture::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_CameraCapture_lat(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_timestamp_utc
{
public:
  explicit Init_CameraCapture_timestamp_utc(::px4_msgs::msg::CameraCapture & msg)
  : msg_(msg)
  {}
  Init_CameraCapture_seq timestamp_utc(::px4_msgs::msg::CameraCapture::_timestamp_utc_type arg)
  {
    msg_.timestamp_utc = std::move(arg);
    return Init_CameraCapture_seq(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

class Init_CameraCapture_timestamp
{
public:
  Init_CameraCapture_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCapture_timestamp_utc timestamp(::px4_msgs::msg::CameraCapture::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraCapture_timestamp_utc(msg_);
  }

private:
  ::px4_msgs::msg::CameraCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CameraCapture>()
{
  return px4_msgs::msg::builder::Init_CameraCapture_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_CAPTURE__BUILDER_HPP_
