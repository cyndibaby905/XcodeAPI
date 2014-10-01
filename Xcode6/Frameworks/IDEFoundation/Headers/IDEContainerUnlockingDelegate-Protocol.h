

@class IDEContainer, IDEWorkspace, NSOperationQueue, NSSet;

@protocol IDEContainerUnlockingDelegate
- (void)container:(IDEContainer *)arg1 attemptToUnlockItems:(NSSet *)arg2 workspace:(IDEWorkspace *)arg3 completionQueue:(NSOperationQueue *)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
@end

