

#import <DVTFoundation/DVTRegistry.h>

@interface DVTMacroNameRegistry : DVTRegistry
{
    BOOL _defaultIsListType;
}

+ (void)initialize;
@property(readonly) BOOL defaultIsListType; // @synthesize defaultIsListType=_defaultIsListType;
- (BOOL)macroIsListType:(id)arg1;
- (void)registerMacroName:(id)arg1 isListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1 defaultIsListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1;
- (id)init;

@end

