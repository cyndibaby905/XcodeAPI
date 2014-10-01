

#import <DVTFoundation/DVTMacroExpansionOperator.h>

@protocol DVTMacroExpansion;

@interface DVTMacroExpansionReplacementOperator : DVTMacroExpansionOperator
{
    NSString<DVTMacroExpansion> *_replExpr;
}

- (id)dvt_debugDescription;
- (id)stringListByApplyingOperatorToStringList:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)replacementExpression;
- (id)initWithReplacementExpression:(id)arg1;

@end

