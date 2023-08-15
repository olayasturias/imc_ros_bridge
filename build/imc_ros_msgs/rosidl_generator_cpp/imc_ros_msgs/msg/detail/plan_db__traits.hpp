// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanDB.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_db__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plan_spec'
#include "imc_ros_msgs/msg/detail/plan_specification__traits.hpp"
// Member 'plandb_information'
#include "imc_ros_msgs/msg/detail/plan_db_information__traits.hpp"
// Member 'plandb_state'
#include "imc_ros_msgs/msg/detail/plan_db_state__traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanDB & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: op
  {
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: plan_id
  {
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << ", ";
  }

  // member: plan_spec
  {
    out << "plan_spec: ";
    to_flow_style_yaml(msg.plan_spec, out);
    out << ", ";
  }

  // member: plan_spec_md5
  {
    if (msg.plan_spec_md5.size() == 0) {
      out << "plan_spec_md5: []";
    } else {
      out << "plan_spec_md5: [";
      size_t pending_items = msg.plan_spec_md5.size();
      for (auto item : msg.plan_spec_md5) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plandb_information
  {
    out << "plandb_information: ";
    to_flow_style_yaml(msg.plandb_information, out);
    out << ", ";
  }

  // member: plandb_state
  {
    out << "plandb_state: ";
    to_flow_style_yaml(msg.plandb_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanDB & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: op
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
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

  // member: plan_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_spec:\n";
    to_block_style_yaml(msg.plan_spec, out, indentation + 2);
  }

  // member: plan_spec_md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plan_spec_md5.size() == 0) {
      out << "plan_spec_md5: []\n";
    } else {
      out << "plan_spec_md5:\n";
      for (auto item : msg.plan_spec_md5) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: plandb_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plandb_information:\n";
    to_block_style_yaml(msg.plandb_information, out, indentation + 2);
  }

  // member: plandb_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plandb_state:\n";
    to_block_style_yaml(msg.plandb_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanDB & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanDB & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanDB & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanDB>()
{
  return "imc_ros_msgs::msg::PlanDB";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanDB>()
{
  return "imc_ros_msgs/msg/PlanDB";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanDB>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanDB>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanDB>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__TRAITS_HPP_
