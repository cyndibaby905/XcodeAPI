

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTMapTable, DVTNotificationToken, DVTStackBacktrace, IDELogStore, IDEUnitTestsOperationsObserver, IDEWorkspace, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDETestManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableArray *_testRunners;
    NSMutableArray *_testRunnerObservationTokens;
    NSMutableSet *_testRunSessions;
    NSCountedSet *_runningTests;
    NSMutableSet *_searchedTestables;
    NSMutableSet *_testableObservingTokens;
    DVTMapTable *_subtestObservingTokenMapTable;
    DVTNotificationToken *_blueprintsChangedObserver;
    DVTNotificationToken *_buildOperationObserver;
    DVTNotificationToken *_cleanBuildFolderObserver;
    DVTNotificationToken *_testableChangedHackNotification;
    NSMutableSet *_changedTestables;
    BOOL _forcingReloadAll;
    NSMutableDictionary *_dataSources;
    NSMutableDictionary *_testRunGenerationCountsByID;
    BOOL _loadingComplete;
    IDELogStore *_logStore;
    NSSet *_testsLastRun;
    NSSet *_testsLastProfiled;
    DVTFilePath *_baselineFilePath;
    DVTFilePath *_actionResultsBundleWithBaselineOverridesFilePath;
    IDEUnitTestsOperationsObserver *_runOperationsObserver;
    NSMutableDictionary *_testableStateByTestableName;
    NSMutableDictionary *_fileChangeBrokersByFileURL;
    NSMutableDictionary *_testablesByFileURL;
    unsigned long long _testSessionGenereationCounter;
}

+ (BOOL)_initializedForUserInteraction;
+ (id)_stringForCurrentTime;
+ (void)initialize;
@property unsigned long long testSessionGenereationCounter; // @synthesize testSessionGenereationCounter=_testSessionGenereationCounter;
@property(readonly) NSMutableDictionary *testablesByFileURL; // @synthesize testablesByFileURL=_testablesByFileURL;
@property(readonly) NSMutableDictionary *fileChangeBrokersByFileURL; // @synthesize fileChangeBrokersByFileURL=_fileChangeBrokersByFileURL;
@property(readonly) NSMutableDictionary *testableStateByTestableName; // @synthesize testableStateByTestableName=_testableStateByTestableName;
@property(retain) IDEUnitTestsOperationsObserver *runOperationsObserver; // @synthesize runOperationsObserver=_runOperationsObserver;
@property(retain) DVTFilePath *actionResultsBundleWithBaselineOverridesFilePath; // @synthesize actionResultsBundleWithBaselineOverridesFilePath=_actionResultsBundleWithBaselineOverridesFilePath;
@property(retain) DVTFilePath *baselineFilePath; // @synthesize baselineFilePath=_baselineFilePath;
@property BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(retain) NSSet *testsLastProfiled; // @synthesize testsLastProfiled=_testsLastProfiled;
@property(retain) NSSet *testsLastRun; // @synthesize testsLastRun=_testsLastRun;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(readonly) NSArray *testRunners; // @synthesize testRunners=_testRunners;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)asyncApplyBaselineRecord:(id)arg1 forTestBundleRunDestinationRecord:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_testablesForFileURL:(id)arg1;
- (id)testForIdentifier:(id)arg1;
- (id)fileURLForTestIdentifier:(id)arg1;
- (id)testsForFileURL:(id)arg1;
- (id)testableDataSourceForTestingSystemWithIdentifier:(id)arg1;
- (void)setTestableDataSource:(id)arg1 forTestingSystemWithIdentifier:(id)arg2;
- (id)testOperationForTestingSpecification:(id)arg1 executionEnvironment:(id)arg2 withBuildOperation:(id)arg3 buildParameters:(id)arg4 runDestination:(id)arg5 workspace:(id)arg6 actionRecord:(id)arg7 schemeIdentifier:(id)arg8 outSchemeActionResultOperation:(id *)arg9 error:(id *)arg10 launchParametersBlock:(CDUnknownBlockType)arg11 actionCallbackBlock:(CDUnknownBlockType)arg12;
- (id)testRunnerForTestingSpecifier:(id)arg1;
- (void)_purgeInvalidRDTsForTestable:(id)arg1 withSkippedTests:(id)arg2;
- (void)_purgeInvalidRDTsForTest:(id)arg1 withSkippedTests:(id)arg2;
- (BOOL)_shouldPurgeRDTTestResultForTest:(id)arg1;
- (unsigned long long)_latestGenerationForAncestorsOfTest:(id)arg1;
- (void)_writeTestResultsBundleForTestRunners:(id)arg1 successCount:(unsigned long long *)arg2 failureCount:(unsigned long long *)arg3;
- (id)_createResultsObserverForRunner:(id)arg1;
- (void)_updateObservedTestResults;
- (unsigned long long)stateOfTestable:(id)arg1;
- (id)performanceMetricsForTest:(id)arg1;
- (unsigned long long)stateOfTest:(id)arg1;
- (BOOL)isTestablePendingRun:(id)arg1;
- (BOOL)isTestPendingRun:(id)arg1;
- (void)_cancelAndRemoveAllTestObservingTokens;
- (void)_unregisterSubtestsObservanceForTest:(id)arg1 inTestable:(id)arg2;
- (void)_registerSubtestsObservance:(id)arg1 forTest:(id)arg2 inTestable:(id)arg3;
- (void)_loadTestsForTestable:(id)arg1;
- (void)_checkLoadingComplete;
- (void)_updateTestsLastRunOrProfiledForRemovedTests:(id)arg1;
- (void)_diffPrevious:(id)arg1 current:(id)arg2 onlyNew:(id *)arg3 onlyOld:(id *)arg4;
- (void)_forceReloadAllTestables;
- (void)_delayedForceReloadAllTestables;
- (void)_notifyObserversOfChangedTestable:(id)arg1;
- (void)_delayedNotifyObserversOfChangedTestables;
- (void)_notifyUpdatedTestFilesForTestable:(id)arg1 addedFiles:(id)arg2 removedFiles:(id)arg3;
- (void)removeObserver:(id)arg1 ofFile:(id)arg2;
- (void)addObserver:(id)arg1 ofFile:(id)arg2;
- (void)setTestablesObserved:(id)arg1 byObserver:(id)arg2;
- (id)_stateForTestable:(id)arg1;
- (void)_notifyWorkspaceReferencedTestablesObservers;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_cleanBuildFolder:(id)arg1;
- (void)_blueprintsDidChange:(id)arg1;
- (unsigned long long)_lastRunSessionGenerationCountForTestable:(id)arg1;
- (unsigned long long)_lastRunSessionGenerationCountForTest:(id)arg1;
- (void)_setLastRunSessionGenerationCount:(unsigned long long)arg1 forTest:(id)arg2;
- (void)_removeRunningTest:(id)arg1;
- (void)_addRunningTest:(id)arg1;
- (void)_removeInvalidTestableStateForInvalidTestables:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableTestRunSessions; // @dynamic mutableTestRunSessions;
@property(readonly) Class superclass;
@property(readonly, copy) NSSet *testRunSessions; // @dynamic testRunSessions;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

