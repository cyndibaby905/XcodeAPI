

#import <DVTFoundation/DVTMacroExpansionString.h>

@interface DVTMacroExpansionString_Literal : DVTMacroExpansionString
{
    unsigned long long _hashValue;
}

+ (id)newWithLiteralString:(id)arg1;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (NSUInteger)hash;
- (BOOL)dvt_isLiteral;
- (id)initWithLiteralString:(id)arg1;

@end

