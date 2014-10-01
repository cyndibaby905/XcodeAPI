

#import <DVTFoundation/DVTOperation.h>

@class DVTDynamicLogController, DVTSystemStatisticsMeasurement, IDEActivityLogSection, IDEBuildOperationQueueSet, IDEBuildStatisticsSection, IDEBuildableSnapshot, IDEBuilderHarvestedInfo, IDESchemeActionResult, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEBuilder : DVTOperation
{
    int _buildCommand;
    IDEBuildableSnapshot *_snapshot;
    NSArray *_exclusiveSourceFiles;
    NSArray *_warningsToEmit;
    NSString *_uniqueIdentifier;
    int _result;
    IDEActivityLogSection *_activityLogSection;
    NSString *_localizedDescription;
    IDEBuildOperationQueueSet *_buildTaskQueueSet;
    BOOL _restorePersistedBuildResults;
    id <DVTCancellationBlockCompletion> _cancellationToken;
    NSMutableSet *_generatedFileInfo;
    NSMutableArray *_buildTaskStatistics;
    NSDictionary *_copiedFilePathsFromBuildOperation;
    NSDictionary *_copiedFilePathsFromBuildableProduct;
    DVTSystemStatisticsMeasurement *_initialSystemStats;
    CDUnknownBlockType _activityLogSectionDidChangeBlock;
    CDUnknownBlockType _resultDidChangeBlock;
    CDUnknownBlockType _didStartExecutingBlock;
    CDUnknownBlockType _didFinishExecutingBlock;
    CDUnknownBlockType _updateBuildStatusBlock;
    BOOL _dontActuallyRunCommands;
    DVTDynamicLogController *_builderTimingDataLogController;
    IDEBuildStatisticsSection *_buildStatisticsSection;
    IDEBuilderHarvestedInfo *_harvestedInfo;
    IDESchemeActionResult *_schemeBuildResult;
}

+ (void)initialize;
@property(retain) IDESchemeActionResult *schemeBuildResult; // @synthesize schemeBuildResult=_schemeBuildResult;
@property(readonly) IDEBuilderHarvestedInfo *harvestedInfo; // @synthesize harvestedInfo=_harvestedInfo;
@property(retain) IDEBuildStatisticsSection *buildStatisticsSection; // @synthesize buildStatisticsSection=_buildStatisticsSection;
@property(retain) DVTDynamicLogController *builderTimingDataLogController; // @synthesize builderTimingDataLogController=_builderTimingDataLogController;
@property BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(readonly, copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSDictionary *copiedFilePathsFromBuildableProduct; // @synthesize copiedFilePathsFromBuildableProduct=_copiedFilePathsFromBuildableProduct;
@property(copy) NSDictionary *copiedFilePathsFromBuildOperation; // @synthesize copiedFilePathsFromBuildOperation=_copiedFilePathsFromBuildOperation;
@property(copy) CDUnknownBlockType updateBuildStatus; // @synthesize updateBuildStatus=_updateBuildStatusBlock;
@property(copy) CDUnknownBlockType didFinishExecuting; // @synthesize didFinishExecuting=_didFinishExecutingBlock;
@property(copy) CDUnknownBlockType didStartExecuting; // @synthesize didStartExecuting=_didStartExecutingBlock;
@property(copy) CDUnknownBlockType resultDidChange; // @synthesize resultDidChange=_resultDidChangeBlock;
@property(copy) CDUnknownBlockType activityLogSectionDidChange; // @synthesize activityLogSectionDidChange=_activityLogSectionDidChangeBlock;
@property(readonly) NSSet *generatedFileInfo; // @synthesize generatedFileInfo=_generatedFileInfo;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) NSArray *exclusiveSourceFiles; // @synthesize exclusiveSourceFiles=_exclusiveSourceFiles;
@property(readonly) IDEBuildOperationQueueSet *buildTaskQueueSet; // @synthesize buildTaskQueueSet=_buildTaskQueueSet;
@property(copy) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(nonatomic) int result; // @synthesize result=_result;
@property(copy) NSArray *warningsToEmit; // @synthesize warningsToEmit=_warningsToEmit;
@property(readonly) IDEBuildableSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly) int buildCommand; // @synthesize buildCommand=_buildCommand;
- (NSString *)description;
- (void)_logBuilderTimingDataIfNecessary;
- (void)addGeneratedFileInfo:(id)arg1;
- (void)main;
- (void)prepareForBuilding;
- (id)init;
- (id)initForBuildCommand:(int)arg1 withBuildableSnapshot:(id)arg2 buildTaskQueueSet:(id)arg3 buildOnlyTheseFiles:(id)arg4 restorePersistedBuildResults:(BOOL)arg5;

@end

