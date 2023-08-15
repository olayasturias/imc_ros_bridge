// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/DesiredZ.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/desired_z__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DesiredZ_z_units
{
public:
  explicit Init_DesiredZ_z_units(::imc_ros_msgs::msg::DesiredZ & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::DesiredZ z_units(::imc_ros_msgs::msg::DesiredZ::_z_units_type arg)
  {
    msg_.z_units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredZ msg_;
};

class Init_DesiredZ_value
{
public:
  Init_DesiredZ_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DesiredZ_z_units value(::imc_ros_msgs::msg::DesiredZ::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_DesiredZ_z_units(msg_);
  }

private:
  ::imc_ros_msgs::msg::DesiredZ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::DesiredZ>()
{
  return imc_ros_msgs::msg::builder::Init_DesiredZ_value();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__BUILDER_HPP_
