// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/msg/detail/set_posture__functions.h"
#include "servo_service/msg/detail/set_posture__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace servo_service
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetPosture_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::msg::SetPosture(_init);
}

void SetPosture_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::msg::SetPosture *>(message_memory);
  typed_message->~SetPosture();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetPosture_message_member_array[2] = {
  {
    "posture_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::msg::SetPosture, posture_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::msg::SetPosture, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetPosture_message_members = {
  "servo_service::msg",  // message namespace
  "SetPosture",  // message name
  2,  // number of fields
  sizeof(servo_service::msg::SetPosture),
  false,  // has_any_key_member_
  SetPosture_message_member_array,  // message members
  SetPosture_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPosture_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetPosture_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetPosture_message_members,
  get_message_typesupport_handle_function,
  &servo_service__msg__SetPosture__get_type_hash,
  &servo_service__msg__SetPosture__get_type_description,
  &servo_service__msg__SetPosture__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::msg::SetPosture>()
{
  return &::servo_service::msg::rosidl_typesupport_introspection_cpp::SetPosture_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, msg, SetPosture)() {
  return &::servo_service::msg::rosidl_typesupport_introspection_cpp::SetPosture_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
