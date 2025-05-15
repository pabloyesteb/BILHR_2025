// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from servo_service:srv/ServoTemp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "servo_service/srv/detail/servo_temp__rosidl_typesupport_introspection_c.h"
#include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "servo_service/srv/detail/servo_temp__functions.h"
#include "servo_service/srv/detail/servo_temp__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_service__srv__ServoTemp_Request__init(message_memory);
}

void servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_fini_function(void * message_memory)
{
  servo_service__srv__ServoTemp_Request__fini(message_memory);
}

size_t servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__size_function__ServoTemp_Request__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Request__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_function__ServoTemp_Request__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Request__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Request__ids(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Request__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_function__ServoTemp_Request__ids(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Request__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_member_array[1] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__srv__ServoTemp_Request, ids),  // bytes offset in struct
    NULL,  // default value
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__size_function__ServoTemp_Request__ids,  // size() function pointer
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Request__ids,  // get_const(index) function pointer
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__get_function__ServoTemp_Request__ids,  // get(index) function pointer
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Request__ids,  // fetch(index, &value) function pointer
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Request__ids,  // assign(index, value) function pointer
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Request__ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_members = {
  "servo_service__srv",  // message namespace
  "ServoTemp_Request",  // message name
  1,  // number of fields
  sizeof(servo_service__srv__ServoTemp_Request),
  false,  // has_any_key_member_
  servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_member_array,  // message members
  servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle = {
  0,
  &servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Request__get_type_hash,
  &servo_service__srv__ServoTemp_Request__get_type_description,
  &servo_service__srv__ServoTemp_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Request)() {
  if (!servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle.typesupport_identifier) {
    servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "servo_service/srv/detail/servo_temp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__struct.h"


// Include directives for member types
// Member `temperature`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_service__srv__ServoTemp_Response__init(message_memory);
}

void servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_fini_function(void * message_memory)
{
  servo_service__srv__ServoTemp_Response__fini(message_memory);
}

size_t servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__size_function__ServoTemp_Response__temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Response__temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_function__ServoTemp_Response__temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Response__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Response__temperature(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Response__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_function__ServoTemp_Response__temperature(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Response__temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_member_array[1] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__srv__ServoTemp_Response, temperature),  // bytes offset in struct
    NULL,  // default value
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__size_function__ServoTemp_Response__temperature,  // size() function pointer
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Response__temperature,  // get_const(index) function pointer
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__get_function__ServoTemp_Response__temperature,  // get(index) function pointer
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Response__temperature,  // fetch(index, &value) function pointer
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Response__temperature,  // assign(index, value) function pointer
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Response__temperature  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_members = {
  "servo_service__srv",  // message namespace
  "ServoTemp_Response",  // message name
  1,  // number of fields
  sizeof(servo_service__srv__ServoTemp_Response),
  false,  // has_any_key_member_
  servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_member_array,  // message members
  servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle = {
  0,
  &servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Response__get_type_hash,
  &servo_service__srv__ServoTemp_Response__get_type_description,
  &servo_service__srv__ServoTemp_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Response)() {
  if (!servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle.typesupport_identifier) {
    servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "servo_service/srv/detail/servo_temp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "servo_service/srv/servo_temp.h"
// Member `request`
// Member `response`
// already included above
// #include "servo_service/srv/detail/servo_temp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  servo_service__srv__ServoTemp_Event__init(message_memory);
}

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_fini_function(void * message_memory)
{
  servo_service__srv__ServoTemp_Event__fini(message_memory);
}

size_t servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__size_function__ServoTemp_Event__request(
  const void * untyped_member)
{
  const servo_service__srv__ServoTemp_Request__Sequence * member =
    (const servo_service__srv__ServoTemp_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__request(
  const void * untyped_member, size_t index)
{
  const servo_service__srv__ServoTemp_Request__Sequence * member =
    (const servo_service__srv__ServoTemp_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__request(
  void * untyped_member, size_t index)
{
  servo_service__srv__ServoTemp_Request__Sequence * member =
    (servo_service__srv__ServoTemp_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const servo_service__srv__ServoTemp_Request * item =
    ((const servo_service__srv__ServoTemp_Request *)
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__request(untyped_member, index));
  servo_service__srv__ServoTemp_Request * value =
    (servo_service__srv__ServoTemp_Request *)(untyped_value);
  *value = *item;
}

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  servo_service__srv__ServoTemp_Request * item =
    ((servo_service__srv__ServoTemp_Request *)
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__request(untyped_member, index));
  const servo_service__srv__ServoTemp_Request * value =
    (const servo_service__srv__ServoTemp_Request *)(untyped_value);
  *item = *value;
}

bool servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Event__request(
  void * untyped_member, size_t size)
{
  servo_service__srv__ServoTemp_Request__Sequence * member =
    (servo_service__srv__ServoTemp_Request__Sequence *)(untyped_member);
  servo_service__srv__ServoTemp_Request__Sequence__fini(member);
  return servo_service__srv__ServoTemp_Request__Sequence__init(member, size);
}

size_t servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__size_function__ServoTemp_Event__response(
  const void * untyped_member)
{
  const servo_service__srv__ServoTemp_Response__Sequence * member =
    (const servo_service__srv__ServoTemp_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__response(
  const void * untyped_member, size_t index)
{
  const servo_service__srv__ServoTemp_Response__Sequence * member =
    (const servo_service__srv__ServoTemp_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__response(
  void * untyped_member, size_t index)
{
  servo_service__srv__ServoTemp_Response__Sequence * member =
    (servo_service__srv__ServoTemp_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const servo_service__srv__ServoTemp_Response * item =
    ((const servo_service__srv__ServoTemp_Response *)
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__response(untyped_member, index));
  servo_service__srv__ServoTemp_Response * value =
    (servo_service__srv__ServoTemp_Response *)(untyped_value);
  *value = *item;
}

void servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  servo_service__srv__ServoTemp_Response * item =
    ((servo_service__srv__ServoTemp_Response *)
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__response(untyped_member, index));
  const servo_service__srv__ServoTemp_Response * value =
    (const servo_service__srv__ServoTemp_Response *)(untyped_value);
  *item = *value;
}

bool servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Event__response(
  void * untyped_member, size_t size)
{
  servo_service__srv__ServoTemp_Response__Sequence * member =
    (servo_service__srv__ServoTemp_Response__Sequence *)(untyped_member);
  servo_service__srv__ServoTemp_Response__Sequence__fini(member);
  return servo_service__srv__ServoTemp_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(servo_service__srv__ServoTemp_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service__srv__ServoTemp_Event, request),  // bytes offset in struct
    NULL,  // default value
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__size_function__ServoTemp_Event__request,  // size() function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__request,  // get_const(index) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__request,  // get(index) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Event__request,  // fetch(index, &value) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Event__request,  // assign(index, value) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(servo_service__srv__ServoTemp_Event, response),  // bytes offset in struct
    NULL,  // default value
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__size_function__ServoTemp_Event__response,  // size() function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_const_function__ServoTemp_Event__response,  // get_const(index) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__get_function__ServoTemp_Event__response,  // get(index) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__fetch_function__ServoTemp_Event__response,  // fetch(index, &value) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__assign_function__ServoTemp_Event__response,  // assign(index, value) function pointer
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__resize_function__ServoTemp_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_members = {
  "servo_service__srv",  // message namespace
  "ServoTemp_Event",  // message name
  3,  // number of fields
  sizeof(servo_service__srv__ServoTemp_Event),
  false,  // has_any_key_member_
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_member_array,  // message members
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_type_support_handle = {
  0,
  &servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_members,
  get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Event__get_type_hash,
  &servo_service__srv__ServoTemp_Event__get_type_description,
  &servo_service__srv__ServoTemp_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Event)() {
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Request)();
  servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Response)();
  if (!servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_type_support_handle.typesupport_identifier) {
    servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "servo_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_members = {
  "servo_service__srv",  // service namespace
  "ServoTemp",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle,
  NULL,  // response message
  // servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle
  NULL  // event_message
  // servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle
};


static rosidl_service_type_support_t servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_type_support_handle = {
  0,
  &servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_members,
  get_service_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Request__rosidl_typesupport_introspection_c__ServoTemp_Request_message_type_support_handle,
  &servo_service__srv__ServoTemp_Response__rosidl_typesupport_introspection_c__ServoTemp_Response_message_type_support_handle,
  &servo_service__srv__ServoTemp_Event__rosidl_typesupport_introspection_c__ServoTemp_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    ServoTemp
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    ServoTemp
  ),
  &servo_service__srv__ServoTemp__get_type_hash,
  &servo_service__srv__ServoTemp__get_type_description,
  &servo_service__srv__ServoTemp__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_servo_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp)(void) {
  if (!servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_type_support_handle.typesupport_identifier) {
    servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Event)()->data;
  }

  return &servo_service__srv__detail__servo_temp__rosidl_typesupport_introspection_c__ServoTemp_service_type_support_handle;
}
