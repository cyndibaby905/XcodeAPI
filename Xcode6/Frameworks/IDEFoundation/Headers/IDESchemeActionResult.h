

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTObservingToken, IDEActivityLogSection, NSArray, NSError, NSMutableArray, NSString;

@interface IDESchemeActionResult : NSObject
{
    DVTObservingToken *_logRecordingToken;
    NSMutableArray *_warningSummaries;
    NSMutableArray *_errorSummaries;
    NSMutableArray *_analyzerWarningSummaries;
    NSMutableArray *_testFailureSummaries;
    NSMutableArray *_testableSummaries;
    BOOL _localLogFileIsCurrent;
    BOOL _remoteLogNeedsFetch;
    BOOL _remoteTestSummaryNeedsFetch;
    int _status;
    NSString *_resultName;
    NSError *_error;
    IDEActivityLogSection *_log;
    id _remoteLogIdentifier;
    unsigned long long _warningCount;
    unsigned long long _errorCount;
    unsigned long long _analyzerWarningCount;
    unsigned long long _testsCount;
    unsigned long long _testsFailedCount;
    id _remoteTestSummaryIdentifier;
    NSString *_testSummaryPath;
    NSString *_logPath;
    DVTFilePath *_localResultDirectoryFilePath;
    DVTFilePath *_creatingWorkspaceFilePath;
}

+ (int)actionResultStatusForString:(id)arg1;
+ (id)stringForActionResultStatus:(int)arg1;
+ (id)testableSummariesForFilePath:(id)arg1 runDestinationRecord:(id *)arg2 error:(id *)arg3;
+ (BOOL)automaticallyNotifiesObserversOfLog;
@property(retain, nonatomic) DVTFilePath *creatingWorkspaceFilePath; // @synthesize creatingWorkspaceFilePath=_creatingWorkspaceFilePath;
@property(retain, nonatomic) DVTFilePath *localResultDirectoryFilePath; // @synthesize localResultDirectoryFilePath=_localResultDirectoryFilePath;
@property(copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(copy, nonatomic) NSString *testSummaryPath; // @synthesize testSummaryPath=_testSummaryPath;
@property(nonatomic) BOOL remoteTestSummaryNeedsFetch; // @synthesize remoteTestSummaryNeedsFetch=_remoteTestSummaryNeedsFetch;
@property(copy, nonatomic) id remoteTestSummaryIdentifier; // @synthesize remoteTestSummaryIdentifier=_remoteTestSummaryIdentifier;
@property(nonatomic) unsigned long long testsFailedCount; // @synthesize testsFailedCount=_testsFailedCount;
@property(nonatomic) unsigned long long testsCount; // @synthesize testsCount=_testsCount;
@property(nonatomic) unsigned long long analyzerWarningCount; // @synthesize analyzerWarningCount=_analyzerWarningCount;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) unsigned long long warningCount; // @synthesize warningCount=_warningCount;
@property(nonatomic) BOOL remoteLogNeedsFetch; // @synthesize remoteLogNeedsFetch=_remoteLogNeedsFetch;
@property(copy, nonatomic) id remoteLogIdentifier; // @synthesize remoteLogIdentifier=_remoteLogIdentifier;
@property(nonatomic) BOOL localLogFileIsCurrent; // @synthesize localLogFileIsCurrent=_localLogFileIsCurrent;
@property(retain, nonatomic) IDEActivityLogSection *log; // @synthesize log=_log;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *resultName; // @synthesize resultName=_resultName;
@property(retain, nonatomic) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(retain, nonatomic) NSArray *testFailureSummaries; // @synthesize testFailureSummaries=_testFailureSummaries;
@property(retain, nonatomic) NSArray *analyzerWarningSummaries; // @synthesize analyzerWarningSummaries=_analyzerWarningSummaries;
@property(retain, nonatomic) NSArray *errorSummaries; // @synthesize errorSummaries=_errorSummaries;
@property(retain, nonatomic) NSArray *warningSummaries; // @synthesize warningSummaries=_warningSummaries;
- (BOOL)updateLocalTestSummaryWithRemoteTestSummary:(id)arg1 forSchemeActionRecord:(id)arg2 error:(id *)arg3;
- (BOOL)saveTestSummariesForTestableSummaryFilePath:(id)arg1 runDestinationRecord:(id)arg2 error:(id *)arg3;
- (BOOL)saveTestSummariesForSchemeActionRecord:(id)arg1 error:(id *)arg2;
- (id)testSummaryFormatVersionString;
@property(readonly, nonatomic) DVTFilePath *localTestSummaryFilePath;
- (void)_readIssueSummaries;
- (id)_issueSummaryForMessage:(id)arg1 blueprint:(id)arg2;
- (BOOL)waitUntilBuildLogHasBeenClosed:(id)arg1 error:(id *)arg2;
- (BOOL)loadInMemoryLogFromLocalLogFileReturningError:(id *)arg1;
- (BOOL)flushInMemoryLogIfPossibleReturningError:(id *)arg1;
- (BOOL)saveInMemoryLogReturningError:(id *)arg1;
- (BOOL)updateLocalLogWithRemoteLogData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) DVTFilePath *localLogFilePath;
- (NSString *)description;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1 forSchemeActionsInvocationRecord:(id)arg2;
- (id)dictionaryRepresentationForSchemeActionsInvocationRecord:(id)arg1;
- (BOOL)saveForSchemeActionRecord:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithResultName:(id)arg1 localResultDirectoryFilePath:(id)arg2 creatingWorkspaceFilePath:(id)arg3;

@end
