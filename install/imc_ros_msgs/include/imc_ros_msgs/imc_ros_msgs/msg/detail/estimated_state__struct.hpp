// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__EstimatedState __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__EstimatedState __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatedState_
{
  using Type = EstimatedState_<ContainerAllocator>;

  explicit EstimatedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->height = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->phi = 0.0f;
      this->theta = 0.0f;
      this->psi = 0.0f;
      this->u = 0.0f;
      this->v = 0.0f;
      this->w = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->p = 0.0f;
      this->q = 0.0f;
      this->r = 0.0f;
      this->depth = 0.0f;
      this->alt = 0.0f;
    }
  }

  explicit EstimatedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->height = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->phi = 0.0f;
      this->theta = 0.0f;
      this->psi = 0.0f;
      this->u = 0.0f;
      this->v = 0.0f;
      this->w = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->p = 0.0f;
      this->q = 0.0f;
      this->r = 0.0f;
      this->depth = 0.0f;
      this->alt = 0.0f;
    }
  }

  // field types and members
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _height_type =
    float;
  _height_type height;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _phi_type =
    float;
  _phi_type phi;
  using _theta_type =
    float;
  _theta_type theta;
  using _psi_type =
    float;
  _psi_type psi;
  using _u_type =
    float;
  _u_type u;
  using _v_type =
    float;
  _v_type v;
  using _w_type =
    float;
  _w_type w;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _p_type =
    float;
  _p_type p;
  using _q_type =
    float;
  _q_type q;
  using _r_type =
    float;
  _r_type r;
  using _depth_type =
    float;
  _depth_type depth;
  using _alt_type =
    float;
  _alt_type alt;

  // setters for named parameter idiom
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__phi(
    const float & _arg)
  {
    this->phi = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__psi(
    const float & _arg)
  {
    this->psi = _arg;
    return *this;
  }
  Type & set__u(
    const float & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__p(
    const float & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__EstimatedState
    std::shared_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__EstimatedState
    std::shared_ptr<imc_ros_msgs::msg::EstimatedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatedState_ & other) const
  {
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->phi != other.phi) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->psi != other.psi) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatedState_

// alias to use template instance with default allocator
using EstimatedState =
  imc_ros_msgs::msg::EstimatedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_
