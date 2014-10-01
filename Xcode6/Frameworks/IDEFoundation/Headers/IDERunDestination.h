

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTDevice, DVTObservingToken, DVTSDK, NSError, NSString;

@interface IDERunDestination : NSObject <NSCopying>
{
    DVTObservingToken *_targetDeviceNameObservingToken;
    BOOL _isTargetDeviceEligible;
    DVTDevice *_targetDevice;
    NSString *_targetArchitecture;
    DVTSDK *_targetSDK;
    NSString *_targetIdentifier;
    NSError *_deviceIneligibilityError;
}

+ (id)fallbackActiveArchitectureForBuildArchitectures:(id)arg1;
+ (id)keyPathsForValuesAffectingFullDisplayName;
+ (id)keyPathsForValuesAffectingDisplayName;
@property(readonly) NSError *deviceIneligibilityError; // @synthesize deviceIneligibilityError=_deviceIneligibilityError;
@property(readonly) BOOL isTargetDeviceEligible; // @synthesize isTargetDeviceEligible=_isTargetDeviceEligible;
@property(readonly) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(readonly) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly, copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (id)dvt_detailedDebugDescription;
- (id)activeArchitectureForBuildArchitectures:(id)arg1;
- (void)didBecomeActiveRunDestinationForRunContext:(id)arg1;
- (id)runOperationForLaunchSession:(id)arg1 error:(id *)arg2;
- (id)runWorkerForLaunchSession:(id)arg1 error:(id *)arg2;
- (id)targetArchitectureForSorting;
- (id)targetSDKForSorting;
- (id)targetDeviceForSorting;
- (id)displayOrder;
- (BOOL)shouldPresentRunDestinationForScheme:(id)arg1 schemeTask:(int)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 error:(id *)arg6;
- (BOOL)isValidRunDestinationForScheme:(id)arg1 schemeTask:(int)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 error:(id *)arg6;
- (BOOL)_isValidRunDestinationForScheme:(id)arg1 schemeTask:(int)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 forPresentation:(BOOL)arg6 error:(id *)arg7;
- (NSString *)description;
@property(readonly, copy) NSString *fullDisplayName;
@property(readonly, copy) NSString *displayNameAdditions;
@property(readonly, copy) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIneligibleTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 deviceIneligibilityError:(id)arg4;
- (id)initWithTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3;

@end

