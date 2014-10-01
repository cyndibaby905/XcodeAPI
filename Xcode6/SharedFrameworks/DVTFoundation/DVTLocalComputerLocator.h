

#import <DVTFoundation/DVTDeviceLocator.h>

@interface DVTLocalComputerLocator : DVTDeviceLocator
{
}

+ (id)localComputer;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (id)deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (void)stopLocating;
- (void)startLocating;
- (id)platforms;
- (id)deviceLocationScheme;

@end

