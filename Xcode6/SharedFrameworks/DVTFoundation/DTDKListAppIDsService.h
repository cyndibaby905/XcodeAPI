

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListAppIDsService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingAppIDs;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andAppIDID:(id)arg3;
- (void)_success;
@property(readonly) NSArray *appIDs;

@end

