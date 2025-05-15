// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:srv/ServoDeviation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/servo_deviation.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__SERVO_DEVIATION__BUILDER_HPP_
#define SERVO_SERVICE__SRV__DETAIL__SERVO_DEVIATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/srv/detail/servo_deviation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoDeviation_Request_ids
{
public:
  Init_ServoDeviation_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoDeviation_Request ids(::servo_service::srv::ServoDeviation_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoDeviation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoDeviation_Request>()
{
  return servo_service::srv::builder::Init_ServoDeviation_Request_ids();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoDeviation_Response_deviation
{
public:
  Init_ServoDeviation_Response_deviation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoDeviation_Response deviation(::servo_service::srv::ServoDeviation_Response::_deviation_type arg)
  {
    msg_.deviation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoDeviation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoDeviation_Response>()
{
  return servo_service::srv::builder::Init_ServoDeviation_Response_deviation();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoDeviation_Event_response
{
public:
  explicit Init_ServoDeviation_Event_response(::servo_service::srv::ServoDeviation_Event & msg)
  : msg_(msg)
  {}
  ::servo_service::srv::ServoDeviation_Event response(::servo_service::srv::ServoDeviation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoDeviation_Event msg_;
};

class Init_ServoDeviation_Event_request
{
public:
  explicit Init_ServoDeviation_Event_request(::servo_service::srv::ServoDeviation_Event & msg)
  : msg_(msg)
  {}
  Init_ServoDeviation_Event_response request(::servo_service::srv::ServoDeviation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ServoDeviation_Event_response(msg_);
  }

private:
  ::servo_service::srv::ServoDeviation_Event msg_;
};

class Init_ServoDeviation_Event_info
{
public:
  Init_ServoDeviation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoDeviation_Event_request info(::servo_service::srv::ServoDeviation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ServoDeviation_Event_request(msg_);
  }

private:
  ::servo_service::srv::ServoDeviation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoDeviation_Event>()
{
  return servo_service::srv::builder::Init_ServoDeviation_Event_info();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__SRV__DETAIL__SERVO_DEVIATION__BUILDER_HPP_
