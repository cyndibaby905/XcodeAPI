

#import <Foundation/Foundation.h>

@class NSMutableDictionary;

@interface IDETestBaselineRecord : NSObject
{
    NSMutableDictionary *_performanceMetricIdentifiersDict;
    NSMutableDictionary *_classNamesDict;
}

+ (void)initialize;
- (void)unionWithBaselineRecord:(id)arg1;
- (void)unionWithTestClassName:(id)arg1 testMethodName:(id)arg2 inBaselineRecord:(id)arg3;
- (void)unionWithDefaultsInBaselineRecord:(id)arg1;
- (void)setBaselineForTestClassName:(id)arg1 testMethodName:(id)arg2 performanceMetricIdentifier:(id)arg3 maxPercentRegression:(id)arg4 maxPercentImprovement:(id)arg5 maxPercentRelativeStandardDeviation:(id)arg6 maxRegression:(id)arg7 maxStandardDeviation:(id)arg8;
- (void)setBaselineForTestClassName:(id)arg1 testMethodName:(id)arg2 performanceMetricIdentifier:(id)arg3 baselineDisplayName:(id)arg4 average:(id)arg5 maxPercentRegression:(id)arg6 maxPercentImprovement:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10;
- (void)_setBaselineForTestClassName:(id)arg1 testMethodName:(id)arg2 performanceMetricIdentifier:(id)arg3 baselineDisplayName:(id)arg4 average:(id)arg5 maxPercentRegression:(id)arg6 maxPercentImprovement:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10;
- (id)baselineForTestClassName:(id)arg1 testMethodName:(id)arg2 performanceMetricIdentifier:(id)arg3;
- (void)setDefaultBaselineForPerformanceMetricIdentifier:(id)arg1 maxPercentRegression:(id)arg2 maxPercentImprovement:(id)arg3 maxPercentRelativeStandardDeviation:(id)arg4 maxRegression:(id)arg5 maxStandardDeviation:(id)arg6;
- (id)defaultBaselineForPerformanceMetricIdentifier:(id)arg1;
- (id)performanceMetricIdentifiersWithDefaultBaseline;
- (id)performanceMetricIdentifiersForClassName:(id)arg1 testMethodName:(id)arg2;
- (id)testMethodNamesForClassName:(id)arg1;
- (id)testClassNames;
- (BOOL)writeToFilePath:(id)arg1 workspace:(id)arg2 versionedFileManager:(id)arg3 error:(id *)arg4;
- (id)_plistDataWithError:(id *)arg1;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;
- (BOOL)_validatePropertyList:(id)arg1 errorString:(id *)arg2;
- (BOOL)_validateClassNamesDictionary:(id)arg1 locationDescription:(id)arg2 errorString:(id *)arg3;
- (BOOL)_validatePerformanceMetricBaselinesByPerformanceMetricIdentifierDictionary:(id)arg1 locationDescription:(id)arg2 errorString:(id *)arg3;
- (id)init;

@end

