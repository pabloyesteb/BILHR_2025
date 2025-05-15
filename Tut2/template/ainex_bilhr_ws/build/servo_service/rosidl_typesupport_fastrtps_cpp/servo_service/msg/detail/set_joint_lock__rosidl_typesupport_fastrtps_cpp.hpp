// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from servo_service:msg/SetJointLock.idl
// generated code does not contain a copyright notice

#ifndef SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "servo_service/msg/detail/set_joint_lock__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace servo_service
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
cdr_serialize(
  const servo_service::msg::SetJointLock & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  servo_service::msg::SetJointLock & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
get_serialized_size(
  const servo_service::msg::SetJointLock & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
max_serialized_size_SetJointLock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
cdr_serialize_key(
  const servo_service::msg::SetJointLock & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
get_serialized_size_key(
  const servo_service::msg::SetJointLock & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
max_serialized_size_key_SetJointLock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_servo_service
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, msg, SetJointLock)();

#ifdef __cplusplus
}
#endif

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_JOINT_LOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
