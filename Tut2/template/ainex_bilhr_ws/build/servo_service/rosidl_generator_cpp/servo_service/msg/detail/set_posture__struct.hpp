// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_posture.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__servo_service__msg__SetPosture __attribute__((deprecated))
#else
# define DEPRECATED__servo_service__msg__SetPosture __declspec(deprecated)
#endif

namespace servo_service
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetPosture_
{
  using Type = SetPosture_<ContainerAllocator>;

  explicit SetPosture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posture_name = "";
      this->duration = 0.0f;
    }
  }

  explicit SetPosture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posture_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posture_name = "";
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _posture_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _posture_name_type posture_name;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__posture_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->posture_name = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_service::msg::SetPosture_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_service::msg::SetPosture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_service::msg::SetPosture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_service::msg::SetPosture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_service::msg::SetPosture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_service::msg::SetPosture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_service::msg::SetPosture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_service::msg::SetPosture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_service::msg::SetPosture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_service::msg::SetPosture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_service__msg__SetPosture
    std::shared_ptr<servo_service::msg::SetPosture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_service__msg__SetPosture
    std::shared_ptr<servo_service::msg::SetPosture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPosture_ & other) const
  {
    if (this->posture_name != other.posture_name) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPosture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPosture_

// alias to use template instance with default allocator
using SetPosture =
  servo_service::msg::SetPosture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_HPP_
