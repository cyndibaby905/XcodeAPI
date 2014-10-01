

#import <DVTFoundation/DVTWeakInterposer.h>

@class DVTStackBacktrace, _DVTWeakInterposerHelper;

@interface DVTWeakInterposer_ProxyHelperReference : DVTWeakInterposer
{
    _DVTWeakInterposerHelper *_helper;
    DVTStackBacktrace *_representedObjectDeallocatedStackBacktrace;
}

- (id)representedObject;
- (void)dealloc;
@property _DVTWeakInterposerHelper *helper; // @synthesize helper=_helper;
- (id)representedObjectDeallocatedStackBacktrace;

@end

