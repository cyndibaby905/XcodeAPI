

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTPerformanceCheckpoint : NSObject
{
    NSString *_label;
    double _checkpointTime;
    id _statisticValues[0];
}

+ (id)newCheckpointWithLabel:(id)arg1;
@property(readonly) double checkpointTime; // @synthesize checkpointTime=_checkpointTime;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
- (void)iterateStatisticValues:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1;

@end

