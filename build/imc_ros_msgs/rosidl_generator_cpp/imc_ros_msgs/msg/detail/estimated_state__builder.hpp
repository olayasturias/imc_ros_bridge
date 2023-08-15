// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/estimated_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatedState_alt
{
public:
  explicit Init_EstimatedState_alt(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::EstimatedState alt(::imc_ros_msgs::msg::EstimatedState::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_depth
{
public:
  explicit Init_EstimatedState_depth(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_alt depth(::imc_ros_msgs::msg::EstimatedState::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_EstimatedState_alt(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_r
{
public:
  explicit Init_EstimatedState_r(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_depth r(::imc_ros_msgs::msg::EstimatedState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_EstimatedState_depth(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_q
{
public:
  explicit Init_EstimatedState_q(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_r q(::imc_ros_msgs::msg::EstimatedState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_EstimatedState_r(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_p
{
public:
  explicit Init_EstimatedState_p(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_q p(::imc_ros_msgs::msg::EstimatedState::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_EstimatedState_q(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_vz
{
public:
  explicit Init_EstimatedState_vz(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_p vz(::imc_ros_msgs::msg::EstimatedState::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_EstimatedState_p(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_vy
{
public:
  explicit Init_EstimatedState_vy(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_vz vy(::imc_ros_msgs::msg::EstimatedState::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_EstimatedState_vz(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_vx
{
public:
  explicit Init_EstimatedState_vx(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_vy vx(::imc_ros_msgs::msg::EstimatedState::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_EstimatedState_vy(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_w
{
public:
  explicit Init_EstimatedState_w(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_vx w(::imc_ros_msgs::msg::EstimatedState::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_EstimatedState_vx(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_v
{
public:
  explicit Init_EstimatedState_v(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_w v(::imc_ros_msgs::msg::EstimatedState::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_EstimatedState_w(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_u
{
public:
  explicit Init_EstimatedState_u(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_v u(::imc_ros_msgs::msg::EstimatedState::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_EstimatedState_v(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_psi
{
public:
  explicit Init_EstimatedState_psi(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_u psi(::imc_ros_msgs::msg::EstimatedState::_psi_type arg)
  {
    msg_.psi = std::move(arg);
    return Init_EstimatedState_u(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_theta
{
public:
  explicit Init_EstimatedState_theta(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_psi theta(::imc_ros_msgs::msg::EstimatedState::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_EstimatedState_psi(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_phi
{
public:
  explicit Init_EstimatedState_phi(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_theta phi(::imc_ros_msgs::msg::EstimatedState::_phi_type arg)
  {
    msg_.phi = std::move(arg);
    return Init_EstimatedState_theta(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_z
{
public:
  explicit Init_EstimatedState_z(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_phi z(::imc_ros_msgs::msg::EstimatedState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EstimatedState_phi(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_y
{
public:
  explicit Init_EstimatedState_y(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_z y(::imc_ros_msgs::msg::EstimatedState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EstimatedState_z(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_x
{
public:
  explicit Init_EstimatedState_x(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_y x(::imc_ros_msgs::msg::EstimatedState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EstimatedState_y(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_height
{
public:
  explicit Init_EstimatedState_height(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_x height(::imc_ros_msgs::msg::EstimatedState::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_EstimatedState_x(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_lon
{
public:
  explicit Init_EstimatedState_lon(::imc_ros_msgs::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_height lon(::imc_ros_msgs::msg::EstimatedState::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_EstimatedState_height(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

class Init_EstimatedState_lat
{
public:
  Init_EstimatedState_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatedState_lon lat(::imc_ros_msgs::msg::EstimatedState::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_EstimatedState_lon(msg_);
  }

private:
  ::imc_ros_msgs::msg::EstimatedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::EstimatedState>()
{
  return imc_ros_msgs::msg::builder::Init_EstimatedState_lat();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_
