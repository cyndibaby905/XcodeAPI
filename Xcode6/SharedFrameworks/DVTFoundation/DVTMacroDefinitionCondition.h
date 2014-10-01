

#import <Foundation/Foundation.h>

@class DVTMacroDefinitionConditionParameter, NSString;

@interface DVTMacroDefinitionCondition : NSObject <NSCopying>
{
    DVTMacroDefinitionConditionParameter *_parameter;
    NSString *_valuePattern;
}

+ (id)conditionWithParameterName:(id)arg1 valuePattern:(id)arg2;
- (NSString *)description;
- (id)subscriptRepresentation;
- (long long)compare:(id)arg1;
- (BOOL)evaluateInScope:(id)arg1;
@property(readonly) NSString *valuePattern;
@property(readonly) DVTMacroDefinitionConditionParameter *parameter;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameterName:(id)arg1 valuePattern:(id)arg2;

@end

