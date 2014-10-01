

#import <Foundation/Foundation.h>

@class DVTPlatform, NSArray, NSString;

@interface DVTExtendedPlatformInfo : NSObject
{
    BOOL _requiresPortalAppGroups;
    NSString *_platformIdentifier;
    NSString *_deviceSupportDirectoryName;
    NSString *_provisioningProfilePlatform;
    NSArray *_provisioningProfileUTIs;
    NSString *_portalPlatformIdentifier;
    NSString *_developerProgramUserDescription;
    NSString *_correspondingDevicePlatformIdentifier;
    NSString *_correspondingSimulatorPlatformIdentifier;
}

+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1;
@property(readonly) NSString *correspondingSimulatorPlatformIdentifier; // @synthesize correspondingSimulatorPlatformIdentifier=_correspondingSimulatorPlatformIdentifier;
@property(readonly) NSString *correspondingDevicePlatformIdentifier; // @synthesize correspondingDevicePlatformIdentifier=_correspondingDevicePlatformIdentifier;
@property(readonly) BOOL requiresPortalAppGroups; // @synthesize requiresPortalAppGroups=_requiresPortalAppGroups;
@property(readonly) NSString *developerProgramUserDescription; // @synthesize developerProgramUserDescription=_developerProgramUserDescription;
@property(readonly) NSString *portalPlatformIdentifier; // @synthesize portalPlatformIdentifier=_portalPlatformIdentifier;
@property(readonly) NSArray *provisioningProfileUTIs; // @synthesize provisioningProfileUTIs=_provisioningProfileUTIs;
@property(readonly) NSString *provisioningProfilePlatform; // @synthesize provisioningProfilePlatform=_provisioningProfilePlatform;
@property(readonly) NSString *deviceSupportDirectoryName; // @synthesize deviceSupportDirectoryName=_deviceSupportDirectoryName;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly) DVTPlatform *correspondingSimulatorPlatform;
@property(readonly) DVTPlatform *correspondingDevicePlatform;
- (id)initWithExtension:(id)arg1;

@end

