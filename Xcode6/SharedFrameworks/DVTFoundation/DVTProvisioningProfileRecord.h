

#import <CoreData/CoreData.h>

@class DVTAppIDRecord, DVTTeamRecord, NSData, NSDate, NSSet, NSString;

@interface DVTProvisioningProfileRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) DVTAppIDRecord *appId; // @dynamic appId;
@property(retain, nonatomic) NSSet *certificates; // @dynamic certificates;
@property(retain, nonatomic) NSDate *dateExpire; // @dynamic dateExpire;
@property(retain, nonatomic) NSSet *devices; // @dynamic devices;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *proProPlatform; // @dynamic proProPlatform;
@property(retain, nonatomic) NSData *profileData; // @dynamic profileData;
@property(retain, nonatomic) NSString *provisioningProfileId; // @dynamic provisioningProfileId;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *version; // @dynamic version;
@end

