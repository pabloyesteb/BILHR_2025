// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:srv/JointPosition.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/srv/detail/joint_position__functions.h"
#include "servo_service/srv/detail/joint_position__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPosition_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPosition_Request_type_support_ids_t;

static const _JointPosition_Request_type_support_ids_t _JointPosition_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPosition_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPosition_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPosition_Request_type_support_symbol_names_t _JointPosition_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, JointPosition_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, JointPosition_Request)),
  }
};

typedef struct _JointPosition_Request_type_support_data_t
{
  void * data[2];
} _JointPosition_Request_type_support_data_t;

static _JointPosition_Request_type_support_data_t _JointPosition_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPosition_Request_message_typesupport_map = {
  2,
  "servo_service",
  &_JointPosition_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointPosition_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointPosition_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPosition_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPosition_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__JointPosition_Request__get_type_hash,
  &servo_service__srv__JointPosition_Request__get_type_description,
  &servo_service__srv__JointPosition_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::JointPosition_Request>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::JointPosition_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, JointPosition_Request)() {
  return get_message_type_support_handle<servo_service::srv::JointPosition_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/joint_position__functions.h"
// already included above
// #include "servo_service/srv/detail/joint_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPosition_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPosition_Response_type_support_ids_t;

static const _JointPosition_Response_type_support_ids_t _JointPosition_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPosition_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPosition_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPosition_Response_type_support_symbol_names_t _JointPosition_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, JointPosition_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, JointPosition_Response)),
  }
};

typedef struct _JointPosition_Response_type_support_data_t
{
  void * data[2];
} _JointPosition_Response_type_support_data_t;

static _JointPosition_Response_type_support_data_t _JointPosition_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPosition_Response_message_typesupport_map = {
  2,
  "servo_service",
  &_JointPosition_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointPosition_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointPosition_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPosition_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPosition_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__JointPosition_Response__get_type_hash,
  &servo_service__srv__JointPosition_Response__get_type_description,
  &servo_service__srv__JointPosition_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::JointPosition_Response>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::JointPosition_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, JointPosition_Response)() {
  return get_message_type_support_handle<servo_service::srv::JointPosition_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "servo_service/srv/detail/joint_position__functions.h"
// already included above
// #include "servo_service/srv/detail/joint_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPosition_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPosition_Event_type_support_ids_t;

static const _JointPosition_Event_type_support_ids_t _JointPosition_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPosition_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPosition_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPosition_Event_type_support_symbol_names_t _JointPosition_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, JointPosition_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, JointPosition_Event)),
  }
};

typedef struct _JointPosition_Event_type_support_data_t
{
  void * data[2];
} _JointPosition_Event_type_support_data_t;

static _JointPosition_Event_type_support_data_t _JointPosition_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPosition_Event_message_typesupport_map = {
  2,
  "servo_service",
  &_JointPosition_Event_message_typesupport_ids.typesupport_identifier[0],
  &_JointPosition_Event_message_typesupport_symbol_names.symbol_name[0],
  &_JointPosition_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPosition_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPosition_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__JointPosition_Event__get_type_hash,
  &servo_service__srv__JointPosition_Event__get_type_description,
  &servo_service__srv__JointPosition_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::JointPosition_Event>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::JointPosition_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, JointPosition_Event)() {
  return get_message_type_support_handle<servo_service::srv::JointPosition_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "servo_service/srv/detail/joint_position__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace servo_service
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPosition_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPosition_type_support_ids_t;

static const _JointPosition_type_support_ids_t _JointPosition_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPosition_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPosition_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPosition_type_support_symbol_names_t _JointPosition_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, JointPosition)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, JointPosition)),
  }
};

typedef struct _JointPosition_type_support_data_t
{
  void * data[2];
} _JointPosition_type_support_data_t;

static _JointPosition_type_support_data_t _JointPosition_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPosition_service_typesupport_map = {
  2,
  "servo_service",
  &_JointPosition_service_typesupport_ids.typesupport_identifier[0],
  &_JointPosition_service_typesupport_symbol_names.symbol_name[0],
  &_JointPosition_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointPosition_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPosition_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::JointPosition_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::JointPosition_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::JointPosition_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<servo_service::srv::JointPosition>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<servo_service::srv::JointPosition>,
  &servo_service__srv__JointPosition__get_type_hash,
  &servo_service__srv__JointPosition__get_type_description,
  &servo_service__srv__JointPosition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<servo_service::srv::JointPosition>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::JointPosition_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, JointPosition)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<servo_service::srv::JointPosition>();
}

#ifdef __cplusplus
}
#endif
