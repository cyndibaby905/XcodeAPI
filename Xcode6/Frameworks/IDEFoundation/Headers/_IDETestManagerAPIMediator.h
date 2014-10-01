

#import <IDEFoundation/_IDETestResultsProcessor.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEConsoleAdaptorDelegateProtocol-Protocol.h>
#import <IDEFoundation/XCTestManager_IDEInterface-Protocol.h>

@class DTXConnection, DVTObservingToken, DVTStackBacktrace, IDEConsoleAdaptor;

@interface _IDETestManagerAPIMediator : _IDETestResultsProcessor <DVTInvalidation, XCTestManager_IDEInterface, IDEConsoleAdaptorDelegateProtocol>
{
    BOOL _testPlanDidStartExecuting;
    BOOL _hasFailed;
    BOOL _readyForTestBundleToConnect;
    BOOL _loggingFromTarget;
    BOOL _targetIsiOSSimulator;
    id <XCTestDriverInterface> _testBundleProxy;
    NSTimer *_startupTimeoutTimer;
    DVTObservingToken *_launchSessionStartObserverToken;
    DVTObservingToken *_debugSessionHasCrashedObserverToken;
    DVTObservingToken *_runOperationCancellationObservationToken;
    DVTObservingToken *_runOperationErrorObservationToken;
    id _disallowFinishToken;
    long long _testProtocolVersion;
    DVTObservingToken *_launchSessionsConsoleAdaptorsObserverToken;
    NSMutableString *_consoleBuffer;
    NSMutableArray *_consoleChunkQueue;
    NSMutableArray *_delegateBlockQueue;
    IDEConsoleAdaptor *_consoleAdaptor;
    NSArray *_finalCommandLineArguments;
    NSOutputStream *_statusStream;
    dispatch_queue_t _statusStreamQueue;
    NSString *_statusLogPath;
    DTXConnection *_connection;
    NSDateFormatter *_loggingDateFormatter;
    NSString *_unprocessedConsoleOutput;
    dispatch_source_t _acceptSource;
}

@property(retain) dispatch_source_t acceptSource; // @synthesize acceptSource=_acceptSource;
@property BOOL targetIsiOSSimulator; // @synthesize targetIsiOSSimulator=_targetIsiOSSimulator;
@property(retain) NSString *unprocessedConsoleOutput; // @synthesize unprocessedConsoleOutput=_unprocessedConsoleOutput;
@property BOOL loggingFromTarget; // @synthesize loggingFromTarget=_loggingFromTarget;
@property(retain) NSDateFormatter *loggingDateFormatter; // @synthesize loggingDateFormatter=_loggingDateFormatter;
@property(retain) DTXConnection *connection; // @synthesize connection=_connection;
@property(retain) NSString *statusLogPath; // @synthesize statusLogPath=_statusLogPath;
@property(retain) dispatch_queue_t statusStreamQueue; // @synthesize statusStreamQueue=_statusStreamQueue;
@property(retain) NSOutputStream *statusStream; // @synthesize statusStream=_statusStream;
@property(retain) NSArray *finalCommandLineArguments; // @synthesize finalCommandLineArguments=_finalCommandLineArguments;
@property(retain, nonatomic) IDEConsoleAdaptor *consoleAdaptor; // @synthesize consoleAdaptor=_consoleAdaptor;
@property(retain) NSMutableArray *delegateBlockQueue; // @synthesize delegateBlockQueue=_delegateBlockQueue;
@property(retain) NSMutableArray *consoleChunkQueue; // @synthesize consoleChunkQueue=_consoleChunkQueue;
@property(retain) NSMutableString *consoleBuffer; // @synthesize consoleBuffer=_consoleBuffer;
@property(retain) DVTObservingToken *launchSessionsConsoleAdaptorsObserverToken; // @synthesize launchSessionsConsoleAdaptorsObserverToken=_launchSessionsConsoleAdaptorsObserverToken;
@property long long testProtocolVersion; // @synthesize testProtocolVersion=_testProtocolVersion;
@property(retain) id disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
@property BOOL readyForTestBundleToConnect; // @synthesize readyForTestBundleToConnect=_readyForTestBundleToConnect;
@property BOOL hasFailed; // @synthesize hasFailed=_hasFailed;
@property BOOL testPlanDidStartExecuting; // @synthesize testPlanDidStartExecuting=_testPlanDidStartExecuting;
@property(retain) DVTObservingToken *runOperationErrorObservationToken; // @synthesize runOperationErrorObservationToken=_runOperationErrorObservationToken;
@property(retain) DVTObservingToken *runOperationCancellationObservationToken; // @synthesize runOperationCancellationObservationToken=_runOperationCancellationObservationToken;
@property(retain) DVTObservingToken *debugSessionHasCrashedObserverToken; // @synthesize debugSessionHasCrashedObserverToken=_debugSessionHasCrashedObserverToken;
@property(retain) DVTObservingToken *launchSessionStartObserverToken; // @synthesize launchSessionStartObserverToken=_launchSessionStartObserverToken;
@property(retain) NSTimer *startupTimeoutTimer; // @synthesize startupTimeoutTimer=_startupTimeoutTimer;
@property(retain) id <XCTestDriverInterface> testBundleProxy; // @synthesize testBundleProxy=_testBundleProxy;
- (id)_XCT_logMessage:(id)arg1;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 withFailures:(id)arg4 unexpected:(id)arg5 testDuration:(id)arg6 totalDuration:(id)arg7;
- (id)_XCT_testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(id)arg4;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureValues:(id)arg3 forPerformanceMetricID:(id)arg4 name:(id)arg5 withUnits:(id)arg6 baselineName:(id)arg7 baselineAverage:(id)arg8 maxPercentRegression:(id)arg9 maxPercentRelativeStandardDeviation:(id)arg10 file:(id)arg11 line:(id)arg12;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureMetric:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didStallOnMainThreadInFile:(id)arg3 line:(id)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(id)arg1 method:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didStartAt:(id)arg2;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_testBundleReady;
- (BOOL)validateEvent:(int)arg1;
- (void)_executeDelegateBlockWithNextConsoleChunk:(CDUnknownBlockType)arg1;
- (void)_considerDispatchingDelegateBlock;
- (void)_flushDelegateBlockQueue;
- (void)_delegateBlockQueueTimeoutTimerFired;
- (void)_considerFlushingDelegateBlockQueue;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (void)_finishWithError:(id)arg1 didCancel:(BOOL)arg2;
- (void)_detectAndMessageTrace_r17733855_fromError:(id)arg1;
- (void)_reportStartupProgress:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)_startupTimedOut:(id)arg1;
- (void)_logAtLevel:(int)arg1 message:(id)arg2;
- (void)_logMessage:(id)arg1 fromTarget:(BOOL)arg2;
- (void)_handleUnexpectedFailureDuringTestExecution:(id)arg1;
- (void)_reportStartupFailure:(id)arg1;
- (void)_waitForTestProcessToConnect;
- (void)_waitForLaunch;
- (void)_handleDaemonConnection:(id)arg1;
- (void)_setupTestBundleConnectionWithTransport:(id)arg1;
- (BOOL)_setupTransportForUDSAtPath:(id)arg1 errorMessage:(id *)arg2;
- (void)_setupObserversForTestOperation:(id)arg1;
- (void)_prepareStatusLoggingStream;
- (id)initWithSessionStateDelegate:(id)arg1 andOperation:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

