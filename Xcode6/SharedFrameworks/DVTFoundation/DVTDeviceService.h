

#import <Foundation/Foundation.h>

@class DVTDevice, DVTDeviceCapability, DVTExtension;

@interface DVTDeviceService : NSObject
{
    DVTDevice *_device;
    DVTExtension *_extension;
    DVTDeviceCapability *_currentCapability;
}

+ (id)capability;
@property(readonly) DVTDeviceCapability *currentCapability; // @synthesize currentCapability=_currentCapability;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

