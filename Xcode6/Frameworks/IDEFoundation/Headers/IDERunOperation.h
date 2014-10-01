

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/IDEExecutingOperationTrackable-Protocol.h>
#import <IDEFoundation/IDERunOperationWorkerDelegate-Protocol.h>

@class IDELaunchSession, IDERunOperationWorker, NSMutableArray, NSString;

@interface IDERunOperation : DVTOperation <IDEExecutingOperationTrackable, IDERunOperationWorkerDelegate>
{
    NSMutableArray *_trackers;
    NSMutableArray *_trackerObserverTokens;
    id <DVTCancellationBlockCompletion> _cancellationToken;
    id _finishToken;
    BOOL _workaroundIsCancelled;
    IDERunOperationWorker *_worker;
}

+ (id)keyPathsForValuesAffectingLaunchSession;
+ (id)keyPathsForValuesAffectingIsCancelled;
@property(retain) IDERunOperationWorker *worker; // @synthesize worker=_worker;
@property BOOL workaroundIsCancelled; // @synthesize workaroundIsCancelled=_workaroundIsCancelled;
@property(retain) NSMutableArray *trackers; // @synthesize trackers=_trackers;
- (void)registerTracker:(id)arg1;
- (void)_runningTrackerFinished:(id)arg1;
- (void)runningDidFinish;
@property(readonly) IDELaunchSession *launchSession;
- (void)cancel;
- (BOOL)isCancelled;
- (void)main;
- (void)workerDidComplete:(id)arg1 withError:(id)arg2;
- (id)initWithWorker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

