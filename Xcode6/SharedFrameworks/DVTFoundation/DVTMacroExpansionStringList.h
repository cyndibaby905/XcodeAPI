

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTMacroExpansion-Protocol.h>

@protocol DVTMacroExpansion;

@interface DVTMacroExpansionStringList : NSArray <DVTMacroExpansion>
{
    NSString<DVTMacroExpansion> *_stringForm;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@property(readonly, copy) NSString *description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)other;
@property(readonly) unsigned long long hash;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

