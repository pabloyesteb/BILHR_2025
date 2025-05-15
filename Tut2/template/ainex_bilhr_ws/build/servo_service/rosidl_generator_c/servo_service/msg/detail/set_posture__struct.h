// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_posture.h"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_H_
#define SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'posture_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetPosture in the package servo_service.
typedef struct servo_service__msg__SetPosture
{
  rosidl_runtime_c__String posture_name;
  float duration;
} servo_service__msg__SetPosture;

// Struct for a sequence of servo_service__msg__SetPosture.
typedef struct servo_service__msg__SetPosture__Sequence
{
  servo_service__msg__SetPosture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_service__msg__SetPosture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__STRUCT_H_
