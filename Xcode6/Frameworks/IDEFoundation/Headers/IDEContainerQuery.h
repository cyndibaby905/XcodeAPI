

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface IDEContainerQuery : NSObject <DVTInvalidation>
{
    id <DVTModelObject, DVTInvalidation> _containerGraphObject;
    DVTObservingToken *_containerGraphObjectValidObservationToken;
    CDUnknownBlockType _skipSubgraphBlock;
    CDUnknownBlockType _predicateBlock;
    CDUnknownBlockType _visitorBlock;
    NSMutableSet *_matches;
    NSMutableSet *_visitedContainerGraphObjects;
    BOOL _isCancelled;
    BOOL _isLiveQuery;
    BOOL _inObjectsDidChangeNotification;
}

+ (BOOL)automaticallyNotifiesObserversOfMatches;
+ (id)containerQueryWithContainerGraphObject:(id)arg1 predicateBlock:(CDUnknownBlockType)arg2;
+ (void)traverseContainerGraphRootedInContainerGraphObject:(id)arg1 skipSubgraphBlock:(CDUnknownBlockType)arg2 visitorBlock:(CDUnknownBlockType)arg3;
+ (void)initialize;
- (void)_objectsDidChange:(id)arg1;
- (void)_updateWithInsertedMatches:(id)arg1 deletedMatches:(id)arg2;
- (void)_traverseContainerGraphObjects:(id)arg1 forDeletion:(BOOL)arg2 insertedMatches:(id)arg3 deletedMatches:(id)arg4;
- (BOOL)_isInterestedInContainerGraphObject:(id)arg1 forDeletion:(BOOL)arg2;
- (BOOL)_workspaceVerified_isTrackingContainerItem:(id)arg1 checkedContainers:(id)arg2;
- (BOOL)_isTrackingContainerItem:(id)arg1 checkedContainers:(id)arg2;
- (BOOL)_workspaceVerified_isTrackingContainer:(id)arg1 checkedContainers:(id)arg2;
- (BOOL)_isTrackingContainer:(id)arg1 checkedContainers:(id)arg2;
- (void)_traverseContainerGraphObject:(id)arg1 forDeletion:(BOOL)arg2 checkedContainers:(id)arg3 insertedMatches:(id)arg4 deletedMatches:(id)arg5;
- (void)_processContainerGraphObject:(id)arg1 insertedMatches:(id)arg2 deletedMatches:(id)arg3;
- (void)_removeContainerGraphObject:(id)arg1 deletedMatches:(id)arg2;
- (void)_addContainerGraphObject:(id)arg1 insertedMatches:(id)arg2;
@property(readonly) NSSet *matches;
- (void)primitiveInvalidate;
- (void)_cancelQueryIfNeeded;
- (id)_initWithContainerGraphObject:(id)arg1 skipSubgraphBlock:(CDUnknownBlockType)arg2 predicateBlock:(CDUnknownBlockType)arg3 visitorBlock:(CDUnknownBlockType)arg4;
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

