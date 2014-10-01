

@class DVTPerformanceTestOutput, DVTTestPerformanceMetricOutput, NSError, NSString, _IDETestResultsProcessor;

@protocol _IDETestResultsProcessorDelegate
- (void)handleTestOperationsCompletionIfAppropriate;
- (void)willFinishWithError:(NSError *)arg1 didCancel:(BOOL)arg2 sessionState:(_IDETestResultsProcessor *)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(NSString *)arg6 sessionState:(_IDETestResultsProcessor *)arg7;
- (void)testSuite:(NSString *)arg1 willFinishAt:(NSString *)arg2 rawOutput:(NSString *)arg3 sessionState:(_IDETestResultsProcessor *)arg4;
- (void)testCaseDidFinishForTestClass:(NSString *)arg1 method:(NSString *)arg2 withStatus:(NSString *)arg3 duration:(double)arg4 rawOutput:(NSString *)arg5 sessionState:(_IDETestResultsProcessor *)arg6;
- (void)testCaseDidProducePerformanceOutput:(DVTPerformanceTestOutput *)arg1 rawOutput:(NSString *)arg2 sessionState:(_IDETestResultsProcessor *)arg3;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(NSString *)arg1 method:(NSString *)arg2 performanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4 sessionState:(_IDETestResultsProcessor *)arg5;
- (void)testCaseDidFailForTestClass:(NSString *)arg1 method:(NSString *)arg2 withMessage:(NSString *)arg3 file:(NSString *)arg4 line:(long long)arg5 rawOutput:(NSString *)arg6 sessionState:(_IDETestResultsProcessor *)arg7;
- (void)testCaseDidStartForTestClass:(NSString *)arg1 method:(NSString *)arg2 rawOutput:(NSString *)arg3 sessionState:(_IDETestResultsProcessor *)arg4;
- (void)testSuite:(NSString *)arg1 didStartAt:(NSString *)arg2 rawOutput:(NSString *)arg3 sessionState:(_IDETestResultsProcessor *)arg4;
- (void)testDidOutput:(NSString *)arg1 sessionState:(_IDETestResultsProcessor *)arg2;
- (void)launchSessionStarted:(_IDETestResultsProcessor *)arg1;
@end

