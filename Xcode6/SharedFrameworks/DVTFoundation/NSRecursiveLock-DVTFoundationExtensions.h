

#import <Foundation/Foundation.h>

@interface NSRecursiveLock (DVTFoundationExtensions)
- (void)dvt_asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)dvt_performLockedBlock:(CDUnknownBlockType)arg1;
@end

