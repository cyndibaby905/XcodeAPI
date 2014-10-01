

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEInternalBreakpointDelegate-Protocol.h>

@class DVTMapTable, DVTObservingToken, DVTStackBacktrace, IDEBreakpointBucket, IDEWorkspace, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDEBreakpointManager : NSObject <IDEInternalBreakpointDelegate, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    DVTObservingToken *_workspaceReferencedContainersToken;
    DVTObservingToken *_currentDebugSessionStateObserverToken;
    DVTMapTable *_bucketsToObserverTokens;
    IDEBreakpointBucket *_defaultBucket;
    IDEBreakpointBucket *_userWorkspaceBucket;
    NSMutableArray *_userProjectBuckets;
    IDEBreakpointBucket *_userGlobalBucket;
    IDEBreakpointBucket *_watchpointBucket;
    IDEBreakpointBucket *_sharedWorkspaceBucket;
    NSMutableArray *_sharedProjectBuckets;
    DVTMapTable *_userToSharedBuckets;
    DVTMapTable *_sharedToUserBuckets;
    NSMutableArray *_breakpoints;
    BOOL _breakpointsActivated;
    NSMutableSet *_breakpointObservers;
}

+ (BOOL)_isBreakpointAtLocation:(id)arg1 location:(id)arg2;
+ (void)initialize;
@property(readonly) IDEBreakpointBucket *sharedWorkspaceBucket; // @synthesize sharedWorkspaceBucket=_sharedWorkspaceBucket;
@property(readonly) IDEBreakpointBucket *userGlobalBucket; // @synthesize userGlobalBucket=_userGlobalBucket;
@property(readonly) IDEBreakpointBucket *userWorkspaceBucket; // @synthesize userWorkspaceBucket=_userWorkspaceBucket;
@property(retain, nonatomic) IDEBreakpointBucket *defaultBucket; // @synthesize defaultBucket=_defaultBucket;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)primitiveInvalidate;
- (void)internal_breakpointLocationsAdded:(id)arg1 removed:(id)arg2;
- (void)internal_breakpointEnablementChanged:(id)arg1;
- (void)_notifyObserversOfActivationStateChange;
- (void)removeBreakpointObserver:(id)arg1;
- (void)addBreakpointObserver:(id)arg1;
- (void)_handleBreakpointsChanged:(id)arg1;
- (void)_addListenerToBucketsBreakpointList:(id)arg1;
- (void)_removeListenerFromBucketsBreakpointList:(id)arg1;
- (BOOL)_canSetBreakpointAtURL:(id)arg1;
- (void)setBreakpointShared:(id)arg1 shared:(BOOL)arg2;
@property BOOL breakpointsActivated;
- (id)fileBreakpointAtDocumentLocation:(id)arg1;
- (void)removeWatchpoint:(id)arg1;
- (void)removeBreakpoint:(id)arg1;
- (BOOL)_managesBucket:(id)arg1;
- (void)_addBreakpoint:(id)arg1 toBucket:(id)arg2;
- (void)addWatchpoint:(id)arg1;
- (void)addBreakpoint:(id)arg1;
- (id)createWatchpoint:(id)arg1 variableName:(id)arg2;
- (id)_createAddressBreakpointFrom:(id)arg1 usingLineOfDisassembly:(id)arg2;
- (id)createAddressBreakpoint:(id)arg1;
- (id)createFileBreakpointAtDocumentLocation:(id)arg1;
- (id)createBreakpointAtDocumentLocation:(id)arg1 usingStringAtLine:(id)arg2;
- (void)_handleWorkspaceContainerRemoved:(id)arg1;
- (void)_handleWorkspaceContainerInserted:(id)arg1;
- (void)_handleWorkspaceContainersChanges:(id)arg1;
- (void)_handleCurrentDebugSessionStateChanged:(id)arg1;
- (id)initWithWorkspace:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(copy) NSArray *breakpoints; // @dynamic breakpoints;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableBreakpoints; // @dynamic mutableBreakpoints;
@property(readonly) NSMutableArray *mutableSharedProjectBuckets; // @dynamic mutableSharedProjectBuckets;
@property(readonly) NSMutableArray *mutableUserProjectBuckets; // @dynamic mutableUserProjectBuckets;
@property(retain) NSArray *sharedProjectBuckets; // @dynamic sharedProjectBuckets;
@property(readonly) Class superclass;
@property(retain) NSArray *userProjectBuckets; // @dynamic userProjectBuckets;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

