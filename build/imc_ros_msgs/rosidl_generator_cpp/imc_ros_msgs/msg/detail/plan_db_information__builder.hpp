// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanDBInformation.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_db_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanDBInformation_md5
{
public:
  explicit Init_PlanDBInformation_md5(::imc_ros_msgs::msg::PlanDBInformation & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanDBInformation md5(::imc_ros_msgs::msg::PlanDBInformation::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

class Init_PlanDBInformation_change_sname
{
public:
  explicit Init_PlanDBInformation_change_sname(::imc_ros_msgs::msg::PlanDBInformation & msg)
  : msg_(msg)
  {}
  Init_PlanDBInformation_md5 change_sname(::imc_ros_msgs::msg::PlanDBInformation::_change_sname_type arg)
  {
    msg_.change_sname = std::move(arg);
    return Init_PlanDBInformation_md5(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

class Init_PlanDBInformation_change_sid
{
public:
  explicit Init_PlanDBInformation_change_sid(::imc_ros_msgs::msg::PlanDBInformation & msg)
  : msg_(msg)
  {}
  Init_PlanDBInformation_change_sname change_sid(::imc_ros_msgs::msg::PlanDBInformation::_change_sid_type arg)
  {
    msg_.change_sid = std::move(arg);
    return Init_PlanDBInformation_change_sname(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

class Init_PlanDBInformation_change_time
{
public:
  explicit Init_PlanDBInformation_change_time(::imc_ros_msgs::msg::PlanDBInformation & msg)
  : msg_(msg)
  {}
  Init_PlanDBInformation_change_sid change_time(::imc_ros_msgs::msg::PlanDBInformation::_change_time_type arg)
  {
    msg_.change_time = std::move(arg);
    return Init_PlanDBInformation_change_sid(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

class Init_PlanDBInformation_plan_size
{
public:
  explicit Init_PlanDBInformation_plan_size(::imc_ros_msgs::msg::PlanDBInformation & msg)
  : msg_(msg)
  {}
  Init_PlanDBInformation_change_time plan_size(::imc_ros_msgs::msg::PlanDBInformation::_plan_size_type arg)
  {
    msg_.plan_size = std::move(arg);
    return Init_PlanDBInformation_change_time(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

class Init_PlanDBInformation_plan_id
{
public:
  Init_PlanDBInformation_plan_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanDBInformation_plan_size plan_id(::imc_ros_msgs::msg::PlanDBInformation::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_PlanDBInformation_plan_size(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanDBInformation>()
{
  return imc_ros_msgs::msg::builder::Init_PlanDBInformation_plan_id();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__BUILDER_HPP_
