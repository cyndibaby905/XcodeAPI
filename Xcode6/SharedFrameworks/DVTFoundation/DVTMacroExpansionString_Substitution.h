

#import <DVTFoundation/DVTMacroExpansionString.h>

@class DVTMacroExpansionOperator;

@protocol DVTMacroExpansion;

@interface DVTMacroExpansionString_Substitution : DVTMacroExpansionString
{
    NSString<DVTMacroExpansion> *_macroNameExpr;
    BOOL _alwaysPreserve;
    unsigned int _numOperators;
    DVTMacroExpansionOperator *_operators[0];
}

+ (id)newWithOriginalString:(id)arg1 macroNameExpression:(id)arg2 preserveOriginalStringIfUnresolved:(BOOL)arg3 operators:(struct ArrayBuilder *)arg4;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (BOOL)dvt_isLiteral;
- (void)dealloc;
- (id)initWithOriginalString:(id)arg1 macroNameExpression:(id)arg2 preserveOriginalStringIfUnresolved:(BOOL)arg3 operators:(struct ArrayBuilder *)arg4;

@end

