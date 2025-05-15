// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_service:msg/ChangeServoPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_service/msg/detail/change_servo_positions__rosidl_typesupport_introspection_c.h"
#include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_service/msg/detail/change_servo_positions__functions.h"
#include "servo_service/msg/detail/change_servo_positions__struct.h"


// Include directives for member types
// Member `ids`
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_service__msg__ChangeServoPositions__init(message_memory);
}

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_fini_function(void * message_memory)
{
  servo_service__msg__ChangeServoPositions__fini(message_memory);
}

size_t servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__size_function__ChangeServoPositions__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__fetch_function__ChangeServoPositions__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__ids(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__assign_function__ChangeServoPositions__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__ids(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__resize_function__ChangeServoPositions__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__size_function__ChangeServoPositions__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__fetch_function__ChangeServoPositions__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__assign_function__ChangeServoPositions__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__resize_function__ChangeServoPositions__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_member_array[3] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__msg__ChangeServoPositions, ids),  // bytes offset in struct
    NULL,  // default value
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__size_function__ChangeServoPositions__ids,  // size() function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__ids,  // get_const(index) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__ids,  // get(index) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__fetch_function__ChangeServoPositions__ids,  // fetch(index, &value) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__assign_function__ChangeServoPositions__ids,  // assign(index, value) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__resize_function__ChangeServoPositions__ids  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__msg__ChangeServoPositions, positions),  // bytes offset in struct
    NULL,  // default value
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__size_function__ChangeServoPositions__positions,  // size() function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_const_function__ChangeServoPositions__positions,  // get_const(index) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__get_function__ChangeServoPositions__positions,  // get(index) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__fetch_function__ChangeServoPositions__positions,  // fetch(index, &value) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__assign_function__ChangeServoPositions__positions,  // assign(index, value) function pointer
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__resize_function__ChangeServoPositions__positions  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__msg__ChangeServoPositions, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_members = {
  "servo_service__msg",  // message namespace
  "ChangeServoPositions",  // message name
  3,  // number of fields
  sizeof(servo_service__msg__ChangeServoPositions),
  false,  // has_any_key_member_
  servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_member_array,  // message members
  servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_type_support_handle = {
  0,
  &servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_members,
  get_message_typesupport_handle_function,
  &servo_service__msg__ChangeServoPositions__get_type_hash,
  &servo_service__msg__ChangeServoPositions__get_type_description,
  &servo_service__msg__ChangeServoPositions__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, msg, ChangeServoPositions)() {
  if (!servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_type_support_handle.typesupport_identifier) {
    servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_service__msg__ChangeServoPositions__rosidl_typesupport_introspection_c__ChangeServoPositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
