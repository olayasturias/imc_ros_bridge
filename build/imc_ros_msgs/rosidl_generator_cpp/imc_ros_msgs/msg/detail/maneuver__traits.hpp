// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imc_ros_msgs/msg/detail/maneuver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon'
#include "imc_ros_msgs/msg/detail/polygon_vertex__traits.hpp"

namespace imc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Maneuver & msg,
  std::ostream & out)
{
  out << "{";
  // member: maneuver_name
  {
    out << "maneuver_name: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_name, out);
    out << ", ";
  }

  // member: maneuver_imc_id
  {
    out << "maneuver_imc_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_imc_id, out);
    out << ", ";
  }

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

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: z_units
  {
    out << "z_units: ";
    rosidl_generator_traits::value_to_yaml(msg.z_units, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: speed_units
  {
    out << "speed_units: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_units, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: custom_string
  {
    out << "custom_string: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_string, out);
    out << ", ";
  }

  // member: syringe0
  {
    out << "syringe0: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe0, out);
    out << ", ";
  }

  // member: syringe1
  {
    out << "syringe1: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe1, out);
    out << ", ";
  }

  // member: syringe2
  {
    out << "syringe2: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe2, out);
    out << ", ";
  }

  // member: polygon
  {
    if (msg.polygon.size() == 0) {
      out << "polygon: []";
    } else {
      out << "polygon: [";
      size_t pending_items = msg.polygon.size();
      for (auto item : msg.polygon) {
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
  const Maneuver & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maneuver_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_name: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_name, out);
    out << "\n";
  }

  // member: maneuver_imc_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_imc_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_imc_id, out);
    out << "\n";
  }

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

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: z_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_units: ";
    rosidl_generator_traits::value_to_yaml(msg.z_units, out);
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

  // member: speed_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_units: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_units, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: custom_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_string: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_string, out);
    out << "\n";
  }

  // member: syringe0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "syringe0: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe0, out);
    out << "\n";
  }

  // member: syringe1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "syringe1: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe1, out);
    out << "\n";
  }

  // member: syringe2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "syringe2: ";
    rosidl_generator_traits::value_to_yaml(msg.syringe2, out);
    out << "\n";
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon.size() == 0) {
      out << "polygon: []\n";
    } else {
      out << "polygon:\n";
      for (auto item : msg.polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Maneuver & msg, bool use_flow_style = false)
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
  const imc_ros_msgs::msg::Maneuver & msg,
  std::ostream & out, size_t indentation = 0)
{
  imc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const imc_ros_msgs::msg::Maneuver & msg)
{
  return imc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imc_ros_msgs::msg::Maneuver>()
{
  return "imc_ros_msgs::msg::Maneuver";
}

template<>
inline const char * name<imc_ros_msgs::msg::Maneuver>()
{
  return "imc_ros_msgs/msg/Maneuver";
}

template<>
struct has_fixed_size<imc_ros_msgs::msg::Maneuver>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imc_ros_msgs::msg::Maneuver>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imc_ros_msgs::msg::Maneuver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_
