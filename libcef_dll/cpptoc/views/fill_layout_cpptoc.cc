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
// $hash=738c63644c3f800cc91801e67175224da80721aa$
//

#include "libcef_dll/cpptoc/views/fill_layout_cpptoc.h"
#include "libcef_dll/cpptoc/views/box_layout_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_box_layout_t* CEF_CALLBACK
fill_layout_as_box_layout(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBoxLayout> _retval =
      CefFillLayoutCppToC::Get(reinterpret_cast<cef_fill_layout_t*>(self))
          ->AsBoxLayout();

  // Return type: refptr_same
  return CefBoxLayoutCppToC::Wrap(_retval);
}

cef_fill_layout_t* CEF_CALLBACK
fill_layout_as_fill_layout(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefFillLayout> _retval =
      CefFillLayoutCppToC::Get(reinterpret_cast<cef_fill_layout_t*>(self))
          ->AsFillLayout();

  // Return type: refptr_same
  return CefFillLayoutCppToC::Wrap(_retval);
}

int CEF_CALLBACK fill_layout_is_valid(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefFillLayoutCppToC::Get(reinterpret_cast<cef_fill_layout_t*>(self))
          ->IsValid();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefFillLayoutCppToC::CefFillLayoutCppToC() {
  GetStruct()->base.as_box_layout = fill_layout_as_box_layout;
  GetStruct()->base.as_fill_layout = fill_layout_as_fill_layout;
  GetStruct()->base.is_valid = fill_layout_is_valid;
}

// DESTRUCTOR - Do not edit by hand.

CefFillLayoutCppToC::~CefFillLayoutCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefFillLayout>
CefCppToCRefCounted<CefFillLayoutCppToC, CefFillLayout, cef_fill_layout_t>::
    UnwrapDerived(CefWrapperType type, cef_fill_layout_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefFillLayoutCppToC,
                                   CefFillLayout,
                                   cef_fill_layout_t>::kWrapperType =
    WT_FILL_LAYOUT;