

#import <Foundation/Foundation.h>

@interface DVTHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)hashTableWithOptions:(int)arg1;
+ (id)hashTableWithWeakObjects;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)setRepresentation;
- (id)mutableSet;
- (void)minusHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (BOOL)isSubsetOfHashTable:(id)arg1;
- (BOOL)isEqualToHashTable:(id)arg1;
- (BOOL)intersectsHashTable:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)anyObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
- (id)pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)getKeys:(void **)arg1 count:(unsigned long long *)arg2;
- (void)removeAllItems;
- (id)copy;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void *)getItem:(const void *)arg1;
- (unsigned long long)weakCount;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)objectEnumerator;
- (NSString *)description;
- (id)init;
- (id)initWithOptions:(int)arg1 capacity:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;

@end

