

#import <IDEFoundation/IDERunOperationWorker.h>

#import <IDEFoundation/IDERunOperationWorkerDelegate-Protocol.h>
#import <IDEFoundation/IDERunOperationWorkerTracker-Protocol.h>

@class NSArray, NSString;

@interface IDERunOperationWorkerGroup : IDERunOperationWorker <IDERunOperationWorkerDelegate, IDERunOperationWorkerTracker>
{
    NSArray *_subworkers;
    unsigned long long _finishedSubworkers;
    BOOL _shouldStartNextWorker;
    unsigned long long _currentWorkerIndex;
}

- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (void)allSubworkersDidFinishWithError:(id)arg1;
- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)workerDidComplete:(id)arg1 withError:(id)arg2;
- (void)terminate;
- (void)start;
- (void)_startNextWorker;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;
- (id)initWithWorkers:(id)arg1 launchSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

