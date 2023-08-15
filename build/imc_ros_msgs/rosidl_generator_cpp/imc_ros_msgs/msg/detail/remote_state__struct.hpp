// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/RemoteState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__RemoteState __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__RemoteState __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemoteState_
{
  using Type = RemoteState_<ContainerAllocator>;

  explicit RemoteState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
      this->depth = 0;
      this->speed = 0.0f;
      this->psi = 0.0f;
    }
  }

  explicit RemoteState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
      this->depth = 0;
      this->speed = 0.0f;
      this->psi = 0.0f;
    }
  }

  // field types and members
  using _lat_type =
    float;
  _lat_type lat;
  using _lon_type =
    float;
  _lon_type lon;
  using _depth_type =
    uint8_t;
  _depth_type depth;
  using _speed_type =
    float;
  _speed_type speed;
  using _psi_type =
    float;
  _psi_type psi;

  // setters for named parameter idiom
  Type & set__lat(
    const float & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const float & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__depth(
    const uint8_t & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__psi(
    const float & _arg)
  {
    this->psi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::RemoteState_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::RemoteState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::RemoteState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::RemoteState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__RemoteState
    std::shared_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__RemoteState
    std::shared_ptr<imc_ros_msgs::msg::RemoteState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoteState_ & other) const
  {
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->psi != other.psi) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoteState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoteState_

// alias to use template instance with default allocator
using RemoteState =
  imc_ros_msgs::msg::RemoteState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__REMOTE_STATE__STRUCT_HPP_
