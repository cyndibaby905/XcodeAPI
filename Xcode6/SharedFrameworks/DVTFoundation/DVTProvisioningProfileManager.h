

#import <Foundation/Foundation.h>

@class NSSet;

@interface DVTProvisioningProfileManager : NSObject
{
    id _provider;
}

+ (id)keyPathsForValuesAffectingExpiringProfiles;
+ (id)keyPathsForValuesAffectingAllProfiles;
+ (id)keyPathsForValuesAffectingAreProfilesLoaded;
+ (id)defaultManager;
- (BOOL)installHostProfiles:(id)arg1 error:(id *)arg2;
- (id)profileWithData:(id)arg1;
- (id)profileWithURL:(id)arg1;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
@property(readonly) id provider; // @synthesize provider=_provider;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)profileMatchingUUID:(id)arg1;
- (id)profilesMatchingPredicate:(id)arg1;
@property(readonly) NSSet *allUsableProfiles;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
@property(readonly) NSSet *expiringProfiles;
@property(readonly) NSSet *allProfiles;
@property(readonly) BOOL areProfilesLoaded;
- (void)forceProfileLoading;

@end
