

#import <Foundation/Foundation.h>

@interface DVTEncodableIndexEntry : NSObject
{
    id <DVTPropertyListEncoding> _indexedItem;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id <DVTPropertyListEncoding> indexedItem; // @synthesize indexedItem=_indexedItem;
- (id)initWithIndexedItem:(id)arg1 timestamp:(double)arg2;

@end

