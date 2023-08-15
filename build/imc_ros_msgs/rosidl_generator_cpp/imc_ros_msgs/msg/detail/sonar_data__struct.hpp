// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/SonarData.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__SonarData __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__SonarData __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SonarData_
{
  using Type = SonarData_<ContainerAllocator>;

  explicit SonarData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->frequency = 0ul;
      this->min_range = 0;
      this->max_range = 0;
      this->bits_per_point = 0;
      this->scale_factor = 0.0f;
    }
  }

  explicit SonarData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->frequency = 0ul;
      this->min_range = 0;
      this->max_range = 0;
      this->bits_per_point = 0;
      this->scale_factor = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _frequency_type =
    uint32_t;
  _frequency_type frequency;
  using _min_range_type =
    uint16_t;
  _min_range_type min_range;
  using _max_range_type =
    uint16_t;
  _max_range_type max_range;
  using _bits_per_point_type =
    uint8_t;
  _bits_per_point_type bits_per_point;
  using _scale_factor_type =
    float;
  _scale_factor_type scale_factor;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__frequency(
    const uint32_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__min_range(
    const uint16_t & _arg)
  {
    this->min_range = _arg;
    return *this;
  }
  Type & set__max_range(
    const uint16_t & _arg)
  {
    this->max_range = _arg;
    return *this;
  }
  Type & set__bits_per_point(
    const uint8_t & _arg)
  {
    this->bits_per_point = _arg;
    return *this;
  }
  Type & set__scale_factor(
    const float & _arg)
  {
    this->scale_factor = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ST_SIDESCAN =
    0u;
  static constexpr uint8_t ST_ECHOSOUNDER =
    1u;
  static constexpr uint8_t ST_MULTIBEAM =
    2u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::SonarData_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::SonarData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::SonarData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::SonarData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__SonarData
    std::shared_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__SonarData
    std::shared_ptr<imc_ros_msgs::msg::SonarData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SonarData_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->min_range != other.min_range) {
      return false;
    }
    if (this->max_range != other.max_range) {
      return false;
    }
    if (this->bits_per_point != other.bits_per_point) {
      return false;
    }
    if (this->scale_factor != other.scale_factor) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SonarData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SonarData_

// alias to use template instance with default allocator
using SonarData =
  imc_ros_msgs::msg::SonarData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SonarData_<ContainerAllocator>::ST_SIDESCAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SonarData_<ContainerAllocator>::ST_ECHOSOUNDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SonarData_<ContainerAllocator>::ST_MULTIBEAM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_HPP_
