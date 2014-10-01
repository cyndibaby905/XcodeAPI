

#import <Foundation/Foundation.h>

@interface DVTFilePathEventWatcher : NSObject
{
    struct __FSEventStream *_streamRef;
    dispatch_queue_t _watcherQueue;
    double _latency;
    unsigned long long _lastEventHandled;
    NSMutableSet *_watchedFilePaths;
    NSMapTable *_watchedFileMap;
}

+ (id)sharedFilePathEventWatcher;
+ (void)initialize;
- (void)handleEventsForStream:(struct __FSEventStream *)arg1 numEvents:(unsigned long long)arg2 eventPaths:(const char **)arg3 eventFlags:(const unsigned int *)arg4 eventIds:(const unsigned long long *)arg5;
- (void)stop;
- (void)run;
- (void)_resetStream;
- (void)_teardownStream;
- (void)_setupStream;
- (void)watchFilePath:(id)arg1;
- (BOOL)_shouldWatchWholeVolumes;
@property double eventLatency;
- (void)dealloc;
- (id)init;
- (id)_initPrivate;

@end

