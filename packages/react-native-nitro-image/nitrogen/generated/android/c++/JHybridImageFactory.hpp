///
/// JHybridImageFactory.hpp
/// Wed Jul 31 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImageFactory.hpp"
#include <fbjni/fbjni.h>

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridImageFactory: public jni::HybridClass<JHybridImageFactory>, public HybridImageFactory {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridImageFactory;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridImageFactory(jni::alias_ref<jhybridobject> jThis) : _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline jni::global_ref<JHybridImageFactory::javaobject>& getJavaPart() noexcept { return _javaPart; }

  public:
    // Properties
    

  public:
    // Methods
    std::shared_ptr<HybridImage> loadImageFromFile(const std::string& path) override;
    std::shared_ptr<HybridImage> loadImageFromURL(const std::string& path) override;
    std::shared_ptr<HybridImage> loadImageFromSystemName(const std::string& path) override;
    std::shared_ptr<HybridImage> bounceBack(std::shared_ptr<HybridImage> image) override;

  private:
    friend HybridBase;
    jni::global_ref<JHybridImageFactory::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image