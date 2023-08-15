// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PlanDB.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/plan_db__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanDB_plandb_state
{
public:
  explicit Init_PlanDB_plandb_state(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PlanDB plandb_state(::imc_ros_msgs::msg::PlanDB::_plandb_state_type arg)
  {
    msg_.plandb_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_plandb_information
{
public:
  explicit Init_PlanDB_plandb_information(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_plandb_state plandb_information(::imc_ros_msgs::msg::PlanDB::_plandb_information_type arg)
  {
    msg_.plandb_information = std::move(arg);
    return Init_PlanDB_plandb_state(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_plan_spec_md5
{
public:
  explicit Init_PlanDB_plan_spec_md5(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_plandb_information plan_spec_md5(::imc_ros_msgs::msg::PlanDB::_plan_spec_md5_type arg)
  {
    msg_.plan_spec_md5 = std::move(arg);
    return Init_PlanDB_plandb_information(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_plan_spec
{
public:
  explicit Init_PlanDB_plan_spec(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_plan_spec_md5 plan_spec(::imc_ros_msgs::msg::PlanDB::_plan_spec_type arg)
  {
    msg_.plan_spec = std::move(arg);
    return Init_PlanDB_plan_spec_md5(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_plan_id
{
public:
  explicit Init_PlanDB_plan_id(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_plan_spec plan_id(::imc_ros_msgs::msg::PlanDB::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_PlanDB_plan_spec(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_request_id
{
public:
  explicit Init_PlanDB_request_id(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_plan_id request_id(::imc_ros_msgs::msg::PlanDB::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_PlanDB_plan_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_op
{
public:
  explicit Init_PlanDB_op(::imc_ros_msgs::msg::PlanDB & msg)
  : msg_(msg)
  {}
  Init_PlanDB_request_id op(::imc_ros_msgs::msg::PlanDB::_op_type arg)
  {
    msg_.op = std::move(arg);
    return Init_PlanDB_request_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

class Init_PlanDB_type
{
public:
  Init_PlanDB_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanDB_op type(::imc_ros_msgs::msg::PlanDB::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PlanDB_op(msg_);
  }

private:
  ::imc_ros_msgs::msg::PlanDB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PlanDB>()
{
  return imc_ros_msgs::msg::builder::Init_PlanDB_type();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__BUILDER_HPP_
