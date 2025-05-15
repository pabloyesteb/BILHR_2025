// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:msg/SetServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_servo_positions.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__BUILDER_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/msg/detail/set_servo_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace msg
{

namespace builder
{

class Init_SetServoPositions_duration
{
public:
  explicit Init_SetServoPositions_duration(::servo_service::msg::SetServoPositions & msg)
  : msg_(msg)
  {}
  ::servo_service::msg::SetServoPositions duration(::servo_service::msg::SetServoPositions::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::msg::SetServoPositions msg_;
};

class Init_SetServoPositions_positions
{
public:
  explicit Init_SetServoPositions_positions(::servo_service::msg::SetServoPositions & msg)
  : msg_(msg)
  {}
  Init_SetServoPositions_duration positions(::servo_service::msg::SetServoPositions::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_SetServoPositions_duration(msg_);
  }

private:
  ::servo_service::msg::SetServoPositions msg_;
};

class Init_SetServoPositions_ids
{
public:
  Init_SetServoPositions_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetServoPositions_positions ids(::servo_service::msg::SetServoPositions::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_SetServoPositions_positions(msg_);
  }

private:
  ::servo_service::msg::SetServoPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::msg::SetServoPositions>()
{
  return servo_service::msg::builder::Init_SetServoPositions_ids();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__BUILDER_HPP_
