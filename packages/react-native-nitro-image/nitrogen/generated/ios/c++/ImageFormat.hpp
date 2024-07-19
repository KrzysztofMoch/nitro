///
/// ImageFormat.hpp
/// Sat Jul 20 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/Hash.hpp>
#include <NitroModules/JSIConverter.hpp>

/**
 * An enum which can be represented as a JavaScript union (ImageFormat).
 */
enum class ImageFormat {
  jpg,
  png,
} __attribute__((enum_extensibility(closed)));

namespace margelo::nitro {

  // C++ ImageFormat <> JS ImageFormat (union)
  template <>
  struct JSIConverter<ImageFormat> {
    static inline ImageFormat fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("jpg"): return ImageFormat::jpg;
        case hashString("png"): return ImageFormat::png;
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert " + unionValue + " to ImageFormat - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, ImageFormat arg) {
      switch (arg) {
        case ImageFormat::jpg: return JSIConverter<std::string>::toJSI(runtime, "jpg");
        case ImageFormat::png: return JSIConverter<std::string>::toJSI(runtime, "png");
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert ImageFormat to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
  };

} // namespace margelo::nitro