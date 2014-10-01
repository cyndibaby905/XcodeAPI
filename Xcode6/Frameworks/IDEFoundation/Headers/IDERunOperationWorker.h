

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTStackBacktrace, IDELaunchSession;

@protocol IDERunOperationWorkerDelegate;

@interface IDERunOperationWorker : NSObject <DVTInvalidation>
{
    NSString *_extensionIdentifier;
    IDELaunchSession *_launchSession;
    id <IDERunOperationWorkerDelegate> _runOperation;
    id <IDERunOperationWorkerTracker> _runnableTracker;
    DVTDispatchLock *_lock;
}

+ (void)initialize;
@property(retain) id <IDERunOperationWorkerTracker> runnableTracker; // @synthesize runnableTracker=_runnableTracker;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (void)terminate;
- (void)finishedWithError:(id)arg1;
- (void)start;
- (void)setRunOperation:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

