

#import <Foundation/Foundation.h>

@class NSArray;

@interface DVTCopyOnWriteMutableArray : NSMutableArray
{
    NSMutableArray *_backingArray;
    BOOL _hasHandedOutArray;
}

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)_willMutate;
@property(readonly) NSArray *copiedArray;
- (id)init;

@end

