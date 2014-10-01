

#import <DVTFoundation/DVTMacroExpansionOperator.h>

@interface DVTMacroExpansionRetrievalOperator : DVTMacroExpansionOperator
{
}

- (id)dvt_debugDescription;
- (id)stringListByApplyingOperatorToStringList:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)init;

@end

