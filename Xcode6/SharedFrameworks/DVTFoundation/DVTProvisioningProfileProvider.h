

#import <Foundation/Foundation.h>

@class NSSet;

@interface DVTProvisioningProfileProvider : NSObject
{
}

+ (id)sharedProvider;
- (BOOL)installHostProfiles:(id)arg1 error:(id *)arg2;
- (id)profileWithData:(id)arg1;
- (id)profileWithURL:(id)arg1;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
@property(readonly) NSSet *expiringProfiles;
@property(readonly) NSSet *allProfiles;
@property(readonly) BOOL areProfilesLoaded;
- (void)forceProfileLoading;

@end

