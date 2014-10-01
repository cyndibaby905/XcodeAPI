

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTNotificationToken, DVTSigningCertificateManager, NSArray, NSMapTable;

@interface DVTCertificateUtilities : NSObject
{
    DVTSigningCertificateManager *_signingCertificateManager;
    DVTNotificationToken *_changedNotificationToken;
    NSMapTable *_certificateRefToSigningCertificateMap;
    NSArray *_allSigningIdentityCertificates;
    NSArray *_allSigningCertificates;
    NSArray *_allSigningCertificateObjects;
    DVTDispatchLock *_updateLock;
    DVTDispatchLock *_certificatesLock;
}

+ (id)certificateDataForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (struct OpaqueSecCertificateRef *)certificateWithData:(id)arg1;
+ (id)createCSRWithCommonName:(id)arg1 emailAddress:(id)arg2 andError:(id *)arg3;
+ (id)issueDateForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)expirationDateForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)serialNumberForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)sha1HashForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)commonNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)defaultDesignatedRequirementsForIdentifier:(id)arg1 andCertificate:(struct OpaqueSecCertificateRef *)arg2;
+ (_Bool)isCertificateTrusted:(struct OpaqueSecCertificateRef *)arg1;
+ (_Bool)hasCertificateExpired:(struct OpaqueSecCertificateRef *)arg1;
+ (_Bool)isCertificateAnIdentity:(struct OpaqueSecCertificateRef *)arg1;
+ (id)portalMemberIDFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)portalTeamNameFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)portalTeamIDFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)trimmedNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (_Bool)isCertificateKindRevocable:(id)arg1;
+ (id)displayNameForCertificateKind:(id)arg1;
+ (id)certificateKindForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)allSigningCertificates_Sync;
+ (id)allSigningIdentityCertificates_Sync;
+ (id)allSigningIdentityCertificatesInKeychain_Sync:(struct OpaqueSecKeychainRef *)arg1;
+ (id)allSigningCertificates;
+ (_Bool)areCertificatesEqual:(struct OpaqueSecCertificateRef *)arg1 cert2:(struct OpaqueSecCertificateRef *)arg2;
+ (id)allSigningIdentityCertificates;
+ (id)sharedCertificateUtilities;
- (id)createCSRWithCommonName:(id)arg1 emailAddress:(id)arg2 andError:(id *)arg3;
- (_Bool)areCertificatesEqual:(struct OpaqueSecCertificateRef *)arg1 cert2:(struct OpaqueSecCertificateRef *)arg2;
- (id)expirationDateForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)issueDateForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)serialNumberForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)sha1HashForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)commonNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)defaultDesignatedRequirementsForIdentifier:(id)arg1 andCertificate:(struct OpaqueSecCertificateRef *)arg2;
- (_Bool)isCertificateTrusted:(struct OpaqueSecCertificateRef *)arg1;
- (id)certificateDataForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (struct OpaqueSecCertificateRef *)certificateWithData:(id)arg1;
- (_Bool)hasCertificateExpired:(struct OpaqueSecCertificateRef *)arg1;
- (_Bool)isCertificateAnIdentity:(struct OpaqueSecCertificateRef *)arg1;
- (id)portalMemberIDFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)portalTeamNameFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)portalTeamIDFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)trimmedNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)allSigningCertificateObjects;
- (id)allSigningCertificates;
- (id)allSigningIdentityCertificates;
- (id)allSigningCertificates_Sync;
- (id)allSigningIdentityCertificates_Sync;
- (id)allSigningIdentityCertificatesInKeychain_Sync:(struct OpaqueSecKeychainRef *)arg1;
- (_Bool)isCertificateKindAutomaticallyRevocable:(id)arg1;
- (_Bool)isCertificateKindRevocable:(id)arg1;
- (id)displayNameForCertificateKind:(id)arg1;
- (id)certificateKindForCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)signingCertificateForCertificateRef:(struct OpaqueSecCertificateRef *)arg1;
- (id)certificateRefToSigningCertificateMap;
- (void)backgroundSyncWithSigningCertificateManager;
- (id)signingCertificateManager;
- (id)init;

@end

