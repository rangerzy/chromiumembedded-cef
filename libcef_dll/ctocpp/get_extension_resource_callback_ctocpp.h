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
// $hash=facc9372db06b4de1a4c77389757e2c9f00ce744$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_GET_EXTENSION_RESOURCE_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_GET_EXTENSION_RESOURCE_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_client_capi.h"
#include "include/capi/cef_extension_handler_capi.h"
#include "include/cef_client.h"
#include "include/cef_extension_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefGetExtensionResourceCallbackCToCpp
    : public CefCToCppRefCounted<CefGetExtensionResourceCallbackCToCpp,
                                 CefGetExtensionResourceCallback,
                                 cef_get_extension_resource_callback_t> {
 public:
  CefGetExtensionResourceCallbackCToCpp();
  virtual ~CefGetExtensionResourceCallbackCToCpp();

  // CefGetExtensionResourceCallback methods.
  void Continue(CefRefPtr<CefStreamReader> stream) override;
  void Cancel() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_GET_EXTENSION_RESOURCE_CALLBACK_CTOCPP_H_
