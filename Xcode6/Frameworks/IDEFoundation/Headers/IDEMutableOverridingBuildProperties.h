

#import <IDEFoundation/IDEOverridingBuildProperties.h>

@class DVTMacroDefinitionTable;

@interface IDEMutableOverridingBuildProperties : IDEOverridingBuildProperties
{
}

@property(copy) DVTMacroDefinitionTable *macrosFromEnvironmentXcconfigFile;
@property(copy) DVTMacroDefinitionTable *macrosFromCommandLineXcconfigFile;
@property(copy) DVTMacroDefinitionTable *macrosFromCommandLine;
@property(copy) DVTMacroDefinitionTable *synthesizedMacros;
- (void)setMacroDefinitionTable:(id)arg1 forLevel:(int)arg2;

@end

