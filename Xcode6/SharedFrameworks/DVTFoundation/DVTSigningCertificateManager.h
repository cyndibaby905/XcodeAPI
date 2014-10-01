

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTSigningCertificateSourceDelegate-Protocol.h>

@class DVTDispatchLock, DVTSigningCertificateSource, DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface DVTSigningCertificateManager : NSObject <DVTSigningCertificateSourceDelegate, DVTInvalidation>
{
    DVTDispatchLock *_certificateLock;
    NSMutableSet *_signingCertificates;
    NSMutableSet *_signingIdentityCertificates;
    DVTSigningCertificateSource *_certificateSource;
}

+ (id)defaultCertificateManager;
+ (void)initialize;
@property(retain) DVTSigningCertificateSource *certificateSource; // @synthesize certificateSource=_certificateSource;
- (void)_delayedPostCertificatesChangedNotification;
- (void)_forceFullSync;
- (void)signingCertificateSourceShouldDoFullResetFromSigningCertificates:(id)arg1;
- (void)signingCertificateSourcePrivateKeyStatusForCertificatesMayHaveChanged:(id)arg1;
- (void)signingCertificateSource:(id)arg1 didRemoveCertificate:(id)arg2;
- (void)signingCertificateSource:(id)arg1 didAddCertificate:(id)arg2;
@property(readonly) NSSet *signingIdentityCertificates;
@property(readonly) NSSet *signingCertificates;
- (id)logAspect;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithCertificateSource:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

