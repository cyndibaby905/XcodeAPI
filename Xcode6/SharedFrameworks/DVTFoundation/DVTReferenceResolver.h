

#import <Foundation/Foundation.h>

@protocol DVTReferenceResolverClient;

@interface DVTReferenceResolver : NSObject
{
    NSMutableArray *_strategies;
    id <DVTReferenceResolverClient> _client;
}

+ (id)backgroundResolutionQueue;
+ (void)initialize;
@property(retain) id <DVTReferenceResolverClient> client; // @synthesize client=_client;
- (NSString *)description;
- (id)configureWithPersistentRepresentationsOfInput:(id)arg1;
- (id)persistentRepresentationsOfInput:(id)arg1;
- (id)resolveInput:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *displayName;
- (void)replaceStrategiesAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)removeStrategiesAtIndexes:(id)arg1;
- (void)insertStrategies:(id)arg1 atIndex:(id)arg2;
- (void)replaceObjectInStrategiesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromStrategiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inStrategiesAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *strategies; // @dynamic strategies;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableStrategies; // @dynamic mutableStrategies;

@end

