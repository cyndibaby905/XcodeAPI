

#import <Foundation/Foundation.h>

@class DVTDeveloperAccount, NSData, NSString;

@interface DVTDeveloperAccountSession : NSObject
{
    id _identity;
    DVTDeveloperAccount *_account;
    NSString *_sessionID;
    NSString *_prsID;
    NSData *_sessionData;
}

@property(copy) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(copy) NSString *prsID; // @synthesize prsID=_prsID;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak DVTDeveloperAccount *account; // @synthesize account=_account;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
@property struct OpaqueSecIdentityRef *identity;

@end

