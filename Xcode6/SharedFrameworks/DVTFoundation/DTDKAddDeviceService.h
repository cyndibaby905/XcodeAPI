

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary, NSString;

@interface DTDKAddDeviceService : DTDKTeamBasedService
{
}

- (BOOL)_handlePortalResultCode:(long long)arg1;
- (id)_errorInfo;

+ (id)keyPathsForValuesAffectingDeviceID;
+ (id)keyPathsForValuesAffectingDeviceNumber;
+ (id)keyPathsForValuesAffectingDeviceName;
+ (id)keyPathsForValuesAffectingDevice;
+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform withDeviceIndentifier:(id)deviceID name:(id)name;

@property(readonly) NSString *deviceID;
@property(readonly) NSString *deviceNumber;
@property(readonly) NSString *deviceName;
@property(readonly) NSDictionary *device;

@end

