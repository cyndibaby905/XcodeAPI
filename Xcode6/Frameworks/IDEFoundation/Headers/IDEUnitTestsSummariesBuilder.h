

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEUnitTestsObserver-Protocol.h>

@class IDESchemeActionResult, IDESchemeActionTestSummaryGroup, IDESchemeActionTestableSummary, NSMutableArray, NSString;

@interface IDEUnitTestsSummariesBuilder : NSObject <IDEUnitTestsObserver>
{
    IDESchemeActionTestableSummary *_currentTestable;
    IDESchemeActionTestSummaryGroup *_currentTestGroup;
    NSMutableArray *_testSuiteStack;
    NSMutableArray *_performanceMetricSummaries;
    NSMutableArray *_failureSummaries;
    IDESchemeActionResult *_actionResult;
}

@property(retain, nonatomic) IDESchemeActionResult *actionResult; // @synthesize actionResult=_actionResult;
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
- (void)_popSuite;
- (void)_pushSuite:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
