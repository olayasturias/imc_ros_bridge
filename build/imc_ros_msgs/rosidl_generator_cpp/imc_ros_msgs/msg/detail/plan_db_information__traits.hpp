// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/PlanDBInformation.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/plan_db_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanDBInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan_id
  {
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanDBInformation & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanDBInformation & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::PlanDBInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::PlanDBInformation & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::PlanDBInformation>()
{
  return "imc_ros_msgs::msg::PlanDBInformation";
}

template<>
inline const char * name<imc_ros_msgs::msg::PlanDBInformation>()
{
  return "imc_ros_msgs/msg/PlanDBInformation";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::PlanDBInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::PlanDBInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::PlanDBInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_INFORMATION__TRAITS_HPP_
