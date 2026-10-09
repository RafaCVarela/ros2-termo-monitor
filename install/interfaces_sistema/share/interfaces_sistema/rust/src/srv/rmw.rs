#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "interfaces_sistema__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces_sistema__srv__ResetTemperatura_Request() -> *const std::ffi::c_void;
}

#[link(name = "interfaces_sistema__rosidl_generator_c")]
extern "C" {
    fn interfaces_sistema__srv__ResetTemperatura_Request__init(msg: *mut ResetTemperatura_Request) -> bool;
    fn interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Request>, size: usize) -> bool;
    fn interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Request>);
    fn interfaces_sistema__srv__ResetTemperatura_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetTemperatura_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Request>) -> bool;
}

// Corresponds to interfaces_sistema__srv__ResetTemperatura_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetTemperatura_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ResetTemperatura_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces_sistema__srv__ResetTemperatura_Request__init(&mut msg as *mut _) {
        panic!("Call to interfaces_sistema__srv__ResetTemperatura_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetTemperatura_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetTemperatura_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetTemperatura_Request where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces_sistema/srv/ResetTemperatura_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces_sistema__srv__ResetTemperatura_Request() }
  }
}


#[link(name = "interfaces_sistema__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces_sistema__srv__ResetTemperatura_Response() -> *const std::ffi::c_void;
}

#[link(name = "interfaces_sistema__rosidl_generator_c")]
extern "C" {
    fn interfaces_sistema__srv__ResetTemperatura_Response__init(msg: *mut ResetTemperatura_Response) -> bool;
    fn interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Response>, size: usize) -> bool;
    fn interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Response>);
    fn interfaces_sistema__srv__ResetTemperatura_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetTemperatura_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetTemperatura_Response>) -> bool;
}

// Corresponds to interfaces_sistema__srv__ResetTemperatura_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetTemperatura_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sucesso: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saida: rosidl_runtime_rs::String,

}



impl Default for ResetTemperatura_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces_sistema__srv__ResetTemperatura_Response__init(&mut msg as *mut _) {
        panic!("Call to interfaces_sistema__srv__ResetTemperatura_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetTemperatura_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces_sistema__srv__ResetTemperatura_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetTemperatura_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetTemperatura_Response where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces_sistema/srv/ResetTemperatura_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces_sistema__srv__ResetTemperatura_Response() }
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


