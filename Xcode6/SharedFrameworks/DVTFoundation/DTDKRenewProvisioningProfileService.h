

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSData, NSDictionary, NSString;

@interface DTDKRenewProvisioningProfileService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingEncodedProfile;
+ (id)keyPathsForValuesAffectingProvisioningProfileID;
+ (id)keyPathsForValuesAffectingProfileDictionary;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 profileName:(id)arg3 appIDID:(id)arg4 deviceIDs:(id)arg5 certificateIDs:(id)arg6;
@property(readonly) NSData *encodedProfile;
@property(readonly) NSString *provisioningProfileID;
@property(readonly) NSDictionary *profileDictionary;
- (void)_success;
- (void)_failure:(id)arg1;

@end

