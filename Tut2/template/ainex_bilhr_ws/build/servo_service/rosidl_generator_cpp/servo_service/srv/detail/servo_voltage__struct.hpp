// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from servo_service:srv/ServoVoltage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/servo_voltage.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__STRUCT_HPP_
#define SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__servo_service__srv__ServoVoltage_Request __attribute__((deprecated))
#else
# define DEPRECATED__servo_service__srv__ServoVoltage_Request __declspec(deprecated)
#endif

namespace servo_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoVoltage_Request_
{
  using Type = ServoVoltage_Request_<ContainerAllocator>;

  explicit ServoVoltage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServoVoltage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ids_type ids;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_service::srv::ServoVoltage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_service::srv::ServoVoltage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Request
    std::shared_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Request
    std::shared_ptr<servo_service::srv::ServoVoltage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoVoltage_Request_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoVoltage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoVoltage_Request_

// alias to use template instance with default allocator
using ServoVoltage_Request =
  servo_service::srv::ServoVoltage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace servo_service


#ifndef _WIN32
# define DEPRECATED__servo_service__srv__ServoVoltage_Response __attribute__((deprecated))
#else
# define DEPRECATED__servo_service__srv__ServoVoltage_Response __declspec(deprecated)
#endif

namespace servo_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoVoltage_Response_
{
  using Type = ServoVoltage_Response_<ContainerAllocator>;

  explicit ServoVoltage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServoVoltage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vin_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _vin_type vin;

  // setters for named parameter idiom
  Type & set__vin(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->vin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_service::srv::ServoVoltage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_service::srv::ServoVoltage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Response
    std::shared_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Response
    std::shared_ptr<servo_service::srv::ServoVoltage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoVoltage_Response_ & other) const
  {
    if (this->vin != other.vin) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoVoltage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoVoltage_Response_

// alias to use template instance with default allocator
using ServoVoltage_Response =
  servo_service::srv::ServoVoltage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace servo_service


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__servo_service__srv__ServoVoltage_Event __attribute__((deprecated))
#else
# define DEPRECATED__servo_service__srv__ServoVoltage_Event __declspec(deprecated)
#endif

namespace servo_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoVoltage_Event_
{
  using Type = ServoVoltage_Event_<ContainerAllocator>;

  explicit ServoVoltage_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ServoVoltage_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_service::srv::ServoVoltage_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<servo_service::srv::ServoVoltage_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    servo_service::srv::ServoVoltage_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const servo_service::srv::ServoVoltage_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      servo_service::srv::ServoVoltage_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Event
    std::shared_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__servo_service__srv__ServoVoltage_Event
    std::shared_ptr<servo_service::srv::ServoVoltage_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoVoltage_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoVoltage_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoVoltage_Event_

// alias to use template instance with default allocator
using ServoVoltage_Event =
  servo_service::srv::ServoVoltage_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace servo_service

namespace servo_service
{

namespace srv
{

struct ServoVoltage
{
  using Request = servo_service::srv::ServoVoltage_Request;
  using Response = servo_service::srv::ServoVoltage_Response;
  using Event = servo_service::srv::ServoVoltage_Event;
};

}  // namespace srv

}  // namespace servo_service

#endif  // SERVO_SERVICE__SRV__DETAIL__SERVO_VOLTAGE__STRUCT_HPP_
