

#import <Foundation/Foundation.h>

@class NSDate, NSString;

@interface IDESnapshotItem : NSObject
{
    NSString *_name;
    NSString *_comment;
    int _type;
    NSDate *_date;
    NSString *_revision;
}

@property(copy) NSString *revision; // @synthesize revision=_revision;
@property(copy) NSDate *date; // @synthesize date=_date;
@property int type; // @synthesize type=_type;
@property(copy) NSString *comment; // @synthesize comment=_comment;
@property(copy) NSString *name; // @synthesize name=_name;
- (NSString *)description;

@end

