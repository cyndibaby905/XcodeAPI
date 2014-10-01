

#import <Foundation/Foundation.h>

@interface NSObject (DVTNSRunLoopAdditions)
- (void)dvt_performOnThread:(id)arg1 waitUntilDone:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_dvt_performBlockAfterDelay:(CDUnknownBlockType)arg1;
- (id)dvt_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_performAfterDelay:(double)arg1 inModes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end

