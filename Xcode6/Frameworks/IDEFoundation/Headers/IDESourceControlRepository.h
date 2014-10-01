

#import <IDEFoundation/IDESourceControlTree.h>

@class IDESourceControlCredentialsValidator;

@interface IDESourceControlRepository : IDESourceControlTree <NSURLConnectionDelegate>
{
    NSURL *_URL;
    NSString *_user;
    NSString *_password;
    NSString *_keychainName;
    BOOL _authenticated;
    BOOL _shouldRetryAuthentication;
    BOOL _representsGitSVNBridge;
    BOOL _representsXcodeServiceHostedRepository;
    BOOL _enabled;
    NSString *_remoteName;
    NSString *_root;
    BOOL _passwordIsBeingLoaded;
    BOOL _ignoreKeychain;
    IDESourceControlCredentialsValidator *_authenticator;
}

+ (id)_keychainNameWithSubversionHTTPProtectionSpace:(id)arg1;
+ (id)keyPathsForValuesAffectingConnectionAddress;
@property BOOL ignoreKeychain; // @synthesize ignoreKeychain=_ignoreKeychain;
@property(readonly) IDESourceControlCredentialsValidator *authenticator; // @synthesize authenticator=_authenticator;
@property(readonly) NSString *root; // @synthesize root=_root;
@property BOOL representsGitSVNBridge; // @synthesize representsGitSVNBridge=_representsGitSVNBridge;
@property BOOL shouldRetryAuthentication; // @synthesize shouldRetryAuthentication=_shouldRetryAuthentication;
@property(nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
- (BOOL)removePasswordFromKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (void)maybeRemovePasswordFromKeychain;
- (BOOL)canRemovePasswordFromKeychain;
- (BOOL)savePasswordToKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (void)maybeSavePasswordToKeychain;
- (BOOL)savePasswordToKeychain:(struct OpaqueSecKeychainRef *)arg1 forSubversionHTTPWithError:(id *)arg2;
- (void)setSubversionHTTPProtectionSpace:(id)arg1;
- (void)setKeychainName:(id)arg1;
@property(copy) NSString *password; // @synthesize password=_password;
@property(readonly) BOOL canSavePasswordToKeychain;
- (id)passwordFromKeychain:(void *)arg1 error:(id *)arg2;
@property(readonly) BOOL useSubversionHTTP;
- (id)subversionHTTPPasswordFromKeychain:(void *)arg1 error:(id *)arg2;
- (id)internetPasswordFromKeychain:(void *)arg1 error:(id *)arg2;
@property(readonly) BOOL canLoadPasswordFromKeychain;
- (void)_checkAndSetupKeychainName;
- (void)primitiveInvalidate;
- (id)children;
@property(readonly) BOOL isRemoteDistributedRepository;
- (id)ideModelObjectTypeIdentifier;
- (BOOL)containsItemAtLocation:(id)arg1;
- (id)itemAtURL:(id)arg1 isGroup:(BOOL)arg2;
@property(copy) NSString *remoteName;
- (BOOL)isEqual:(id)other;
@property(copy) NSString *user; // @synthesize user=_user;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
- (void)setLocation:(id)arg1;
- (void)setSourceControlExtension:(id)arg1;
@property BOOL representsXcodeServiceHostedRepository; // @synthesize representsXcodeServiceHostedRepository=_representsXcodeServiceHostedRepository;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 sourceControlManager:(id)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 sourceControlExtension:(id)arg2 sourceControlManager:(id)arg3;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

