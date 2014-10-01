

#import <CoreData/CoreData.h>

@class DVTTeamRecord, NSString;

@interface DVTDeviceRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *deviceNumber; // @dynamic deviceNumber;
@property(retain, nonatomic) NSString *devicePlatform; // @dynamic devicePlatform;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;
@end

