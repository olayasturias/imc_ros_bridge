// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanControl.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanControl __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanControl __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanControl_
{
  using Type = PlanControl_<ContainerAllocator>;

  explicit PlanControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->op = 0;
      this->request_id = 0;
      this->plan_id = "";
      this->flags = 0;
      this->info = "";
    }
  }

  explicit PlanControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_id(_alloc),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->op = 0;
      this->request_id = 0;
      this->plan_id = "";
      this->flags = 0;
      this->info = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _op_type =
    uint8_t;
  _op_type op;
  using _request_id_type =
    uint16_t;
  _request_id_type request_id;
  using _plan_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plan_id_type plan_id;
  using _flags_type =
    uint16_t;
  _flags_type flags;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__op(
    const uint8_t & _arg)
  {
    this->op = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint16_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__plan_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__flags(
    const uint16_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanControl
    std::shared_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanControl
    std::shared_ptr<imc_ros_msgs::msg::PlanControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanControl_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->op != other.op) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanControl_

// alias to use template instance with default allocator
using PlanControl =
  imc_ros_msgs::msg::PlanControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_HPP_
