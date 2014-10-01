

#import <Foundation/Foundation.h>

@interface NSObject (DVTObjectDeallocationMonitorAdditions)
- (void)dvt_logReferenceTree;
@property(setter=dvt_setLeakingFatal:) BOOL dvt_isLeakingFatal;
- (void)dvt_shouldDeallocate;
@end

