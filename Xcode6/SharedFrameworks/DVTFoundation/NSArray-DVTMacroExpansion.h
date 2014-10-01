

#import <Foundation/Foundation.h>

@interface NSArray (DVTMacroExpansion)
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@end

