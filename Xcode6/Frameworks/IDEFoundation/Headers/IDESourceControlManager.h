

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDeveloperProfileAccountProvider-Protocol.h>

@class DVTDispatchLock, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface IDESourceControlManager : NSObject <DVTDeveloperProfileAccountProvider>
{
    NSMutableArray *_repositories;
    NSMutableArray *_workingCopyConfigurations;
    NSMutableArray *_workingTrees;
    NSMutableArray *_projects;
    NSMutableArray *_extensions;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_holdingQueue;
    DVTDispatchLock *_holdingQueueLock;
    long long _maxConcurrentOperationCount;
    long long _automaticallyScanWorkspaces;
    long long _authenticationRetryAttempts;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _automaticallyAddNewFiles;
    BOOL _waitingForAuthentication;
    BOOL _shouldLoadRepositories;
    double _minimumLocalStatusRequestDelay;
    NSString *_pathOfWorkspaceJustCheckedOut;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlReachabilityLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sharedSourceControlManager;
@property(retain) NSString *pathOfWorkspaceJustCheckedOut; // @synthesize pathOfWorkspaceJustCheckedOut=_pathOfWorkspaceJustCheckedOut;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
@property(readonly) BOOL shouldLoadRepositories; // @synthesize shouldLoadRepositories=_shouldLoadRepositories;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
- (void)cancelRequest:(id)arg1;
- (void)performRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performRequest:(id)arg1 waitUntilFinished:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)handleError:(id)arg1 forRequest:(id)arg2 operation:(id)arg3 waitUntilFinished:(BOOL)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
@property long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void)_finishLogForRequest:(id)arg1 operation:(id)arg2 withResult:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_startLogForRequest:(id)arg1 operation:(id)arg2;
- (void)removeAssociatedRepositoryRoot:(id)arg1 withFilePath:(id)arg2;
- (void)associateRepositoryRoot:(id)arg1 withFilePath:(id)arg2;
- (void)workingTreeRootForFilePath:(id)arg1 sourceControlExtension:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_upgradableSVNWorkingTreeRootForFilePath:(id)arg1;
- (id)_svnOriginURLForFilePath:(id)arg1;
- (void)workingTreeRootForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingTreeForFilePath:(id)arg1;
- (id)extensionForRequest:(id)arg1;
- (id)commonExtensionForPaths:(id)arg1;
- (id)extensionForURL:(id)arg1;
- (id)extensionToUseForFilePath:(id)arg1;
- (void)scanForExtensionsInFilePath:(id)arg1;
- (id)extensionsAtFilePath:(id)arg1;
- (void)invalidateExtensionsRecursivelyForFilePath:(id)arg1;
- (void)invalidateExtensionsForFilePath:(id)arg1;
- (id)extensionsAssociatedWithFilePath:(id)arg1;
- (void)removeAssociatedExtension:(id)arg1 withPath:(id)arg2;
- (void)associateExtension:(id)arg1 withPath:(id)arg2;
- (id)extensionMatchingDirectoryIdentifier:(id)arg1;
- (id)extensionsMatchingProtocol:(id)arg1;
- (id)extensionMatchingIdentifier:(id)arg1;
- (void)removeRepository:(id)arg1 removePasswordFromKeychain:(BOOL)arg2;
- (void)addRepository:(id)arg1;
- (void)addWorkingCopyConfiguration:(id)arg1;
- (void)removeSourceControlProject:(id)arg1;
- (void)addSourceControlProject:(id)arg1;
- (void)removeWorkingTree:(id)arg1;
- (void)addWorkingTree:(id)arg1;
- (void)updateUserDefaults;
@property(readonly) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
- (id)arrayOfWorkingCopyConfigurationDictionaries;
- (id)workingCopyConfigurations;
- (id)arrayOfProjectDictionaries;
- (id)arrayOfRepositoryDictionaries;
@property(readonly) NSArray *repositories; // @synthesize repositories=_repositories;
- (id)repositoryWithRoot:(id)arg1 sourceControlExtension:(id)arg2;
- (void)repositoryRootForRepository:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)repositoryForURL:(id)arg1 sourceControlExtension:(id)arg2;
@property BOOL automaticallyAddNewFiles;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property long long automaticallyScanWorkspaces;
@property BOOL enableSourceControl;
- (id)_blacklistedDirectories;
- (id)_directoryIdentifiers;
- (void)loadProjects;
@property(readonly) NSArray *projects; // @synthesize projects=_projects;
- (void)loadRepositories;
- (void)_fixVersion100Xcode5SCMPreferences;
- (void)loadXcode40RepositoriesFromArray:(id)arg1;
- (id)loadRepositoriesFromArray:(id)arg1 error:(id *)arg2;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
@property(readonly) NSString *typeIdentifier;
- (void)loadExtensions;
- (id)defaultExtension;
- (id)initWithSavedRepositories:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

