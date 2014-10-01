

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTObservingToken, DVTStackBacktrace, IDEContainer, IDEContainerQuery, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEFileReferenceContainerObserver : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_observedTypesConformanceByDataType;
    CDUnknownBlockType _skipReferencePredicateBlock;
    CDUnknownBlockType _updateHandlerBlock;
    CDUnknownBlockType _cleanUpBlock;
    NSMutableDictionary *_incrementalResults;
    NSMutableDictionary *_compositeResults;
    DVTObservingToken *_matchesKVOToken;
    IDEContainerQuery *_containerQuery;
    NSMutableSet *_incrementalRemovals;
    IDEContainer *_observedContainer;
    NSMutableSet *_observationBlocks;
    NSDictionary *_currentFilePaths;
    NSSet *_currentFileReferences;
    dispatch_queue_t _ioQueue;
    NSString *_identifier;
    NSSet *_observedTypes;
    BOOL _hasProcessedFirstBatchOfContainerQueryMatches;
    DVTDelayedInvocation *_processInvocation;
    DVTDelayedInvocation *_postInvocation;
}

+ (void)initialize;
+ (void)unregisterObserver:(id)arg1;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 skipFileReferencePredicate:(CDUnknownBlockType)arg5;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 cleanUpBlock:(CDUnknownBlockType)arg5 skipFileReferencePredicate:(CDUnknownBlockType)arg6;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property(readonly) IDEContainer *observedContainer; // @synthesize observedContainer=_observedContainer;
- (void)processPendingResults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)processResultForPath:(id)arg1 withLastKnownFileType:(id)arg2 updateType:(long long)arg3;
- (void)postResults:(id)arg1;
- (void)postResultsRetrospectiveResultsToObserverBlock:(CDUnknownBlockType)arg1;
- (void)setResult:(id)arg1 forPath:(id)arg2;
- (void)matchedContainerItemsDidChange:(id)arg1;
- (void)invalidateProcessing;
- (void)invalidatePosting;
- (id)addObserver:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(CDUnknownBlockType)arg4 cleanUpBlock:(CDUnknownBlockType)arg5 skipFileReferencePredicate:(CDUnknownBlockType)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

