

#import <DVTFoundation/DVTConsoleLogger.h>

@interface IDEDistributionConsoleLogger : DVTConsoleLogger
{
    int _exclusiveLogLevel;
}

@property(readonly) int exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)initWithExclusiveLogLevel:(int)arg1;

@end

