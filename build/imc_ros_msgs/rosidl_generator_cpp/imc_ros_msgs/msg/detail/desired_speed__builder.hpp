// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/DesiredSpeed.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/desired_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DesiredSpeed_speed_units
{
public:
  explicit Init_DesiredSpeed_speed_units(::imc_ros_msgs::msg::DesiredSpeed & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::DesiredSpeed speed_units(::imc_ros_msgs::msg::DesiredSpeed::_speed_units_type arg)
  {
    msg_.speed_units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredSpeed msg_;
};

class Init_DesiredSpeed_value
{
public:
  Init_DesiredSpeed_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DesiredSpeed_speed_units value(::imc_ros_msgs::msg::DesiredSpeed::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_DesiredSpeed_speed_units(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::DesiredSpeed>()
{
  return imc_ros_msgs::msg::builder::Init_DesiredSpeed_value();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__BUILDER_HPP_
