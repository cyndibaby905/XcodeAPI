

#import <DVTFoundation/DVTMacroExpansionString.h>

@protocol DVTMacroExpansion;

@interface DVTMacroExpansionString_Concatenation : DVTMacroExpansionString
{
    unsigned long long _numSubstrings;
    NSString<DVTMacroExpansion> *_substrings[0];
}

+ (id)newWithOriginalString:(id)arg1 substrings:(struct ArrayBuilder *)arg2;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (BOOL)dvt_isLiteral;
- (void)dealloc;
- (id)initWithOriginalString:(id)arg1 substrings:(struct ArrayBuilder *)arg2;

@end

