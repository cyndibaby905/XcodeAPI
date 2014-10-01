

#import <DVTFoundation/DVTPointerArray.h>

__attribute__((visibility("hidden")))
@interface DVTConcretePointerArray : DVTPointerArray
{
    struct DVTSlice slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
    BOOL needsCompaction;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removePointer:(id)arg1;
- (unsigned long long)indexOfPointer:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)compact;
- (void)_markNeedsCompaction;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(id)arg2;
- (void)insertPointer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(id)arg1;
- (id)pointerAtIndex:(unsigned long long)arg1;
- (void)arrayGrow:(unsigned long long)arg1;
- (id)pointerFunctions;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithPointerFunctions:(id)arg1;
- (id)initWithOptions:(int)arg1;
- (void)_initBlock;
- (id)init;

@end

