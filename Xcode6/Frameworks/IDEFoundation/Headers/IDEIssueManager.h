

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTHashTable, DVTMapTable, DVTObservingToken, DVTStackBacktrace, IDEIssueLogRecordsGroup, IDEIssueProviderSession, IDEWorkspace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEIssueManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableArray *_issueProviders;
    DVTMapTable *_providerContextToProvisionInfoMap;
    DVTMapTable *_issueToProviderContextMap;
    NSMutableArray *_issueGroups;
    DVTMapTable *_identifierToGroupIndex;
    DVTMapTable *_issueToGroupsIndex;
    NSMutableSet *_issuesThatWillBeRemoved;
    NSMutableArray *_vendedIssuesWithNoDocument;
    NSMutableSet *_issuesWithNoDocument;
    NSMutableArray *_documentURLsWithVendedIssues;
    NSMutableDictionary *_documentURLToIssueSummaryDict;
    DVTHashTable *_allDocumentURLObservers;
    unsigned long long _nextIssueSequenceNumber;
    DVTMapTable *_providerToSessionObservationToken;
    unsigned long long _nextGroupSequenceNumber;
    DVTMapTable *_identifierToGroupSequenceNumberIndex;
    IDEIssueProviderSession *_lastSchemeActionSession;
    NSMutableSet *_lastSchemeActionIssues;
    id _issueFixedObserver;
    BOOL _liveIssuesEnabled;
    id _liveIssuesEnabledObserver;
    IDEIssueLogRecordsGroup *_issueLogRecordsGroup;
    DVTHashTable *_cachedBlueprintsForActiveScheme;
    DVTHashTable *_cachedContainersForActiveScheme;
    int _currentIssueFilterStyle;
    id _issueFilterStyleObserver;
    id _schemeBuildablesObserver;
    DVTObservingToken *_activeSchemeObserver;
    DVTObservingToken *_runDestinationObserver;
    DVTObservingToken *_implicitDependenciesObserver;
}

+ (id)issueManagerLogAspect;
+ (id)_issueProviderInfo;
+ (void)_useDebugProviderExtensionPointWithIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly) IDEIssueLogRecordsGroup *issueLogRecordsGroup; // @synthesize issueLogRecordsGroup=_issueLogRecordsGroup;
@property(readonly, getter=areLiveIssuesEnabled) BOOL liveIssuesEnabled; // @synthesize liveIssuesEnabled=_liveIssuesEnabled;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)_containersOrBlueprintsUpdated;
- (id)_issuesForProviderContext:(id)arg1;
- (id)_providerContextToProvisionInfoMapForIssues:(id)arg1;
- (id)_unitTestIssueProvidersAccessor;
- (void)_validateGroupIdentifiers;
- (void)_delayedValidateGroupIdentifiers;
- (void)_updateVendedIssues;
- (void)_updateContainersAndBlueprintsForActiveScheme;
- (void)_updateIssueFilterStyle;
- (void)_needsUpdateInResponseToFilterChanges;
- (void)_coalescedUpdateInResponseToFilterChanges;
- (void)_hideIssues:(id)arg1;
- (void)_setIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4 session:(id)arg5;
- (void)_removeIssues:(id)arg1 forProviderContext:(id)arg2 session:(id)arg3;
- (void)_addIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4 session:(id)arg5 tryToCoalesce:(BOOL)arg6;
- (BOOL)_vendOnlyActiveSchemeIssues;
- (void)_retractIssues:(id)arg1;
- (void)_vendIssues:(id)arg1 container:(id)arg2 blueprint:(id)arg3 issueToGroupingObjectMap:(id)arg4 session:(id)arg5;
- (id)_similarExistingIssueForIssue:(id)arg1;
- (id)_similarExistingIssueForIssue:(id)arg1 container:(id)arg2 blueprint:(id)arg3;
- (_Bool)_doesIssue:(id)arg1 fromContainer:(id)arg2 andBlueprint:(id)arg3 coalesceWithIssue:(id)arg4;
- (_Bool)_doesIssue:(id)arg1 coalesceWithIssue:(id)arg2;
- (id)_identifierForGroupWithBlueprint:(id)arg1 container:(id)arg2;
- (id)_groupingObjectsForIssue:(id)arg1;
- (void)_rescindObserverToken:(id)arg1;
- (id)newIssueObserverForDocumentURL:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_notifyAllObserversOfDocumentURL:(id)arg1 isPrior:(BOOL)arg2;
- (void)_notifyObserver:(id)arg1 forURL:(id)arg2 isPrior:(BOOL)arg3;
- (id)issuesWithNoDocument;
- (id)issuesForDocumentURL:(id)arg1;
- (unsigned long long)maxSeverityOfDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfFixableDiagnosticItemsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfAnalyzerResultsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfNoticesInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfWarningsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfErrorsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfTestFailuresInDocumentAtURL:(id)arg1;
- (id)_documentIssueSummaryForURL:(id)arg1;
@property(readonly) NSArray *documentURLsWithIssues;
@property(readonly) NSArray *issueGroups; // @synthesize issueGroups=_issueGroups;
- (void)_updateIssueProviders;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSSet *lastSchemeActionIssues; // @dynamic lastSchemeActionIssues;
@property(readonly) NSMutableSet *mutableLastSchemeActionIssues; // @dynamic mutableLastSchemeActionIssues;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

