// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_service:srv/ServoTemp.idl
// generated code does not contain a copyright notice
#include "servo_service/srv/detail/servo_temp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
servo_service__srv__ServoTemp_Request__init(servo_service__srv__ServoTemp_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->ids, 0)) {
    servo_service__srv__ServoTemp_Request__fini(msg);
    return false;
  }
  return true;
}

void
servo_service__srv__ServoTemp_Request__fini(servo_service__srv__ServoTemp_Request * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__uint8__Sequence__fini(&msg->ids);
}

bool
servo_service__srv__ServoTemp_Request__are_equal(const servo_service__srv__ServoTemp_Request * lhs, const servo_service__srv__ServoTemp_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->ids), &(rhs->ids)))
  {
    return false;
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Request__copy(
  const servo_service__srv__ServoTemp_Request * input,
  servo_service__srv__ServoTemp_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->ids), &(output->ids)))
  {
    return false;
  }
  return true;
}

servo_service__srv__ServoTemp_Request *
servo_service__srv__ServoTemp_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Request * msg = (servo_service__srv__ServoTemp_Request *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_service__srv__ServoTemp_Request));
  bool success = servo_service__srv__ServoTemp_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_service__srv__ServoTemp_Request__destroy(servo_service__srv__ServoTemp_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_service__srv__ServoTemp_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_service__srv__ServoTemp_Request__Sequence__init(servo_service__srv__ServoTemp_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Request * data = NULL;

  if (size) {
    data = (servo_service__srv__ServoTemp_Request *)allocator.zero_allocate(size, sizeof(servo_service__srv__ServoTemp_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_service__srv__ServoTemp_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_service__srv__ServoTemp_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
servo_service__srv__ServoTemp_Request__Sequence__fini(servo_service__srv__ServoTemp_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      servo_service__srv__ServoTemp_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

servo_service__srv__ServoTemp_Request__Sequence *
servo_service__srv__ServoTemp_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Request__Sequence * array = (servo_service__srv__ServoTemp_Request__Sequence *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_service__srv__ServoTemp_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_service__srv__ServoTemp_Request__Sequence__destroy(servo_service__srv__ServoTemp_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_service__srv__ServoTemp_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_service__srv__ServoTemp_Request__Sequence__are_equal(const servo_service__srv__ServoTemp_Request__Sequence * lhs, const servo_service__srv__ServoTemp_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_service__srv__ServoTemp_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Request__Sequence__copy(
  const servo_service__srv__ServoTemp_Request__Sequence * input,
  servo_service__srv__ServoTemp_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_service__srv__ServoTemp_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_service__srv__ServoTemp_Request * data =
      (servo_service__srv__ServoTemp_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_service__srv__ServoTemp_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_service__srv__ServoTemp_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_service__srv__ServoTemp_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `temperature`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
servo_service__srv__ServoTemp_Response__init(servo_service__srv__ServoTemp_Response * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->temperature, 0)) {
    servo_service__srv__ServoTemp_Response__fini(msg);
    return false;
  }
  return true;
}

void
servo_service__srv__ServoTemp_Response__fini(servo_service__srv__ServoTemp_Response * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  rosidl_runtime_c__int8__Sequence__fini(&msg->temperature);
}

bool
servo_service__srv__ServoTemp_Response__are_equal(const servo_service__srv__ServoTemp_Response * lhs, const servo_service__srv__ServoTemp_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->temperature), &(rhs->temperature)))
  {
    return false;
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Response__copy(
  const servo_service__srv__ServoTemp_Response * input,
  servo_service__srv__ServoTemp_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->temperature), &(output->temperature)))
  {
    return false;
  }
  return true;
}

servo_service__srv__ServoTemp_Response *
servo_service__srv__ServoTemp_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Response * msg = (servo_service__srv__ServoTemp_Response *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_service__srv__ServoTemp_Response));
  bool success = servo_service__srv__ServoTemp_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_service__srv__ServoTemp_Response__destroy(servo_service__srv__ServoTemp_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_service__srv__ServoTemp_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_service__srv__ServoTemp_Response__Sequence__init(servo_service__srv__ServoTemp_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Response * data = NULL;

  if (size) {
    data = (servo_service__srv__ServoTemp_Response *)allocator.zero_allocate(size, sizeof(servo_service__srv__ServoTemp_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_service__srv__ServoTemp_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_service__srv__ServoTemp_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
servo_service__srv__ServoTemp_Response__Sequence__fini(servo_service__srv__ServoTemp_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      servo_service__srv__ServoTemp_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

servo_service__srv__ServoTemp_Response__Sequence *
servo_service__srv__ServoTemp_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Response__Sequence * array = (servo_service__srv__ServoTemp_Response__Sequence *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_service__srv__ServoTemp_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_service__srv__ServoTemp_Response__Sequence__destroy(servo_service__srv__ServoTemp_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_service__srv__ServoTemp_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_service__srv__ServoTemp_Response__Sequence__are_equal(const servo_service__srv__ServoTemp_Response__Sequence * lhs, const servo_service__srv__ServoTemp_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_service__srv__ServoTemp_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Response__Sequence__copy(
  const servo_service__srv__ServoTemp_Response__Sequence * input,
  servo_service__srv__ServoTemp_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_service__srv__ServoTemp_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_service__srv__ServoTemp_Response * data =
      (servo_service__srv__ServoTemp_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_service__srv__ServoTemp_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_service__srv__ServoTemp_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_service__srv__ServoTemp_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "servo_service/srv/detail/servo_temp__functions.h"

bool
servo_service__srv__ServoTemp_Event__init(servo_service__srv__ServoTemp_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    servo_service__srv__ServoTemp_Event__fini(msg);
    return false;
  }
  // request
  if (!servo_service__srv__ServoTemp_Request__Sequence__init(&msg->request, 0)) {
    servo_service__srv__ServoTemp_Event__fini(msg);
    return false;
  }
  // response
  if (!servo_service__srv__ServoTemp_Response__Sequence__init(&msg->response, 0)) {
    servo_service__srv__ServoTemp_Event__fini(msg);
    return false;
  }
  return true;
}

void
servo_service__srv__ServoTemp_Event__fini(servo_service__srv__ServoTemp_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  servo_service__srv__ServoTemp_Request__Sequence__fini(&msg->request);
  // response
  servo_service__srv__ServoTemp_Response__Sequence__fini(&msg->response);
}

bool
servo_service__srv__ServoTemp_Event__are_equal(const servo_service__srv__ServoTemp_Event * lhs, const servo_service__srv__ServoTemp_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!servo_service__srv__ServoTemp_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!servo_service__srv__ServoTemp_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Event__copy(
  const servo_service__srv__ServoTemp_Event * input,
  servo_service__srv__ServoTemp_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!servo_service__srv__ServoTemp_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!servo_service__srv__ServoTemp_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

servo_service__srv__ServoTemp_Event *
servo_service__srv__ServoTemp_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Event * msg = (servo_service__srv__ServoTemp_Event *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_service__srv__ServoTemp_Event));
  bool success = servo_service__srv__ServoTemp_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_service__srv__ServoTemp_Event__destroy(servo_service__srv__ServoTemp_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_service__srv__ServoTemp_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_service__srv__ServoTemp_Event__Sequence__init(servo_service__srv__ServoTemp_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Event * data = NULL;

  if (size) {
    data = (servo_service__srv__ServoTemp_Event *)allocator.zero_allocate(size, sizeof(servo_service__srv__ServoTemp_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_service__srv__ServoTemp_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_service__srv__ServoTemp_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
servo_service__srv__ServoTemp_Event__Sequence__fini(servo_service__srv__ServoTemp_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      servo_service__srv__ServoTemp_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

servo_service__srv__ServoTemp_Event__Sequence *
servo_service__srv__ServoTemp_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__srv__ServoTemp_Event__Sequence * array = (servo_service__srv__ServoTemp_Event__Sequence *)allocator.allocate(sizeof(servo_service__srv__ServoTemp_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_service__srv__ServoTemp_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_service__srv__ServoTemp_Event__Sequence__destroy(servo_service__srv__ServoTemp_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_service__srv__ServoTemp_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_service__srv__ServoTemp_Event__Sequence__are_equal(const servo_service__srv__ServoTemp_Event__Sequence * lhs, const servo_service__srv__ServoTemp_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_service__srv__ServoTemp_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_service__srv__ServoTemp_Event__Sequence__copy(
  const servo_service__srv__ServoTemp_Event__Sequence * input,
  servo_service__srv__ServoTemp_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_service__srv__ServoTemp_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_service__srv__ServoTemp_Event * data =
      (servo_service__srv__ServoTemp_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_service__srv__ServoTemp_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_service__srv__ServoTemp_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_service__srv__ServoTemp_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
