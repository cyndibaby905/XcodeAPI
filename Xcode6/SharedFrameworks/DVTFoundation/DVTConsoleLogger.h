

#import <DVTFoundation/DVTLogger.h>

@interface DVTConsoleLogger : DVTLogger
{
    unsigned long long _indentLevel;
}

+ (void)initialize;
@property unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;

@end

