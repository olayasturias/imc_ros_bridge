// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op_mode = 0;
      this->error_count = 0;
      this->error_ents = "";
      this->maneuver_type = 0;
      this->maneuver_stime = 0.0;
      this->maneuver_eta = 0;
      this->control_loops = 0ul;
      this->flags = 0;
      this->last_error = "";
      this->last_error_time = 0.0;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_ents(_alloc),
    last_error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op_mode = 0;
      this->error_count = 0;
      this->error_ents = "";
      this->maneuver_type = 0;
      this->maneuver_stime = 0.0;
      this->maneuver_eta = 0;
      this->control_loops = 0ul;
      this->flags = 0;
      this->last_error = "";
      this->last_error_time = 0.0;
    }
  }

  // field types and members
  using _op_mode_type =
    uint8_t;
  _op_mode_type op_mode;
  using _error_count_type =
    uint8_t;
  _error_count_type error_count;
  using _error_ents_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_ents_type error_ents;
  using _maneuver_type_type =
    uint16_t;
  _maneuver_type_type maneuver_type;
  using _maneuver_stime_type =
    double;
  _maneuver_stime_type maneuver_stime;
  using _maneuver_eta_type =
    uint16_t;
  _maneuver_eta_type maneuver_eta;
  using _control_loops_type =
    uint32_t;
  _control_loops_type control_loops;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _last_error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_error_type last_error;
  using _last_error_time_type =
    double;
  _last_error_time_type last_error_time;

  // setters for named parameter idiom
  Type & set__op_mode(
    const uint8_t & _arg)
  {
    this->op_mode = _arg;
    return *this;
  }
  Type & set__error_count(
    const uint8_t & _arg)
  {
    this->error_count = _arg;
    return *this;
  }
  Type & set__error_ents(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_ents = _arg;
    return *this;
  }
  Type & set__maneuver_type(
    const uint16_t & _arg)
  {
    this->maneuver_type = _arg;
    return *this;
  }
  Type & set__maneuver_stime(
    const double & _arg)
  {
    this->maneuver_stime = _arg;
    return *this;
  }
  Type & set__maneuver_eta(
    const uint16_t & _arg)
  {
    this->maneuver_eta = _arg;
    return *this;
  }
  Type & set__control_loops(
    const uint32_t & _arg)
  {
    this->control_loops = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__last_error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_error = _arg;
    return *this;
  }
  Type & set__last_error_time(
    const double & _arg)
  {
    this->last_error_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SERVICE =
    0u;
  static constexpr uint8_t CALIBRATION =
    1u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    2u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr uint8_t MANEUVER =
    3u;
  static constexpr uint8_t EXTERNAL =
    4u;
  static constexpr uint8_t BOOT =
    5u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__VehicleState
    std::shared_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__VehicleState
    std::shared_ptr<imc_ros_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->op_mode != other.op_mode) {
      return false;
    }
    if (this->error_count != other.error_count) {
      return false;
    }
    if (this->error_ents != other.error_ents) {
      return false;
    }
    if (this->maneuver_type != other.maneuver_type) {
      return false;
    }
    if (this->maneuver_stime != other.maneuver_stime) {
      return false;
    }
    if (this->maneuver_eta != other.maneuver_eta) {
      return false;
    }
    if (this->control_loops != other.control_loops) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->last_error != other.last_error) {
      return false;
    }
    if (this->last_error_time != other.last_error_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  imc_ros_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::SERVICE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::CALIBRATION;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::MANEUVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::EXTERNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleState_<ContainerAllocator>::BOOT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
