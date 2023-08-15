// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_specification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'maneuvers'
#include "imc_ros_msgs/msg/detail/plan_maneuver__traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanSpecification & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan_id
  {
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: vnamespace
  {
    out << "vnamespace: ";
    rosidl_generator_traits::value_to_yaml(msg.vnamespace, out);
    out << ", ";
  }

  // member: start_man_id
  {
    out << "start_man_id: ";
    rosidl_generator_traits::value_to_yaml(msg.start_man_id, out);
    out << ", ";
  }

  // member: maneuvers
  {
    if (msg.maneuvers.size() == 0) {
      out << "maneuvers: []";
    } else {
      out << "maneuvers: [";
      size_t pending_items = msg.maneuvers.size();
      for (auto item : msg.maneuvers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plan_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: vnamespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vnamespace: ";
    rosidl_generator_traits::value_to_yaml(msg.vnamespace, out);
    out << "\n";
  }

  // member: start_man_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_man_id: ";
    rosidl_generator_traits::value_to_yaml(msg.start_man_id, out);
    out << "\n";
  }

  // member: maneuvers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.maneuvers.size() == 0) {
      out << "maneuvers: []\n";
    } else {
      out << "maneuvers:\n";
      for (auto item : msg.maneuvers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanSpecification & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanSpecification & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanSpecification>()
{
  return "imc_ros_msgs::msg::PlanSpecification";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanSpecification>()
{
  return "imc_ros_msgs/msg/PlanSpecification";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanSpecification>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanSpecification>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanSpecification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__TRAITS_HPP_
