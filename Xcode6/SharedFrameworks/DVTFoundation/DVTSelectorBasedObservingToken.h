

#import <DVTFoundation/DVTObservingToken.h>

@class DVTWeakInterposer, NSString;

@interface DVTSelectorBasedObservingToken : DVTObservingToken
{
    DVTWeakInterposer *_target_dvtWeakInterposer;
    id _observedObject;
    NSString *_keyPath;
}

@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_primitiveCancelObservation;
- (NSString *)description;
- (id)initWithTarget:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3;
- (void)setTarget:(id)arg1;
- (id)target;

@end

