// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imc_ros_msgs/msg/detail/maneuver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Maneuver_polygon
{
public:
  explicit Init_Maneuver_polygon(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  ::imc_ros_msgs::msg::Maneuver polygon(::imc_ros_msgs::msg::Maneuver::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_syringe2
{
public:
  explicit Init_Maneuver_syringe2(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_polygon syringe2(::imc_ros_msgs::msg::Maneuver::_syringe2_type arg)
  {
    msg_.syringe2 = std::move(arg);
    return Init_Maneuver_polygon(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_syringe1
{
public:
  explicit Init_Maneuver_syringe1(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_syringe2 syringe1(::imc_ros_msgs::msg::Maneuver::_syringe1_type arg)
  {
    msg_.syringe1 = std::move(arg);
    return Init_Maneuver_syringe2(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_syringe0
{
public:
  explicit Init_Maneuver_syringe0(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_syringe1 syringe0(::imc_ros_msgs::msg::Maneuver::_syringe0_type arg)
  {
    msg_.syringe0 = std::move(arg);
    return Init_Maneuver_syringe1(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_custom_string
{
public:
  explicit Init_Maneuver_custom_string(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_syringe0 custom_string(::imc_ros_msgs::msg::Maneuver::_custom_string_type arg)
  {
    msg_.custom_string = std::move(arg);
    return Init_Maneuver_syringe0(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_timeout
{
public:
  explicit Init_Maneuver_timeout(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_custom_string timeout(::imc_ros_msgs::msg::Maneuver::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_Maneuver_custom_string(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_yaw
{
public:
  explicit Init_Maneuver_yaw(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_timeout yaw(::imc_ros_msgs::msg::Maneuver::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Maneuver_timeout(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_pitch
{
public:
  explicit Init_Maneuver_pitch(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_yaw pitch(::imc_ros_msgs::msg::Maneuver::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Maneuver_yaw(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_roll
{
public:
  explicit Init_Maneuver_roll(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_pitch roll(::imc_ros_msgs::msg::Maneuver::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Maneuver_pitch(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_speed_units
{
public:
  explicit Init_Maneuver_speed_units(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_roll speed_units(::imc_ros_msgs::msg::Maneuver::_speed_units_type arg)
  {
    msg_.speed_units = std::move(arg);
    return Init_Maneuver_roll(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_speed
{
public:
  explicit Init_Maneuver_speed(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_speed_units speed(::imc_ros_msgs::msg::Maneuver::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Maneuver_speed_units(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_z_units
{
public:
  explicit Init_Maneuver_z_units(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_speed z_units(::imc_ros_msgs::msg::Maneuver::_z_units_type arg)
  {
    msg_.z_units = std::move(arg);
    return Init_Maneuver_speed(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_z
{
public:
  explicit Init_Maneuver_z(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_z_units z(::imc_ros_msgs::msg::Maneuver::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Maneuver_z_units(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_lon
{
public:
  explicit Init_Maneuver_lon(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_z lon(::imc_ros_msgs::msg::Maneuver::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_Maneuver_z(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_lat
{
public:
  explicit Init_Maneuver_lat(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_lon lat(::imc_ros_msgs::msg::Maneuver::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Maneuver_lon(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_maneuver_imc_id
{
public:
  explicit Init_Maneuver_maneuver_imc_id(::imc_ros_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_lat maneuver_imc_id(::imc_ros_msgs::msg::Maneuver::_maneuver_imc_id_type arg)
  {
    msg_.maneuver_imc_id = std::move(arg);
    return Init_Maneuver_lat(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_maneuver_name
{
public:
  Init_Maneuver_maneuver_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Maneuver_maneuver_imc_id maneuver_name(::imc_ros_msgs::msg::Maneuver::_maneuver_name_type arg)
  {
    msg_.maneuver_name = std::move(arg);
    return Init_Maneuver_maneuver_imc_id(msg_);
  }

private:
  ::imc_ros_msgs::msg::Maneuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imc_ros_msgs::msg::Maneuver>()
{
  return imc_ros_msgs::msg::builder::Init_Maneuver_maneuver_name();
}

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_
