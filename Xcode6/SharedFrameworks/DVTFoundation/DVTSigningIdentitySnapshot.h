

#import <Foundation/Foundation.h>

@class DVTDeveloperAccount, NSArray, NSString;

@interface DVTSigningIdentitySnapshot : NSObject
{
    NSString *_teamID;
    DVTDeveloperAccount *_account;
    NSArray *_validSigningIdentitiesMatchingTeam;
    NSArray *_expiredSigningIdentitiesMatchingTeam;
    NSArray *_revokedSigningIdentitiesMatchingTeam;
    NSArray *_validNonSigningIdentitiesMatchingAccount;
}

+ (id)snapshotForTeamID:(id)arg1 account:(id)arg2;
+ (id)snapshotForTeamID:(id)arg1 account:(id)arg2 certificateUtilities:(id)arg3;
@property(copy) NSArray *validNonSigningIdentitiesMatchingAccount; // @synthesize validNonSigningIdentitiesMatchingAccount=_validNonSigningIdentitiesMatchingAccount;
@property(copy) NSArray *revokedSigningIdentitiesMatchingTeam; // @synthesize revokedSigningIdentitiesMatchingTeam=_revokedSigningIdentitiesMatchingTeam;
@property(copy) NSArray *expiredSigningIdentitiesMatchingTeam; // @synthesize expiredSigningIdentitiesMatchingTeam=_expiredSigningIdentitiesMatchingTeam;
@property(copy) NSArray *validSigningIdentitiesMatchingTeam; // @synthesize validSigningIdentitiesMatchingTeam=_validSigningIdentitiesMatchingTeam;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;

@end

