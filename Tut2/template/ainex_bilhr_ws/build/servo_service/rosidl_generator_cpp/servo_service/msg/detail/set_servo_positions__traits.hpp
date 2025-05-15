// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_service:msg/SetServoPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_servo_positions.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__TRAITS_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_service/msg/detail/set_servo_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_service
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetServoPositions & msg,
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
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetServoPositions & msg,
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

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetServoPositions & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace servo_service

namespace rosidl_generator_traits
{

[[deprecated("use servo_service::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_service::msg::SetServoPositions & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_service::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_service::msg::to_yaml() instead")]]
inline std::string to_yaml(const servo_service::msg::SetServoPositions & msg)
{
  return servo_service::msg::to_yaml(msg);
}

template<>
inline const char * data_type<servo_service::msg::SetServoPositions>()
{
  return "servo_service::msg::SetServoPositions";
}

template<>
inline const char * name<servo_service::msg::SetServoPositions>()
{
  return "servo_service/msg/SetServoPositions";
}

template<>
struct has_fixed_size<servo_service::msg::SetServoPositions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_service::msg::SetServoPositions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_service::msg::SetServoPositions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_SERVO_POSITIONS__TRAITS_HPP_
