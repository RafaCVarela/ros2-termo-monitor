#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to interfaces_sistema__srv__ResetTemperatura_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetTemperatura_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetTemperatura_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetTemperatura_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetTemperatura_Request {
  type RmwMsg = super::srv::rmw::ResetTemperatura_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to interfaces_sistema__srv__ResetTemperatura_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetTemperatura_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sucesso: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saida: std::string::String,

}



impl Default for ResetTemperatura_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetTemperatura_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetTemperatura_Response {
  type RmwMsg = super::srv::rmw::ResetTemperatura_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sucesso: msg.sucesso,
        saida: msg.saida.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sucesso: msg.sucesso,
        saida: msg.saida.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sucesso: msg.sucesso,
      saida: msg.saida.to_string(),
    }
  }
}






#[link(name = "interfaces_sistema__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces_sistema__srv__ResetTemperatura() -> *const std::ffi::c_void;
}

// Corresponds to interfaces_sistema__srv__ResetTemperatura
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetTemperatura;

impl rosidl_runtime_rs::Service for ResetTemperatura {
    type Request = ResetTemperatura_Request;
    type Response = ResetTemperatura_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces_sistema__srv__ResetTemperatura() }
    }
}


