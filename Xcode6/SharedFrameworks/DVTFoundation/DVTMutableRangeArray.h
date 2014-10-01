

#import <Foundation/Foundation.h>

@interface DVTMutableRangeArray : NSMutableArray
{
    unsigned long long _count;
    unsigned long long _capacity;
    NSRange *_ranges;
}

+ (void)initialize;
- (void)normalize;
- (void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(NSRange)arg2;
- (void)removeAllRanges;
- (void)removeRangesAtIndexes:(id)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)addRange:(NSRange)arg1;
- (void)setRange:(NSRange)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfRangeContainingOrFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeContainingOrPreceding:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangePreceding:(unsigned long long)arg1;
- (NSRange)lastRange;
- (NSRange)firstRange;
- (unsigned long long)indexOfRange:(NSRange)arg1;
- (NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)init;
- (id)initWithRanges:(const NSRange *)arg1 count:(unsigned long long)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

