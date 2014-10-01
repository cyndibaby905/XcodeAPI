

#import <IDEFoundation/IDESchemeBasedCommandLineVerb.h>

@interface IDECleanCommandLineVerb : IDESchemeBasedCommandLineVerb
{
}

+ (BOOL)_cleanFolderAtPath:(id)arg1 withDisplayName:(id)arg2 environment:(id)arg3;
+ (id)_overridingValueForProperty:(id)arg1 inOverridingProperties:(id)arg2;
+ (BOOL)requiresScheme;
+ (int)performWithEnvironment:(id)arg1;
+ (int)cleanBuildFolderForWorkspace:(id)arg1 inEnvironment:(id)arg2;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

