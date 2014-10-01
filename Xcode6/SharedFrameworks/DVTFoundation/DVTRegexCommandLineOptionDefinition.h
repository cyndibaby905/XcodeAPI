

#import <DVTFoundation/DVTCommandLineOptionDefinition.h>

@class DVTRegularExpression;

@interface DVTRegexCommandLineOptionDefinition : DVTCommandLineOptionDefinition
{
    DVTRegularExpression *_matchRegex;
}

@property(readonly, copy) DVTRegularExpression *matchRegex; // @synthesize matchRegex=_matchRegex;
- (BOOL)handleArgument:(id)arg1 remainingArguments:(id)arg2 options:(id)arg3 status:(char *)arg4 error:(id *)arg5;
- (BOOL)matchesArgument:(id)arg1;
- (id)initWithName:(id)arg1 matchRegex:(id)arg2 usageName:(id)arg3 usageDescription:(id)arg4 argumentType:(long long)arg5 handlerBlock:(CDUnknownBlockType)arg6;

@end
