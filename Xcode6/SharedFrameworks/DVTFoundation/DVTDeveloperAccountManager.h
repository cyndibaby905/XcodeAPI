

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDeveloperProfileAccountProvider-Protocol.h>

@class DVTDeveloperAccount, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface DVTDeveloperAccountManager : NSObject <DVTDeveloperProfileAccountProvider>
{
    NSMutableOrderedSet *_accounts;
    DVTDeveloperAccount *_defaultAccount;
}

+ (id)sharedAccountManager;
@property(retain, nonatomic) DVTDeveloperAccount *defaultAccount; // @synthesize defaultAccount=_defaultAccount;
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (void)removeAccountsObject:(id)arg1;
- (void)addAccountsObject:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *accounts;
- (id)_mutableAccounts;
- (void)updateUserDefaults;
- (id)_accountsByCreatingFromDefaults;
- (id)_accountsByCreatingFromKeychain;
- (_Bool)hasAccountWithUsername:(id)arg1;
- (id)accountWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

