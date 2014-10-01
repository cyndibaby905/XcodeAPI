

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSDictionary;

@interface DTDKAddAppIDService : DTDKTeamBasedService
{
}

+ (NSSet *)keyPathsForValuesAffectingAppID;
+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform name:(id)name andEntitlements:(id)entitlements;
+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform name:(id)name bundleIdentifier:(id)identifier andEntitlements:(id)entitlements;
+ (instancetype)serviceForTeam:(id)team andPlatform:(id)platform name:(id)name prefix:(id)prefix bundleIdentifier:(id)identifier andEntitlements:(id)entitlements;
@property(readonly) NSDictionary *appID;

@end

