// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_last_error_time
{
public:
  explicit Init_VehicleState_last_error_time(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::VehicleState last_error_time(::imc_ros_msgs::msg::VehicleState::_last_error_time_type arg)
  {
    msg_.last_error_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_last_error
{
public:
  explicit Init_VehicleState_last_error(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_last_error_time last_error(::imc_ros_msgs::msg::VehicleState::_last_error_type arg)
  {
    msg_.last_error = std::move(arg);
    return Init_VehicleState_last_error_time(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_flags
{
public:
  explicit Init_VehicleState_flags(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_last_error flags(::imc_ros_msgs::msg::VehicleState::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_VehicleState_last_error(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_control_loops
{
public:
  explicit Init_VehicleState_control_loops(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_flags control_loops(::imc_ros_msgs::msg::VehicleState::_control_loops_type arg)
  {
    msg_.control_loops = std::move(arg);
    return Init_VehicleState_flags(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_maneuver_eta
{
public:
  explicit Init_VehicleState_maneuver_eta(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_control_loops maneuver_eta(::imc_ros_msgs::msg::VehicleState::_maneuver_eta_type arg)
  {
    msg_.maneuver_eta = std::move(arg);
    return Init_VehicleState_control_loops(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_maneuver_stime
{
public:
  explicit Init_VehicleState_maneuver_stime(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_maneuver_eta maneuver_stime(::imc_ros_msgs::msg::VehicleState::_maneuver_stime_type arg)
  {
    msg_.maneuver_stime = std::move(arg);
    return Init_VehicleState_maneuver_eta(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_maneuver_type
{
public:
  explicit Init_VehicleState_maneuver_type(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_maneuver_stime maneuver_type(::imc_ros_msgs::msg::VehicleState::_maneuver_type_type arg)
  {
    msg_.maneuver_type = std::move(arg);
    return Init_VehicleState_maneuver_stime(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_error_ents
{
public:
  explicit Init_VehicleState_error_ents(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_maneuver_type error_ents(::imc_ros_msgs::msg::VehicleState::_error_ents_type arg)
  {
    msg_.error_ents = std::move(arg);
    return Init_VehicleState_maneuver_type(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_error_count
{
public:
  explicit Init_VehicleState_error_count(::imc_ros_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_error_ents error_count(::imc_ros_msgs::msg::VehicleState::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return Init_VehicleState_error_ents(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_op_mode
{
public:
  Init_VehicleState_op_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_error_count op_mode(::imc_ros_msgs::msg::VehicleState::_op_mode_type arg)
  {
    msg_.op_mode = std::move(arg);
    return Init_VehicleState_error_count(msg_);
  }

private:
  ::imc_ros_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::VehicleState>()
{
  return imc_ros_msgs::msg::builder::Init_VehicleState_op_mode();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
