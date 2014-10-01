

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/_IDETestResultsProcessorDelegate-Protocol.h>

@class DVTStackBacktrace, IDEExecutionEnvironment, NSMutableArray, NSMutableSet, NSString;

@interface IDEUnitTestsOperationsObserver : NSObject <_IDETestResultsProcessorDelegate, DVTInvalidation>
{
    NSMutableSet *_testResultsProcessors;
    NSMutableSet *_unitTestsObservers;
    NSMutableArray *_errors;
    BOOL _didHandleTestOperationsCompletion;
    CDUnknownBlockType _finishBlock;
    IDEExecutionEnvironment *_executionEnvironment;
}

+ (void)initialize;
@property BOOL didHandleTestOperationsCompletion; // @synthesize didHandleTestOperationsCompletion=_didHandleTestOperationsCompletion;
@property(retain) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(copy) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void)handleTestOperationsCompletionIfAppropriate;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2 sessionState:(id)arg3;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4 sessionState:(id)arg5;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testDidOutput:(id)arg1 sessionState:(id)arg2;
- (void)launchSessionStarted:(id)arg1;
- (void)removeAllUnitTestsObservers;
- (void)addUnitTestsObserver:(id)arg1;
- (void)registerRunOperation:(id)arg1 usesXCTest:(BOOL)arg2;
- (BOOL)willUseGCWithRunOperation:(id)arg1;
- (void)primitiveInvalidate;
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

