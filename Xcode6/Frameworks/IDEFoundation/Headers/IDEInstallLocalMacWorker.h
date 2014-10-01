

#import <IDEFoundation/IDERunOperationWorker.h>

@interface IDEInstallLocalMacWorker : IDERunOperationWorker
{
}

- (void)terminate;
- (void)start;
- (void)_setFinishedRunningWithError:(id)arg1;

@end

