

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEContainerUnlockingDelegate-Protocol.h>

@interface IDEUnitTestContainerUnlockingDelegate : NSObject <IDEContainerUnlockingDelegate>
{
}

- (void)container:(id)arg1 attemptToUnlockItems:(id)arg2 workspace:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

