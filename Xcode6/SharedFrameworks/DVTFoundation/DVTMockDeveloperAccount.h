

#import <DVTFoundation/DVTDeveloperAccount.h>

@class NSString;

@interface DVTMockDeveloperAccount : DVTDeveloperAccount
{
    NSString *_mockUsername;
    NSString *_mockPassword;
}

@property(copy) NSString *mockPassword; // @synthesize mockPassword=_mockPassword;
@property(copy) NSString *mockUsername; // @synthesize mockUsername=_mockUsername;
- (id)password;
- (id)username;

@end

