

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTFilePath, DVTMapTable, DVTNotificationToken, DVTObservingToken, DVTSourceControlWorkspace, DVTSourceControlWorkspaceBlueprint, DVTStackBacktrace, IDEContainerQuery, IDELogStore, IDESourceControlManager, IDESourceControlRequest, IDEWorkspace;

@interface IDESourceControlWorkspaceMonitor : NSObject <DVTInvalidation>
{
    IDESourceControlManager *_sourceControlManager;
    IDEWorkspace *_workspace;
    IDEContainerQuery *_query;
    NSMutableDictionary *_workspaceSCMInfo;
    NSMutableSet *_fileRefSet;
    NSMutableSet *_workspaceFolders;
    dispatch_queue_t _scanningQueue;
    BOOL _resumedScanningQueue;
    NSDate *_startDate;
    NSMutableSet *_repositoriesWarnedAreNewer;
    NSMutableSet *_workingCopies;
    NSMutableArray *_workingCopiesNeedingUpgrade;
    NSMutableArray *_workingTrees;
    DVTDispatchLock *_workingTreesLock;
    NSMutableSet *_workingTreeBranchTokens;
    DVTDispatchLock *_workingTreeBranchTokensLock;
    DVTMapTable *_workspaceRootForWorkingTreeMapTable;
    DVTDispatchLock *_workspaceRootMapTableLock;
    IDELogStore *_logStore;
    DVTObservingToken *_containerQueryMatchesObserver;
    NSOperationQueue *_scmFileEventQueue;
    dispatch_queue_t _scmQueue;
    dispatch_group_t _scmGroup;
    IDESourceControlRequest *_sourceControlInfoRequest;
    double _serverStatusUpdateInterval;
    NSTimer *_statusUpdateTimer;
    NSString *_developerFolderPathString;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _idleNotificationPosted;
    BOOL _hasConfiguredTBTForWorkingCopies;
    BOOL _hasMergedProjectData;
    unsigned long long _workingTreesCount;
    unsigned long long _workingTreesConfigured;
    BOOL _shouldAskForNewWorkingCopies;
    BOOL _shouldSaveLegacyBlueprint;
    DVTDispatchLock *_derivedDataLock;
    DVTFilePath *_derivedDataFilePath;
    DVTObservingToken *_deriviedDataObservationToken;
    DVTFilePath *_intermediatesFilePath;
    DVTObservingToken *_intermediatesObservationToken;
    DVTFilePath *_productsFilePath;
    DVTObservingToken *_productsObservationToken;
    DVTNotificationToken *_sourceControlEnabledToken;
    DVTSourceControlWorkspace *_sourceControlWorkspace;
    unsigned long long _state;
    DVTSourceControlWorkspaceBlueprint *_cachedBlueprint;
}

+ (id)keyPathsForValuesAffectingLogRecords;
+ (id)keyPathsForValuesAffectingDidScanWorkspace;
+ (id)keyPathsForValuesAffectingIsPerformingInitialWorkspaceScan;
+ (void)initialize;
@property(retain) DVTSourceControlWorkspaceBlueprint *cachedBlueprint; // @synthesize cachedBlueprint=_cachedBlueprint;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) DVTSourceControlWorkspace *sourceControlWorkspace; // @synthesize sourceControlWorkspace=_sourceControlWorkspace;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(copy) NSTimer *statusUpdateTimer; // @synthesize statusUpdateTimer=_statusUpdateTimer;
@property double serverStatusUpdateInterval; // @synthesize serverStatusUpdateInterval=_serverStatusUpdateInterval;
@property(readonly) DVTMapTable *workspaceRootForWorkingTreeMapTable; // @synthesize workspaceRootForWorkingTreeMapTable=_workspaceRootForWorkingTreeMapTable;
@property(retain) IDESourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
- (void)loadSourceControlLogsForWorkspace:(id)arg1;
- (void)updateLogsWithRequest:(id)arg1;
@property(readonly) NSArray *logRecords;
- (id)rootDirectoryOfAllWorkingCopies;
- (unsigned long long)stateForWorkingCopyConfiguration:(id)arg1;
- (unsigned long long)stateForRemoteRepository:(id)arg1;
- (unsigned long long)stateForWorkingTree:(id)arg1;
- (void)setState:(unsigned long long)arg1 forWorkingCopyConfigurationStateDictionary:(id)arg2;
- (void)setState:(unsigned long long)arg1 forRemoteRepository:(id)arg2;
- (void)setState:(unsigned long long)arg1 forWorkingTree:(id)arg2;
- (void)checkForMissingCheckouts;
- (void)checkForAdditionalCheckouts;
- (void)writeToSCMInfoToWorkspaceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)saveSCMInfo;
- (id)getSCMInfoObjectforKey:(id)arg1;
- (void)setSCMInfoObject:(id)arg1 forSCMKey:(id)arg2;
- (void)setSuppressMissingCheckoutsAlert:(BOOL)arg1;
- (BOOL)suppressMissingCheckoutsAlert;
@property BOOL suppressWorkingCopyUpgrade;
- (BOOL)_saveWorkspaceSCMInfo;
- (id)_loadWorkspaceSCMInfo;
- (id)_SCMInfoFilePath;
- (void)_updateLocalStatusForWorkingTreesWithForce:(BOOL)arg1 modifiedSinceDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)forceUpdateLocalStatusForWorkingTreesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateLocalStatusForWorkingTreesModifiedSinceDate:(id)arg1;
- (void)updateLocalStatusForWorkingTrees;
- (void)_updateCurrentBranchForWorkingTreesModifiedSinceDate:(id)arg1;
- (void)_updateServerStatusForWorkingTreesWithForce:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forceUpdateServerStatusForWorkingTreesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateServerStatusForWorkingTrees;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
- (void)endPeriodicServerStatusUpdates;
- (void)beginPeriodicServerStatusUpdates;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
- (void)endObservingWorkingTree:(id)arg1;
- (void)beginObservingWorkingTree:(id)arg1;
- (id)itemsWithStatusInWorkspaceForWorkingTree:(id)arg1;
- (void)evaluateWorkspaceRootForWorkingTree:(id)arg1 relativeToFilePath:(id)arg2;
- (id)rootDirectoryInWorkspaceForWorkingTree:(id)arg1;
- (id)rootDirectoryFilePathInWorkspaceForWorkingTree:(id)arg1;
- (void)_scanFinished;
- (void)startScanningWorkspace:(id)arg1;
- (void)_startScanningWorkspace:(id)arg1;
- (void)_processFileRefsBatch:(id)arg1;
- (void)upgradedWorkingCopy:(id)arg1;
- (void)scanForWorkingCopyInFilePath:(id)arg1;
- (void)addWorkspaceFilePathToCheck:(id)arg1;
- (void)scanWorkspaceFolders;
- (BOOL)_filePathIsInDerivedDataFolder:(id)arg1;
@property(readonly) BOOL didScanWorkspace;
@property(readonly) BOOL isPerformingInitialWorkspaceScan;
- (void)addWorkingTree:(id)arg1;
- (void)_sortWorkingCopies;
@property(readonly) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
@property(readonly) NSArray *workingCopiesNeedingUpgrade; // @synthesize workingCopiesNeedingUpgrade=_workingCopiesNeedingUpgrade;
- (void)primitiveInvalidate;
- (void)_disableSourceControlMonitor;
- (id)initWithSCMManager:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

