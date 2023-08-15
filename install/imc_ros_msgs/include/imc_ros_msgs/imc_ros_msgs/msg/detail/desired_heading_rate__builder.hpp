// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/DesiredHeadingRate.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING_RATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/desired_heading_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DesiredHeadingRate_value
{
public:
  Init_DesiredHeadingRate_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::imc_ros_msgs::msg::DesiredHeadingRate value(::imc_ros_msgs::msg::DesiredHeadingRate::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredHeadingRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::DesiredHeadingRate>()
{
  return imc_ros_msgs::msg::builder::Init_DesiredHeadingRate_value();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING_RATE__BUILDER_HPP_
