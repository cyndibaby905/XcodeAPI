

#import <Foundation/Foundation.h>

@class DVTPerformanceTestOutput, IDETest, IDETestResult, NSArray, NSDate, NSMutableArray, NSMutableSet;

@interface _IDEOCUnitTestRecord : NSObject
{
    IDETest *_test;
    NSMutableArray *_outputMessages;
    unsigned long long _status;
    NSDate *_startDate;
    double _duration;
    DVTPerformanceTestOutput *_performanceTestOutput;
    NSMutableArray *_performanceMetrics;
    NSMutableSet *_failureLocationsForCurrentTest;
}

+ (void)initialize;
@property(readonly) NSMutableSet *failureLocationsForCurrentTest; // @synthesize failureLocationsForCurrentTest=_failureLocationsForCurrentTest;
@property(retain) NSMutableArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(copy) DVTPerformanceTestOutput *performanceTestOutput; // @synthesize performanceTestOutput=_performanceTestOutput;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property unsigned long long status; // @synthesize status=_status;
@property(readonly) IDETest *test; // @synthesize test=_test;
@property(readonly) IDETestResult *result;
- (id)initWithTest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableOutputMessages; // @dynamic mutableOutputMessages;
@property(copy) NSArray *outputMessages; // @dynamic outputMessages;

@end

