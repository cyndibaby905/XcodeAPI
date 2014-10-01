

#import <DVTFoundation/DVTMacroExpansionStringList.h>

@class NSArray;

@interface DVTMacroExpansionStringList_Literal : DVTMacroExpansionStringList
{
    NSArray *_literalStrings;
}

+ (id)newWithStringForm:(id)arg1 literalStrings:(id)arg2;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (NSString *)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)initWithStringForm:(id)arg1 literalStrings:(id)arg2;

@end

