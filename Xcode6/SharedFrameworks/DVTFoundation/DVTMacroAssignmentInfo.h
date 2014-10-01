

#import <Foundation/Foundation.h>

@class DVTMacroDefinitionConditionSet, NSString;

@protocol DVTMacroExpansion;

@interface DVTMacroAssignmentInfo : NSObject
{
    NSString *_macroName;
    id <DVTMacroExpansion> _value;
    DVTMacroDefinitionConditionSet *_conditionSet;
}

+ (id)newWithMacroName:(id)arg1 value:(id)arg2 conditionSet:(id)arg3;
@property(readonly) DVTMacroDefinitionConditionSet *conditionSet; // @synthesize conditionSet=_conditionSet;
@property(readonly) id <DVTMacroExpansion> value; // @synthesize value=_value;
@property(readonly) NSString *macroName; // @synthesize macroName=_macroName;
- (id)initWithMacroName:(id)arg1 value:(id)arg2 conditionSet:(id)arg3;

@end
