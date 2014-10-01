

#import <Foundation/Foundation.h>

@class NSMutableArray, NSString;

@interface DVTExtraXMLElement : NSObject
{
    NSString *_name;
    NSMutableArray *_mutableAttributeNames;
    NSMutableArray *_mutableAttributeValues;
    NSMutableArray *_mutableElements;
}

@property(copy) NSMutableArray *mutableElements; // @synthesize mutableElements=_mutableElements;
@property(copy) NSMutableArray *mutableAttributeValues; // @synthesize mutableAttributeValues=_mutableAttributeValues;
@property(copy) NSMutableArray *mutableAttributeNames; // @synthesize mutableAttributeNames=_mutableAttributeNames;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)init;

@end

