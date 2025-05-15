// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:msg/GetServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/get_servo_positions.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__BUILDER_HPP_
#define SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/msg/detail/get_servo_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace msg
{

namespace builder
{

class Init_GetServoPositions_positions
{
public:
  explicit Init_GetServoPositions_positions(::servo_service::msg::GetServoPositions & msg)
  : msg_(msg)
  {}
  ::servo_service::msg::GetServoPositions positions(::servo_service::msg::GetServoPositions::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::msg::GetServoPositions msg_;
};

class Init_GetServoPositions_ids
{
public:
  Init_GetServoPositions_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetServoPositions_positions ids(::servo_service::msg::GetServoPositions::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_GetServoPositions_positions(msg_);
  }

private:
  ::servo_service::msg::GetServoPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::msg::GetServoPositions>()
{
  return servo_service::msg::builder::Init_GetServoPositions_ids();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__BUILDER_HPP_
