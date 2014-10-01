

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTPerformanceMetric, DVTStackBacktrace, IDESnapshotsManager, IDEWorkspace;

@interface IDEWorkspaceSnapshotManager : NSObject <DVTInvalidation>
{
    IDESnapshotsManager *_snapshotsManager;
    DVTPerformanceMetric *_metric;
    IDEWorkspace *_workspace;
    DVTFilePath *_repositoryPath;
    BOOL _userIntentToSnapshot;
    NSString *_currentOperationName;
    id <IDESnapshotConfirmationDelegate> _confirmationDelegate;
    dispatch_queue_t _snapshotManagerQueue;
    NSDictionary *_localizedStrings;
}

+ (void)initialize;
@property(retain) id <IDESnapshotConfirmationDelegate> confirmationDelegate; // @synthesize confirmationDelegate=_confirmationDelegate;
@property(copy) NSString *currentOperationName; // @synthesize currentOperationName=_currentOperationName;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)primitiveInvalidate;
- (void)createSnapshotWithType:(int)arg1 name:(id)arg2 description:(id)arg3 origin:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)createAutomaticSnapshotBefore:(id)arg1 generatedBy:(id)arg2 type:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_shouldCreateSnapshotWithType:(int)arg1 error:(id *)arg2;
@property(retain) DVTFilePath *repositoryPath; // @synthesize repositoryPath=_repositoryPath;
- (void)_snapshotsSettingsDidChange:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (void)_generateLocalizedStrings;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

