

#import <Foundation/Foundation.h>

@class DVTMacroDefinitionCondition, NSArray, NSString;

@interface DVTMacroDefinitionConditionSet : NSObject <NSCopying, NSFastEnumeration>
{
    unsigned long long _combinedHash;
    unsigned long long _combinedPrecedence;
    NSString *_subscriptRep;
    NSArray *_parameterNames;
    unsigned long long _count;
    DVTMacroDefinitionCondition *_conditions[0];
}

+ (id)conditionSetFromStringRepresentation:(id)arg1 getBaseMacroName:(id *)arg2 error:(id *)arg3;
+ (id)conditionSetWithCondition:(id)arg1;
+ (id)conditionSetWithConditions:(id)arg1;
+ (id)conditionSetWithConditions:(const id *)arg1 count:(unsigned long long)arg2;
- (NSString *)description;
- (long long)compare:(id)arg1;
- (id)subscriptRepresentation;
- (BOOL)evaluateInScope:(id)arg1;
- (unsigned long long)precedence;
- (id)conditionForParameterNamed:(id)arg1;
- (id)parameterNames;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)containsCondition:(id)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)conditionSetByRemovingParameterNamed:(id)arg1;
- (id)conditionSetByAddingCondition:(id)arg1;
- (void)dealloc;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end

