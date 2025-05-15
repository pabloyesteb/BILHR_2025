// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from servo_service:msg/GetServoPositions.idl
// generated code does not contain a copyright notice
#ifndef SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "servo_service/msg/detail/get_servo_positions__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
bool cdr_serialize_servo_service__msg__GetServoPositions(
  const servo_service__msg__GetServoPositions * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
bool cdr_deserialize_servo_service__msg__GetServoPositions(
  eprosima::fastcdr::Cdr &,
  servo_service__msg__GetServoPositions * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
size_t get_serialized_size_servo_service__msg__GetServoPositions(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
size_t max_serialized_size_servo_service__msg__GetServoPositions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
bool cdr_serialize_key_servo_service__msg__GetServoPositions(
  const servo_service__msg__GetServoPositions * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
size_t get_serialized_size_key_servo_service__msg__GetServoPositions(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
size_t max_serialized_size_key_servo_service__msg__GetServoPositions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, msg, GetServoPositions)();

#ifdef __cplusplus
}
#endif

#endif  // SERVO_SERVICE__MSG__DETAIL__GET_SERVO_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
