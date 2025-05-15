// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from servo_service:srv/JointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/joint_range.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__JOINT_RANGE__BUILDER_HPP_
#define SERVO_SERVICE__SRV__DETAIL__JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "servo_service/srv/detail/joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_JointRange_Request_ids
{
public:
  Init_JointRange_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::servo_service::srv::JointRange_Request ids(::servo_service::srv::JointRange_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::JointRange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::JointRange_Request>()
{
  return servo_service::srv::builder::Init_JointRange_Request_ids();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_JointRange_Response_angle_max
{
public:
  explicit Init_JointRange_Response_angle_max(::servo_service::srv::JointRange_Response & msg)
  : msg_(msg)
  {}
  ::servo_service::srv::JointRange_Response angle_max(::servo_service::srv::JointRange_Response::_angle_max_type arg)
  {
    msg_.angle_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::JointRange_Response msg_;
};

class Init_JointRange_Response_angle_min
{
public:
  Init_JointRange_Response_angle_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointRange_Response_angle_max angle_min(::servo_service::srv::JointRange_Response::_angle_min_type arg)
  {
    msg_.angle_min = std::move(arg);
    return Init_JointRange_Response_angle_max(msg_);
  }

private:
  ::servo_service::srv::JointRange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::JointRange_Response>()
{
  return servo_service::srv::builder::Init_JointRange_Response_angle_min();
}

}  // namespace servo_service


namespace servo_service
{

namespace srv
{

namespace builder
{

class Init_JointRange_Event_response
{
public:
  explicit Init_JointRange_Event_response(::servo_service::srv::JointRange_Event & msg)
  : msg_(msg)
  {}
  ::servo_service::srv::JointRange_Event response(::servo_service::srv::JointRange_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::servo_service::srv::JointRange_Event msg_;
};

class Init_JointRange_Event_request
{
public:
  explicit Init_JointRange_Event_request(::servo_service::srv::JointRange_Event & msg)
  : msg_(msg)
  {}
  Init_JointRange_Event_response request(::servo_service::srv::JointRange_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_JointRange_Event_response(msg_);
  }

private:
  ::servo_service::srv::JointRange_Event msg_;
};

class Init_JointRange_Event_info
{
public:
  Init_JointRange_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointRange_Event_request info(::servo_service::srv::JointRange_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_JointRange_Event_request(msg_);
  }

private:
  ::servo_service::srv::JointRange_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::servo_service::srv::JointRange_Event>()
{
  return servo_service::srv::builder::Init_JointRange_Event_info();
}

}  // namespace servo_service

#endif  // SERVO_SERVICE__SRV__DETAIL__JOINT_RANGE__BUILDER_HPP_
