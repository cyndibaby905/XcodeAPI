

#import <Foundation/Foundation.h>

@class DVTPerformanceTestOutput, IDETest, NSArray, NSDate;

@interface IDETestResult : NSObject
{
    IDETest *_test;
    unsigned long long _status;
    NSDate *_date;
    double _duration;
    DVTPerformanceTestOutput *_performanceTestOutput;
    NSArray *_performanceMetrics;
    NSArray *_messages;
}

@property(readonly) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(readonly, copy) NSArray *messages; // @synthesize messages=_messages;
@property(readonly) DVTPerformanceTestOutput *performanceTestOutput; // @synthesize performanceTestOutput=_performanceTestOutput;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly) IDETest *test; // @synthesize test=_test;
- (id)initWithTest:(id)arg1 status:(unsigned long long)arg2 date:(id)arg3 duration:(double)arg4 performanceMetrics:(id)arg5 performanceTestOutput:(id)arg6 messages:(id)arg7;

@end

