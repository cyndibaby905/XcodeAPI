

#import <Foundation/Foundation.h>

@class DVTPerformanceTestOutput, DVTTestPerformanceMetricOutput, IDERunOperation, NSError, NSString;

@protocol IDEUnitTestsObserver <NSObject>
- (NSString *)identifierForTestClass:(NSString *)arg1 method:(NSString *)arg2;
- (void)testOperationGroupDidFinish;
- (void)testOperation:(IDERunOperation *)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(NSError *)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(NSString *)arg6;
- (void)testSuite:(NSString *)arg1 willFinishAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testDidOutput:(NSString *)arg1;
- (void)testCaseDidProducePerformanceOutput:(DVTPerformanceTestOutput *)arg1 rawOutput:(NSString *)arg2;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(NSString *)arg1 method:(NSString *)arg2 performanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)testCaseDidFailForTestClass:(NSString *)arg1 method:(NSString *)arg2 withMessage:(NSString *)arg3 file:(NSString *)arg4 line:(long long)arg5 rawOutput:(NSString *)arg6;
- (void)testCaseDidFinishForTestClass:(NSString *)arg1 method:(NSString *)arg2 withStatus:(NSString *)arg3 duration:(double)arg4 rawOutput:(NSString *)arg5;
- (void)testCaseDidStartForTestClass:(NSString *)arg1 method:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testSuite:(NSString *)arg1 didStartAt:(NSString *)arg2 rawOutput:(NSString *)arg3;
- (void)testOperationDidStartExecution:(IDERunOperation *)arg1;
@end
