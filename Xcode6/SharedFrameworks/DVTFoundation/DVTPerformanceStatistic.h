

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTPerformanceStatistic : NSObject
{
    NSString *_name;
    CDUnknownBlockType _checkpointBlock;
    CDUnknownBlockType _logBlock;
}

+ (void)freezePerformanceStatisticRegistration;
+ (id)allStatistics;
+ (id)registerStatisticWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(readonly, copy) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(readonly, copy) CDUnknownBlockType checkpointBlock; // @synthesize checkpointBlock=_checkpointBlock;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;

@end

