

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class NSString;

@interface DVTBloomFilter : NSObject <DVTPropertyListEncoding>
{
    CDStruct_d703e233 _specification;
    struct {
        char *bytes;
        unsigned long long byteCount;
    } _bitVector;
    CDUnknownBlockType _hashProvider;
}

@property(copy) CDUnknownBlockType hashProvider; // @synthesize hashProvider=_hashProvider;
- (long long)indexSize;
@property(readonly) NSString *usageDescription;
- (BOOL)mightContainKey:(const CDStruct_f444e920 *)arg1;
- (void)addKey:(const CDStruct_f444e920 *)arg1;
- (void)dealloc;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithSpecification:(CDStruct_d703e233)arg1 hashProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

