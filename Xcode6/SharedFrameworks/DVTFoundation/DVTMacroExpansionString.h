

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTMacroExpansion-Protocol.h>

@interface DVTMacroExpansionString : NSString <DVTMacroExpansion>
{
    NSString *_origString;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@property(readonly, copy) NSString *description;
- (id)replacementObjectForCoder:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (BOOL)isEqual:(id)other;
@property(readonly) unsigned long long hash;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOriginalString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

