// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces_sistema/srv/reset_temperatura.hpp"


#ifndef INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__BUILDER_HPP_
#define INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_sistema/srv/detail/reset_temperatura__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_sistema
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_sistema::srv::ResetTemperatura_Request>()
{
  return ::interfaces_sistema::srv::ResetTemperatura_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces_sistema


namespace interfaces_sistema
{

namespace srv
{

namespace builder
{

class Init_ResetTemperatura_Response_saida
{
public:
  explicit Init_ResetTemperatura_Response_saida(::interfaces_sistema::srv::ResetTemperatura_Response & msg)
  : msg_(msg)
  {}
  ::interfaces_sistema::srv::ResetTemperatura_Response saida(::interfaces_sistema::srv::ResetTemperatura_Response::_saida_type arg)
  {
    msg_.saida = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_sistema::srv::ResetTemperatura_Response msg_;
};

class Init_ResetTemperatura_Response_sucesso
{
public:
  Init_ResetTemperatura_Response_sucesso()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetTemperatura_Response_saida sucesso(::interfaces_sistema::srv::ResetTemperatura_Response::_sucesso_type arg)
  {
    msg_.sucesso = std::move(arg);
    return Init_ResetTemperatura_Response_saida(msg_);
  }

private:
  ::interfaces_sistema::srv::ResetTemperatura_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_sistema::srv::ResetTemperatura_Response>()
{
  return interfaces_sistema::srv::builder::Init_ResetTemperatura_Response_sucesso();
}

}  // namespace interfaces_sistema


namespace interfaces_sistema
{

namespace srv
{

namespace builder
{

class Init_ResetTemperatura_Event_response
{
public:
  explicit Init_ResetTemperatura_Event_response(::interfaces_sistema::srv::ResetTemperatura_Event & msg)
  : msg_(msg)
  {}
  ::interfaces_sistema::srv::ResetTemperatura_Event response(::interfaces_sistema::srv::ResetTemperatura_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_sistema::srv::ResetTemperatura_Event msg_;
};

class Init_ResetTemperatura_Event_request
{
public:
  explicit Init_ResetTemperatura_Event_request(::interfaces_sistema::srv::ResetTemperatura_Event & msg)
  : msg_(msg)
  {}
  Init_ResetTemperatura_Event_response request(::interfaces_sistema::srv::ResetTemperatura_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetTemperatura_Event_response(msg_);
  }

private:
  ::interfaces_sistema::srv::ResetTemperatura_Event msg_;
};

class Init_ResetTemperatura_Event_info
{
public:
  Init_ResetTemperatura_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetTemperatura_Event_request info(::interfaces_sistema::srv::ResetTemperatura_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetTemperatura_Event_request(msg_);
  }

private:
  ::interfaces_sistema::srv::ResetTemperatura_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_sistema::srv::ResetTemperatura_Event>()
{
  return interfaces_sistema::srv::builder::Init_ResetTemperatura_Event_info();
}

}  // namespace interfaces_sistema

#endif  // INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__BUILDER_HPP_
