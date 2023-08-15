// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_HPP_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plans_info'
#include "imc_ros_msgs/msg/detail/plan_db_information__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imc_ros_msgs__msg__PlanDBState __attribute__((deprecated))
#else
# define DEPRECATED__imc_ros_msgs__msg__PlanDBState __declspec(deprecated)
#endif

namespace imc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanDBState_
{
  using Type = PlanDBState_<ContainerAllocator>;

  explicit PlanDBState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_count = 0;
      this->plan_size = 0ul;
      this->change_time = 0.0;
      this->change_sid = 0;
      this->change_sname = "";
    }
  }

  explicit PlanDBState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : change_sname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_count = 0;
      this->plan_size = 0ul;
      this->change_time = 0.0;
      this->change_sid = 0;
      this->change_sname = "";
    }
  }

  // field types and members
  using _plan_count_type =
    uint16_t;
  _plan_count_type plan_count;
  using _plan_size_type =
    uint32_t;
  _plan_size_type plan_size;
  using _change_time_type =
    double;
  _change_time_type change_time;
  using _change_sid_type =
    uint16_t;
  _change_sid_type change_sid;
  using _change_sname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _change_sname_type change_sname;
  using _md5_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _md5_type md5;
  using _plans_info_type =
    std::vector<imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator>>>;
  _plans_info_type plans_info;

  // setters for named parameter idiom
  Type & set__plan_count(
    const uint16_t & _arg)
  {
    this->plan_count = _arg;
    return *this;
  }
  Type & set__plan_size(
    const uint32_t & _arg)
  {
    this->plan_size = _arg;
    return *this;
  }
  Type & set__change_time(
    const double & _arg)
  {
    this->change_time = _arg;
    return *this;
  }
  Type & set__change_sid(
    const uint16_t & _arg)
  {
    this->change_sid = _arg;
    return *this;
  }
  Type & set__change_sname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->change_sname = _arg;
    return *this;
  }
  Type & set__md5(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->md5 = _arg;
    return *this;
  }
  Type & set__plans_info(
    const std::vector<imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<imc_ros_msgs::msg::PlanDBInformation_<ContainerAllocator>>> & _arg)
  {
    this->plans_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> *;
  using ConstRawPtr =
    const imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imc_ros_msgs__msg__PlanDBState
    std::shared_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imc_ros_msgs__msg__PlanDBState
    std::shared_ptr<imc_ros_msgs::msg::PlanDBState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanDBState_ & other) const
  {
    if (this->plan_count != other.plan_count) {
      return false;
    }
    if (this->plan_size != other.plan_size) {
      return false;
    }
    if (this->change_time != other.change_time) {
      return false;
    }
    if (this->change_sid != other.change_sid) {
      return false;
    }
    if (this->change_sname != other.change_sname) {
      return false;
    }
    if (this->md5 != other.md5) {
      return false;
    }
    if (this->plans_info != other.plans_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanDBState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanDBState_

// alias to use template instance with default allocator
using PlanDBState =
  imc_ros_msgs::msg::PlanDBState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imc_ros_msgs

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_HPP_
