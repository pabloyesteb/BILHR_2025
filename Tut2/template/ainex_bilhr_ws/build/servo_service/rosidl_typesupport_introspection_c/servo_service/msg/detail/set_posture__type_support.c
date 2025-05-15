// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_service/msg/detail/set_posture__rosidl_typesupport_introspection_c.h"
#include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_service/msg/detail/set_posture__functions.h"
#include "servo_service/msg/detail/set_posture__struct.h"


// Include directives for member types
// Member `posture_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_service__msg__SetPosture__init(message_memory);
}

void servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_fini_function(void * message_memory)
{
  servo_service__msg__SetPosture__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_member_array[2] = {
  {
    "posture_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__msg__SetPosture, posture_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
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
    offsetof(servo_service__msg__SetPosture, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_members = {
  "servo_service__msg",  // message namespace
  "SetPosture",  // message name
  2,  // number of fields
  sizeof(servo_service__msg__SetPosture),
  false,  // has_any_key_member_
  servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_member_array,  // message members
  servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_type_support_handle = {
  0,
  &servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_members,
  get_message_typesupport_handle_function,
  &servo_service__msg__SetPosture__get_type_hash,
  &servo_service__msg__SetPosture__get_type_description,
  &servo_service__msg__SetPosture__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, msg, SetPosture)() {
  if (!servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_type_support_handle.typesupport_identifier) {
    servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_service__msg__SetPosture__rosidl_typesupport_introspection_c__SetPosture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
