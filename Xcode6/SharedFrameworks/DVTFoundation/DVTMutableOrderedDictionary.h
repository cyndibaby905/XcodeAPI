

#import <Foundation/Foundation.h>

@class DVTMapTable, DVTMutableOrderedSet;

@interface DVTMutableOrderedDictionary : NSMutableDictionary
{
    DVTMutableOrderedSet *set;
    DVTMapTable *backingMapTable;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (id)lastValue;
- (id)lastKey;
- (id)firstValue;
- (id)firstKey;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)_DVTMutableDictionary_commonInit;

@end

