

#import <DVTFoundation/DTDKDeveloperPortalService.h>

@class NSArray;

@interface DTDKListTeamService : DTDKDeveloperPortalService
{
}

+ (id)keyPathsForValuesAffectingTeams;
+ (id)service;
@property(readonly) NSArray *teams;

@end

