// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:srv/ServoVoltage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/srv/detail/servo_voltage__functions.h"
#include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

void ServoVoltage_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoVoltage_Request(_init);
}

void ServoVoltage_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoVoltage_Request *>(message_memory);
  typed_message->~ServoVoltage_Request();
}

size_t size_function__ServoVoltage_Request__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoVoltage_Request__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoVoltage_Request__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoVoltage_Request__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__ServoVoltage_Request__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__ServoVoltage_Request__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__ServoVoltage_Request__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__ServoVoltage_Request__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoVoltage_Request_message_member_array[1] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoVoltage_Request, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoVoltage_Request__ids,  // size() function pointer
    get_const_function__ServoVoltage_Request__ids,  // get_const(index) function pointer
    get_function__ServoVoltage_Request__ids,  // get(index) function pointer
    fetch_function__ServoVoltage_Request__ids,  // fetch(index, &value) function pointer
    assign_function__ServoVoltage_Request__ids,  // assign(index, value) function pointer
    resize_function__ServoVoltage_Request__ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoVoltage_Request_message_members = {
  "servo_service::srv",  // message namespace
  "ServoVoltage_Request",  // message name
  1,  // number of fields
  sizeof(servo_service::srv::ServoVoltage_Request),
  false,  // has_any_key_member_
  ServoVoltage_Request_message_member_array,  // message members
  ServoVoltage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoVoltage_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoVoltage_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoVoltage_Request_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Request__get_type_hash,
  &servo_service__srv__ServoVoltage_Request__get_type_description,
  &servo_service__srv__ServoVoltage_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Request)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Request_message_type_support_handle;
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
// #include "servo_service/srv/detail/servo_voltage__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

void ServoVoltage_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoVoltage_Response(_init);
}

void ServoVoltage_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoVoltage_Response *>(message_memory);
  typed_message->~ServoVoltage_Response();
}

size_t size_function__ServoVoltage_Response__vin(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoVoltage_Response__vin(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoVoltage_Response__vin(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoVoltage_Response__vin(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ServoVoltage_Response__vin(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ServoVoltage_Response__vin(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ServoVoltage_Response__vin(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__ServoVoltage_Response__vin(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoVoltage_Response_message_member_array[1] = {
  {
    "vin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoVoltage_Response, vin),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoVoltage_Response__vin,  // size() function pointer
    get_const_function__ServoVoltage_Response__vin,  // get_const(index) function pointer
    get_function__ServoVoltage_Response__vin,  // get(index) function pointer
    fetch_function__ServoVoltage_Response__vin,  // fetch(index, &value) function pointer
    assign_function__ServoVoltage_Response__vin,  // assign(index, value) function pointer
    resize_function__ServoVoltage_Response__vin  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoVoltage_Response_message_members = {
  "servo_service::srv",  // message namespace
  "ServoVoltage_Response",  // message name
  1,  // number of fields
  sizeof(servo_service::srv::ServoVoltage_Response),
  false,  // has_any_key_member_
  ServoVoltage_Response_message_member_array,  // message members
  ServoVoltage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoVoltage_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoVoltage_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoVoltage_Response_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Response__get_type_hash,
  &servo_service__srv__ServoVoltage_Response__get_type_description,
  &servo_service__srv__ServoVoltage_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Response)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Response_message_type_support_handle;
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
// #include "servo_service/srv/detail/servo_voltage__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

void ServoVoltage_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::srv::ServoVoltage_Event(_init);
}

void ServoVoltage_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::srv::ServoVoltage_Event *>(message_memory);
  typed_message->~ServoVoltage_Event();
}

size_t size_function__ServoVoltage_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<servo_service::srv::ServoVoltage_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoVoltage_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<servo_service::srv::ServoVoltage_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoVoltage_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<servo_service::srv::ServoVoltage_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoVoltage_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const servo_service::srv::ServoVoltage_Request *>(
    get_const_function__ServoVoltage_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<servo_service::srv::ServoVoltage_Request *>(untyped_value);
  value = item;
}

void assign_function__ServoVoltage_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<servo_service::srv::ServoVoltage_Request *>(
    get_function__ServoVoltage_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const servo_service::srv::ServoVoltage_Request *>(untyped_value);
  item = value;
}

void resize_function__ServoVoltage_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<servo_service::srv::ServoVoltage_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServoVoltage_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<servo_service::srv::ServoVoltage_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoVoltage_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<servo_service::srv::ServoVoltage_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoVoltage_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<servo_service::srv::ServoVoltage_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoVoltage_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const servo_service::srv::ServoVoltage_Response *>(
    get_const_function__ServoVoltage_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<servo_service::srv::ServoVoltage_Response *>(untyped_value);
  value = item;
}

void assign_function__ServoVoltage_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<servo_service::srv::ServoVoltage_Response *>(
    get_function__ServoVoltage_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const servo_service::srv::ServoVoltage_Response *>(untyped_value);
  item = value;
}

void resize_function__ServoVoltage_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<servo_service::srv::ServoVoltage_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoVoltage_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::srv::ServoVoltage_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service::srv::ServoVoltage_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoVoltage_Event__request,  // size() function pointer
    get_const_function__ServoVoltage_Event__request,  // get_const(index) function pointer
    get_function__ServoVoltage_Event__request,  // get(index) function pointer
    fetch_function__ServoVoltage_Event__request,  // fetch(index, &value) function pointer
    assign_function__ServoVoltage_Event__request,  // assign(index, value) function pointer
    resize_function__ServoVoltage_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service::srv::ServoVoltage_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoVoltage_Event__response,  // size() function pointer
    get_const_function__ServoVoltage_Event__response,  // get_const(index) function pointer
    get_function__ServoVoltage_Event__response,  // get(index) function pointer
    fetch_function__ServoVoltage_Event__response,  // fetch(index, &value) function pointer
    assign_function__ServoVoltage_Event__response,  // assign(index, value) function pointer
    resize_function__ServoVoltage_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoVoltage_Event_message_members = {
  "servo_service::srv",  // message namespace
  "ServoVoltage_Event",  // message name
  3,  // number of fields
  sizeof(servo_service::srv::ServoVoltage_Event),
  false,  // has_any_key_member_
  ServoVoltage_Event_message_member_array,  // message members
  ServoVoltage_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoVoltage_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoVoltage_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoVoltage_Event_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Event__get_type_hash,
  &servo_service__srv__ServoVoltage_Event__get_type_description,
  &servo_service__srv__ServoVoltage_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Event>()
{
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Event)() {
  return &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_Event_message_type_support_handle;
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
// #include "servo_service/srv/detail/servo_voltage__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ServoVoltage_service_members = {
  "servo_service::srv",  // service namespace
  "ServoVoltage",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<servo_service::srv::ServoVoltage>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ServoVoltage_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoVoltage_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<servo_service::srv::ServoVoltage>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<servo_service::srv::ServoVoltage>,
  &servo_service__srv__ServoVoltage__get_type_hash,
  &servo_service__srv__ServoVoltage__get_type_description,
  &servo_service__srv__ServoVoltage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<servo_service::srv::ServoVoltage>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::servo_service::srv::rosidl_typesupport_introspection_cpp::ServoVoltage_service_type_support_handle;
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
        ::servo_service::srv::ServoVoltage_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::servo_service::srv::ServoVoltage_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::servo_service::srv::ServoVoltage_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<servo_service::srv::ServoVoltage>();
}

#ifdef __cplusplus
}
#endif
