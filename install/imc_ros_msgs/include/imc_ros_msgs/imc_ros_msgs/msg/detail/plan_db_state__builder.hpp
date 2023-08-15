// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_db_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanDBState_plans_info
{
public:
  explicit Init_PlanDBState_plans_info(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanDBState plans_info(::imc_ros_msgs::msg::PlanDBState::_plans_info_type arg)
  {
    msg_.plans_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_md5
{
public:
  explicit Init_PlanDBState_md5(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  Init_PlanDBState_plans_info md5(::imc_ros_msgs::msg::PlanDBState::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return Init_PlanDBState_plans_info(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_change_sname
{
public:
  explicit Init_PlanDBState_change_sname(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  Init_PlanDBState_md5 change_sname(::imc_ros_msgs::msg::PlanDBState::_change_sname_type arg)
  {
    msg_.change_sname = std::move(arg);
    return Init_PlanDBState_md5(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_change_sid
{
public:
  explicit Init_PlanDBState_change_sid(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  Init_PlanDBState_change_sname change_sid(::imc_ros_msgs::msg::PlanDBState::_change_sid_type arg)
  {
    msg_.change_sid = std::move(arg);
    return Init_PlanDBState_change_sname(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_change_time
{
public:
  explicit Init_PlanDBState_change_time(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  Init_PlanDBState_change_sid change_time(::imc_ros_msgs::msg::PlanDBState::_change_time_type arg)
  {
    msg_.change_time = std::move(arg);
    return Init_PlanDBState_change_sid(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_plan_size
{
public:
  explicit Init_PlanDBState_plan_size(::imc_ros_msgs::msg::PlanDBState & msg)
  : msg_(msg)
  {}
  Init_PlanDBState_change_time plan_size(::imc_ros_msgs::msg::PlanDBState::_plan_size_type arg)
  {
    msg_.plan_size = std::move(arg);
    return Init_PlanDBState_change_time(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

class Init_PlanDBState_plan_count
{
public:
  Init_PlanDBState_plan_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanDBState_plan_size plan_count(::imc_ros_msgs::msg::PlanDBState::_plan_count_type arg)
  {
    msg_.plan_count = std::move(arg);
    return Init_PlanDBState_plan_size(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDBState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanDBState>()
{
  return imc_ros_msgs::msg::builder::Init_PlanDBState_plan_count();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__BUILDER_HPP_
