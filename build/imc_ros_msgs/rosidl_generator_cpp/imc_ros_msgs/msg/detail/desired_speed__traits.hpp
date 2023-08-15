// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/DesiredSpeed.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/desired_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DesiredSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: speed_units
  {
    out << "speed_units: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_units, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DesiredSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: speed_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_units: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_units, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DesiredSpeed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace imc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use imc_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imc_ros_msgs::msg::DesiredSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::DesiredSpeed & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::DesiredSpeed>()
{
  return "imc_ros_msgs::msg::DesiredSpeed";
}

template<>
inline const char * name<imc_ros_msgs::msg::DesiredSpeed>()
{
  return "imc_ros_msgs/msg/DesiredSpeed";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::DesiredSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::DesiredSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<imc_ros_msgs::msg::DesiredSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__TRAITS_HPP_
