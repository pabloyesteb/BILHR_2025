// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:srv/ServoTemp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/servo_temp.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__SERVO_TEMP__BUILDER_HPP_
#define SERVO_SERVICE__SRV__DETAIL__SERVO_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/srv/detail/servo_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoTemp_Request_ids
{
public:
  Init_ServoTemp_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoTemp_Request ids(::servo_service::srv::ServoTemp_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoTemp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoTemp_Request>()
{
  return servo_service::srv::builder::Init_ServoTemp_Request_ids();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoTemp_Response_temperature
{
public:
  Init_ServoTemp_Response_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoTemp_Response temperature(::servo_service::srv::ServoTemp_Response::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoTemp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoTemp_Response>()
{
  return servo_service::srv::builder::Init_ServoTemp_Response_temperature();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoTemp_Event_response
{
public:
  explicit Init_ServoTemp_Event_response(::servo_service::srv::ServoTemp_Event & msg)
  : msg_(msg)
  {}
  ::servo_service::srv::ServoTemp_Event response(::servo_service::srv::ServoTemp_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoTemp_Event msg_;
};

class Init_ServoTemp_Event_request
{
public:
  explicit Init_ServoTemp_Event_request(::servo_service::srv::ServoTemp_Event & msg)
  : msg_(msg)
  {}
  Init_ServoTemp_Event_response request(::servo_service::srv::ServoTemp_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ServoTemp_Event_response(msg_);
  }

private:
  ::servo_service::srv::ServoTemp_Event msg_;
};

class Init_ServoTemp_Event_info
{
public:
  Init_ServoTemp_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoTemp_Event_request info(::servo_service::srv::ServoTemp_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ServoTemp_Event_request(msg_);
  }

private:
  ::servo_service::srv::ServoTemp_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoTemp_Event>()
{
  return servo_service::srv::builder::Init_ServoTemp_Event_info();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__SRV__DETAIL__SERVO_TEMP__BUILDER_HPP_
