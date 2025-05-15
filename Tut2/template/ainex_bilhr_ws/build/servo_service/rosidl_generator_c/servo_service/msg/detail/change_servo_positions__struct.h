// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_service:msg/ChangeServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/change_servo_positions.h"


#ifndef SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__STRUCT_H_
#define SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ChangeServoPositions in the package servo_service.
typedef struct servo_service__msg__ChangeServoPositions
{
  rosidl_runtime_c__uint8__Sequence ids;
  rosidl_runtime_c__float__Sequence positions;
  float duration;
} servo_service__msg__ChangeServoPositions;

// Struct for a sequence of servo_service__msg__ChangeServoPositions.
typedef struct servo_service__msg__ChangeServoPositions__Sequence
{
  servo_service__msg__ChangeServoPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_service__msg__ChangeServoPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_SERVICE__MSG__DETAIL__CHANGE_SERVO_POSITIONS__STRUCT_H_
