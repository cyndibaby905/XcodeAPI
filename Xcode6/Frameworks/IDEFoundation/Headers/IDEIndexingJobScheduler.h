

#import <Foundation/Foundation.h>

@interface IDEIndexingJobScheduler : NSObject
{
    dispatch_queue_t _control_queue;
    long long _width;
    long long _lastThrottledWidth;
    BOOL _onBatteryPower;
    NSString *_buildCommandRunning;
    double _timeBatteryChecked;
    double _timeBuildCommandsChecked;
    NSMutableArray *_engines;
    NSMutableDictionary *_hotFilesByEngine;
    NSMutableDictionary *_hotFileIndicesByEngine;
    NSMutableDictionary *_priorityIndicesByEngine;
    NSMutableDictionary *_waitingJobsByEngine;
    NSMutableArray *_runningJobs;
    id _buildNotifications[2];
    long long _nBuildOperations;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (void)_scheduleJobs;
- (long long)_throttledWidth;
- (long long)_adjustThrottledWidth:(long long)arg1;
- (void)_checkBuildCommands;
- (void)ping;
- (void)cancelJobsForEngine:(id)arg1;
- (void)scheduleJob:(id)arg1;
- (void)clearHotFilesForEngine:(id)arg1;
- (void)addHotFile:(id)arg1 forEngine:(id)arg2;
- (void)dealloc;
- (void)reportThrottledWidth:(CDUnknownBlockType)arg1 forEngine:(id)arg2;
- (id)init;

@end

