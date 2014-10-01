

#import <DVTFoundation/DTDKTeamBasedService.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface DTDKDownloadProvisioningProfileService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingEncodedProfile;
+ (id)keyPathsForValuesAffectingDevices;
+ (id)keyPathsForValuesAffectingExpirationDate;
+ (id)keyPathsForValuesAffectingCertificates;
+ (id)keyPathsForValuesAffectingProvisioningProfileID;
+ (id)keyPathsForValuesAffectingAppID;
+ (id)keyPathsForValuesAffectingProfileDictionary;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andAppIDIDs:(id)arg3;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andAppIDID:(id)arg3;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andProfileIDs:(id)arg3;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 andProfileID:(id)arg3;
@property(readonly) NSData *encodedProfile;
@property(readonly) NSArray *devices;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSArray *certificates;
@property(readonly) NSDictionary *appID;
@property(readonly) NSString *provisioningProfileID;
- (id)profileDictionary;

@end

