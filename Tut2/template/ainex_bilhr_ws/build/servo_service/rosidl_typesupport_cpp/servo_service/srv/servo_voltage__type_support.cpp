// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from servo_service:srv/ServoVoltage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "servo_service/srv/detail/servo_voltage__functions.h"
#include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

typedef struct _ServoVoltage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoVoltage_Request_type_support_ids_t;

static const _ServoVoltage_Request_type_support_ids_t _ServoVoltage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoVoltage_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoVoltage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoVoltage_Request_type_support_symbol_names_t _ServoVoltage_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, ServoVoltage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Request)),
  }
};

typedef struct _ServoVoltage_Request_type_support_data_t
{
  void * data[2];
} _ServoVoltage_Request_type_support_data_t;

static _ServoVoltage_Request_type_support_data_t _ServoVoltage_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoVoltage_Request_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoVoltage_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServoVoltage_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServoVoltage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoVoltage_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoVoltage_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Request__get_type_hash,
  &servo_service__srv__ServoVoltage_Request__get_type_description,
  &servo_service__srv__ServoVoltage_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::ServoVoltage_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, ServoVoltage_Request)() {
  return get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>();
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
// #include "servo_service/srv/detail/servo_voltage__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

typedef struct _ServoVoltage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoVoltage_Response_type_support_ids_t;

static const _ServoVoltage_Response_type_support_ids_t _ServoVoltage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoVoltage_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoVoltage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoVoltage_Response_type_support_symbol_names_t _ServoVoltage_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, ServoVoltage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Response)),
  }
};

typedef struct _ServoVoltage_Response_type_support_data_t
{
  void * data[2];
} _ServoVoltage_Response_type_support_data_t;

static _ServoVoltage_Response_type_support_data_t _ServoVoltage_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoVoltage_Response_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoVoltage_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServoVoltage_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServoVoltage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoVoltage_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoVoltage_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Response__get_type_hash,
  &servo_service__srv__ServoVoltage_Response__get_type_description,
  &servo_service__srv__ServoVoltage_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::ServoVoltage_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, ServoVoltage_Response)() {
  return get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>();
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
// #include "servo_service/srv/detail/servo_voltage__functions.h"
// already included above
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

typedef struct _ServoVoltage_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoVoltage_Event_type_support_ids_t;

static const _ServoVoltage_Event_type_support_ids_t _ServoVoltage_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoVoltage_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoVoltage_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoVoltage_Event_type_support_symbol_names_t _ServoVoltage_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, ServoVoltage_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage_Event)),
  }
};

typedef struct _ServoVoltage_Event_type_support_data_t
{
  void * data[2];
} _ServoVoltage_Event_type_support_data_t;

static _ServoVoltage_Event_type_support_data_t _ServoVoltage_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoVoltage_Event_message_typesupport_map = {
  2,
  "servo_service",
  &_ServoVoltage_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ServoVoltage_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ServoVoltage_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoVoltage_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoVoltage_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &servo_service__srv__ServoVoltage_Event__get_type_hash,
  &servo_service__srv__ServoVoltage_Event__get_type_description,
  &servo_service__srv__ServoVoltage_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<servo_service::srv::ServoVoltage_Event>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::ServoVoltage_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, ServoVoltage_Event)() {
  return get_message_type_support_handle<servo_service::srv::ServoVoltage_Event>();
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
// #include "servo_service/srv/detail/servo_voltage__struct.hpp"
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

typedef struct _ServoVoltage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoVoltage_type_support_ids_t;

static const _ServoVoltage_type_support_ids_t _ServoVoltage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoVoltage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoVoltage_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoVoltage_type_support_symbol_names_t _ServoVoltage_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, servo_service, srv, ServoVoltage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, servo_service, srv, ServoVoltage)),
  }
};

typedef struct _ServoVoltage_type_support_data_t
{
  void * data[2];
} _ServoVoltage_type_support_data_t;

static _ServoVoltage_type_support_data_t _ServoVoltage_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoVoltage_service_typesupport_map = {
  2,
  "servo_service",
  &_ServoVoltage_service_typesupport_ids.typesupport_identifier[0],
  &_ServoVoltage_service_typesupport_symbol_names.symbol_name[0],
  &_ServoVoltage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServoVoltage_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoVoltage_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<servo_service::srv::ServoVoltage_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<servo_service::srv::ServoVoltage>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<servo_service::srv::ServoVoltage>,
  &servo_service__srv__ServoVoltage__get_type_hash,
  &servo_service__srv__ServoVoltage__get_type_description,
  &servo_service__srv__ServoVoltage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace servo_service

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<servo_service::srv::ServoVoltage>()
{
  return &::servo_service::srv::rosidl_typesupport_cpp::ServoVoltage_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, servo_service, srv, ServoVoltage)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<servo_service::srv::ServoVoltage>();
}

#ifdef __cplusplus
}
#endif
