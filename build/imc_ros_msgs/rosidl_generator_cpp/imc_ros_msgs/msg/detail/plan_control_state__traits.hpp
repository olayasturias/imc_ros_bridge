// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_control_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanControlState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: plan_id
  {
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << ", ";
  }

  // member: plan_eta
  {
    out << "plan_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_eta, out);
    out << ", ";
  }

  // member: plan_progress
  {
    out << "plan_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_progress, out);
    out << ", ";
  }

  // member: man_id
  {
    out << "man_id: ";
    rosidl_generator_traits::value_to_yaml(msg.man_id, out);
    out << ", ";
  }

  // member: man_type
  {
    out << "man_type: ";
    rosidl_generator_traits::value_to_yaml(msg.man_type, out);
    out << ", ";
  }

  // member: man_eta
  {
    out << "man_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.man_eta, out);
    out << ", ";
  }

  // member: last_outcome
  {
    out << "last_outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.last_outcome, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanControlState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: plan_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << "\n";
  }

  // member: plan_eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_eta, out);
    out << "\n";
  }

  // member: plan_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_progress, out);
    out << "\n";
  }

  // member: man_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "man_id: ";
    rosidl_generator_traits::value_to_yaml(msg.man_id, out);
    out << "\n";
  }

  // member: man_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "man_type: ";
    rosidl_generator_traits::value_to_yaml(msg.man_type, out);
    out << "\n";
  }

  // member: man_eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "man_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.man_eta, out);
    out << "\n";
  }

  // member: last_outcome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_outcome: ";
    rosidl_generator_traits::value_to_yaml(msg.last_outcome, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanControlState & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanControlState & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanControlState & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanControlState>()
{
  return "imc_ros_msgs::msg::PlanControlState";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanControlState>()
{
  return "imc_ros_msgs/msg/PlanControlState";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanControlState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanControlState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanControlState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__TRAITS_HPP_
