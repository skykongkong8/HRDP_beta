// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hrdp_beta_actions:action/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__BUILDER_HPP_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__BUILDER_HPP_

#include "hrdp_beta_actions/action/detail/rgb_frame__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_Goal_order
{
public:
  Init_RGBFrame_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrdp_beta_actions::action::RGBFrame_Goal order(::hrdp_beta_actions::action::RGBFrame_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_Goal>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_Goal_order();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_Result_sequence
{
public:
  Init_RGBFrame_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrdp_beta_actions::action::RGBFrame_Result sequence(::hrdp_beta_actions::action::RGBFrame_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_Result>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_Result_sequence();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_Feedback_partial_sequence
{
public:
  Init_RGBFrame_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrdp_beta_actions::action::RGBFrame_Feedback partial_sequence(::hrdp_beta_actions::action::RGBFrame_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_Feedback>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_Feedback_partial_sequence();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_SendGoal_Request_goal
{
public:
  explicit Init_RGBFrame_SendGoal_Request_goal(::hrdp_beta_actions::action::RGBFrame_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Request goal(::hrdp_beta_actions::action::RGBFrame_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Request msg_;
};

class Init_RGBFrame_SendGoal_Request_goal_id
{
public:
  Init_RGBFrame_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBFrame_SendGoal_Request_goal goal_id(::hrdp_beta_actions::action::RGBFrame_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RGBFrame_SendGoal_Request_goal(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_SendGoal_Request>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_SendGoal_Request_goal_id();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_SendGoal_Response_stamp
{
public:
  explicit Init_RGBFrame_SendGoal_Response_stamp(::hrdp_beta_actions::action::RGBFrame_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Response stamp(::hrdp_beta_actions::action::RGBFrame_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Response msg_;
};

class Init_RGBFrame_SendGoal_Response_accepted
{
public:
  Init_RGBFrame_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBFrame_SendGoal_Response_stamp accepted(::hrdp_beta_actions::action::RGBFrame_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RGBFrame_SendGoal_Response_stamp(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_SendGoal_Response>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_SendGoal_Response_accepted();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_GetResult_Request_goal_id
{
public:
  Init_RGBFrame_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hrdp_beta_actions::action::RGBFrame_GetResult_Request goal_id(::hrdp_beta_actions::action::RGBFrame_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_GetResult_Request>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_GetResult_Request_goal_id();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_GetResult_Response_result
{
public:
  explicit Init_RGBFrame_GetResult_Response_result(::hrdp_beta_actions::action::RGBFrame_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hrdp_beta_actions::action::RGBFrame_GetResult_Response result(::hrdp_beta_actions::action::RGBFrame_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_GetResult_Response msg_;
};

class Init_RGBFrame_GetResult_Response_status
{
public:
  Init_RGBFrame_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBFrame_GetResult_Response_result status(::hrdp_beta_actions::action::RGBFrame_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RGBFrame_GetResult_Response_result(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_GetResult_Response>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_GetResult_Response_status();
}

}  // namespace hrdp_beta_actions


namespace hrdp_beta_actions
{

namespace action
{

namespace builder
{

class Init_RGBFrame_FeedbackMessage_feedback
{
public:
  explicit Init_RGBFrame_FeedbackMessage_feedback(::hrdp_beta_actions::action::RGBFrame_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hrdp_beta_actions::action::RGBFrame_FeedbackMessage feedback(::hrdp_beta_actions::action::RGBFrame_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_FeedbackMessage msg_;
};

class Init_RGBFrame_FeedbackMessage_goal_id
{
public:
  Init_RGBFrame_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBFrame_FeedbackMessage_feedback goal_id(::hrdp_beta_actions::action::RGBFrame_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RGBFrame_FeedbackMessage_feedback(msg_);
  }

private:
  ::hrdp_beta_actions::action::RGBFrame_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hrdp_beta_actions::action::RGBFrame_FeedbackMessage>()
{
  return hrdp_beta_actions::action::builder::Init_RGBFrame_FeedbackMessage_goal_id();
}

}  // namespace hrdp_beta_actions

#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__BUILDER_HPP_
