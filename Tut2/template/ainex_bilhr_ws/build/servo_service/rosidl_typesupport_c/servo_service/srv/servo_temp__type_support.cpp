// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from servo_service:srv/ServoTemp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/srv/detail/servo_temp__struct.h"
#include "servo_service/srv/detail/servo_temp__type_support.h"
#include "servo_service/srv/detail/servo_temp__functions.h"
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

typedef struct _ServoTemp_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoTemp_Request_type_support_ids_t;

static const _ServoTemp_Request_type_support_ids_t _ServoTemp_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoTemp_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoTemp_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoTemp_Request_type_support_symbol_names_t _ServoTemp_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoTemp_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Request)),
  }
};

typedef struct _ServoTemp_Request_type_support_data_t
{
  void * data[2];
} _ServoTemp_Request_type_support_data_t;

static _ServoTemp_Request_type_support_data_t _ServoTemp_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoTemp_Request_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoTemp_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServoTemp_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServoTemp_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoTemp_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoTemp_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Request__get_type_hash,
  &servo_service__srv__ServoTemp_Request__get_type_description,
  &servo_service__srv__ServoTemp_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoTemp_Request)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoTemp_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__struct.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__type_support.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__functions.h"
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

typedef struct _ServoTemp_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoTemp_Response_type_support_ids_t;

static const _ServoTemp_Response_type_support_ids_t _ServoTemp_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoTemp_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoTemp_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoTemp_Response_type_support_symbol_names_t _ServoTemp_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoTemp_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Response)),
  }
};

typedef struct _ServoTemp_Response_type_support_data_t
{
  void * data[2];
} _ServoTemp_Response_type_support_data_t;

static _ServoTemp_Response_type_support_data_t _ServoTemp_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoTemp_Response_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoTemp_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServoTemp_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServoTemp_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoTemp_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoTemp_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Response__get_type_hash,
  &servo_service__srv__ServoTemp_Response__get_type_description,
  &servo_service__srv__ServoTemp_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoTemp_Response)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoTemp_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__struct.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__type_support.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__functions.h"
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

typedef struct _ServoTemp_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoTemp_Event_type_support_ids_t;

static const _ServoTemp_Event_type_support_ids_t _ServoTemp_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoTemp_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoTemp_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoTemp_Event_type_support_symbol_names_t _ServoTemp_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoTemp_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp_Event)),
  }
};

typedef struct _ServoTemp_Event_type_support_data_t
{
  void * data[2];
} _ServoTemp_Event_type_support_data_t;

static _ServoTemp_Event_type_support_data_t _ServoTemp_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoTemp_Event_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoTemp_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ServoTemp_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ServoTemp_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoTemp_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoTemp_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__ServoTemp_Event__get_type_hash,
  &servo_service__srv__ServoTemp_Event__get_type_description,
  &servo_service__srv__ServoTemp_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoTemp_Event)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoTemp_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/servo_temp__type_support.h"
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
typedef struct _ServoTemp_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoTemp_type_support_ids_t;

static const _ServoTemp_type_support_ids_t _ServoTemp_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoTemp_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoTemp_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoTemp_type_support_symbol_names_t _ServoTemp_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, ServoTemp)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, ServoTemp)),
  }
};

typedef struct _ServoTemp_type_support_data_t
{
  void * data[2];
} _ServoTemp_type_support_data_t;

static _ServoTemp_type_support_data_t _ServoTemp_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoTemp_service_typesupport_map = {
  2,
  "servo_service",
  &_ServoTemp_service_typesupport_ids.typesupport_identifier[0],
  &_ServoTemp_service_typesupport_symbol_names.symbol_name[0],
  &_ServoTemp_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServoTemp_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoTemp_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ServoTemp_Request_message_type_support_handle,
  &ServoTemp_Response_message_type_support_handle,
  &ServoTemp_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, ServoTemp)() {
  return &::servo_service::srv::rosidl_typesupport_c::ServoTemp_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
