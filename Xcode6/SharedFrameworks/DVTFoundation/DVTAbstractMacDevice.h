

#import <DVTFoundation/DVTDevice.h>

#import <DVTFoundation/DVTDeviceApplicationProvider-Protocol.h>
#import <DVTFoundation/DVTSpecificApplicationProvider-Protocol.h>

@class NSSet, NSString;

@interface DVTAbstractMacDevice : DVTDevice <DVTDeviceApplicationProvider, DVTSpecificApplicationProvider>
{
    NSString *_recordedFramesBacktraceRecordingDylibPath;
}

- (id)recordedFramesBacktraceRecordingDylibPath;
- (id)recordedFramesLibdispatchIntrospectionDylibPath;
- (id)recordedFramesMinimumVersionString;
- (BOOL)supportsTestManagerDaemon;
- (id)preferredSDKForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)preferredArchitectureForDeviceOptions:(id)arg1 error:(id *)arg2;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (id)_applicationFromURL:(id)arg1;
- (void)_addApplicationsFromDirectory:(id)arg1 toArray:(id)arg2;
- (id)applicationForURL:(id)arg1;
- (id)additionalApplicationsForDebuggingAppExtensions;
@property(readonly) NSSet *systemApplications;
@property(readonly) NSSet *applications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

