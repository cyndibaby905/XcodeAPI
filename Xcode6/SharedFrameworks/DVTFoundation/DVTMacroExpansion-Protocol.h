

#import <Foundation/Foundation.h>

@class DVTMacroExpansionScope;

@protocol DVTMacroExpansion;

@protocol DVTMacroExpansion <NSObject, NSCopying>
- (NSString *)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (NSString<DVTMacroExpansion> *)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (NSArray *)dvt_evaluateAsStringListInScope:(DVTMacroExpansionScope *)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (NSString *)dvt_evaluateAsStringInScope:(DVTMacroExpansionScope *)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@end

