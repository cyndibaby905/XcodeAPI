

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPerformanceTestParser-Protocol.h>

@class DVTRegularExpression;

@interface DVTPerformanceTestLogger_TimeForWork : NSObject <DVTPerformanceTestParser>
{
    DVTRegularExpression *_newRegularExpression;
    DVTRegularExpression *_regularExpression;
}

+ (void)testCaseWithClassName:(id)arg1 methodName:(id)arg2 logNumberOfTestIterations:(unsigned long long)arg3 minDuration:(double)arg4 maxDuration:(double)arg5 averageDuration:(double)arg6 standardDeviation:(double)arg7 firstIterationDuration:(double)arg8;
- (BOOL)performanceTestOutput:(id *)arg1 forInputString:(id)arg2;
- (id)init;

@end

