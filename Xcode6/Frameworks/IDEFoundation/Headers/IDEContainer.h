

#import <DVTFoundation/DVTModelObject.h>

#import <DVTFoundation/DVTDirectoryBasedCustomDataStoreDelegate-Protocol.h>
#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEIntegrityLogDataSource-Protocol.h>
#import <IDEFoundation/IDEReadOnlyItem-Protocol.h>
#import <IDEFoundation/IDEUpgradeableItem-Protocol.h>
#import <IDEFoundation/IDEContainerDelegate-Protocol.h>

@class DVTExtension, DVTFilePath, DVTMapTable, DVTOperation, DVTStackBacktrace, IDEActivityLogSection, IDEGroup, IDEWorkspace, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSURL;

@protocol IDEContainerCore;

@interface IDEContainer : DVTModelObject <DVTInvalidation, IDEIntegrityLogDataSource, IDEReadOnlyItem, DVTDirectoryBasedCustomDataStoreDelegate, IDEUpgradeableItem>
{
    id <IDEContainerCore> _containerCore;
    IDEWorkspace *_workspace;
    DVTFilePath *_filePath;
    IDEGroup *_rootGroup;
    DVTFilePath *_itemBaseFilePath;
    DVTExtension *_extension;
    DVTOperation *_willReadOperation;
    DVTOperation *_readOperation;
    DVTOperation *_didReadOperation;
    id <DVTCancellable> _resolvePendingFilesCancellableToken;
    int _activity;
    int _transitionActivity;
    NSMutableDictionary *_sessionIdentifiersToFilePaths;
    NSMutableDictionary *_containerLoadingTokens;
    NSMutableSet *_pendingFileReferences;
    NSDictionary *_containerDataFilePaths;
    int _autosaveBehavior;
    int _saveIssue;
    NSTimer *_pendingSaveTimer;
    NSString *_sessionIdentifier;
    NSMutableDictionary *_filePathToReadOnlyItemMap;
    NSMapTable *_readOnlyItemToStatusObserverMap;
    id <IDEContainerDelegate> _containerDelegate;
    DVTMapTable *_pendingFilePathChangeDictionary;
    int _readOnlyStatus;
    BOOL _hasTransitionedToIdle;
    BOOL _containerEdited;
}

