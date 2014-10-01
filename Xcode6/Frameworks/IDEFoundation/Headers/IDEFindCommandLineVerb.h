

#import <IDEFoundation/IDECommandLineVerb.h>

@interface IDEFindCommandLineVerb : IDECommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;
+ (id)filePathForLibraryWithName:(id)arg1 commandLineToolchainNames:(id)arg2 environmentVariables:(id)arg3 sdk:(id)arg4 diagnostics:(id *)arg5;
+ (id)filePathForExecutableWithName:(id)arg1 commandLineToolchainNames:(id)arg2 environmentVariables:(id)arg3 sdk:(id)arg4 diagnostics:(id *)arg5;

@end

