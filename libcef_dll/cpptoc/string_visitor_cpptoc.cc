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
// $hash=15ed98715c71448aa3bd8b0142920f21a418d08b$
//

#include "libcef_dll/cpptoc/string_visitor_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK string_visitor_visit(struct _cef_string_visitor_t* self,
                                       const cef_string_t* string) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: string

  // Execute
  CefStringVisitorCppToC::Get(self)->Visit(CefString(string));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefStringVisitorCppToC::CefStringVisitorCppToC() {
  GetStruct()->visit = string_visitor_visit;
}

// DESTRUCTOR - Do not edit by hand.

CefStringVisitorCppToC::~CefStringVisitorCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefStringVisitor> CefCppToCRefCounted<
    CefStringVisitorCppToC,
    CefStringVisitor,
    cef_string_visitor_t>::UnwrapDerived(CefWrapperType type,
                                         cef_string_visitor_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefStringVisitorCppToC,
                                   CefStringVisitor,
                                   cef_string_visitor_t>::kWrapperType =
    WT_STRING_VISITOR;