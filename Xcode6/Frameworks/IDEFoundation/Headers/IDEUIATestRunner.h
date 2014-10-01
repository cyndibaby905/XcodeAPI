

#import <IDEFoundation/IDEStandardTestRunner.h>

@class DVTObservingToken, IDEUIATestScriptAgentCommunicator, NSDictionary, NSOperationQueue;

@interface IDEUIATestRunner : IDEStandardTestRunner
{
    NSOperationQueue *_commandLineArgsQueue;
    DVTObservingToken *_debugSessionHasStartedObserverToken;
    NSDictionary *_buildConfigurationDictionary;
    NSDictionary *_argumentsDictionary;
    IDEUIATestScriptAgentCommunicator *_agentCommunicator;
}

+ (void)initialize;
@property(retain) IDEUIATestScriptAgentCommunicator *agentCommunicator; // @synthesize agentCommunicator=_agentCommunicator;
@property(retain) NSDictionary *argumentsDictionary; // @synthesize argumentsDictionary=_argumentsDictionary;
@property(retain) NSDictionary *buildConfigurationDictionary; // @synthesize buildConfigurationDictionary=_buildConfigurationDictionary;
- (id)_scheduledTestArgumentsOperationForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 testRunIdentifier:(id)arg4 testRunIdentifiers:(id)arg5 error:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)_writeTestInvocationScope:(id)arg1 forTestBundlePath:(id)arg2 inWorkspace:(id)arg3 invertScope:(BOOL)arg4;
- (void)_configureCommunicatorWithBuildConfigurationDictionary;
- (id)testRunDictionaryWithWorkspace:(id)arg1 supportMultiple:(BOOL)arg2 supportInverse:(BOOL)arg3 invert:(char *)arg4;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (id)testOperationsForExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 runDestination:(id)arg4 workspace:(id)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)defaultTestArgumentsOperationForBuildParameters:(id)arg1 launchParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 error:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithBuildableProduct:(id)arg1;

// Remaining properties
@property(retain) id <IDEBuildableProduct> buildableProduct;

@end

