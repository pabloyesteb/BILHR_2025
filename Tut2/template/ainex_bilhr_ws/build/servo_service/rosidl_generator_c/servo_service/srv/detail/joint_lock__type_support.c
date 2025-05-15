// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from servo_service:srv/JointLock.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "servo_service/srv/detail/joint_lock__functions.h"
#include "rosidl_typesupport_interface/macros.h"
#include "servo_service/srv/detail/joint_lock__type_support.h"
#include "servo_service/srv/detail/joint_lock__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  servo_service,
  srv,
  JointLock
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  servo_service__srv__JointLock_Event * event_msg = (servo_service__srv__JointLock_Event *)(allocator->allocate(sizeof(servo_service__srv__JointLock_Event), allocator->state));
  if (!servo_service__srv__JointLock_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    servo_service__srv__JointLock_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!servo_service__srv__JointLock_Request__copy((const servo_service__srv__JointLock_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    servo_service__srv__JointLock_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!servo_service__srv__JointLock_Response__copy((const servo_service__srv__JointLock_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  servo_service,
  srv,
  JointLock
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  servo_service__srv__JointLock_Event * _event_msg = (servo_service__srv__JointLock_Event *)(event_msg);

  servo_service__srv__JointLock_Event__fini((servo_service__srv__JointLock_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
