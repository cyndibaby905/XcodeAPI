

#import <Foundation/Foundation.h>

@class DVTDeveloperAccount, NSArray, NSDictionary, NSError, NSString, NSWindow;

@interface DVTPortalOperationToken : NSObject <NSCopying>
{
    _Bool _userHasPicked;
    NSArray *_teams;
    DVTDeveloperAccount *_account;
    NSError *_error;
    NSWindow *_parentWindow;
}

+ (id)tokenWithDeveloperAccount:(id)arg1 andTeamDictionaries:(id)arg2;
+ (id)tokenWithDeveloperAccount:(id)arg1;
+ (id)defaultToken;
@property _Bool userHasPicked; // @synthesize userHasPicked=_userHasPicked;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
- (id)individualTeamTokens;
@property(readonly, copy) NSString *teamId;
- (void)setTeam:(id)arg1;
@property(readonly, copy) NSDictionary *team;
@property(copy) NSArray *teams; // @synthesize teams=_teams;
- (_Bool)filterTeamsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)filterTeamsToSingleTeamId:(id)arg1;
- (_Bool)filterTeamsToTeamIds:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

