// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon'
#include "imc_ros_msgs/msg/detail/polygon_vertex__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__Maneuver __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__Maneuver __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Maneuver_
{
  using Type = Maneuver_<ContainerAllocator>;

  explicit Maneuver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_name = "";
      this->maneuver_imc_id = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->z = 0.0f;
      this->z_units = 0;
      this->speed = 0.0f;
      this->speed_units = 0;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->timeout = 0;
      this->custom_string = "";
      this->syringe0 = 0;
      this->syringe1 = 0;
      this->syringe2 = 0;
    }
  }

  explicit Maneuver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver_name(_alloc),
    custom_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_name = "";
      this->maneuver_imc_id = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->z = 0.0f;
      this->z_units = 0;
      this->speed = 0.0f;
      this->speed_units = 0;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->timeout = 0;
      this->custom_string = "";
      this->syringe0 = 0;
      this->syringe1 = 0;
      this->syringe2 = 0;
    }
  }

  // field types and members
  using _maneuver_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _maneuver_name_type maneuver_name;
  using _maneuver_imc_id_type =
    uint16_t;
  _maneuver_imc_id_type maneuver_imc_id;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _z_type =
    float;
  _z_type z;
  using _z_units_type =
    uint8_t;
  _z_units_type z_units;
  using _speed_type =
    float;
  _speed_type speed;
  using _speed_units_type =
    uint8_t;
  _speed_units_type speed_units;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _timeout_type =
    uint16_t;
  _timeout_type timeout;
  using _custom_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _custom_string_type custom_string;
  using _syringe0_type =
    uint8_t;
  _syringe0_type syringe0;
  using _syringe1_type =
    uint8_t;
  _syringe1_type syringe1;
  using _syringe2_type =
    uint8_t;
  _syringe2_type syringe2;
  using _polygon_type =
    std::vector<imc_ros_msgs::msg::PolygonVertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PolygonVertex_<ContainerAllocator>>>;
  _polygon_type polygon;

  // setters for named parameter idiom
  Type & set__maneuver_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->maneuver_name = _arg;
    return *this;
  }
  Type & set__maneuver_imc_id(
    const uint16_t & _arg)
  {
    this->maneuver_imc_id = _arg;
    return *this;
  }
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
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__z_units(
    const uint8_t & _arg)
  {
    this->z_units = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__speed_units(
    const uint8_t & _arg)
  {
    this->speed_units = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__timeout(
    const uint16_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__custom_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->custom_string = _arg;
    return *this;
  }
  Type & set__syringe0(
    const uint8_t & _arg)
  {
    this->syringe0 = _arg;
    return *this;
  }
  Type & set__syringe1(
    const uint8_t & _arg)
  {
    this->syringe1 = _arg;
    return *this;
  }
  Type & set__syringe2(
    const uint8_t & _arg)
  {
    this->syringe2 = _arg;
    return *this;
  }
  Type & set__polygon(
    const std::vector<imc_ros_msgs::msg::PolygonVertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PolygonVertex_<ContainerAllocator>>> & _arg)
  {
    this->polygon = _arg;
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
  static constexpr uint8_t SUNITS_METERS_PS =
    0u;
  static constexpr uint8_t SUNITS_RPM =
    1u;
  static constexpr uint8_t SUNITS_PERCENTAGE =
    2u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::Maneuver_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::Maneuver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::Maneuver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::Maneuver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__Maneuver
    std::shared_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__Maneuver
    std::shared_ptr<imc_ros_msgs::msg::Maneuver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Maneuver_ & other) const
  {
    if (this->maneuver_name != other.maneuver_name) {
      return false;
    }
    if (this->maneuver_imc_id != other.maneuver_imc_id) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->z_units != other.z_units) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->speed_units != other.speed_units) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->custom_string != other.custom_string) {
      return false;
    }
    if (this->syringe0 != other.syringe0) {
      return false;
    }
    if (this->syringe1 != other.syringe1) {
      return false;
    }
    if (this->syringe2 != other.syringe2) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    return true;
  }
  bool operator!=(const Maneuver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Maneuver_

// alias to use template instance with default allocator
using Maneuver =
  imc_ros_msgs::msg::Maneuver_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::Z_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::Z_DEPTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::Z_ALTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::Z_HEIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::SUNITS_METERS_PS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::SUNITS_RPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::SUNITS_PERCENTAGE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_
