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
// $hash=fa488e22c4a198d4b6a69363ae0fe6296b1f3656$
//

#include "libcef_dll/cpptoc/views/box_layout_cpptoc.h"
#include "libcef_dll/cpptoc/views/fill_layout_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK box_layout_set_flex_for_view(struct _cef_box_layout_t* self,
                                               struct _cef_view_t* view,
                                               int flex) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefBoxLayoutCppToC::Get(self)->SetFlexForView(CefViewCppToC::Unwrap(view),
                                                flex);
}

void CEF_CALLBACK box_layout_clear_flex_for_view(struct _cef_box_layout_t* self,
                                                 struct _cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefBoxLayoutCppToC::Get(self)->ClearFlexForView(CefViewCppToC::Unwrap(view));
}

cef_box_layout_t* CEF_CALLBACK
box_layout_as_box_layout(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBoxLayout> _retval =
      CefBoxLayoutCppToC::Get(reinterpret_cast<cef_box_layout_t*>(self))
          ->AsBoxLayout();

  // Return type: refptr_same
  return CefBoxLayoutCppToC::Wrap(_retval);
}

cef_fill_layout_t* CEF_CALLBACK
box_layout_as_fill_layout(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefFillLayout> _retval =
      CefBoxLayoutCppToC::Get(reinterpret_cast<cef_box_layout_t*>(self))
          ->AsFillLayout();

  // Return type: refptr_same
  return CefFillLayoutCppToC::Wrap(_retval);
}

int CEF_CALLBACK box_layout_is_valid(struct _cef_layout_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBoxLayoutCppToC::Get(reinterpret_cast<cef_box_layout_t*>(self))
          ->IsValid();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefBoxLayoutCppToC::CefBoxLayoutCppToC() {
  GetStruct()->set_flex_for_view = box_layout_set_flex_for_view;
  GetStruct()->clear_flex_for_view = box_layout_clear_flex_for_view;
  GetStruct()->base.as_box_layout = box_layout_as_box_layout;
  GetStruct()->base.as_fill_layout = box_layout_as_fill_layout;
  GetStruct()->base.is_valid = box_layout_is_valid;
}

// DESTRUCTOR - Do not edit by hand.

CefBoxLayoutCppToC::~CefBoxLayoutCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefBoxLayout>
CefCppToCRefCounted<CefBoxLayoutCppToC, CefBoxLayout, cef_box_layout_t>::
    UnwrapDerived(CefWrapperType type, cef_box_layout_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefBoxLayoutCppToC,
                                   CefBoxLayout,
                                   cef_box_layout_t>::kWrapperType =
    WT_BOX_LAYOUT;
