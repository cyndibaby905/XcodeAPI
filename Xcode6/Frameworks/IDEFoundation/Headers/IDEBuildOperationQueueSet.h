

#import <Foundation/Foundation.h>

@class DVTDispatchLock, NSDate, NSOperationQueue, NSString;

@interface IDEBuildOperationQueueSet : NSObject
{
    NSString *_identifier;
    NSOperationQueue *_copyTaskQueue;
    unsigned long long _slidingMaxNumberOfConcurrentCompileTasks;
    BOOL _didReduceConcurrencyDueToResourcePressure;
    NSOperationQueue *_compileTaskQueue;
    NSOperationQueue *_linkTaskQueue;
    DVTDispatchLock *_updateConcurrencyLock;
    NSDate *_lastCheckedResourcePressure;
    NSDate *_lastIncreasedConcurrency;
    dispatch_queue_t _addOperationQueue;
}

+ (id)sharedBuildTaskQueueSet;
+ (unsigned long long)maxNumberOfConcurrentCompileTasks;
+ (void)setMaxNumberOfConcurrentCompileTasks:(unsigned long long)arg1;
+ (void)initialize;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (void)addLinkTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)addCopyTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)addCompileTaskOperation:(id)arg1 forCommand:(id)arg2;
- (void)changeMaximumOperationConcurrencyUsingThrottleFactor:(double)arg1;
- (void)resetOperationConcurrency;
- (void)updateOperationConcurrency;
- (id)initWithIdentifier:(id)arg1;

@end
