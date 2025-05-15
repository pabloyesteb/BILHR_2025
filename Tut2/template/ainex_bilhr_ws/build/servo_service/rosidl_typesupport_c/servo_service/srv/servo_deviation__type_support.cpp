// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from servo_service:srv/ServoDeviation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/srv/detail/servo_deviation__struct.h"
#include "servo_service/srv/detail/servo_deviation__type_support.h"
#include "servo_service/srv/detail/servo_deviation__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoDeviation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoDeviation_Request_type_support_ids_t;

static const _ServoDeviation_Request_type_support_ids_t _ServoDeviation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoDeviation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoDeviation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoDeviation_Request_type_support_symbol_names_t _ServoDeviation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoDeviation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoDeviation_Request)),
  }
};

typedef struct _ServoDeviation_Request_type_support_data_t
{
  void * data[2];
} _ServoDeviation_Request_type_support_data_t;

static _ServoDeviation_Request_type_support_data_t _ServoDeviation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoDeviation_Request_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoDeviation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServoDeviation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServoDeviation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoDeviation_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoDeviation_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Request__get_type_hash,
  &servo_service__srv__ServoDeviation_Request__get_type_description,
  &servo_service__srv__ServoDeviation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoDeviation_Request)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoDeviation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__struct.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__type_support.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoDeviation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoDeviation_Response_type_support_ids_t;

static const _ServoDeviation_Response_type_support_ids_t _ServoDeviation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoDeviation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoDeviation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoDeviation_Response_type_support_symbol_names_t _ServoDeviation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoDeviation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoDeviation_Response)),
  }
};

typedef struct _ServoDeviation_Response_type_support_data_t
{
  void * data[2];
} _ServoDeviation_Response_type_support_data_t;

static _ServoDeviation_Response_type_support_data_t _ServoDeviation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoDeviation_Response_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoDeviation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServoDeviation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServoDeviation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoDeviation_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoDeviation_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Response__get_type_hash,
  &servo_service__srv__ServoDeviation_Response__get_type_description,
  &servo_service__srv__ServoDeviation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoDeviation_Response)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoDeviation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__struct.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__type_support.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoDeviation_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoDeviation_Event_type_support_ids_t;

static const _ServoDeviation_Event_type_support_ids_t _ServoDeviation_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoDeviation_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoDeviation_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoDeviation_Event_type_support_symbol_names_t _ServoDeviation_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoDeviation_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoDeviation_Event)),
  }
};

typedef struct _ServoDeviation_Event_type_support_data_t
{
  void * data[2];
} _ServoDeviation_Event_type_support_data_t;

static _ServoDeviation_Event_type_support_data_t _ServoDeviation_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoDeviation_Event_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoDeviation_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ServoDeviation_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ServoDeviation_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoDeviation_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoDeviation_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoDeviation_Event__get_type_hash,
  &servo_service__srv__ServoDeviation_Event__get_type_description,
  &servo_service__srv__ServoDeviation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoDeviation_Event)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoDeviation_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_deviation__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ServoDeviation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoDeviation_type_support_ids_t;

static const _ServoDeviation_type_support_ids_t _ServoDeviation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoDeviation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoDeviation_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoDeviation_type_support_symbol_names_t _ServoDeviation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoDeviation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoDeviation)),
  }
};

typedef struct _ServoDeviation_type_support_data_t
{
  void * data[2];
} _ServoDeviation_type_support_data_t;

static _ServoDeviation_type_support_data_t _ServoDeviation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoDeviation_service_typesupport_map = {
  2,
  "servo_service",
  &_ServoDeviation_service_typesupport_ids.typesupport_identifier[0],
  &_ServoDeviation_service_typesupport_symbol_names.symbol_name[0],
  &_ServoDeviation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServoDeviation_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoDeviation_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ServoDeviation_Request_message_type_support_handle,
  &ServoDeviation_Response_message_type_support_handle,
  &ServoDeviation_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    ServoDeviation
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    ServoDeviation
  ),
  &servo_service__srv__ServoDeviation__get_type_hash,
  &servo_service__srv__ServoDeviation__get_type_description,
  &servo_service__srv__ServoDeviation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoDeviation)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoDeviation_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
