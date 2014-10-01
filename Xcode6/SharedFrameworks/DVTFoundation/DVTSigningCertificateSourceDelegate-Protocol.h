

#import <Foundation/Foundation.h>

@class DVTSigningCertificate, DVTSigningCertificateSource;

@protocol DVTSigningCertificateSourceDelegate <NSObject>
- (void)signingCertificateSourceShouldDoFullResetFromSigningCertificates:(DVTSigningCertificateSource *)arg1;
- (void)signingCertificateSourcePrivateKeyStatusForCertificatesMayHaveChanged:(DVTSigningCertificateSource *)arg1;
- (void)signingCertificateSource:(DVTSigningCertificateSource *)arg1 didRemoveCertificate:(DVTSigningCertificate *)arg2;
- (void)signingCertificateSource:(DVTSigningCertificateSource *)arg1 didAddCertificate:(DVTSigningCertificate *)arg2;
@end

