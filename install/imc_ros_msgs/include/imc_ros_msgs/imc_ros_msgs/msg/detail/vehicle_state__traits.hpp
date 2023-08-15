// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: op_mode
  {
    out << "op_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.op_mode, out);
    out << ", ";
  }

  // member: error_count
  {
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
    out << ", ";
  }

  // member: error_ents
  {
    out << "error_ents: ";
    rosidl_generator_traits::value_to_yaml(msg.error_ents, out);
    out << ", ";
  }

  // member: maneuver_type
  {
    out << "maneuver_type: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_type, out);
    out << ", ";
  }

  // member: maneuver_stime
  {
    out << "maneuver_stime: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_stime, out);
    out << ", ";
  }

  // member: maneuver_eta
  {
    out << "maneuver_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_eta, out);
    out << ", ";
  }

  // member: control_loops
  {
    out << "control_loops: ";
    rosidl_generator_traits::value_to_yaml(msg.control_loops, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: last_error
  {
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
    out << ", ";
  }

  // member: last_error_time
  {
    out << "last_error_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: op_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.op_mode, out);
    out << "\n";
  }

  // member: error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
    out << "\n";
  }

  // member: error_ents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_ents: ";
    rosidl_generator_traits::value_to_yaml(msg.error_ents, out);
    out << "\n";
  }

  // member: maneuver_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_type: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_type, out);
    out << "\n";
  }

  // member: maneuver_stime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_stime: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_stime, out);
    out << "\n";
  }

  // member: maneuver_eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_eta: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_eta, out);
    out << "\n";
  }

  // member: control_loops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_loops: ";
    rosidl_generator_traits::value_to_yaml(msg.control_loops, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: last_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
    out << "\n";
  }

  // member: last_error_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_error_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleState & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::VehicleState & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::VehicleState>()
{
  return "imc_ros_msgs::msg::VehicleState";
}

template<>
inline const char * name<imc_ros_msgs::msg::VehicleState>()
{
  return "imc_ros_msgs/msg/VehicleState";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
