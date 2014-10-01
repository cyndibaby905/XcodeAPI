

#import <Foundation/Foundation.h>

@class DVTSigningCertificate;

@protocol DVTProvisioningProfile;

@interface DVTCodesignParameterSnapshot : NSObject
{
    id <DVTProvisioningProfile> _provisioningProfile;
    DVTSigningCertificate *_signingCertificate;
    NSString *_identityHash;
}

+ (id)snapshotForAdHocSigning;
+ (id)snapshotForNullSigning;
+ (id)snapshotWithProvisioningProfile:(id)arg1;
+ (id)snapshotWithProvisioningProfile:(id)arg1 andSigningCertificate:(id)arg2;
+ (id)snapshotWithSigningCertificate:(id)arg1;
+ (id)snapshotWithIdentityHash:(id)arg1;
@property(copy) NSString *identityHash; // @synthesize identityHash=_identityHash;
@property(retain) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain) id <DVTProvisioningProfile> provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
@property(readonly) struct OpaqueSecCertificateRef *identityCertificate;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
@property(readonly) _Bool willSign;
@property(readonly) _Bool isAdHocIdentity;
- (NSString *)description;

@end

