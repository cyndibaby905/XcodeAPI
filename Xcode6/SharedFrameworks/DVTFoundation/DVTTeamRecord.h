

#import <CoreData/CoreData.h>

@class NSSet, NSString;

@interface DVTTeamRecord : NSManagedObject
{
}

- (id)rolesForDeveloper:(id)arg1;
- (void)pruneInstalledProvisioningProfiles;
- (void)installProvisioningProfiles;

// Remaining properties
@property(retain, nonatomic) NSSet *appIDs; // @dynamic appIDs;
@property(retain, nonatomic) NSSet *applicationGroups; // @dynamic applicationGroups;
@property(retain, nonatomic) NSSet *certificates; // @dynamic certificates;
@property(retain, nonatomic) NSSet *cloudContainers; // @dynamic cloudContainers;
@property(retain, nonatomic) NSSet *developers; // @dynamic developers;
@property(retain, nonatomic) NSSet *devices; // @dynamic devices;
@property(nonatomic) BOOL enhancedDevelopmentForMembers; // @dynamic enhancedDevelopmentForMembers;
@property(retain, nonatomic) NSSet *iosDevelopers; // @dynamic iosDevelopers;
@property(retain, nonatomic) NSSet *macDevelopers; // @dynamic macDevelopers;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *omcIdentifiers; // @dynamic omcIdentifiers;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @dynamic provisioningProfiles;
@property(retain, nonatomic) NSSet *roles; // @dynamic roles;
@property(retain, nonatomic) NSSet *shoeboxIDs; // @dynamic shoeboxIDs;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSString *teamId; // @dynamic teamId;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

