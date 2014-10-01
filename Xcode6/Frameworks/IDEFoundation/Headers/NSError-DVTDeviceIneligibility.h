

#import <Foundation/Foundation.h>

@class NSString;

@interface NSError (DVTDeviceIneligibility)
+ (id)dvt_errorWithDeviceIneligibilityErrorCode:(long long)arg1 device:(id)arg2 buildable:(id)arg3 buildParameters:(id)arg4;
@property(readonly, nonatomic) NSString *dvt_deviceIneligibilityTokenDescription;
@end

