// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_service:srv/JointPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/srv/joint_position.hpp"


#ifndef SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__TRAITS_HPP_
#define SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_service/srv/detail/joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace servo_service

namespace rosidl_generator_traits
{

[[deprecated("use servo_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_service::srv::JointPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const servo_service::srv::JointPosition_Request & msg)
{
  return servo_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<servo_service::srv::JointPosition_Request>()
{
  return "servo_service::srv::JointPosition_Request";
}

template<>
inline const char * name<servo_service::srv::JointPosition_Request>()
{
  return "servo_service/srv/JointPosition_Request";
}

template<>
struct has_fixed_size<servo_service::srv::JointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_service::srv::JointPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_service::srv::JointPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace servo_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace servo_service

namespace rosidl_generator_traits
{

[[deprecated("use servo_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_service::srv::JointPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const servo_service::srv::JointPosition_Response & msg)
{
  return servo_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<servo_service::srv::JointPosition_Response>()
{
  return "servo_service::srv::JointPosition_Response";
}

template<>
inline const char * name<servo_service::srv::JointPosition_Response>()
{
  return "servo_service/srv/JointPosition_Response";
}

template<>
struct has_fixed_size<servo_service::srv::JointPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_service::srv::JointPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_service::srv::JointPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace servo_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointPosition_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPosition_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace servo_service

namespace rosidl_generator_traits
{

[[deprecated("use servo_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_service::srv::JointPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const servo_service::srv::JointPosition_Event & msg)
{
  return servo_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<servo_service::srv::JointPosition_Event>()
{
  return "servo_service::srv::JointPosition_Event";
}

template<>
inline const char * name<servo_service::srv::JointPosition_Event>()
{
  return "servo_service/srv/JointPosition_Event";
}

template<>
struct has_fixed_size<servo_service::srv::JointPosition_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_service::srv::JointPosition_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<servo_service::srv::JointPosition_Request>::value && has_bounded_size<servo_service::srv::JointPosition_Response>::value> {};

template<>
struct is_message<servo_service::srv::JointPosition_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<servo_service::srv::JointPosition>()
{
  return "servo_service::srv::JointPosition";
}

template<>
inline const char * name<servo_service::srv::JointPosition>()
{
  return "servo_service/srv/JointPosition";
}

template<>
struct has_fixed_size<servo_service::srv::JointPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<servo_service::srv::JointPosition_Request>::value &&
    has_fixed_size<servo_service::srv::JointPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<servo_service::srv::JointPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<servo_service::srv::JointPosition_Request>::value &&
    has_bounded_size<servo_service::srv::JointPosition_Response>::value
  >
{
};

template<>
struct is_service<servo_service::srv::JointPosition>
  : std::true_type
{
};

template<>
struct is_service_request<servo_service::srv::JointPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<servo_service::srv::JointPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVO_SERVICE__SRV__DETAIL__JOINT_POSITION__TRAITS_HPP_
