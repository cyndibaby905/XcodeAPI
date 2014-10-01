

#import <DVTFoundation/DVTDeveloperAccount.h>

@interface DVTCertBasedDeveloperAccount : DVTDeveloperAccount
{
    struct OpaqueSecIdentityRef *_identity;
}

+ (id)accountWithIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (_Bool)isCertBased;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (struct OpaqueSecIdentityRef *)identity;
- (void)dealloc;

@end

