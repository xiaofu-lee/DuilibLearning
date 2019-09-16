// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_values.h"
#include "include/capi/cef_values_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefValueCToCpp
    : public CefCToCpp<CefValueCToCpp, CefValue, cef_value_t> {
 public:
  CefValueCToCpp();

  // CefValue methods.
  bool IsValid() OVERRIDE;
  bool IsOwned() OVERRIDE;
  bool IsReadOnly() OVERRIDE;
  bool IsSame(CefRefPtr<CefValue> that) OVERRIDE;
  bool IsEqual(CefRefPtr<CefValue> that) OVERRIDE;
  CefRefPtr<CefValue> Copy() OVERRIDE;
  CefValueType GetType() OVERRIDE;
  bool GetBool() OVERRIDE;
  int GetInt() OVERRIDE;
  double GetDouble() OVERRIDE;
  CefString GetString() OVERRIDE;
  CefRefPtr<CefBinaryValue> GetBinary() OVERRIDE;
  CefRefPtr<CefDictionaryValue> GetDictionary() OVERRIDE;
  CefRefPtr<CefListValue> GetList() OVERRIDE;
  bool SetNull() OVERRIDE;
  bool SetBool(bool value) OVERRIDE;
  bool SetInt(int value) OVERRIDE;
  bool SetDouble(double value) OVERRIDE;
  bool SetString(const CefString& value) OVERRIDE;
  bool SetBinary(CefRefPtr<CefBinaryValue> value) OVERRIDE;
  bool SetDictionary(CefRefPtr<CefDictionaryValue> value) OVERRIDE;
  bool SetList(CefRefPtr<CefListValue> value) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
