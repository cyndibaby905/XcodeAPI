

#import <DVTFoundation/DVTDeviceService.h>

@class DVTMutableOrderedDictionary;

@interface IDEGaugeDataProviderService : DVTDeviceService
{
    DVTMutableOrderedDictionary *_coordinatorsByPID;
    dispatch_queue_t _serialQueue;
    dispatch_source_t _timer;
    _Bool _suspended;
}

+ (id)observableAttributes;
+ (id)capability;
- (id)sampleAttributes:(id)arg1 forPIDs:(id)arg2;
- (void)stopSampling;
- (void)resumeSampling;
- (void)pauseSampling;
- (void)startSamplingAtTime:(double)arg1 withInterval:(double)arg2;
- (void)didStopSampling;
- (void)willResumeSampling;
- (void)didPauseSampling;
- (void)willStartSamplingAtTime:(double)arg1 withInterval:(double)arg2;
- (void)stopTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)startTimerAtTime:(double)arg1 withInterval:(double)arg2;
- (void)removeAssociatedQueryCoordinator:(id)arg1;
- (void)addAssociatedQueryCoordinator:(id)arg1;
- (void)performServiceQueueBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

