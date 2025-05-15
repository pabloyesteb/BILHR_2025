// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:srv/ServoDeviation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/srv/detail/servo_deviation__functions.h"
#include "servo_service/srv/detail/servo_deviation__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoDeviation_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoDeviation_Request(_init);
}

void ServoDeviation_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoDeviation_Request *>(message_memory);
  typed_message->~ServoDeviation_Request();
}

size_t size_function__ServoDeviation_Request__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDeviation_Request__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDeviation_Request__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDeviation_Request__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__ServoDeviation_Request__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__ServoDeviation_Request__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__ServoDeviation_Request__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__ServoDeviation_Request__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoDeviation_Request_message_member_array[1] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoDeviation_Request, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDeviation_Request__ids,  // size() function pointer
    get_const_function__ServoDeviation_Request__ids,  // get_const(index) function pointer
    get_function__ServoDeviation_Request__ids,  // get(index) function pointer
    fetch_function__ServoDeviation_Request__ids,  // fetch(index, &value) function pointer
    assign_function__ServoDeviation_Request__ids,  // assign(index, value) function pointer
    resize_function__ServoDeviation_Request__ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoDeviation_Request_message_members = {
  "servo_service::srv",  // message namespace
  "ServoDeviation_Request",  // message name
  1,  // number of fields
  sizeof(servo_service::srv::ServoDeviation_Request),
  false,  // has_any_key_member_
  ServoDeviation_Request_message_member_array,  // message members
  ServoDeviation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoDeviation_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoDeviation_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoDeviation_Request_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Request__get_type_hash,
  &servo_service__srv__ServoDeviation_Request__get_type_description,
  &servo_service__srv__ServoDeviation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoDeviation_Request>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoDeviation_Request)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoDeviation_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoDeviation_Response(_init);
}

void ServoDeviation_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoDeviation_Response *>(message_memory);
  typed_message->~ServoDeviation_Response();
}

size_t size_function__ServoDeviation_Response__deviation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDeviation_Response__deviation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDeviation_Response__deviation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDeviation_Response__deviation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ServoDeviation_Response__deviation(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ServoDeviation_Response__deviation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ServoDeviation_Response__deviation(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ServoDeviation_Response__deviation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoDeviation_Response_message_member_array[1] = {
  {
    "deviation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoDeviation_Response, deviation),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDeviation_Response__deviation,  // size() function pointer
    get_const_function__ServoDeviation_Response__deviation,  // get_const(index) function pointer
    get_function__ServoDeviation_Response__deviation,  // get(index) function pointer
    fetch_function__ServoDeviation_Response__deviation,  // fetch(index, &value) function pointer
    assign_function__ServoDeviation_Response__deviation,  // assign(index, value) function pointer
    resize_function__ServoDeviation_Response__deviation  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoDeviation_Response_message_members = {
  "servo_service::srv",  // message namespace
  "ServoDeviation_Response",  // message name
  1,  // number of fields
  sizeof(servo_service::srv::ServoDeviation_Response),
  false,  // has_any_key_member_
  ServoDeviation_Response_message_member_array,  // message members
  ServoDeviation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoDeviation_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoDeviation_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoDeviation_Response_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Response__get_type_hash,
  &servo_service__srv__ServoDeviation_Response__get_type_description,
  &servo_service__srv__ServoDeviation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoDeviation_Response>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoDeviation_Response)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoDeviation_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoDeviation_Event(_init);
}

void ServoDeviation_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoDeviation_Event *>(message_memory);
  typed_message->~ServoDeviation_Event();
}

size_t size_function__ServoDeviation_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<servo_service::srv::ServoDeviation_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDeviation_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<servo_service::srv::ServoDeviation_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDeviation_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<servo_service::srv::ServoDeviation_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDeviation_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const servo_service::srv::ServoDeviation_Request *>(
    get_const_function__ServoDeviation_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<servo_service::srv::ServoDeviation_Request *>(untyped_value);
  value = item;
}

void assign_function__ServoDeviation_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<servo_service::srv::ServoDeviation_Request *>(
    get_function__ServoDeviation_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const servo_service::srv::ServoDeviation_Request *>(untyped_value);
  item = value;
}

void resize_function__ServoDeviation_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<servo_service::srv::ServoDeviation_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServoDeviation_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<servo_service::srv::ServoDeviation_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDeviation_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<servo_service::srv::ServoDeviation_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDeviation_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<servo_service::srv::ServoDeviation_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDeviation_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const servo_service::srv::ServoDeviation_Response *>(
    get_const_function__ServoDeviation_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<servo_service::srv::ServoDeviation_Response *>(untyped_value);
  value = item;
}

void assign_function__ServoDeviation_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<servo_service::srv::ServoDeviation_Response *>(
    get_function__ServoDeviation_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const servo_service::srv::ServoDeviation_Response *>(untyped_value);
  item = value;
}

void resize_function__ServoDeviation_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<servo_service::srv::ServoDeviation_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoDeviation_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoDeviation_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoDeviation_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service::srv::ServoDeviation_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDeviation_Event__request,  // size() function pointer
    get_const_function__ServoDeviation_Event__request,  // get_const(index) function pointer
    get_function__ServoDeviation_Event__request,  // get(index) function pointer
    fetch_function__ServoDeviation_Event__request,  // fetch(index, &value) function pointer
    assign_function__ServoDeviation_Event__request,  // assign(index, value) function pointer
    resize_function__ServoDeviation_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoDeviation_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service::srv::ServoDeviation_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDeviation_Event__response,  // size() function pointer
    get_const_function__ServoDeviation_Event__response,  // get_const(index) function pointer
    get_function__ServoDeviation_Event__response,  // get(index) function pointer
    fetch_function__ServoDeviation_Event__response,  // fetch(index, &value) function pointer
    assign_function__ServoDeviation_Event__response,  // assign(index, value) function pointer
    resize_function__ServoDeviation_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoDeviation_Event_message_members = {
  "servo_service::srv",  // message namespace
  "ServoDeviation_Event",  // message name
  3,  // number of fields
  sizeof(servo_service::srv::ServoDeviation_Event),
  false,  // has_any_key_member_
  ServoDeviation_Event_message_member_array,  // message members
  ServoDeviation_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoDeviation_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoDeviation_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoDeviation_Event_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Event__get_type_hash,
  &servo_service__srv__ServoDeviation_Event__get_type_description,
  &servo_service__srv__ServoDeviation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoDeviation_Event>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoDeviation_Event)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ServoDeviation_service_members = {
  "servo_service::srv",  // service namespace
  "ServoDeviation",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<servo_service::srv::ServoDeviation>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ServoDeviation_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoDeviation_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoDeviation_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoDeviation_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoDeviation_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<servo_service::srv::ServoDeviation>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<servo_service::srv::ServoDeviation>,
  &servo_service__srv__ServoDeviation__get_type_hash,
  &servo_service__srv__ServoDeviation__get_type_description,
  &servo_service__srv__ServoDeviation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<servo_service::srv::ServoDeviation>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoDeviation_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::servo_service::srv::ServoDeviation_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::servo_service::srv::ServoDeviation_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::servo_service::srv::ServoDeviation_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoDeviation)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<servo_service::srv::ServoDeviation>();
}

#ifdef __cplusplus
}
#endif
