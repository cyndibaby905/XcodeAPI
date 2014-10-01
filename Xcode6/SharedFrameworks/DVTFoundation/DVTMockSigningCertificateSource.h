

#import <DVTFoundation/DVTSigningCertificateSource.h>

@class NSMutableSet;

@interface DVTMockSigningCertificateSource : DVTSigningCertificateSource
{
    NSMutableSet *_allSigningCertificates;
}

- (void)triggerUnknownEvent;
- (void)triggerDidAddOrRemovePrivateKeys;
- (void)triggerRemoveForSigningCertificate:(id)arg1;
- (void)triggerAddForSigningCertificate:(id)arg1;
- (id)allSigningCertificates;
- (void)_stopListeningForKeychainEvents;
- (void)_startListeningForKeychainEvents;
- (id)initWithInitialSigningCertificates:(id)arg1 logAspect:(id)arg2;
- (id)initWithLogAspect:(id)arg1;

@end

