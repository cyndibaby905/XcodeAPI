

#import <Foundation/Foundation.h>

@class DVTDeveloperAccountCredentials, DVTDeveloperAccountSession, DVTDispatchLock, NSDictionary, NSString;

@interface DVTDeveloperAccount : NSObject
{
    DVTDispatchLock *_lock;
    BOOL _alwaysLogInUsingQA;
    BOOL _enabled;
    DVTDeveloperAccountSession *_session;
    DVTDeveloperAccountCredentials *_accountCredentials;
    NSString *_userDescription;
}

+ (id)keyPathsForValuesAffectingUserDescriptionOrBestGuess;
+ (id)keyPathsForValuesAffectingHasPassword;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)accountWithPropertyListRepresentation:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)accountWithIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (id)accountWithCredentials:(id)arg1;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL alwaysLogInUsingQA; // @synthesize alwaysLogInUsingQA=_alwaysLogInUsingQA;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy) DVTDeveloperAccountCredentials *accountCredentials; // @synthesize accountCredentials=_accountCredentials;
@property(readonly) NSDictionary *propertyListRepresentation;
@property(readonly) NSString *userDescriptionOrBestGuess;
@property(readonly) BOOL hasPassword;
@property(copy) NSString *password;
@property(readonly) _Bool isCertBased;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
@property(readonly, copy) NSString *username;
- (void)revokeSession:(id)arg1;
- (id)sessionIfAvailable;
@property(readonly) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void)executeWithSession:(CDUnknownBlockType)arg1;
- (id)sessionByLoggingInIfNeeded:(id *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)init;

@end

