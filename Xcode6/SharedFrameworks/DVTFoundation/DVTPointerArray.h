

#import <Foundation/Foundation.h>

@interface DVTPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithOptions:(int)arg1;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithStrongObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)compact;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(id)arg2;
- (void)insertPointer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(id)arg1;
- (id)pointerAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)pointerFunctions;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (id)initWithOptions:(int)arg1;
- (id)init;
- (void)getPointers:(id *)arg1;
- (void)getPointers:(id *)arg1 range:(NSRange)arg2;
- (unsigned long long)indexOfPointerIdenticalTo:(id)arg1;
- (id)allObjects;
- (id)mutableArray;

@end

