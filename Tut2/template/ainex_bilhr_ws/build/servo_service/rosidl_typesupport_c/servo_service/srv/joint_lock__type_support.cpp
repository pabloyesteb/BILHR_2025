// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from servo_service:srv/JointLock.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/srv/detail/joint_lock__struct.h"
#include "servo_service/srv/detail/joint_lock__type_support.h"
#include "servo_service/srv/detail/joint_lock__functions.h"
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

typedef struct _JointLock_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointLock_Request_type_support_ids_t;

static const _JointLock_Request_type_support_ids_t _JointLock_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointLock_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointLock_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointLock_Request_type_support_symbol_names_t _JointLock_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, JointLock_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, JointLock_Request)),
  }
};

typedef struct _JointLock_Request_type_support_data_t
{
  void * data[2];
} _JointLock_Request_type_support_data_t;

static _JointLock_Request_type_support_data_t _JointLock_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointLock_Request_message_typesupport_map = {
  2,
  "servo_service",
  &_JointLock_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointLock_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointLock_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointLock_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointLock_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__JointLock_Request__get_type_hash,
  &servo_service__srv__JointLock_Request__get_type_description,
  &servo_service__srv__JointLock_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, JointLock_Request)() {
  return &::servo_service::srv::rosidl_typesupport_c::JointLock_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__struct.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__type_support.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__functions.h"
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

typedef struct _JointLock_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointLock_Response_type_support_ids_t;

static const _JointLock_Response_type_support_ids_t _JointLock_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointLock_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointLock_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointLock_Response_type_support_symbol_names_t _JointLock_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, JointLock_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, JointLock_Response)),
  }
};

typedef struct _JointLock_Response_type_support_data_t
{
  void * data[2];
} _JointLock_Response_type_support_data_t;

static _JointLock_Response_type_support_data_t _JointLock_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointLock_Response_message_typesupport_map = {
  2,
  "servo_service",
  &_JointLock_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointLock_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointLock_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointLock_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointLock_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__JointLock_Response__get_type_hash,
  &servo_service__srv__JointLock_Response__get_type_description,
  &servo_service__srv__JointLock_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, JointLock_Response)() {
  return &::servo_service::srv::rosidl_typesupport_c::JointLock_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__struct.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__type_support.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__functions.h"
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

typedef struct _JointLock_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointLock_Event_type_support_ids_t;

static const _JointLock_Event_type_support_ids_t _JointLock_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointLock_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointLock_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointLock_Event_type_support_symbol_names_t _JointLock_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, JointLock_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, JointLock_Event)),
  }
};

typedef struct _JointLock_Event_type_support_data_t
{
  void * data[2];
} _JointLock_Event_type_support_data_t;

static _JointLock_Event_type_support_data_t _JointLock_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointLock_Event_message_typesupport_map = {
  2,
  "servo_service",
  &_JointLock_Event_message_typesupport_ids.typesupport_identifier[0],
  &_JointLock_Event_message_typesupport_symbol_names.symbol_name[0],
  &_JointLock_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointLock_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointLock_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &servo_service__srv__JointLock_Event__get_type_hash,
  &servo_service__srv__JointLock_Event__get_type_description,
  &servo_service__srv__JointLock_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, JointLock_Event)() {
  return &::servo_service::srv::rosidl_typesupport_c::JointLock_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/joint_lock__type_support.h"
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
typedef struct _JointLock_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointLock_type_support_ids_t;

static const _JointLock_type_support_ids_t _JointLock_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointLock_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointLock_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointLock_type_support_symbol_names_t _JointLock_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, servo_service, srv, JointLock)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, servo_service, srv, JointLock)),
  }
};

typedef struct _JointLock_type_support_data_t
{
  void * data[2];
} _JointLock_type_support_data_t;

static _JointLock_type_support_data_t _JointLock_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointLock_service_typesupport_map = {
  2,
  "servo_service",
  &_JointLock_service_typesupport_ids.typesupport_identifier[0],
  &_JointLock_service_typesupport_symbol_names.symbol_name[0],
  &_JointLock_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointLock_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointLock_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &JointLock_Request_message_type_support_handle,
  &JointLock_Response_message_type_support_handle,
  &JointLock_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    JointLock
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    servo_service,
    srv,
    JointLock
  ),
  &servo_service__srv__JointLock__get_type_hash,
  &servo_service__srv__JointLock__get_type_description,
  &servo_service__srv__JointLock__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace servo_service

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, servo_service, srv, JointLock)() {
  return &::servo_service::srv::rosidl_typesupport_c::JointLock_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
