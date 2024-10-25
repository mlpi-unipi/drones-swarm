// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DatamanResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/dataman_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DatamanResponse_status
{
public:
  explicit Init_DatamanResponse_status(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DatamanResponse status(::px4_msgs::msg::DatamanResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_data
{
public:
  explicit Init_DatamanResponse_data(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  Init_DatamanResponse_status data(::px4_msgs::msg::DatamanResponse::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_DatamanResponse_status(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_index
{
public:
  explicit Init_DatamanResponse_index(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  Init_DatamanResponse_data index(::px4_msgs::msg::DatamanResponse::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DatamanResponse_data(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_item
{
public:
  explicit Init_DatamanResponse_item(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  Init_DatamanResponse_index item(::px4_msgs::msg::DatamanResponse::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_DatamanResponse_index(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_request_type
{
public:
  explicit Init_DatamanResponse_request_type(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  Init_DatamanResponse_item request_type(::px4_msgs::msg::DatamanResponse::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_DatamanResponse_item(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_client_id
{
public:
  explicit Init_DatamanResponse_client_id(::px4_msgs::msg::DatamanResponse & msg)
  : msg_(msg)
  {}
  Init_DatamanResponse_request_type client_id(::px4_msgs::msg::DatamanResponse::_client_id_type arg)
  {
    msg_.client_id = std::move(arg);
    return Init_DatamanResponse_request_type(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

class Init_DatamanResponse_timestamp
{
public:
  Init_DatamanResponse_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DatamanResponse_client_id timestamp(::px4_msgs::msg::DatamanResponse::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DatamanResponse_client_id(msg_);
  }

private:
  ::px4_msgs::msg::DatamanResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DatamanResponse>()
{
  return px4_msgs::msg::builder::Init_DatamanResponse_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__BUILDER_HPP_
