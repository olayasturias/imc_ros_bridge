// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_control_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanControlState_last_outcome
{
public:
  explicit Init_PlanControlState_last_outcome(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanControlState last_outcome(::imc_ros_msgs::msg::PlanControlState::_last_outcome_type arg)
  {
    msg_.last_outcome = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_man_eta
{
public:
  explicit Init_PlanControlState_man_eta(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_last_outcome man_eta(::imc_ros_msgs::msg::PlanControlState::_man_eta_type arg)
  {
    msg_.man_eta = std::move(arg);
    return Init_PlanControlState_last_outcome(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_man_type
{
public:
  explicit Init_PlanControlState_man_type(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_man_eta man_type(::imc_ros_msgs::msg::PlanControlState::_man_type_type arg)
  {
    msg_.man_type = std::move(arg);
    return Init_PlanControlState_man_eta(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_man_id
{
public:
  explicit Init_PlanControlState_man_id(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_man_type man_id(::imc_ros_msgs::msg::PlanControlState::_man_id_type arg)
  {
    msg_.man_id = std::move(arg);
    return Init_PlanControlState_man_type(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_plan_progress
{
public:
  explicit Init_PlanControlState_plan_progress(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_man_id plan_progress(::imc_ros_msgs::msg::PlanControlState::_plan_progress_type arg)
  {
    msg_.plan_progress = std::move(arg);
    return Init_PlanControlState_man_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_plan_eta
{
public:
  explicit Init_PlanControlState_plan_eta(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_plan_progress plan_eta(::imc_ros_msgs::msg::PlanControlState::_plan_eta_type arg)
  {
    msg_.plan_eta = std::move(arg);
    return Init_PlanControlState_plan_progress(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_plan_id
{
public:
  explicit Init_PlanControlState_plan_id(::imc_ros_msgs::msg::PlanControlState & msg)
  : msg_(msg)
  {}
  Init_PlanControlState_plan_eta plan_id(::imc_ros_msgs::msg::PlanControlState::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_PlanControlState_plan_eta(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

class Init_PlanControlState_state
{
public:
  Init_PlanControlState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanControlState_plan_id state(::imc_ros_msgs::msg::PlanControlState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_PlanControlState_plan_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControlState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanControlState>()
{
  return imc_ros_msgs::msg::builder::Init_PlanControlState_state();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__BUILDER_HPP_
