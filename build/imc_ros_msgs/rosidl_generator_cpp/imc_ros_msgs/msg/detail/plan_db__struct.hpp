// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanDB.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plan_spec'
#include "imc_ros_msgs/msg/detail/plan_specification__struct.hpp"
// Member 'plandb_information'
#include "imc_ros_msgs/msg/detail/plan_db_information__struct.hpp"
// Member 'plandb_state'
#include "imc_ros_msgs/msg/detail/plan_db_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanDB __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanDB __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanDB_
{
  using Type = PlanDB_<ContainerAllocator>;

  explicit PlanDB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_spec(_init),
    plandb_information(_init),
    plandb_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->op = 0;
      this->request_id = 0;
      this->plan_id = "";
    }
  }

  explicit PlanDB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_id(_alloc),
    plan_spec(_alloc, _init),
    plandb_information(_alloc, _init),
    plandb_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->op = 0;
      this->request_id = 0;
      this->plan_id = "";
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
  using _plan_spec_type =
    imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator>;
  _plan_spec_type plan_spec;
  using _plan_spec_md5_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _plan_spec_md5_type plan_spec_md5;
  using _plandb_information_type =
    imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator>;
  _plandb_information_type plandb_information;
  using _plandb_state_type =
    imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>;
  _plandb_state_type plandb_state;

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
  Type & set__plan_spec(
    const imc_ros_msgs::msg::PlanSpecification_<ContainerAllocator> & _arg)
  {
    this->plan_spec = _arg;
    return *this;
  }
  Type & set__plan_spec_md5(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->plan_spec_md5 = _arg;
    return *this;
  }
  Type & set__plandb_information(
    const imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator> & _arg)
  {
    this->plandb_information = _arg;
    return *this;
  }
  Type & set__plandb_state(
    const imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> & _arg)
  {
    this->plandb_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REQUEST =
    0u;
  static constexpr uint8_t SUCCESS =
    1u;
  static constexpr uint8_t FAILURE =
    2u;
  static constexpr uint8_t IN_PROGESS =
    3u;
  static constexpr uint8_t SET =
    0u;
  static constexpr uint8_t DEL =
    1u;
  static constexpr uint8_t GET =
    2u;
  static constexpr uint8_t GET_INFO =
    3u;
  static constexpr uint8_t CLEAR =
    4u;
  static constexpr uint8_t GET_STATE =
    5u;
  static constexpr uint8_t GET_DSTATE =
    6u;
  static constexpr uint8_t BOOT =
    7u;

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanDB_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanDB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanDB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanDB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanDB
    std::shared_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanDB
    std::shared_ptr<imc_ros_msgs::msg::PlanDB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanDB_ & other) const
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
    if (this->plan_spec != other.plan_spec) {
      return false;
    }
    if (this->plan_spec_md5 != other.plan_spec_md5) {
      return false;
    }
    if (this->plandb_information != other.plandb_information) {
      return false;
    }
    if (this->plandb_state != other.plandb_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanDB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanDB_

// alias to use template instance with default allocator
using PlanDB =
  imc_ros_msgs::msg::PlanDB_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::REQUEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::IN_PROGESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::DEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::GET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::GET_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::GET_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::GET_DSTATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanDB_<ContainerAllocator>::BOOT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_HPP_
