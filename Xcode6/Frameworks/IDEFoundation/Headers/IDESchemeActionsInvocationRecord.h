

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTMapTable;

@protocol IDESchemeActionsInvocationRecordUpdateDelegate;

@interface IDESchemeActionsInvocationRecord : NSObject
{
    NSMutableArray *_actions;
    NSMutableArray *_warningSummaries;
    NSMutableArray *_errorSummaries;
    NSMutableArray *_analyzerWarningSummaries;
    NSMutableArray *_testFailureSummaries;
    NSMutableArray *_testableSummaries;
    DVTMapTable *_strongActionRecordsToStatusObservers;
    BOOL _running;
    BOOL _archiveFetchable;
    BOOL _productFetchable;
    BOOL _shouldClearExistingFileOnSave;
    BOOL _remoteTestSummaryNeedsFetch;
    DVTFilePath *_archivePath;
    NSString *_archiveName;
    unsigned long long _archiveSize;
    DVTFilePath *_productPath;
    NSString *_productName;
    unsigned long long _productSize;
    unsigned long long _warningCount;
    unsigned long long _errorCount;
    unsigned long long _analyzerWarningCount;
    unsigned long long _testsCount;
    unsigned long long _testsFailedCount;
    DVTFilePath *_creatingWorkspaceFilePath;
    NSString *_archiveGUID;
    NSString *_productGUID;
    DVTFilePath *_filePath;
    id <IDESchemeActionsInvocationRecordUpdateDelegate> _updateDelegate;
    id _remoteTestSummaryIdentifier;
}

+ (id)keyPathsForValuesAffectingSimpleOperationStatus;
+ (id)keyPathsForValuesAffectingStatus;
+ (BOOL)updateSummariesFromDictionaryRepresentations:(id)arg1 withSummaryOwner:(id)arg2 summaryPropertyName:(id)arg3 summaryiVarArrayRef:(id *)arg4 summariesAreTestFailures:(BOOL)arg5;
+ (BOOL)automaticallyNotifiesObserversOfActions;
+ (void)invocationRecordWithLocalActionResultFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL remoteTestSummaryNeedsFetch; // @synthesize remoteTestSummaryNeedsFetch=_remoteTestSummaryNeedsFetch;
@property(copy, nonatomic) id remoteTestSummaryIdentifier; // @synthesize remoteTestSummaryIdentifier=_remoteTestSummaryIdentifier;
@property(nonatomic) BOOL shouldClearExistingFileOnSave; // @synthesize shouldClearExistingFileOnSave=_shouldClearExistingFileOnSave;
@property(readonly, nonatomic) id <IDESchemeActionsInvocationRecordUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(retain, nonatomic) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *productGUID; // @synthesize productGUID=_productGUID;
@property(retain, nonatomic) NSString *archiveGUID; // @synthesize archiveGUID=_archiveGUID;
@property(retain, nonatomic) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
@property(retain, nonatomic) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(retain, nonatomic) NSArray *testFailureSummaries; // @synthesize testFailureSummaries=_testFailureSummaries;
@property(retain, nonatomic) NSArray *analyzerWarningSummaries; // @synthesize analyzerWarningSummaries=_analyzerWarningSummaries;
@property(retain, nonatomic) NSArray *errorSummaries; // @synthesize errorSummaries=_errorSummaries;
@property(retain, nonatomic) NSArray *warningSummaries; // @synthesize warningSummaries=_warningSummaries;
@property(nonatomic) unsigned long long testsFailedCount; // @synthesize testsFailedCount=_testsFailedCount;
@property(nonatomic) unsigned long long testsCount; // @synthesize testsCount=_testsCount;
@property(nonatomic) unsigned long long analyzerWarningCount; // @synthesize analyzerWarningCount=_analyzerWarningCount;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) unsigned long long warningCount; // @synthesize warningCount=_warningCount;
@property(nonatomic) unsigned long long productSize; // @synthesize productSize=_productSize;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) DVTFilePath *productPath; // @synthesize productPath=_productPath;
@property(nonatomic, getter=isProductFetchable) BOOL productFetchable; // @synthesize productFetchable=_productFetchable;
@property(nonatomic, getter=isArchiveFetchable) BOOL archiveFetchable; // @synthesize archiveFetchable=_archiveFetchable;
@property(nonatomic) unsigned long long archiveSize; // @synthesize archiveSize=_archiveSize;
@property(retain, nonatomic) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(retain, nonatomic) DVTFilePath *archivePath; // @synthesize archivePath=_archivePath;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void)fetchTestSummariesAndUpdateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchLogsAndUpdateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateRecordWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int simpleOperationStatus;
@property(readonly, nonatomic) int status;
- (BOOL)updateLocalTestSummaryWithRemoteTestSummary:(id)arg1 error:(id *)arg2;
- (BOOL)saveTestSummariesWithError:(id *)arg1;
- (id)testSummaryFormatVersionString;
- (id)localTestSummaryFilePath;
- (void)_updateTestableSummaries;
- (void)_updateSummaries;
- (void)tearDownObserversForSchemeActionRecord:(id)arg1;
- (void)setUpObserversForSchemeActionRecord:(id)arg1;
- (void)updateAllSchemeActionRecordDirectoryFilePaths;
- (id)filePathForSchemeActionRecordDirectoryWithSchemeCommand:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)makeActionRecordWithSchemeCommand:(id)arg1 schemeTask:(int)arg2 runDestination:(id)arg3;
- (NSString *)description;
- (void)close;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithArchiveData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithProductData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)saveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 updateDelegate:(id)arg2 error:(id *)arg3;
- (id)initLocalRecordWithWorkspace:(id)arg1;
- (id)init;
- (id)_init;

@end

