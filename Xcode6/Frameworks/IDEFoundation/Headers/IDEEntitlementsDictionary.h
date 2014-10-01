

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NSSet;

@interface IDEEntitlementsDictionary : NSObject <NSCopying>
{
    _Bool _frozen;
    id _storage;
    IDEEntitlementsDictionary *_parent;
}

+ (id)whiteoutMarker;
@property(readonly) IDEEntitlementsDictionary *parent; // @synthesize parent=_parent;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (void)setDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
@property(readonly, copy) NSSet *allValues;
@property(readonly, copy) NSSet *allKeys;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)deltaRepresentation;
- (id)flatRepresentation;
- (id)mutableChildByApplyingDelta:(id)arg1;
- (void)applyDelta:(id)arg1;
- (id)mutableChild;
- (void)freeze;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

