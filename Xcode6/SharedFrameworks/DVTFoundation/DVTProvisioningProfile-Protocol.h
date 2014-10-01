

#import <Foundation/Foundation.h>

@class DVTAppIDFeatures, DVTDevice, DVTPlatform, DVTSigningCertificate, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;

@protocol DVTProvisioningProfile <NSObject>
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *certificates;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isWACEnabled;
@property(readonly) BOOL isHomeKitEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly) NSData *dataRepresentation;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) NSString *platform;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) BOOL isMacProfile;
@property(readonly) BOOL isUniversal;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL expired;
@property(readonly) NSArray *identitySigningCertificates;
@property(readonly) NSArray *signingCertificates;
@property(readonly, copy) NSString *localPath;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSDate *creationDate;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSDictionary *entitlements;
@property(readonly) int version;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (NSString *)longDescription;
- (BOOL)writeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)dateCompareDecending:(id <DVTProvisioningProfile>)arg1;
- (long long)dateCompare:(id <DVTProvisioningProfile>)arg1;
- (long long)localizedCompare:(id <DVTProvisioningProfile>)arg1;
- (long long)compare:(id <DVTProvisioningProfile>)arg1;
- (BOOL)matchesBundleIdentifier:(NSString *)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(NSString *)arg1;
- (BOOL)canBeInstalledOnDevice:(DVTDevice *)arg1;
- (BOOL)containsSigningCertificate:(DVTSigningCertificate *)arg1;
- (BOOL)hasCertificateMatchingIdentity:(NSString *)arg1 includeExpired:(BOOL)arg2;
- (BOOL)allowsFeatures:(DVTAppIDFeatures *)arg1 missingFeatures:(id *)arg2;
@end

