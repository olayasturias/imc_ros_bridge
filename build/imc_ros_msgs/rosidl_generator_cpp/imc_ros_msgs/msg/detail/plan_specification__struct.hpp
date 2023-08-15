// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'maneuvers'
#include "imc_ros_msgs/msg/detail/plan_maneuver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanSpecification __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanSpecification __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanSpecification_
{
  using Type = PlanSpecification_<ContainerAllocator>;

  explicit PlanSpecification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_id = "";
      this->description = "";
      this->vnamespace = "";
      this->start_man_id = "";
    }
  }

  explicit PlanSpecification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_id(_alloc),
    description(_alloc),
    vnamespace(_alloc),
    start_man_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_id = "";
      this->description = "";
      this->vnamespace = "";
      this->start_man_id = "";
    }
  }

  // field types and members
  using _plan_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plan_id_type plan_id;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _vnamespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vnamespace_type vnamespace;
  using _start_man_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_man_id_type start_man_id;
  using _maneuvers_type =
    std::vector<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>>;
  _maneuvers_type maneuvers;

  // setters for named parameter idiom
  Type & set__plan_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__vnamespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vnamespace = _arg;
    return *this;
  }
  Type & set__start_man_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_man_id = _arg;
    return *this;
  }
  Type & set__maneuvers(
    const std::vector<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PlanManeuver_<ContainerAllocator>>> & _arg)
  {
    this->maneuvers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanSpecification
    std::shared_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanSpecification
    std::shared_ptr<imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanSpecification_ & other) const
  {
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->vnamespace != other.vnamespace) {
      return false;
    }
    if (this->start_man_id != other.start_man_id) {
      return false;
    }
    if (this->maneuvers != other.maneuvers) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanSpecification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanSpecification_

// alias to use template instance with default allocator
using PlanSpecification =
  imc_ros_msgs::msg::PlanSpecification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_HPP_
