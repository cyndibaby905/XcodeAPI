

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListDeviceService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingDevices;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2;
@property(readonly) NSArray *devices;

@end

