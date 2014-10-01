

#import <DVTFoundation/DVTFileLogger.h>

@interface IDEDistributionFileLogger : DVTFileLogger
{
    int _exclusiveLogLevel;
}

@property(readonly) int exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2 exclusiveLogLevel:(int)arg3;

@end

