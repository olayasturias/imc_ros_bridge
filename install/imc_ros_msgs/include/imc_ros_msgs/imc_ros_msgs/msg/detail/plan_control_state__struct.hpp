// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanControlState __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanControlState __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanControlState_
{
  using Type = PlanControlState_<ContainerAllocator>;

  explicit PlanControlState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->plan_id = "";
      this->plan_eta = 0l;
      this->plan_progress = 0.0f;
      this->man_id = "";
      this->man_type = 0;
      this->man_eta = 0l;
      this->last_outcome = 0;
    }
  }

  explicit PlanControlState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_id(_alloc),
    man_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->plan_id = "";
      this->plan_eta = 0l;
      this->plan_progress = 0.0f;
      this->man_id = "";
      this->man_type = 0;
      this->man_eta = 0l;
      this->last_outcome = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _plan_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plan_id_type plan_id;
  using _plan_eta_type =
    int32_t;
  _plan_eta_type plan_eta;
  using _plan_progress_type =
    float;
  _plan_progress_type plan_progress;
  using _man_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _man_id_type man_id;
  using _man_type_type =
    uint16_t;
  _man_type_type man_type;
  using _man_eta_type =
    int32_t;
  _man_eta_type man_eta;
  using _last_outcome_type =
    uint8_t;
  _last_outcome_type last_outcome;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__plan_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__plan_eta(
    const int32_t & _arg)
  {
    this->plan_eta = _arg;
    return *this;
  }
  Type & set__plan_progress(
    const float & _arg)
  {
    this->plan_progress = _arg;
    return *this;
  }
  Type & set__man_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->man_id = _arg;
    return *this;
  }
  Type & set__man_type(
    const uint16_t & _arg)
  {
    this->man_type = _arg;
    return *this;
  }
  Type & set__man_eta(
    const int32_t & _arg)
  {
    this->man_eta = _arg;
    return *this;
  }
  Type & set__last_outcome(
    const uint8_t & _arg)
  {
    this->last_outcome = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BLOCKED =
    0u;
  static constexpr uint8_t READY =
    1u;
  static constexpr uint8_t INITIALIZING =
    2u;
  static constexpr uint8_t EXECUTING =
    3u;
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t SUCCESS =
    1u;
  static constexpr uint8_t FAILURE =
    2u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanControlState
    std::shared_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanControlState
    std::shared_ptr<imc_ros_msgs::msg::PlanControlState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanControlState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->plan_eta != other.plan_eta) {
      return false;
    }
    if (this->plan_progress != other.plan_progress) {
      return false;
    }
    if (this->man_id != other.man_id) {
      return false;
    }
    if (this->man_type != other.man_type) {
      return false;
    }
    if (this->man_eta != other.man_eta) {
      return false;
    }
    if (this->last_outcome != other.last_outcome) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanControlState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanControlState_

// alias to use template instance with default allocator
using PlanControlState =
  imc_ros_msgs::msg::PlanControlState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::BLOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::INITIALIZING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::EXECUTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanControlState_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_HPP_
