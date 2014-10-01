

#import <Foundation/Foundation.h>

@class DVTMacroDefinitionTable, NSArray, NSMutableDictionary;

@interface IDEOverridingBuildProperties : NSObject
{
    NSMutableDictionary *_macros;
    NSArray *_arrayRepresentation;
    unsigned long long _hash;
}

- (id)dvt_detailedDebugDescription;
- (NSString *)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (BOOL)isEmpty;
- (id)macroDefinitionTables;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromEnvironmentXcconfigFile;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromCommandLineXcconfigFile;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromCommandLine;
@property(readonly, copy) DVTMacroDefinitionTable *synthesizedMacros;
- (void)_setMacroDefinitionTable:(id)arg1 forLevel:(int)arg2;
- (id)macroDefinitionTableForLevel:(int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyUsingOverridingPropertiesClass:(Class)arg1;
- (id)initWithMacroDefinitionTable:(id)arg1;
- (id)init;

@end

