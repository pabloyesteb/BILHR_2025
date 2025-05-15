// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_posture.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__BUILDER_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/msg/detail/set_posture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace msg
{

namespace builder
{

class Init_SetPosture_duration
{
public:
  explicit Init_SetPosture_duration(::servo_service::msg::SetPosture & msg)
  : msg_(msg)
  {}
  ::servo_service::msg::SetPosture duration(::servo_service::msg::SetPosture::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::msg::SetPosture msg_;
};

class Init_SetPosture_posture_name
{
public:
  Init_SetPosture_posture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPosture_duration posture_name(::servo_service::msg::SetPosture::_posture_name_type arg)
  {
    msg_.posture_name = std::move(arg);
    return Init_SetPosture_duration(msg_);
  }

private:
  ::servo_service::msg::SetPosture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::msg::SetPosture>()
{
  return servo_service::msg::builder::Init_SetPosture_posture_name();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__BUILDER_HPP_
