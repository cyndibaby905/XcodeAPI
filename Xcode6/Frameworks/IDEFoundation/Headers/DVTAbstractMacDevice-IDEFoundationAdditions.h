

#import <DVTFoundation/DVTAbstractMacDevice.h>

@interface DVTAbstractMacDevice (IDEFoundationAdditions)
- (id)testingFrameworkPathsForBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (id)testHostPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2 outError:(id *)arg3;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)supportedArchitecturesForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
@end

