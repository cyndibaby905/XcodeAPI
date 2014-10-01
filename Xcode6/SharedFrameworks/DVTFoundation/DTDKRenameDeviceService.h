

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary, NSString;

@interface DTDKRenameDeviceService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingDeviceID;
+ (id)keyPathsForValuesAffectingDeviceNumber;
+ (id)keyPathsForValuesAffectingDeviceName;
+ (id)keyPathsForValuesAffectingDevice;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 deviceID:(id)arg3 newName:(id)arg4;
@property(readonly) NSString *deviceID;
@property(readonly) NSString *deviceNumber;
@property(readonly) NSString *deviceName;
@property(readonly) NSDictionary *device;

@end

