

#import <DVTFoundation/DVTDeviceService.h>

@interface IDESimulateLocationService : DVTDeviceService
{
}

+ (id)capability;
- (BOOL)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2 error:(id *)arg3;
- (BOOL)stopLocationSimulationWithError:(id *)arg1;

@end

