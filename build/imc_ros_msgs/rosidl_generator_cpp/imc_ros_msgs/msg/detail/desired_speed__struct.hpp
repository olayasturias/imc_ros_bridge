// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/DesiredSpeed.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__DesiredSpeed __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__DesiredSpeed __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DesiredSpeed_
{
  using Type = DesiredSpeed_<ContainerAllocator>;

  explicit DesiredSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->speed_units = 0;
    }
  }

  explicit DesiredSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->speed_units = 0;
    }
  }

  // field types and members
  using _value_type =
    double;
  _value_type value;
  using _speed_units_type =
    uint8_t;
  _speed_units_type speed_units;

  // setters for named parameter idiom
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__speed_units(
    const uint8_t & _arg)
  {
    this->speed_units = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUNITS_METERS_PS =
    0u;
  static constexpr uint8_t SUNITS_RPM =
    1u;
  static constexpr uint8_t SUNITS_PERCENTAGE =
    2u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__DesiredSpeed
    std::shared_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__DesiredSpeed
    std::shared_ptr<imc_ros_msgs::msg::DesiredSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredSpeed_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->speed_units != other.speed_units) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredSpeed_

// alias to use template instance with default allocator
using DesiredSpeed =
  imc_ros_msgs::msg::DesiredSpeed_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredSpeed_<ContainerAllocator>::SUNITS_METERS_PS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredSpeed_<ContainerAllocator>::SUNITS_RPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredSpeed_<ContainerAllocator>::SUNITS_PERCENTAGE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_HPP_
