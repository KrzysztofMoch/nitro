//
//  NitroImageOnLoad.mm
//  NitroImage
//
//  Created by Marc Rousavy on 22.07.24.
//


#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>
#import "HybridImageFactorySwift.hpp"

namespace NitroImage {
  class NitroImageRegistry;
} // namespace NitroImage

#import "NitroImage-Swift.h"

@interface NitroImageOnLoad : NSObject
@end

@implementation NitroImageOnLoad

using namespace margelo::nitro;

+ (void)load {
  // Register Test HybridObject so it can be created from JS.
  HybridObjectRegistry::registerHybridObjectConstructor("ImageFactory", []() -> std::shared_ptr<HybridObject> {
    auto imageFactory = NitroImage::NitroImageRegistry::createImageFactory();
    return std::make_shared<HybridImageFactorySwift>(imageFactory);
  });
}

@end