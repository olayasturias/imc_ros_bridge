// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanControl.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanControl_info
{
public:
  explicit Init_PlanControl_info(::imc_ros_msgs::msg::PlanControl & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanControl info(::imc_ros_msgs::msg::PlanControl::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

class Init_PlanControl_flags
{
public:
  explicit Init_PlanControl_flags(::imc_ros_msgs::msg::PlanControl & msg)
  : msg_(msg)
  {}
  Init_PlanControl_info flags(::imc_ros_msgs::msg::PlanControl::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_PlanControl_info(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

class Init_PlanControl_plan_id
{
public:
  explicit Init_PlanControl_plan_id(::imc_ros_msgs::msg::PlanControl & msg)
  : msg_(msg)
  {}
  Init_PlanControl_flags plan_id(::imc_ros_msgs::msg::PlanControl::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_PlanControl_flags(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

class Init_PlanControl_request_id
{
public:
  explicit Init_PlanControl_request_id(::imc_ros_msgs::msg::PlanControl & msg)
  : msg_(msg)
  {}
  Init_PlanControl_plan_id request_id(::imc_ros_msgs::msg::PlanControl::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_PlanControl_plan_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

class Init_PlanControl_op
{
public:
  explicit Init_PlanControl_op(::imc_ros_msgs::msg::PlanControl & msg)
  : msg_(msg)
  {}
  Init_PlanControl_request_id op(::imc_ros_msgs::msg::PlanControl::_op_type arg)
  {
    msg_.op = std::move(arg);
    return Init_PlanControl_request_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

class Init_PlanControl_type
{
public:
  Init_PlanControl_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanControl_op type(::imc_ros_msgs::msg::PlanControl::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PlanControl_op(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanControl>()
{
  return imc_ros_msgs::msg::builder::Init_PlanControl_type();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__BUILDER_HPP_
