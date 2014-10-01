

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary;

@interface DTDKUpdateAppIDService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingAppID;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 appIDID:(id)arg3 appIdName:(id)arg4 andFeatures:(id)arg5;
@property(readonly) NSDictionary *appID;

@end

