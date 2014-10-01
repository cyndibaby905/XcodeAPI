

#import <DVTFoundation/DVTMacroExpansionReplacementOperator.h>

@class NSError;

@interface DVTMacroExpansionReplacementOperatorWithParseError : DVTMacroExpansionReplacementOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithReplacementExpression:(id)arg1 parseError:(id)arg2;

@end

