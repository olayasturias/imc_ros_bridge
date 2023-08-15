// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_db_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plans_info'
#include "imc_ros_msgs/msg/detail/plan_db_information__traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanDBState & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan_count
  {
    out << "plan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_count, out);
    out << ", ";
  }

  // member: plan_size
  {
    out << "plan_size: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_size, out);
    out << ", ";
  }

  // member: change_time
  {
    out << "change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.change_time, out);
    out << ", ";
  }

  // member: change_sid
  {
    out << "change_sid: ";
    rosidl_generator_traits::value_to_yaml(msg.change_sid, out);
    out << ", ";
  }

  // member: change_sname
  {
    out << "change_sname: ";
    rosidl_generator_traits::value_to_yaml(msg.change_sname, out);
    out << ", ";
  }

  // member: md5
  {
    if (msg.md5.size() == 0) {
      out << "md5: []";
    } else {
      out << "md5: [";
      size_t pending_items = msg.md5.size();
      for (auto item : msg.md5) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plans_info
  {
    if (msg.plans_info.size() == 0) {
      out << "plans_info: []";
    } else {
      out << "plans_info: [";
      size_t pending_items = msg.plans_info.size();
      for (auto item : msg.plans_info) {
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
  const PlanDBState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plan_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_count, out);
    out << "\n";
  }

  // member: plan_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_size: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_size, out);
    out << "\n";
  }

  // member: change_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.change_time, out);
    out << "\n";
  }

  // member: change_sid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_sid: ";
    rosidl_generator_traits::value_to_yaml(msg.change_sid, out);
    out << "\n";
  }

  // member: change_sname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_sname: ";
    rosidl_generator_traits::value_to_yaml(msg.change_sname, out);
    out << "\n";
  }

  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.md5.size() == 0) {
      out << "md5: []\n";
    } else {
      out << "md5:\n";
      for (auto item : msg.md5) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: plans_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plans_info.size() == 0) {
      out << "plans_info: []\n";
    } else {
      out << "plans_info:\n";
      for (auto item : msg.plans_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanDBState & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanDBState & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanDBState & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanDBState>()
{
  return "imc_ros_msgs::msg::PlanDBState";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanDBState>()
{
  return "imc_ros_msgs/msg/PlanDBState";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanDBState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanDBState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanDBState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__TRAITS_HPP_
