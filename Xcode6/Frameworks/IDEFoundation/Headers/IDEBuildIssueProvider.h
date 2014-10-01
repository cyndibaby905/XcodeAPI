

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTMapTable, DVTObservingToken, IDEBuildOperation, IDELogStore, NSMutableArray, NSMutableSet;

@interface IDEBuildIssueProvider : IDEIssueProvider
{
    DVTMapTable *_blueprintToLatestLogSectionObserverMap;
    DVTMapTable *_buildLogToLogNotificationObserverMap;
    DVTMapTable *_blueprintToLatestBuildLogSectionMap;
    DVTMapTable *_blueprintToLogRecordsMap;
    DVTMapTable *_blueprintToIssuesForFileMap;
    DVTMapTable *_blueprintToAuxiliaryFilesForFileMap;
    DVTMapTable *_haveRemovedIssuesForFileInBlueprintMap;
    DVTObservingToken *_activeBuildOperationStateObserverToken;
    IDEBuildOperation *_activeBuildOperation;
    NSMutableSet *_pendingLogSections;
    IDELogStore *_logStore;
    BOOL _changeNotificationPending;
    NSMutableArray *_pendingChanges;
}

+ (int)providerType;
+ (id)_backgroundScanningQueue;
+ (id)_backgroundLoadingQueue;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_buildLogDidUpdateItems:(id)arg1 blueprint:(id)arg2;
- (void)_scanIssuesInLog:(id)arg1 forBlueprint:(id)arg2 intoArray:(id)arg3 usingSeenMessages:(id)arg4 withFileToIssuesMap:(id)arg5 fileToAuxFilesMap:(id)arg6;
- (void)_addIssueForMessage:(id)arg1 blueprint:(id)arg2 intoArray:(id)arg3 usingSeenMessages:(id)arg4 withFileToIssuesMap:(id)arg5 fileToAuxFilesMap:(id)arg6 wasFetchedFromCache:(BOOL)arg7;
- (void)startProviderSession;
- (void)_postBuildIssueChange:(id)arg1;
- (void)_asyncPostBuildIssueChanges:(CDUnknownBlockType)arg1;
- (void)_observeLogSection:(id)arg1 forBlueprint:(id)arg2 loadedFromLogStore:(BOOL)arg3;
- (void)_currentBuildOperationDidChange;
- (void)_blueprintsDidChange;
- (void)_reactToCleanBuildFolder;
- (void)_forgetBlueprint:(id)arg1;
- (void)_latestBuildLogDidChange;
- (void)_workspaceFinishedLoading;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (BOOL)allowsExistingIssuesToBeCoalesced;
- (void)removeBlueprintFromIssuesCache:(id)arg1;
- (BOOL)shouldRemoveIssuesFromCacheForFile:(id)arg1 inBlueprint:(id)arg2;
- (id)removeIssuesFromCacheForFile:(id)arg1 inBlueprint:(id)arg2;
- (void)addAuxiliaryFiles:(id)arg1 toCacheForFile:(id)arg2 inBlueprint:(id)arg3;
- (void)addIssues:(id)arg1 toCacheForFile:(id)arg2 inBlueprint:(id)arg3;
- (id)latestLogRecordForBlueprint:(id)arg1;
- (void)removeAllLogRecordsForBlueprint:(id)arg1;
- (void)addLogRecord:(id)arg1 forBlueprint:(id)arg2;
- (id)logRecordsForBlueprint:(id)arg1;

@end

