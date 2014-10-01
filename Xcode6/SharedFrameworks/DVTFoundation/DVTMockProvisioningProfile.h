

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTProvisioningProfile-Protocol.h>

@class DVTAppIDFeatures, DVTPlatform, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@interface DVTMockProvisioningProfile : NSObject <DVTProvisioningProfile>
{
    BOOL _isUniversal;
    NSArray *_signingCertificates;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    NSString *_UUID;
    NSString *_name;
    NSDictionary *_entitlements;
    NSSet *_supportedUDIDs;
    NSString *_teamID;
    NSString *_teamName;
    NSArray *_appIdentifierPrefixes;
    NSArray *_teamIdentifierPrefixes;
    NSString *_platform;
}

@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSArray *teamIdentifierPrefixes; // @synthesize teamIdentifierPrefixes=_teamIdentifierPrefixes;
@property(retain) NSArray *appIdentifierPrefixes; // @synthesize appIdentifierPrefixes=_appIdentifierPrefixes;
@property(retain) NSString *teamName; // @synthesize teamName=_teamName;
@property(retain) NSString *teamID; // @synthesize teamID=_teamID;
@property(retain) NSSet *supportedUDIDs; // @synthesize supportedUDIDs=_supportedUDIDs;
@property BOOL isUniversal; // @synthesize isUniversal=_isUniversal;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSArray *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
- (id)longDescription;
- (BOOL)matchesBundleIdentifier:(id)arg1;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isWACEnabled;
@property(readonly) BOOL isHomeKitEnabled;
- (BOOL)isApplicationGroupsEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) BOOL expired;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) BOOL isMacProfile;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly) NSData *dataRepresentation;
@property(readonly, copy) NSString *localPath;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *certificates;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) int version;
@property(readonly) NSArray *identitySigningCertificates;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
- (BOOL)containsSigningCertificate:(id)arg1;
- (void)validate;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

