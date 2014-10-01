

#import <DVTFoundation/DVTObservingBlockToken.h>

@class NSArray;

@interface DVTArrayObservingBlockToken : DVTObservingBlockToken
{
    NSArray *_observedArray;
}

- (void)_tearDownObserving;
- (void)_setupObservingWithOptions:(unsigned long long)arg1;

@end

