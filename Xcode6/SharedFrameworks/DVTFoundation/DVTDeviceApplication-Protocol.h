

#import <DVTFoundation/DVTDeviceApplicationItem-Protocol.h>

@class NSSet, NSString;

@protocol DVTDeviceApplication <DVTDeviceApplicationItem>
@property(readonly) BOOL isHidden;
@property(readonly) NSSet *rootContainerApplicationItems;
@property(readonly) BOOL isFairPlayEncrypted;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *version;
@end

