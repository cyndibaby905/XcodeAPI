

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class DVTBloomFilter, NSString;

@interface DVTDocumentFragmentFilter : NSObject <DVTPropertyListEncoding>
{
    DVTBloomFilter *_filter;
    CDStruct_92de0e9e _specification;
}

+ (id)normalizedFoldedString:(id)arg1;
@property(readonly) NSString *usageDescription;
- (long long)indexSize;
- (BOOL)mightContainFragment:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithDocument:(id)arg1 filterSpecification:(CDStruct_92de0e9e)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

