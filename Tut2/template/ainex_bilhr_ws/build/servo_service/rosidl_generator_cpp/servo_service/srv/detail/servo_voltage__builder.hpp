// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:srv/ServoVoltage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/servo_voltage.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__BUILDER_HPP_
#define SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/srv/detail/servo_voltage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoVoltage_Request_ids
{
public:
  Init_ServoVoltage_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoVoltage_Request ids(::servo_service::srv::ServoVoltage_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoVoltage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoVoltage_Request>()
{
  return servo_service::srv::builder::Init_ServoVoltage_Request_ids();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoVoltage_Response_vin
{
public:
  Init_ServoVoltage_Response_vin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::ServoVoltage_Response vin(::servo_service::srv::ServoVoltage_Response::_vin_type arg)
  {
    msg_.vin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoVoltage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoVoltage_Response>()
{
  return servo_service::srv::builder::Init_ServoVoltage_Response_vin();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_ServoVoltage_Event_response
{
public:
  explicit Init_ServoVoltage_Event_response(::servo_service::srv::ServoVoltage_Event & msg)
  : msg_(msg)
  {}
  ::servo_service::srv::ServoVoltage_Event response(::servo_service::srv::ServoVoltage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::ServoVoltage_Event msg_;
};

class Init_ServoVoltage_Event_request
{
public:
  explicit Init_ServoVoltage_Event_request(::servo_service::srv::ServoVoltage_Event & msg)
  : msg_(msg)
  {}
  Init_ServoVoltage_Event_response request(::servo_service::srv::ServoVoltage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ServoVoltage_Event_response(msg_);
  }

private:
  ::servo_service::srv::ServoVoltage_Event msg_;
};

class Init_ServoVoltage_Event_info
{
public:
  Init_ServoVoltage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoVoltage_Event_request info(::servo_service::srv::ServoVoltage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ServoVoltage_Event_request(msg_);
  }

private:
  ::servo_service::srv::ServoVoltage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::ServoVoltage_Event>()
{
  return servo_service::srv::builder::Init_ServoVoltage_Event_info();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__BUILDER_HPP_
