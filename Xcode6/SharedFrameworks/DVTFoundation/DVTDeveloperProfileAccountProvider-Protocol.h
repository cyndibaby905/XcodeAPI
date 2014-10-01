

#import <Foundation/Foundation.h>

@class NSDictionary, NSString;

@protocol DVTDeveloperProfileAccountProvider <NSObject>
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(NSDictionary *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
@end

