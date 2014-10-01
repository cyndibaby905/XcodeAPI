

#import <CoreData/CoreData.h>

@class DVTTeamRecord, NSString;

@interface DVTApplicationGroupRecord : NSManagedObject
{
}

+ (id)coreDataEntityName;

// Remaining properties
@property(retain, nonatomic) NSString *applicationGroup; // @dynamic applicationGroup;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

