// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/SonarData.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/sonar_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SonarData_data
{
public:
  explicit Init_SonarData_data(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::SonarData data(::imc_ros_msgs::msg::SonarData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_scale_factor
{
public:
  explicit Init_SonarData_scale_factor(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  Init_SonarData_data scale_factor(::imc_ros_msgs::msg::SonarData::_scale_factor_type arg)
  {
    msg_.scale_factor = std::move(arg);
    return Init_SonarData_data(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_bits_per_point
{
public:
  explicit Init_SonarData_bits_per_point(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  Init_SonarData_scale_factor bits_per_point(::imc_ros_msgs::msg::SonarData::_bits_per_point_type arg)
  {
    msg_.bits_per_point = std::move(arg);
    return Init_SonarData_scale_factor(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_max_range
{
public:
  explicit Init_SonarData_max_range(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  Init_SonarData_bits_per_point max_range(::imc_ros_msgs::msg::SonarData::_max_range_type arg)
  {
    msg_.max_range = std::move(arg);
    return Init_SonarData_bits_per_point(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_min_range
{
public:
  explicit Init_SonarData_min_range(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  Init_SonarData_max_range min_range(::imc_ros_msgs::msg::SonarData::_min_range_type arg)
  {
    msg_.min_range = std::move(arg);
    return Init_SonarData_max_range(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_frequency
{
public:
  explicit Init_SonarData_frequency(::imc_ros_msgs::msg::SonarData & msg)
  : msg_(msg)
  {}
  Init_SonarData_min_range frequency(::imc_ros_msgs::msg::SonarData::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_SonarData_min_range(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

class Init_SonarData_type
{
public:
  Init_SonarData_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonarData_frequency type(::imc_ros_msgs::msg::SonarData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SonarData_frequency(msg_);
  }

private:
  ::imc_ros_msgs::msg::SonarData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::SonarData>()
{
  return imc_ros_msgs::msg::builder::Init_SonarData_type();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__BUILDER_HPP_
