// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RoverSteeringSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_
#define PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/rover_steering_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RoverSteeringSetpoint_normalized_speed_diff
{
public:
  explicit Init_RoverSteeringSetpoint_normalized_speed_diff(::px4::msg::RoverSteeringSetpoint & msg)
  : msg_(msg)
  {}
  ::px4::msg::RoverSteeringSetpoint normalized_speed_diff(::px4::msg::RoverSteeringSetpoint::_normalized_speed_diff_type arg)
  {
    msg_.normalized_speed_diff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RoverSteeringSetpoint msg_;
};

class Init_RoverSteeringSetpoint_normalized_steering_angle
{
public:
  explicit Init_RoverSteeringSetpoint_normalized_steering_angle(::px4::msg::RoverSteeringSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverSteeringSetpoint_normalized_speed_diff normalized_steering_angle(::px4::msg::RoverSteeringSetpoint::_normalized_steering_angle_type arg)
  {
    msg_.normalized_steering_angle = std::move(arg);
    return Init_RoverSteeringSetpoint_normalized_speed_diff(msg_);
  }

private:
  ::px4::msg::RoverSteeringSetpoint msg_;
};

class Init_RoverSteeringSetpoint_timestamp
{
public:
  Init_RoverSteeringSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverSteeringSetpoint_normalized_steering_angle timestamp(::px4::msg::RoverSteeringSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverSteeringSetpoint_normalized_steering_angle(msg_);
  }

private:
  ::px4::msg::RoverSteeringSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RoverSteeringSetpoint>()
{
  return px4::msg::builder::Init_RoverSteeringSetpoint_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ROVER_STEERING_SETPOINT__BUILDER_HPP_
