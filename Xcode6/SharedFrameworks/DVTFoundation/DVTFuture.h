

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>
#import <DVTFoundation/DVTPromise-Protocol.h>

@class DVTDispatchLock, DVTStackBacktrace;

@interface DVTFuture : NSObject <DVTPromise, DVTCancellable>

+ (id)futureWithOperation:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)runOperation:(id)arg1;
+ (id)trackOperation:(id)arg1;
- (void)trackFuture:(id)arg1;
- (void)trackFuture:(id)arg1 progress:(float)arg2 cancel:(BOOL)arg3 result:(BOOL)arg4 error:(BOOL)arg5;
- (void)updateProgressFromReporters;
- (void)failWithError:(id)arg1 afterTimeout:(double)arg2;
- (void)succeedWithResult:(id)arg1 afterTimeout:(double)arg2;
- (void)cancelAfterTimeout:(double)arg1;
- (void)_setState:(long long)arg1 result:(id)arg2 error:(id)arg3 afterTimeout:(double)arg4;
- (void)succeedWithResult:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)setState:(long long)arg1 result:(id)arg2 error:(id)arg3;
- (CDUnknownBlockType)_internalSetState:(long long)arg1 result:(id)arg2 error:(id)arg3;
- (id)future;
- (void)setProgress:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)observeFinishWithDispatchGroup:(id)arg1;
- (void)observeSuccess:(CDUnknownBlockType)arg1;
- (void)observeFailure:(CDUnknownBlockType)arg1;
- (void)observeCancellation:(CDUnknownBlockType)arg1;
- (void)observeFinishOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)observeFinish:(CDUnknownBlockType)arg1;
- (void)observeProgress:(CDUnknownBlockType)arg1;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (long long)waitUntilFinished;
- (id)result;
- (id)error;
- (void)_signalFinished;
- (void)_waitUntilFinished;
- (void)dealloc;
- (id)initWithResult:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)then:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

