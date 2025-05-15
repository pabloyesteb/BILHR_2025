// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:msg/ChangeServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/change_servo_positions.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__BUILDER_HPP_
#define SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/msg/detail/change_servo_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace msg
{

namespace builder
{

class Init_ChangeServoPositions_duration
{
public:
  explicit Init_ChangeServoPositions_duration(::servo_service::msg::ChangeServoPositions & msg)
  : msg_(msg)
  {}
  ::servo_service::msg::ChangeServoPositions duration(::servo_service::msg::ChangeServoPositions::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::msg::ChangeServoPositions msg_;
};

class Init_ChangeServoPositions_positions
{
public:
  explicit Init_ChangeServoPositions_positions(::servo_service::msg::ChangeServoPositions & msg)
  : msg_(msg)
  {}
  Init_ChangeServoPositions_duration positions(::servo_service::msg::ChangeServoPositions::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ChangeServoPositions_duration(msg_);
  }

private:
  ::servo_service::msg::ChangeServoPositions msg_;
};

class Init_ChangeServoPositions_ids
{
public:
  Init_ChangeServoPositions_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeServoPositions_positions ids(::servo_service::msg::ChangeServoPositions::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ChangeServoPositions_positions(msg_);
  }

private:
  ::servo_service::msg::ChangeServoPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::msg::ChangeServoPositions>()
{
  return servo_service::msg::builder::Init_ChangeServoPositions_ids();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__BUILDER_HPP_
