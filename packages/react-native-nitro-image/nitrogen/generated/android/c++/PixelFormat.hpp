///
/// JPixelFormat.hpp
/// Mon Jul 29 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "PixelFormat.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "PixelFormat" and the the Kotlin enum "PixelFormat".
   */
  struct JPixelFormat: public jni::JavaClass<JPixelFormat> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/PixelFormat;";

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    static JPixelFormat create(PixelFormat value);

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum PixelFormat.
     */
    PixelFormat toPixelFormat();
  };

} // namespace margelo::nitro::image