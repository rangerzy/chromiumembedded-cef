// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=740a136b543a32de5788c9395fca7f808d1b363c$
//

#include "libcef_dll/cpptoc/resource_request_handler_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_access_filter_cpptoc.h"
#include "libcef_dll/cpptoc/resource_handler_cpptoc.h"
#include "libcef_dll/cpptoc/response_filter_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/callback_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/response_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

struct _cef_cookie_access_filter_t* CEF_CALLBACK
resource_request_handler_get_cookie_access_filter(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return NULL;
  }
  // Unverified params: browser, frame

  // Execute
  CefRefPtr<CefCookieAccessFilter> _retval =
      CefResourceRequestHandlerCppToC::Get(self)->GetCookieAccessFilter(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request));

  // Return type: refptr_same
  return CefCookieAccessFilterCppToC::Wrap(_retval);
}

cef_return_value_t CEF_CALLBACK
resource_request_handler_on_before_resource_load(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    cef_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return RV_CONTINUE;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return RV_CONTINUE;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback) {
    return RV_CONTINUE;
  }
  // Unverified params: browser, frame

  // Execute
  cef_return_value_t _retval =
      CefResourceRequestHandlerCppToC::Get(self)->OnBeforeResourceLoad(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request), CefCallbackCToCpp::Wrap(callback));

  // Return type: simple
  return _retval;
}

cef_resource_handler_t* CEF_CALLBACK
resource_request_handler_get_resource_handler(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return NULL;
  }
  // Unverified params: browser, frame

  // Execute
  CefRefPtr<CefResourceHandler> _retval =
      CefResourceRequestHandlerCppToC::Get(self)->GetResourceHandler(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request));

  // Return type: refptr_same
  return CefResourceHandlerCppToC::Wrap(_retval);
}

void CEF_CALLBACK resource_request_handler_on_resource_redirect(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    struct _cef_response_t* response,
    cef_string_t* new_url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return;
  }
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response) {
    return;
  }
  // Verify param: new_url; type: string_byref
  DCHECK(new_url);
  if (!new_url) {
    return;
  }
  // Unverified params: browser, frame

  // Translate param: new_url; type: string_byref
  CefString new_urlStr(new_url);

  // Execute
  CefResourceRequestHandlerCppToC::Get(self)->OnResourceRedirect(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefRequestCToCpp::Wrap(request), CefResponseCToCpp::Wrap(response),
      new_urlStr);
}

int CEF_CALLBACK resource_request_handler_on_resource_response(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    struct _cef_response_t* response) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return 0;
  }
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response) {
    return 0;
  }
  // Unverified params: browser, frame

  // Execute
  bool _retval = CefResourceRequestHandlerCppToC::Get(self)->OnResourceResponse(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefRequestCToCpp::Wrap(request), CefResponseCToCpp::Wrap(response));

  // Return type: bool
  return _retval;
}

struct _cef_response_filter_t* CEF_CALLBACK
resource_request_handler_get_resource_response_filter(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    struct _cef_response_t* response) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return NULL;
  }
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response) {
    return NULL;
  }
  // Unverified params: browser, frame

  // Execute
  CefRefPtr<CefResponseFilter> _retval =
      CefResourceRequestHandlerCppToC::Get(self)->GetResourceResponseFilter(
          CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
          CefRequestCToCpp::Wrap(request), CefResponseCToCpp::Wrap(response));

  // Return type: refptr_same
  return CefResponseFilterCppToC::Wrap(_retval);
}

void CEF_CALLBACK resource_request_handler_on_resource_load_complete(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    struct _cef_response_t* response,
    cef_urlrequest_status_t status,
    int64_t received_content_length) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return;
  }
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response) {
    return;
  }
  // Unverified params: browser, frame

  // Execute
  CefResourceRequestHandlerCppToC::Get(self)->OnResourceLoadComplete(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefRequestCToCpp::Wrap(request), CefResponseCToCpp::Wrap(response),
      status, received_content_length);
}

void CEF_CALLBACK resource_request_handler_on_protocol_execution(
    struct _cef_resource_request_handler_t* self,
    cef_browser_t* browser,
    cef_frame_t* frame,
    cef_request_t* request,
    int* allow_os_execution) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request) {
    return;
  }
  // Verify param: allow_os_execution; type: bool_byref
  DCHECK(allow_os_execution);
  if (!allow_os_execution) {
    return;
  }
  // Unverified params: browser, frame

  // Translate param: allow_os_execution; type: bool_byref
  bool allow_os_executionBool =
      (allow_os_execution && *allow_os_execution) ? true : false;

  // Execute
  CefResourceRequestHandlerCppToC::Get(self)->OnProtocolExecution(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame),
      CefRequestCToCpp::Wrap(request), allow_os_executionBool);

  // Restore param: allow_os_execution; type: bool_byref
  if (allow_os_execution) {
    *allow_os_execution = allow_os_executionBool ? true : false;
  }
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefResourceRequestHandlerCppToC::CefResourceRequestHandlerCppToC() {
  GetStruct()->get_cookie_access_filter =
      resource_request_handler_get_cookie_access_filter;
  GetStruct()->on_before_resource_load =
      resource_request_handler_on_before_resource_load;
  GetStruct()->get_resource_handler =
      resource_request_handler_get_resource_handler;
  GetStruct()->on_resource_redirect =
      resource_request_handler_on_resource_redirect;
  GetStruct()->on_resource_response =
      resource_request_handler_on_resource_response;
  GetStruct()->get_resource_response_filter =
      resource_request_handler_get_resource_response_filter;
  GetStruct()->on_resource_load_complete =
      resource_request_handler_on_resource_load_complete;
  GetStruct()->on_protocol_execution =
      resource_request_handler_on_protocol_execution;
}

// DESTRUCTOR - Do not edit by hand.

CefResourceRequestHandlerCppToC::~CefResourceRequestHandlerCppToC() {}

template <>
CefRefPtr<CefResourceRequestHandler>
CefCppToCRefCounted<CefResourceRequestHandlerCppToC,
                    CefResourceRequestHandler,
                    cef_resource_request_handler_t>::
    UnwrapDerived(CefWrapperType type, cef_resource_request_handler_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefResourceRequestHandlerCppToC,
                        CefResourceRequestHandler,
                        cef_resource_request_handler_t>::kWrapperType =
        WT_RESOURCE_REQUEST_HANDLER;
