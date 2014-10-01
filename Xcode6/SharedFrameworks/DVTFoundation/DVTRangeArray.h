

#import <Foundation/Foundation.h>

@interface DVTRangeArray : NSArray
{
    unsigned long long _count;
    NSRange *_ranges;
}

+ (void)initialize;
- (id)normalizedRangeArray;
- (unsigned long long)indexOfRangeContainingOrFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeContainingOrPreceding:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangePreceding:(unsigned long long)arg1;
- (NSRange)lastRange;
- (NSRange)firstRange;
- (unsigned long long)indexOfRange:(NSRange)arg1;
- (NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)init;
- (id)initWithRange:(NSRange)arg1;
- (id)initWithRanges:(const NSRange *)arg1 count:(unsigned long long)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end

