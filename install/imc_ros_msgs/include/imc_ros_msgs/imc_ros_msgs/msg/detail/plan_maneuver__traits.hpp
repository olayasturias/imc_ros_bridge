// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanManeuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'maneuver'
#include "imc_ros_msgs/msg/detail/maneuver__traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanManeuver & msg,
  std::ostream & out)
{
  out << "{";
  // member: maneuver_id
  {
    out << "maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_id, out);
    out << ", ";
  }

  // member: maneuver
  {
    out << "maneuver: ";
    to_flow_style_yaml(msg.maneuver, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanManeuver & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maneuver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_id, out);
    out << "\n";
  }

  // member: maneuver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver:\n";
    to_block_style_yaml(msg.maneuver, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanManeuver & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanManeuver & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanManeuver & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanManeuver>()
{
  return "imc_ros_msgs::msg::PlanManeuver";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanManeuver>()
{
  return "imc_ros_msgs/msg/PlanManeuver";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanManeuver>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanManeuver>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanManeuver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__TRAITS_HPP_
