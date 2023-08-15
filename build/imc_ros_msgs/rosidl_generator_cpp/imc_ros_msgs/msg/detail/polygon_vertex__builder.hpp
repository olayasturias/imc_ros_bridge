// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/PolygonVertex.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/polygon_vertex__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonVertex_lon
{
public:
  explicit Init_PolygonVertex_lon(::imc_ros_msgs::msg::PolygonVertex & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::PolygonVertex lon(::imc_ros_msgs::msg::PolygonVertex::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::PolygonVertex msg_;
};

class Init_PolygonVertex_lat
{
public:
  Init_PolygonVertex_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolygonVertex_lon lat(::imc_ros_msgs::msg::PolygonVertex::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_PolygonVertex_lon(msg_);
  }

private:
  ::imc_ros_msgs::msg::PolygonVertex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::PolygonVertex>()
{
  return imc_ros_msgs::msg::builder::Init_PolygonVertex_lat();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__BUILDER_HPP_
