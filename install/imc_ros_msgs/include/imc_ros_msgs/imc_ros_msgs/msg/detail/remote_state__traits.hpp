// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/RemoteState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/remote_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemoteState & msg,
  std::ostream & out)
{
  out << "{";
  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: psi
  {
    out << "psi: ";
    rosidl_generator_traits::value_to_yaml(msg.psi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoteState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: psi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psi: ";
    rosidl_generator_traits::value_to_yaml(msg.psi, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoteState & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::RemoteState & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::RemoteState & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::RemoteState>()
{
  return "imc_ros_msgs::msg::RemoteState";
}

template<>
inline const char * name<imc_ros_msgs::msg::RemoteState>()
{
  return "imc_ros_msgs/msg/RemoteState";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::RemoteState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::RemoteState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<imc_ros_msgs::msg::RemoteState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__TRAITS_HPP_
