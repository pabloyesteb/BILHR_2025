// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:msg/SetServoPositions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/msg/detail/set_servo_positions__functions.h"
#include "servo_service/msg/detail/set_servo_positions__struct.hpp"
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

void SetServoPositions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) servo_service::msg::SetServoPositions(_init);
}

void SetServoPositions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<servo_service::msg::SetServoPositions *>(message_memory);
  typed_message->~SetServoPositions();
}

size_t size_function__SetServoPositions__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetServoPositions__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetServoPositions__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetServoPositions__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SetServoPositions__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SetServoPositions__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SetServoPositions__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SetServoPositions__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetServoPositions__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetServoPositions__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SetServoPositions__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetServoPositions__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetServoPositions__positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetServoPositions__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetServoPositions__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SetServoPositions__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetServoPositions_message_member_array[3] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::msg::SetServoPositions, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetServoPositions__ids,  // size() function pointer
    get_const_function__SetServoPositions__ids,  // get_const(index) function pointer
    get_function__SetServoPositions__ids,  // get(index) function pointer
    fetch_function__SetServoPositions__ids,  // fetch(index, &value) function pointer
    assign_function__SetServoPositions__ids,  // assign(index, value) function pointer
    resize_function__SetServoPositions__ids  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service::msg::SetServoPositions, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetServoPositions__positions,  // size() function pointer
    get_const_function__SetServoPositions__positions,  // get_const(index) function pointer
    get_function__SetServoPositions__positions,  // get(index) function pointer
    fetch_function__SetServoPositions__positions,  // fetch(index, &value) function pointer
    assign_function__SetServoPositions__positions,  // assign(index, value) function pointer
    resize_function__SetServoPositions__positions  // resize(index) function pointer
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
    offsetof(servo_service::msg::SetServoPositions, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetServoPositions_message_members = {
  "servo_service::msg",  // message namespace
  "SetServoPositions",  // message name
  3,  // number of fields
  sizeof(servo_service::msg::SetServoPositions),
  false,  // has_any_key_member_
  SetServoPositions_message_member_array,  // message members
  SetServoPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  SetServoPositions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetServoPositions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetServoPositions_message_members,
  get_message_typesupport_handle_function,
  &servo_service__msg__SetServoPositions__get_type_hash,
  &servo_service__msg__SetServoPositions__get_type_description,
  &servo_service__msg__SetServoPositions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace servo_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::msg::SetServoPositions>()
{
  return &::servo_service::msg::rosidl_typesupport_introspection_cpp::SetServoPositions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, msg, SetServoPositions)() {
  return &::servo_service::msg::rosidl_typesupport_introspection_cpp::SetServoPositions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
