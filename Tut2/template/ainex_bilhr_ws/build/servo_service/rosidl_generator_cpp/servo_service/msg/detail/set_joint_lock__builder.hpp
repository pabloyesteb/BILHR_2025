// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:msg/SetJointLock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_joint_lock.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__BUILDER_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/msg/detail/set_joint_lock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace msg
{

namespace builder
{

class Init_SetJointLock_status
{
public:
  explicit Init_SetJointLock_status(::servo_service::msg::SetJointLock & msg)
  : msg_(msg)
  {}
  ::servo_service::msg::SetJointLock status(::servo_service::msg::SetJointLock::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::msg::SetJointLock msg_;
};

class Init_SetJointLock_ids
{
public:
  Init_SetJointLock_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointLock_status ids(::servo_service::msg::SetJointLock::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_SetJointLock_status(msg_);
  }

private:
  ::servo_service::msg::SetJointLock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::msg::SetJointLock>()
{
  return servo_service::msg::builder::Init_SetJointLock_ids();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__BUILDER_HPP_
