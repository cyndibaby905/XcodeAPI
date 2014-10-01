

#import <Foundation/Foundation.h>
#import <DVTFoundation/DVTDeviceApplication-Protocol.h>

@class NSURL;

@protocol DVTSpecificApplicationProvider <NSObject>
- (id <DVTDeviceApplication>)applicationForURL:(NSURL *)arg1;
@end

