///
/// ImageSpec.hpp
/// Sun Jul 14 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#include <stddef.h>
#include <string.h>
#include <optional>
#include <future>
#include <functional>

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed react-native-nitro properly?
#endif



/**
 * An abstract base class for `Image` (Image.nitro.ts)
 * Inherit this class to create instances of `ImageSpec` in C++.
 * @example
 * ```cpp
 * public class Image: public ImageSpec {
 *   // ...
 * };
 * ```
 */
class ImageSpec: public HybridObject {
  public:
    // Constructor
    explicit ImageSpec(): HybridObject(TAG) { }

  public:
    // Properties
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
    virtual std::shared_ptr<ArrayBuffer> getData() = 0;

  public:
    // Methods
    

  protected:
    // Tag for logging
    static constexpr auto TAG = "Image";

  private:
    // Hybrid Setup
    void loadHybridMethods() override;
};