// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice
#include "servo_service/msg/detail/set_posture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `posture_name`
#include "rosidl_runtime_c/string_functions.h"

bool
servo_service__msg__SetPosture__init(servo_service__msg__SetPosture * msg)
{
  if (!msg) {
    return false;
  }
  // posture_name
  if (!rosidl_runtime_c__String__init(&msg->posture_name)) {
    servo_service__msg__SetPosture__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
servo_service__msg__SetPosture__fini(servo_service__msg__SetPosture * msg)
{
  if (!msg) {
    return;
  }
  // posture_name
  rosidl_runtime_c__String__fini(&msg->posture_name);
  // duration
}

bool
servo_service__msg__SetPosture__are_equal(const servo_service__msg__SetPosture * lhs, const servo_service__msg__SetPosture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posture_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->posture_name), &(rhs->posture_name)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
servo_service__msg__SetPosture__copy(
  const servo_service__msg__SetPosture * input,
  servo_service__msg__SetPosture * output)
{
  if (!input || !output) {
    return false;
  }
  // posture_name
  if (!rosidl_runtime_c__String__copy(
      &(input->posture_name), &(output->posture_name)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

servo_service__msg__SetPosture *
servo_service__msg__SetPosture__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__msg__SetPosture * msg = (servo_service__msg__SetPosture *)allocator.allocate(sizeof(servo_service__msg__SetPosture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(servo_service__msg__SetPosture));
  bool success = servo_service__msg__SetPosture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
servo_service__msg__SetPosture__destroy(servo_service__msg__SetPosture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    servo_service__msg__SetPosture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
servo_service__msg__SetPosture__Sequence__init(servo_service__msg__SetPosture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__msg__SetPosture * data = NULL;

  if (size) {
    data = (servo_service__msg__SetPosture *)allocator.zero_allocate(size, sizeof(servo_service__msg__SetPosture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = servo_service__msg__SetPosture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        servo_service__msg__SetPosture__fini(&data[i - 1]);
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
servo_service__msg__SetPosture__Sequence__fini(servo_service__msg__SetPosture__Sequence * array)
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
      servo_service__msg__SetPosture__fini(&array->data[i]);
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

servo_service__msg__SetPosture__Sequence *
servo_service__msg__SetPosture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  servo_service__msg__SetPosture__Sequence * array = (servo_service__msg__SetPosture__Sequence *)allocator.allocate(sizeof(servo_service__msg__SetPosture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = servo_service__msg__SetPosture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
servo_service__msg__SetPosture__Sequence__destroy(servo_service__msg__SetPosture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    servo_service__msg__SetPosture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
servo_service__msg__SetPosture__Sequence__are_equal(const servo_service__msg__SetPosture__Sequence * lhs, const servo_service__msg__SetPosture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!servo_service__msg__SetPosture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
servo_service__msg__SetPosture__Sequence__copy(
  const servo_service__msg__SetPosture__Sequence * input,
  servo_service__msg__SetPosture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(servo_service__msg__SetPosture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    servo_service__msg__SetPosture * data =
      (servo_service__msg__SetPosture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!servo_service__msg__SetPosture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          servo_service__msg__SetPosture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!servo_service__msg__SetPosture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
