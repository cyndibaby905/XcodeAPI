

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTObservingToken, NSError, NSMutableArray;

@interface DVTOperation : NSOperation
{
    CDUnknownBlockType _block;
    NSError *_error;
    DVTDispatchLock *_cancellationRegistrationLock;
    DVTDispatchLock *_cancellationBlockLock;
    NSMutableArray *_cancellationBlockTokens;
    DVTDispatchLock *_finishingLock;
    NSMutableArray *_finishingTokens;
    BOOL _preventFinish;
    DVTObservingToken *_isFinishedObserverToken;
    DVTObservingToken *_isExecutingObserverToken;
}

+ (void)_trackStateChange:(id)arg1 ofOperation:(id)arg2 forKeyPath:(id)arg3;
+ (id)unfinishedOperations;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
@property BOOL preventFinish; // @synthesize preventFinish=_preventFinish;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void)trackFuture:(id)arg1;
- (void)trackFuture:(id)arg1 cancel:(BOOL)arg2 error:(BOOL)arg3;
- (id)stateString;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)allowFinishForToken:(id)arg1;
- (id)disallowFinishWithReason:(id)arg1;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)unregisterCancellationBlockForToken:(id)arg1;
- (id)registerCancellationBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (NSString *)description;
- (void)dealloc;
- (id)init;

@end

