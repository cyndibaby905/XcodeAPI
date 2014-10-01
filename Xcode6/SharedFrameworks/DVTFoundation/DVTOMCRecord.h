

#import <CoreData/CoreData.h>

@class DVTTeamRecord, NSString;

@interface DVTOMCRecord : NSManagedObject
{
}

+ (id)coreDataEntityName;

// Remaining properties
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *omcId; // @dynamic omcId;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

