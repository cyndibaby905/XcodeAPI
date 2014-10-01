

#import <Foundation/Foundation.h>

@interface NSThread (DVTObjectAllocationTracking)
+ (id)countedSetOfObjectAllocationDescriptionsOnCurrentThreadWhileInvokingBlock:(CDUnknownBlockType)arg1;
+ (void)stopTrackingObjectAllocationsOnCurrentThread;
+ (BOOL)isTrackingObjectAllocationsOnCurrentThread;
+ (void)startTrackingObjectAllocationsOnCurrentThreadUsingBlock:(CDUnknownBlockType)arg1;
@end

