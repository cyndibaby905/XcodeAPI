

#import <Foundation/Foundation.h>

@class NSMutableArray;

@interface DVTExtraXMLArchiveData : NSObject
{
    NSMutableArray *_mutableAttributes;
    NSMutableArray *_mutableElements;
}

@property(copy) NSMutableArray *mutableElements; // @synthesize mutableElements=_mutableElements;
@property(copy) NSMutableArray *mutableAttributes; // @synthesize mutableAttributes=_mutableAttributes;
- (NSString *)description;
- (id)init;

@end

