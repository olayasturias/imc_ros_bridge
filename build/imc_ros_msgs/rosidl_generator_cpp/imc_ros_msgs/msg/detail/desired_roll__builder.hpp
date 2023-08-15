// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/DesiredRoll.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_ROLL__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_ROLL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/desired_roll__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DesiredRoll_value
{
public:
  Init_DesiredRoll_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imc_ros_msgs::msg::DesiredRoll value(::imc_ros_msgs::msg::DesiredRoll::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredRoll msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::DesiredRoll>()
{
  return imc_ros_msgs::msg::builder::Init_DesiredRoll_value();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_ROLL__BUILDER_HPP_
