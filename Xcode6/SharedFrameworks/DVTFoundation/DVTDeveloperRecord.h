

#import <CoreData/CoreData.h>

@class DVTDeveloperAccount, NSNumber, NSSet, NSString;

@interface DVTDeveloperRecord : NSManagedObject
{
}

- (_Bool)hasRoleOnTeam:(id)arg1 forPlatform:(id)arg2;
- (_Bool)isMemberOfTeam:(id)arg1;
@property(readonly, nonatomic) _Bool isAgent;
@property(readonly, nonatomic) _Bool isMacTeamMember;
@property(readonly, nonatomic) _Bool isMacAdmin;
@property(readonly, nonatomic) _Bool isIOSTeamMember;
@property(readonly, nonatomic) _Bool isIOSAdmin;
- (void)replaceRolesForTeam:(id)arg1 withRoles:(id)arg2;
@property(readonly, nonatomic) DVTDeveloperAccount *account;

// Remaining properties
@property(retain, nonatomic) NSString *developerId; // @dynamic developerId;
@property(retain, nonatomic) NSString *developerStatus; // @dynamic developerStatus;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSSet *iosTeams; // @dynamic iosTeams;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) NSSet *macTeams; // @dynamic macTeams;
@property(retain, nonatomic) NSNumber *personId; // @dynamic personId;
@property(retain, nonatomic) NSSet *roles; // @dynamic roles;
@property(retain, nonatomic) NSSet *teams; // @dynamic teams;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

