// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_specification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanSpecification_maneuvers
{
public:
  explicit Init_PlanSpecification_maneuvers(::imc_ros_msgs::msg::PlanSpecification & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanSpecification maneuvers(::imc_ros_msgs::msg::PlanSpecification::_maneuvers_type arg)
  {
    msg_.maneuvers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanSpecification msg_;
};

class Init_PlanSpecification_start_man_id
{
public:
  explicit Init_PlanSpecification_start_man_id(::imc_ros_msgs::msg::PlanSpecification & msg)
  : msg_(msg)
  {}
  Init_PlanSpecification_maneuvers start_man_id(::imc_ros_msgs::msg::PlanSpecification::_start_man_id_type arg)
  {
    msg_.start_man_id = std::move(arg);
    return Init_PlanSpecification_maneuvers(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanSpecification msg_;
};

class Init_PlanSpecification_vnamespace
{
public:
  explicit Init_PlanSpecification_vnamespace(::imc_ros_msgs::msg::PlanSpecification & msg)
  : msg_(msg)
  {}
  Init_PlanSpecification_start_man_id vnamespace(::imc_ros_msgs::msg::PlanSpecification::_vnamespace_type arg)
  {
    msg_.vnamespace = std::move(arg);
    return Init_PlanSpecification_start_man_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanSpecification msg_;
};

class Init_PlanSpecification_description
{
public:
  explicit Init_PlanSpecification_description(::imc_ros_msgs::msg::PlanSpecification & msg)
  : msg_(msg)
  {}
  Init_PlanSpecification_vnamespace description(::imc_ros_msgs::msg::PlanSpecification::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_PlanSpecification_vnamespace(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanSpecification msg_;
};

class Init_PlanSpecification_plan_id
{
public:
  Init_PlanSpecification_plan_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanSpecification_description plan_id(::imc_ros_msgs::msg::PlanSpecification::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_PlanSpecification_description(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanSpecification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanSpecification>()
{
  return imc_ros_msgs::msg::builder::Init_PlanSpecification_plan_id();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__BUILDER_HPP_
