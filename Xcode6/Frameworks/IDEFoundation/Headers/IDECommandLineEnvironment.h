

#import <Foundation/Foundation.h>
#import <IDEFoundation/IDEMutableOverridingBuildProperties.h>

@class DVTFilePath, IDEContainer, IDEMutableOverridingBuildProperties, IDERunDestination, IDEScheme, IDEWorkspace, NSArray, NSDictionary, NSFileHandle, NSSet, NSString;

@interface IDECommandLineEnvironment : NSObject
{
    NSArray *_arguments;
    NSDictionary *_environment;
    DVTFilePath *_workingDirectory;
    NSDictionary *_commandLineOptions;
    NSArray *_commandLineUnparsedArguments;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    IDEWorkspace *_workspace;
    IDEContainer<IDEBlueprintProvider> *_primaryBlueprintProvider;
    IDEScheme *_scheme;
    NSSet *_blueprints;
    IDEMutableOverridingBuildProperties *_buildProperties;
    NSString *_buildConfiguration;
    IDERunDestination *_runDestination;
}

@property(retain, nonatomic) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(copy, nonatomic) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(retain, nonatomic) IDEMutableOverridingBuildProperties *buildProperties; // @synthesize buildProperties=_buildProperties;
@property(copy, nonatomic) NSSet *blueprints; // @synthesize blueprints=_blueprints;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) IDEContainer<IDEBlueprintProvider> *primaryBlueprintProvider; // @synthesize primaryBlueprintProvider=_primaryBlueprintProvider;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain, nonatomic) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain, nonatomic) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy, nonatomic) NSArray *commandLineUnparsedArguments; // @synthesize commandLineUnparsedArguments=_commandLineUnparsedArguments;
@property(copy, nonatomic) NSDictionary *commandLineOptions; // @synthesize commandLineOptions=_commandLineOptions;
@property(retain, nonatomic) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;

@end

