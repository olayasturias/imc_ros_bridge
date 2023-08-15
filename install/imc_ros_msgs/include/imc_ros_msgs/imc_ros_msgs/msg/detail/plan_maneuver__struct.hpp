// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanManeuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'maneuver'
#include "imc_ros_msgs/msg/detail/maneuver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanManeuver __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanManeuver __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanManeuver_
{
  using Type = PlanManeuver_<ContainerAllocator>;

  explicit PlanManeuver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_id = "";
    }
  }

  explicit PlanManeuver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver_id(_alloc),
    maneuver(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_id = "";
    }
  }

  // field types and members
  using _maneuver_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _maneuver_id_type maneuver_id;
  using _maneuver_type =
    imc_ros_msgs::msg::Maneuver_<ContainerAllocator>;
  _maneuver_type maneuver;

  // setters for named parameter idiom
  Type & set__maneuver_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->maneuver_id = _arg;
    return *this;
  }
  Type & set__maneuver(
    const imc_ros_msgs::msg::Maneuver_<ContainerAllocator> & _arg)
  {
    this->maneuver = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanManeuver
    std::shared_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanManeuver
    std::shared_ptr<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanManeuver_ & other) const
  {
    if (this->maneuver_id != other.maneuver_id) {
      return false;
    }
    if (this->maneuver != other.maneuver) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanManeuver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanManeuver_

// alias to use template instance with default allocator
using PlanManeuver =
  imc_ros_msgs::msg::PlanManeuver_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_HPP_
