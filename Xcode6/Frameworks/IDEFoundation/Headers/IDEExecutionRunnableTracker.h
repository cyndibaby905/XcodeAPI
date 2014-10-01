

#import <IDEFoundation/IDEExecutionTracker.h>

#import <IDEFoundation/IDERunOperationWorkerTracker-Protocol.h>

@class IDERunOperationWorker, NSString;

@interface IDEExecutionRunnableTracker : IDEExecutionTracker <IDERunOperationWorkerTracker>
{
    IDERunOperationWorker *_worker;
    BOOL _finishedRunning;
}

- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)cancel;
- (BOOL)isFinished;
- (id)initWithWorker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

