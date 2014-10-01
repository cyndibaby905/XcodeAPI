

#import <Foundation/Foundation.h>

@class NSDictionary;

@interface DVTDeviceCapability : NSObject
{
    NSDictionary *_properties;
}

+ (id)deviceCapabilityWithProperties:(id)arg1;
@property(readonly, copy) NSDictionary *properties; // @synthesize properties=_properties;
- (NSString *)description;
- (BOOL)matchesCapability:(id)arg1;
- (id)initWithProperties:(id)arg1;

@end

