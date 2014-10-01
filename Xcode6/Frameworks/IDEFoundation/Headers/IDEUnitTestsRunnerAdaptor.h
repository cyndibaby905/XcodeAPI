

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEUnitTestsObserver-Protocol.h>

@class DVTOperation, NSMutableArray, NSMutableDictionary, NSString;

@interface IDEUnitTestsRunnerAdaptor : NSObject <IDEUnitTestsObserver>
{
    NSMutableDictionary *_operationToTestRunnerLookup;
    NSMutableArray *_testsStack;
    DVTOperation *_currentOperation;
    double _testRunStartedTime;
}

@property(readonly) double testRunStartedTime; // @synthesize testRunStartedTime=_testRunStartedTime;
- (id)identifierForTestClass:(id)arg1 method:(id)arg2;
- (void)testOperationGroupDidFinish;
- (void)testOperation:(id)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testDidOutput:(id)arg1;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testOperationDidStartExecution:(id)arg1;
- (id)parsedTestFromTestClass:(id)arg1 method:(id)arg2;
- (id)currentTestRecord;
- (id)popTestRecord;
- (void)pushTestRecord:(id)arg1;
- (id)currentTestRunner;
- (void)registerOperations:(id)arg1 forTestRunner:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

