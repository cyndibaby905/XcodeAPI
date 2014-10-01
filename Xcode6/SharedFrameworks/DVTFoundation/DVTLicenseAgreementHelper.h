

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTLicenseAgreementHelper : NSObject
{
    int _installedLicenseType;
    NSString *_installedLicenseID;
}

+ (BOOL)shouldShowLicenseAgreementForInstalledXcodeLicenseID:(id)arg1 lastAgreedToLicenseID:(id)arg2 installedXcodeVersion:(id)arg3 xcodeVersionForLastAgreedToLicense:(id)arg4;
@property(readonly) NSString *installedLicenseID; // @synthesize installedLicenseID=_installedLicenseID;
@property(readonly) int installedLicenseType; // @synthesize installedLicenseType=_installedLicenseType;
- (BOOL)shouldShowLicenseAgreement;
- (BOOL)agreeToLicense;
- (id)_getLoggedInUserName;
- (BOOL)_isRunningAsSuperUser;
- (id)initWithLicenseInfoPath:(id)arg1;

@end

