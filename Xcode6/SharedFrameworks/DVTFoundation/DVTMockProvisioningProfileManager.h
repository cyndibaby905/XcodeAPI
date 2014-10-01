

#import <DVTFoundation/DVTProvisioningProfileManager.h>

@class DVTDispatchLock, NSMutableSet;

@interface DVTMockProvisioningProfileManager : DVTProvisioningProfileManager
{
    NSMutableSet *_profiles;
    DVTDispatchLock *_lock;
}

- (id)profileMatchingUUID:(id)arg1;
- (void)forceProfileLoading;
- (id)allUsableProfiles;
- (id)allProfiles;
- (BOOL)areProfilesLoaded;
- (void)removeProfile:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)setProfiles:(id)arg1;
- (id)expiringProfiles;
- (id)profilesMatchingPredicate:(id)arg1;
- (BOOL)installHostProfiles:(id)arg1 error:(id *)arg2;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)provider;
- (id)init;

@end

