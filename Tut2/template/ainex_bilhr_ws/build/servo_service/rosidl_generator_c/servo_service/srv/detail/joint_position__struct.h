// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from servo_service:srv/JointPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/joint_position.h"


#ifndef SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__STRUCT_H_
#define SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/JointPosition in the package servo_service.
typedef struct servo_service__srv__JointPosition_Request
{
  rosidl_runtime_c__uint8__Sequence ids;
} servo_service__srv__JointPosition_Request;

// Struct for a sequence of servo_service__srv__JointPosition_Request.
typedef struct servo_service__srv__JointPosition_Request__Sequence
{
  servo_service__srv__JointPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_service__srv__JointPosition_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'position'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/JointPosition in the package servo_service.
typedef struct servo_service__srv__JointPosition_Response
{
  rosidl_runtime_c__float__Sequence position;
} servo_service__srv__JointPosition_Response;

// Struct for a sequence of servo_service__srv__JointPosition_Response.
typedef struct servo_service__srv__JointPosition_Response__Sequence
{
  servo_service__srv__JointPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_service__srv__JointPosition_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  servo_service__srv__JointPosition_Event__request__MAX_SIZE = 1
};
// response
enum
{
  servo_service__srv__JointPosition_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/JointPosition in the package servo_service.
typedef struct servo_service__srv__JointPosition_Event
{
  service_msgs__msg__ServiceEventInfo info;
  servo_service__srv__JointPosition_Request__Sequence request;
  servo_service__srv__JointPosition_Response__Sequence response;
} servo_service__srv__JointPosition_Event;

// Struct for a sequence of servo_service__srv__JointPosition_Event.
typedef struct servo_service__srv__JointPosition_Event__Sequence
{
  servo_service__srv__JointPosition_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} servo_service__srv__JointPosition_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__STRUCT_H_
