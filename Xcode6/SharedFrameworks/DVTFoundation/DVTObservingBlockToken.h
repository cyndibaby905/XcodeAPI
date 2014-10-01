

#import <DVTFoundation/DVTObservingToken.h>

@class NSString;

@interface DVTObservingBlockToken : DVTObservingToken
{
    id _owner;
    id _observedObject;
    CDUnknownBlockType _handlerBlock;
    NSString *_keyPath;
}

@property(retain) id owner; // @synthesize owner=_owner;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setHandlerBlock:(CDUnknownBlockType)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3;
- (void)_tearDownObserving;
- (void)_setupObservingWithOptions:(unsigned long long)arg1;
- (NSString *)description;
- (void)_primitiveCancelObservation;
- (void)cancel;
- (id)initWithObservedObject:(id)arg1 owner:(id)arg2;

@end

