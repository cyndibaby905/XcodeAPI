

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/IDEExecutingOperationTrackable-Protocol.h>

@class DVTDispatchLock, DVTDynamicLogController, DVTMapTable, IDEActivityLogSection, IDEBuildOperationDescription, IDEBuildOperationQueueSet, IDEBuildOperationStatus, IDEBuildParameters, IDEBuildStatisticsSection, IDEEntityIdentifier, IDEExecutionEnvironment, IDEExecutionOperationTracker, IDEOverridingBuildProperties, IDERunDestination, IDESchemeActionResult, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@protocol DVTCancellationBlockCompletion;

@interface IDEBuildOperation : DVTOperation <IDEExecutingOperationTrackable>
{
    IDEBuildOperationDescription *_buildOperationDescription;
    int _purpose;
    int _buildCommand;
    NSArray *_buildables;
    IDEBuildParameters *_buildParameters;
    DVTMapTable *_buildParametersForBuildable;
    BOOL _parallelizeBuildables;
    BOOL _buildImplicitDependencies;
    BOOL _restorePersistedBuildResults;
    BOOL _dontActuallyRunCommands;
    unsigned long long _clangSessionTimestamp;
    int _state;
    int _result;
    IDEActivityLogSection *_buildLog;
    float _percentComplete;
    IDEBuildOperationStatus *_buildStatus;
    BOOL _isFinished;
    DVTDispatchLock *_operationLock;
    NSOperationQueue *_builderQueue;
    IDEBuildOperationQueueSet *_buildTaskQueueSet;
    DVTMapTable *_buildablesToBuilders;
    DVTMapTable *_buildableOperationManagers;
    unsigned long long _buildersBuilt;
    id <DVTCancellationBlockCompletion> _cancellationToken;
    NSMutableSet *_generatedFileInfo;
    NSMutableDictionary *_copiedFilePathsMap;
    NSMutableArray *_buildSetupErrorStrings;
    NSMutableArray *_buildSetupWarningStrings;
    NSMutableArray *_buildSetupNoticeStrings;
    IDEExecutionOperationTracker *_mainExecutionTracker;
    IDEExecutionEnvironment *_executionEnvironment;
    IDEEntityIdentifier *_schemeIdentifier;
    IDESchemeActionResult *_schemeActionResult;
    NSDate *_startTime;
    NSDate *_stopTime;
    IDEBuildStatisticsSection *_buildStatisticsSection;
    DVTDynamicLogController *_builderTimingDataLogController;
}

+ (CDUnknownBlockType)buildStatisticsEmissionSummaryBlock;
+ (id)buildParametersForPurpose:(int)arg1 configurationName:(id)arg2 workspaceArena:(id)arg3 overridingProperties:(id)arg4 activeRunDestination:(id)arg5 activeArchitecture:(id)arg6;
+ (id)buildParametersForPurpose:(int)arg1 schemeCommand:(id)arg2 configurationName:(id)arg3 workspaceArena:(id)arg4 overridingProperties:(id)arg5 activeRunDestination:(id)arg6 activeArchitecture:(id)arg7;
+ (long long)defaultQualityOfServiceClass;
+ (void)setDefaultBuildStatisticsSectionParent:(id)arg1;
+ (void)initialize;
@property(retain) DVTDynamicLogController *builderTimingDataLogController; // @synthesize builderTimingDataLogController=_builderTimingDataLogController;
@property unsigned long long buildersBuilt; // @synthesize buildersBuilt=_buildersBuilt;
@property(readonly) DVTMapTable *buildablesToBuilders; // @synthesize buildablesToBuilders=_buildablesToBuilders;
@property(readonly) IDEBuildOperationQueueSet *buildTaskQueueSet; // @synthesize buildTaskQueueSet=_buildTaskQueueSet;
@property(readonly) NSOperationQueue *builderQueue; // @synthesize builderQueue=_builderQueue;
@property(readonly) BOOL buildImplicitDependencies; // @synthesize buildImplicitDependencies=_buildImplicitDependencies;
@property(retain) IDEBuildStatisticsSection *buildStatisticsSection; // @synthesize buildStatisticsSection=_buildStatisticsSection;
@property(copy) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(copy) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) IDEBuildOperationStatus *buildStatus; // @synthesize buildStatus=_buildStatus;
@property float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly) int result; // @synthesize result=_result;
@property(readonly) int state; // @synthesize state=_state;
@property(retain, nonatomic) IDESchemeActionResult *schemeActionResult; // @synthesize schemeActionResult=_schemeActionResult;
@property(readonly, copy, nonatomic) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(readonly) IDEActivityLogSection *buildLog; // @synthesize buildLog=_buildLog;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(readonly) BOOL parallelizeBuildables; // @synthesize parallelizeBuildables=_parallelizeBuildables;
@property(readonly) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(readonly) NSArray *buildables; // @synthesize buildables=_buildables;
@property(readonly) int buildCommand; // @synthesize buildCommand=_buildCommand;
@property(readonly) IDEBuildOperationDescription *buildOperationDescription; // @synthesize buildOperationDescription=_buildOperationDescription;
@property(readonly) int purpose; // @synthesize purpose=_purpose;
@property(readonly, copy) NSString *description;
- (void)registerTracker:(id)arg1;
- (void)_postDistributedProgressNotification;
- (void)stopWithResultCode:(int)arg1;
- (void)lastBuilderDidFinish;
- (void)_cancelAllBuilders;
- (void)cancel;
- (void)start;
- (void)addOperationsForBuildables;
- (id)_addOperationForBuildableIfNeeded:(id)arg1;
- (id)_addOperationForBuildableIfNeeded:(id)arg1 recursionDetectionArray:(id)arg2;
- (void)setupCallbackBlocksOnNewBuilder:(id)arg1;
- (void)_updateBuildStatusWithStateDescription:(id)arg1 fileProgressString:(id)arg2;
- (void)_takeMemorySnapshotsWithLog:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)changeMaximumOperationConcurrencyUsingThrottleFactor:(double)arg1;
- (id)copiedFilePathsMap;
- (void)addCopiedFilePathsFromDictionary:(id)arg1;
- (void)addBuildSetupNoticeString:(id)arg1;
- (void)addBuildSetupWarningString:(id)arg1;
- (void)addBuildSetupErrorString:(id)arg1;
- (void)addGeneratedFileInfo:(id)arg1;
@property(readonly) double duration;
@property(retain) NSString *localizedStateDescription;
@property(readonly, copy) NSString *activeArchitecture;
@property(readonly) IDERunDestination *activeRunDestination;
@property(readonly) IDEOverridingBuildProperties *overridingProperties;
@property(readonly) NSString *configurationName;
- (id)_buildParametersForBuildable:(id)arg1;
- (void)setBuildParameters:(id)arg1 forBuildable:(id)arg2;
- (id)harvestedInfoForBuildable:(id)arg1;
- (void)dealloc;
- (id)initWithBuildOperationDescription:(id)arg1 purpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 configurationName:(id)arg5 buildables:(id)arg6 buildLog:(id)arg7 executionEnvironment:(id)arg8 overridingProperties:(id)arg9 activeRunDestination:(id)arg10 activeArchitecture:(id)arg11 parallelizeBuildables:(BOOL)arg12 dontActuallyRunCommands:(BOOL)arg13 buildImplicitDependencies:(BOOL)arg14 restorePersistedBuildResults:(BOOL)arg15 schemeIdentifier:(id)arg16 schemeActionRecord:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

