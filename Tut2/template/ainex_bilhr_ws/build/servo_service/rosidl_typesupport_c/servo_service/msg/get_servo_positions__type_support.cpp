// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from servo_service:msg/GetServoPositions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/msg/detail/get_servo_positions__struct.h"
#include "servo_service/msg/detail/get_servo_positions__type_support.h"
#include "servo_service/msg/detail/get_servo_positions__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _GetServoPositions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetServoPositions_type_support_ids_t;

static const _GetServoPositions_type_support_ids_t _GetServoPositions_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetServoPositions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetServoPositions_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetServoPositions_type_support_symbol_names_t _GetServoPositions_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, msg, GetServoPositions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, msg, GetServoPositions)),
  }
};

typedef struct _GetServoPositions_type_support_data_t
{
  void * data[2];
} _GetServoPositions_type_support_data_t;

static _GetServoPositions_type_support_data_t _GetServoPositions_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetServoPositions_message_typesupport_map = {
  2,
  "servo_service",
  &_GetServoPositions_message_typesupport_ids.typesupport_identifier[0],
  &_GetServoPositions_message_typesupport_symbol_names.symbol_name[0],
  &_GetServoPositions_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetServoPositions_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetServoPositions_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__msg__GetServoPositions__get_type_hash,
  &servo_service__msg__GetServoPositions__get_type_description,
  &servo_service__msg__GetServoPositions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, msg, GetServoPositions)() {
  return &::servo_service::msg::rosidl_typesupport_c::GetServoPositions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
