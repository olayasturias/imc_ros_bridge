// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/DesiredZ.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__DesiredZ __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__DesiredZ __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DesiredZ_
{
  using Type = DesiredZ_<ContainerAllocator>;

  explicit DesiredZ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->z_units = 0;
    }
  }

  explicit DesiredZ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0.0;
      this->z_units = 0;
    }
  }

  // field types and members
  using _value_type =
    double;
  _value_type value;
  using _z_units_type =
    uint8_t;
  _z_units_type z_units;

  // setters for named parameter idiom
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__z_units(
    const uint8_t & _arg)
  {
    this->z_units = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t Z_NONE =
    0u;
  static constexpr uint8_t Z_DEPTH =
    1u;
  static constexpr uint8_t Z_ALTITUDE =
    2u;
  static constexpr uint8_t Z_HEIGHT =
    3u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__DesiredZ
    std::shared_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__DesiredZ
    std::shared_ptr<imc_ros_msgs::msg::DesiredZ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredZ_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->z_units != other.z_units) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredZ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredZ_

// alias to use template instance with default allocator
using DesiredZ =
  imc_ros_msgs::msg::DesiredZ_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredZ_<ContainerAllocator>::Z_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredZ_<ContainerAllocator>::Z_DEPTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredZ_<ContainerAllocator>::Z_ALTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DesiredZ_<ContainerAllocator>::Z_HEIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_HPP_
