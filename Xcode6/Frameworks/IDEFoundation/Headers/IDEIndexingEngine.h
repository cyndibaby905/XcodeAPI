

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTPerformanceMetric, IDEIndex, IDEIndexImportSession;

@interface IDEIndexingEngine : NSObject <NSCopying>
{
    IDEIndex *_index;
    dispatch_queue_t _engine_queue;
    NSMutableArray *_waitingLoadJobs;
    NSMutableArray *_waitingFileJobs;
    NSMutableSet *_waitingDeferredJobs;
    NSMutableSet *_waitingHeldJobs;
    NSMutableDictionary *_registeredIndexables;
    NSMutableDictionary *_productInfos;
    NSMutableDictionary *_rootPaths;
    NSMutableSet *_registeredFiles;
    NSMutableDictionary *_missingFiles;
    NSMutableDictionary *_priorityFiles;
    IDEIndexImportSession *_session;
    id _prebuildNotificationToken;
    double _timeIndexablesChanged;
    double _timeFilesChanged;
    double _timeFileJobsChanged;
    double _timeJobsEnded;
    int _suspended;
    int _nScheduledJobs;
    int _nWaitingModuleJobs;
    int _nScheduledModuleJobs;
    BOOL _wroteWorkspaceHeaderMap;
    BOOL _wroteAuxiliaryFiles;
    BOOL _purgedStaleData;
    BOOL _isActive;
    BOOL _isIndexing;
    BOOL _notified;
    BOOL _mightNotResume;
    BOOL _waitingForSessionToEnd;
    BOOL _aborted;
    BOOL _registeredFilesAdded;
    BOOL _waitingForMoreFiles;
    BOOL _waitingForMoreIndexables;
    BOOL _waitingForMoreFileJobs;
    BOOL _waitingToStartDeferredJob;
    BOOL _doingDeferredJobs;
    BOOL _dontDeferJobs;
    BOOL _lastLogWasDeferred;
    BOOL _initializedTextIndex;
    CDUnknownBlockType _abortCallback;
    DVTPerformanceMetric *_indexingMetric;
    long long _nCompleted;
    double _throttleFactor;
    NSDictionary *_notifiedDeferred;
    NSMutableArray *_filesReadyBlocks;
    double _autoQueryProgress;
}

+ (void)runDeferredJob:(id)arg1;
+ (void)runFileJob:(id)arg1;
+ (void)runLoadJob:(id)arg1;
+ (void)setClangOnly:(BOOL)arg1;
+ (id)auxDataSourceVersion;
+ (id)auxDataSource;
+ (void)initialize;
@property(nonatomic) double throttleFactor; // @synthesize throttleFactor=_throttleFactor;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (void)reset;
- (void)abort:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasHeldJobs;
@property(readonly, nonatomic) BOOL isLoading;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL isQuiescent;
- (void)_endActivity;
- (void)_endFileActivity;
- (void)_reportProgress;
- (void)_startFileActivity;
- (void)_startActivity;
- (void)_purgeStaleData;
- (void)_writeAuxiliaryFiles;
- (void)_writeWorkspaceHeaderMap;
- (void)_setRootPaths:(id)arg1 forIndexable:(id)arg2;
- (void)didForgetFiles:(id)arg1;
- (void)didEndImportSession:(id)arg1;
- (void)_scheduleJobs;
- (void)didCancelJob:(id)arg1;
- (void)didCompleteJob:(id)arg1;
- (BOOL)shouldRunJob:(id)arg1;
- (void)_deferJob:(id)arg1;
- (void)_cancelJobs;
- (void)_scheduleJob:(id)arg1;
- (void)prunePriorityFiles;
- (void)addPriorityFile:(id)arg1;
- (void)reportAutoQueryProgress:(double)arg1;
- (void)retryHeldJobs;
- (void)dontDeferJobForFile:(id)arg1 indexable:(id)arg2;
- (void)dontDeferJobs;
- (void)indexFile:(id)arg1 indexable:(id)arg2 dirtyFile:(id)arg3 settings:(id)arg4;
- (void)indexFile:(id)arg1 indexable:(id)arg2 dirtyFile:(id)arg3;
- (void)stopIndexing;
- (void)resumeIndexing;
- (void)suspendIndexing;
- (void)suspendIndexing:(BOOL)arg1;
- (void)clearHotFiles;
- (void)registerHotFile:(id)arg1;
- (void)doWhenFilesReady:(CDUnknownBlockType)arg1;
- (void)willRegisterMoreFiles:(BOOL)arg1;
- (void)unregisterFile:(id)arg1;
- (void)registerFile:(id)arg1;
- (void)unregisterIndexable:(id)arg1;
- (void)buildSettingsChanged:(id)arg1;
- (void)indexableChanged:(id)arg1 addOnly:(BOOL)arg2;
- (void)registerIndexable:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndex:(id)arg1;

@end

