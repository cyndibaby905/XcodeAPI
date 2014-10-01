

#import <Foundation/Foundation.h>

@class NSSet;

@protocol DVTDeviceApplicationProvider <NSObject>
@property(readonly) NSSet *applications;

@optional
@property(readonly) NSSet *systemApplications;
@end

