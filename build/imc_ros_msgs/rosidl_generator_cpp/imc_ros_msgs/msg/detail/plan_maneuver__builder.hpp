// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanManeuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanManeuver_maneuver
{
public:
  explicit Init_PlanManeuver_maneuver(::imc_ros_msgs::msg::PlanManeuver & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanManeuver maneuver(::imc_ros_msgs::msg::PlanManeuver::_maneuver_type arg)
  {
    msg_.maneuver = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanManeuver msg_;
};

class Init_PlanManeuver_maneuver_id
{
public:
  Init_PlanManeuver_maneuver_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanManeuver_maneuver maneuver_id(::imc_ros_msgs::msg::PlanManeuver::_maneuver_id_type arg)
  {
    msg_.maneuver_id = std::move(arg);
    return Init_PlanManeuver_maneuver(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanManeuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanManeuver>()
{
  return imc_ros_msgs::msg::builder::Init_PlanManeuver_maneuver_id();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__BUILDER_HPP_
