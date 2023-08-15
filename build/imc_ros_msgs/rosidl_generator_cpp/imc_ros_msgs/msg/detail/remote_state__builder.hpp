// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/RemoteState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/remote_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_RemoteState_psi
{
public:
  explicit Init_RemoteState_psi(::imc_ros_msgs::msg::RemoteState & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::RemoteState psi(::imc_ros_msgs::msg::RemoteState::_psi_type arg)
  {
    msg_.psi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::RemoteState msg_;
};

class Init_RemoteState_speed
{
public:
  explicit Init_RemoteState_speed(::imc_ros_msgs::msg::RemoteState & msg)
  : msg_(msg)
  {}
  Init_RemoteState_psi speed(::imc_ros_msgs::msg::RemoteState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RemoteState_psi(msg_);
  }

private:
  ::imc_ros_msgs::msg::RemoteState msg_;
};

class Init_RemoteState_depth
{
public:
  explicit Init_RemoteState_depth(::imc_ros_msgs::msg::RemoteState & msg)
  : msg_(msg)
  {}
  Init_RemoteState_speed depth(::imc_ros_msgs::msg::RemoteState::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_RemoteState_speed(msg_);
  }

private:
  ::imc_ros_msgs::msg::RemoteState msg_;
};

class Init_RemoteState_lon
{
public:
  explicit Init_RemoteState_lon(::imc_ros_msgs::msg::RemoteState & msg)
  : msg_(msg)
  {}
  Init_RemoteState_depth lon(::imc_ros_msgs::msg::RemoteState::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_RemoteState_depth(msg_);
  }

private:
  ::imc_ros_msgs::msg::RemoteState msg_;
};

class Init_RemoteState_lat
{
public:
  Init_RemoteState_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteState_lon lat(::imc_ros_msgs::msg::RemoteState::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_RemoteState_lon(msg_);
  }

private:
  ::imc_ros_msgs::msg::RemoteState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::RemoteState>()
{
  return imc_ros_msgs::msg::builder::Init_RemoteState_lat();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__BUILDER_HPP_
