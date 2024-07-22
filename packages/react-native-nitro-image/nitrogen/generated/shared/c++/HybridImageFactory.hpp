///
/// HybridImageFactory.hpp
/// Tue Jul 23 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed react-native-nitro properly?
#endif

// Forward declaration of `HybridImage` to properly resolve imports.
class HybridImage;

#include "HybridImage.hpp"

using namespace margelo::nitro;

/**
 * An abstract base class for `ImageFactory`
 * Inherit this class to create instances of `HybridImageFactory` in C++.
 * @example
 * ```cpp
 * class ImageFactory: public HybridImageFactory {
 *   // ...
 * };
 * ```
 */
class HybridImageFactory: public HybridObject {
  public:
    // Constructor
    explicit HybridImageFactory(): HybridObject(TAG) { }

  public:
    // Properties
    

  public:
    // Methods
    virtual std::shared_ptr<HybridImage> loadImageFromFile(const std::string& path) = 0;
    virtual std::shared_ptr<HybridImage> loadImageFromURL(const std::string& path) = 0;
    virtual std::shared_ptr<HybridImage> loadImageFromSystemName(const std::string& path) = 0;
    virtual std::shared_ptr<HybridImage> bounceBack(std::shared_ptr<HybridImage> image) = 0;

  protected:
    // Tag for logging
    static constexpr auto TAG = "ImageFactory";

  private:
    // Hybrid Setup
    void loadHybridMethods() override;
};