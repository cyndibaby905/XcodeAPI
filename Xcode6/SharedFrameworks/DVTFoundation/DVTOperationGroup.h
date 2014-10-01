

#import <DVTFoundation/DVTOperation.h>

@class DVTDispatchLock, DVTHashTable, DVTMapTable, NSArray, NSMutableArray, NSOperationQueue;

@interface DVTOperationGroup : DVTOperation
{
    DVTDispatchLock *_lock;
    NSOperationQueue *_queue;
    NSMutableArray *_suboperations;
    NSMutableArray *_suboperationSchedulers;
    DVTMapTable *_suboperationObservations;
    unsigned long long _groupState;
    DVTHashTable *_incompleteSuboperations;
    int _addedSuboperations;
    int _completedSuboperations;
}

+ (id)operationGroupWithSuboperations:(id)arg1;
@property(readonly, copy) NSArray *suboperations; // @synthesize suboperations=_suboperations;
- (NSString *)description;
- (void)cancel;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)enqueueSuboperations;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeSuboperation:(id)arg1;
- (void)addSuboperation:(id)arg1;
- (void)addSuboperations:(id)arg1;
- (void)addSuboperation:(id)arg1 withQueue:(id)arg2;
- (void)addSuboperations:(id)arg1 withQueue:(id)arg2;
- (void)_scheduleSuboperation:(id)arg1 onQueue:(id)arg2;
@property(readonly) BOOL suboperationsFinished;
@property(readonly) BOOL operationFinished;
@property BOOL suboperationsAreSerial;
- (void)_transitionToAllFinishedState;
- (void)_transitionToSuboperationsFinishedState;
- (void)_transitionToOperationFinishedState;
- (void)_transitionToExecutingState;
- (id)init;

@end

