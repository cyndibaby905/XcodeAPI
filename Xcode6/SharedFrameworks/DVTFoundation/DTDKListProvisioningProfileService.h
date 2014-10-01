

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray;

@interface DTDKListProvisioningProfileService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingProvisioningProfiles;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 includeInvalidProfiles:(_Bool)arg3;
- (id)downloadServices;
@property(readonly) NSArray *provisioningProfiles;

@end

