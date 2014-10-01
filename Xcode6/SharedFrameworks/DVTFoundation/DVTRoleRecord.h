

#import <CoreData/CoreData.h>

@class DVTDeveloperRecord, DVTTeamRecord, NSString;

@interface DVTRoleRecord : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingLevel;
@property(readonly, nonatomic) long long level;

// Remaining properties
@property(retain, nonatomic) DVTDeveloperRecord *developer; // @dynamic developer;
@property(retain, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

