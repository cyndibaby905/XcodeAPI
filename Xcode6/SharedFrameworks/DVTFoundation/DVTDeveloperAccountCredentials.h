

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NSURLCredential;

@interface DVTDeveloperAccountCredentials : NSObject <NSCopying>
{
    NSURLCredential *_URLCredential;
}

+ (id)URLProtectionSpace;
+ (id)URLProtectionSpaces;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 keychain:(struct OpaqueSecKeychainRef *)arg3 successfullyPersisted:(char *)arg4 error:(id *)arg5;
+ (id)accountCredentialsForDefaultCredentials;
+ (id)accountCredentialsForUsername:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)allAccountCredentials;
@property(readonly, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_URLCredential;
- (BOOL)saveToKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLCredential:(id)arg1;

@end

