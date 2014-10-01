

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary;

@interface DTDKFetchAppIDService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingAppID;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andAppIDID:(id)arg3;
@property(readonly) NSDictionary *appID;

@end

