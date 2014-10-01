

#import <CoreData/CoreData.h>

@class DVTTeamRecord, NSString;

@interface DVTShoeboxIDRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *shoeboxId; // @dynamic shoeboxId;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;
@end