+ (BOOL)_shouldTrackReadOnlyStatus;
+ (id)unlockingDelegate;
+ (void)setUnlockingDelegate:(id)arg1;
+ (id)reloadingDelegate;
+ (void)setReloadingDelegate:(id)arg1;
+ (id)errorPresenter;
+ (void)setErrorPresenter:(id)arg1;
+ (BOOL)supportsMultipleInstancesPerFilePath;
+ (BOOL)automaticallyNotifiesObserversOfFilePath;
+ (BOOL)automaticallyNotifiesObserversOfActivity;
+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (BOOL)supportsFilePersistence;
+ (id)_errorSavingContainer:(id)arg1 code:(int)arg2;
+ (double)_defaltSlowAutosaveDelay;
+ (double)_defaltAutosaveDelay;
+ (BOOL)automaticallyNotifiesObserversOfContainerEdited;
+ (void)resumeFilePathChangeNotifications;
+ (void)suspendFilePathChangeNotifications;
+ (id)_containersWithPendingFilePathChanges;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (id)_containerForSessionIdentifier:(id)arg1;
+ (void)_invalidateContainer:(id)arg1;
+ (void)_releaseContainer:(id)arg1;
+ (void)_retainContainer:(id)arg1;
+ (BOOL)_closeContainerIfNeeded:(id)arg1;
+ (void)_removeReferencesToContainer:(id)arg1;
+ (void)_decreaseCountForContainer:(id)arg1;
+ (void)_increaseCountForContainer:(id)arg1;
+ (unsigned long long)_countForContainer:(id)arg1;
+ (id)_openContainers;
+ (BOOL)isContainerOpenForFilePath:(id)arg1;
+ (id)retainedWrappedWorkspaceForContainerAtFilePath:(id)arg1 fileDataType:(id)arg2 error:(id *)arg3;
+ (id)containersForFilePath:(id)arg1;
+ (id)retainedContainerForFilePath:(id)arg1 workspace:(id)arg2;
+ (id)retainedContainerAtFilePath:(id)arg1 fileDataType:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
+ (id)_containerOpenInAnotherWorkspaceErrorForPath:(id)arg1;
+ (id)_noContainerClassForFileTypeError:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (id)containerExtensionForFileDataType:(id)arg1;
+ (id)containerLoadingModelObjectGraph;
+ (void)initialize;
@property int readOnlyStatus; // @synthesize readOnlyStatus=_readOnlyStatus;
@property(readonly) IDEGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(copy, nonatomic) DVTFilePath *itemBaseFilePath; // @synthesize itemBaseFilePath=_itemBaseFilePath;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) id <IDEContainerCore> containerCore; // @synthesize containerCore=_containerCore;
@property(retain) id <IDEContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
- (void)customDataStore:(id)arg1 removeItemAtFilePath:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)customDataStore:(id)arg1 moveItemAtFilePath:(id)arg2 toFilePath:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)customDataStore:(id)arg1 makeFilePathsWritable:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_unlockReadOnlyItems:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_readOnlyItemsToUnlock;
- (void)_addReadOnlyItemPath:(id)arg1;
- (void)_removeAllReadOnlyItemPaths;
- (void)_removeReadOnlyItemPath:(id)arg1;
- (void)_updateSharedReadOnlyItemStatus;
- (BOOL)makeWritableWithError:(id *)arg1;
@property(readonly) NSURL *readOnlyItemURL;
- (void)debugPrintStructure;
- (void)debugPrintInnerStructure;
@property(readonly, copy) NSString *description;
- (void)collectMessageTracerStatisticsIntoDictionary:(id)arg1;
@property(readonly) IDEActivityLogSection *integrityLog;
- (void)analyzeModelIntegrity;
- (void)enumerateUpgradeTasksWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isFolderLike) BOOL folderLike;
@property(readonly, getter=isMajorGroup) BOOL majorGroup;
@property(readonly, getter=isEditable) BOOL editable;
- (void)_initRootGroup;
- (id)createRootGroup;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (void)_makeRelativeFileReferencesInGroup:(id)arg1 relativeToNewBasePath:(id)arg2 oldBaseFilePath:(id)arg3;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (BOOL)setContainerFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)_setContainerFilePath:(id)arg1 strict:(BOOL)arg2 error:(id *)arg3;
- (void)_setFilePath:(id)arg1;
- (void)_setFilePath:(id)arg1 strict:(BOOL)arg2 createContainerDataFilePathsToModDateMap:(BOOL)arg3;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (void)_makeAbsoluteFileReferencesInGroup:(id)arg1 relativeToFolderFilePath:(id)arg2 withPathString:(id)arg3;
@property(readonly) NSString *displayName;
- (void)_setTransitioningToNewFilePath:(BOOL)arg1;
- (void)_setExtension:(id)arg1;
- (void)_didUpdateActivity;
- (void)_willUpdateActivity;
- (void)_didTransitionToActivity:(int)arg1;
- (void)_containerDidLoad;
@property int activity;
- (BOOL)writeToFilePath:(id)arg1 forceWrite:(BOOL)arg2 error:(id *)arg3;
- (BOOL)didReadFromFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)willReadFromFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)_readAsyncIfPossibleFromFilePath:(id)arg1 error:(id *)arg2;
- (id)_didReadOperationWithFilePath:(id)arg1;
- (id)_willReadOperationWithFilePath:(id)arg1;
- (id)_readOperationWithFilePath:(id)arg1;
- (BOOL)_canClosePreflightWithCheckedContainers:(id)arg1 error:(id *)arg2;
- (BOOL)_canClosePreflightOrError:(id *)arg1;
- (BOOL)ignoreLocalChanges;
- (void)_setContainerEdited;
- (void)_containerEditedDidChange;
- (BOOL)_saveContainerForAction:(int)arg1 error:(id *)arg2;
- (void)_scheduleAutosaveTimer;
- (void)_saveContainerPeriodically;
@property BOOL containerEdited;
- (id)_containerDataFilePaths;
- (id)_lastKnownModDateForContainerDataFile:(id)arg1;
- (void)_updateContainerDataFilePathsToModDateMap;
- (void)_createContainerDataFilePathsToModDateMap;
- (id)_modificationDateForFilePath:(id)arg1;
- (void)_clearContainerDataFilePathsToModDateMap;
- (void)_unregisterForChangesToContainerDataFilePath:(id)arg1;
- (void)_registerForChangesToContainerDataFilePath:(id)arg1;
- (void)_filePathDidChangeWithPendingChangeDictionary;
- (void)primitiveInvalidate;
- (void)invalidate;
- (id)_sessionIdentifier;
- (void)_invalidateContainerToDiscardInMemoryRepresentation:(BOOL)arg1;
- (void)_willInvalidateContainerToDiscardInMemoryRepresentation;
- (void)releaseContainer;
- (void)retainContainer;
- (void)_saveContainerIfNeeded;
- (id)init;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (void)_removeSubcontainer:(id)arg1;
- (void)_addSubcontainer:(id)arg1;
- (void)_setContainerLoadingTokenForContainer:(id)arg1;
- (void)_removeContainerLoadingTokenForContainer:(id)arg1;
- (void)_locateFileReferencesRecursively;
- (void)_clearPendingFileReferencesAndContainerLoadingTokens;
- (void)_scheduleResolvePendingFileReferencesOperation;
- (void)_handleContainerResolutionFailureForFileReference:(id)arg1;
- (void)_locateFileReferencesRecursivelyInGroup:(id)arg1;
- (void)_removePendingFileReference:(id)arg1;
- (void)_addPendingFileReference:(id)arg1;
- (id)_containerInstanceDescription;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

