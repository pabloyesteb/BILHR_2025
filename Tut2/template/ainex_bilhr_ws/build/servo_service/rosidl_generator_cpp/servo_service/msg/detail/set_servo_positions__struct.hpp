// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_service:msg/SetServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_servo_positions.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__STRUCT_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__servo_service__msg__SetServoPositions __attribute__((deprecated))
#else
# define DEPRECATED__servo_service__msg__SetServoPositions __declspec(deprecated)
#endif

namespace servo_service
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetServoPositions_
{
  using Type = SetServoPositions_<ContainerAllocator>;

  explicit SetServoPositions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  explicit SetServoPositions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ids_type ids;
  using _positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _positions_type positions;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->positions = _arg;
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
    servo_service::msg::SetServoPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_service::msg::SetServoPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_service::msg::SetServoPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_service::msg::SetServoPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_service__msg__SetServoPositions
    std::shared_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_service__msg__SetServoPositions
    std::shared_ptr<servo_service::msg::SetServoPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetServoPositions_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetServoPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetServoPositions_

// alias to use template instance with default allocator
using SetServoPositions =
  servo_service::msg::SetServoPositions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__STRUCT_HPP_
