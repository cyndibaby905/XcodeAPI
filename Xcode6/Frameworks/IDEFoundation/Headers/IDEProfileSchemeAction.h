

#import <IDEFoundation/IDESchemeAction.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTNotificationToken, IDERunnable, IDESchemeBuildableReference;

@protocol IDEAnalysisToolService;

@interface IDEProfileSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    IDERunnable *_runnable;
    NSMutableArray *_commandLineArgumentEntries;
    NSMutableArray *_environmentVariableEntries;
    id <IDEAnalysisToolService> _analysisToolService;
    BOOL _useCustomWorkingDirectory;
    NSString *_customWorkingDirectory;
    NSString *_resolvedCustomWorkingDirectory;
    BOOL _ignoresPersistentStateOnLaunch;
    BOOL _debugDocumentVersioning;
    BOOL _shouldUseLaunchSchemeArgsEnv;
    NSString *_buildConfiguration;
    NSString *_savedToolIdentifier;
    IDESchemeBuildableReference *_profileBuildableReferenceToUseForMacroExpansion;
    DVTNotificationToken *_buildablesToken;
    BOOL _askForAppToLaunch;
    Class _analysisToolServiceClass;
}

+ (id)keyPathsForValuesAffectingBuildableReferenceToUseForMacroExpansion;
+ (BOOL)automaticallyNotifiesObserversOfAnalysisToolService;
+ (id)keyPathsForValuesAffectingRunnable;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(retain) Class analysisToolServiceClass; // @synthesize analysisToolServiceClass=_analysisToolServiceClass;
@property BOOL askForAppToLaunch; // @synthesize askForAppToLaunch=_askForAppToLaunch;
@property BOOL useCustomWorkingDirectory; // @synthesize useCustomWorkingDirectory=_useCustomWorkingDirectory;
@property(nonatomic) BOOL shouldUseLaunchSchemeArgsEnv; // @synthesize shouldUseLaunchSchemeArgsEnv=_shouldUseLaunchSchemeArgsEnv;
@property(retain, nonatomic) NSString *savedToolIdentifier; // @synthesize savedToolIdentifier=_savedToolIdentifier;
@property BOOL ignoresPersistentStateOnLaunch; // @synthesize ignoresPersistentStateOnLaunch=_ignoresPersistentStateOnLaunch;
@property BOOL debugDocumentVersioning; // @synthesize debugDocumentVersioning=_debugDocumentVersioning;
@property(copy, nonatomic) NSString *customWorkingDirectory; // @synthesize customWorkingDirectory=_customWorkingDirectory;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
- (void)addMacroExpansion:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addEnvironmentVariables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCommandLineArguments:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildableProductRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPathRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setDebugDocumentVersioningFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIgnoresPersistentStateOnLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSavedToolIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldUseLaunchSchemeArgsEnvFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setUseCustomWorkingDirectoryFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAskForAppToLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)_expandMacrosInString:(id)arg1;
- (void)setBuildableReferenceToUseForMacroExpansion:(id)arg1;
- (id)buildableReferenceToUseForMacroExpansion;
@property(readonly) NSString *resolvedCustomWorkingDirectory; // @synthesize resolvedCustomWorkingDirectory=_resolvedCustomWorkingDirectory;
@property(readonly) NSDictionary *environmentVariables;
@property(readonly) NSMutableArray *mutableEnvironmentVariableEntries; // @dynamic mutableEnvironmentVariableEntries;
@property(copy) NSArray *environmentVariableEntries; // @dynamic environmentVariableEntries;
- (id)commandLineArgumentsForDevice:(id)arg1;
@property(readonly) NSMutableArray *mutableCommandLineArgumentEntries; // @dynamic mutableCommandLineArgumentEntries;
@property(copy) NSArray *commandLineArgumentEntries; // @dynamic commandLineArgumentEntries;
- (id)_profileOperationWithExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 testManager:(id)arg5 overridingTestingSpecifiers:(id)arg6 schemeActionRecord:(id)arg7 environmentVariables:(id)arg8 commandLineArguments:(id)arg9 outError:(id *)arg10 actionCallbackBlock:(CDUnknownBlockType)arg11;
- (id)_testRunnerForTestManager:(id)arg1 overridingTestingSpecifiers:(id)arg2;
- (id)profileOperationForExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 schemeActionRecord:(id)arg5 outError:(id *)arg6 actionCallbackBlock:(CDUnknownBlockType)arg7;
- (id)profileOperationWithTestManager:(id)arg1 executionEnvironment:(id)arg2 withBuildOperation:(id)arg3 buildParameters:(id)arg4 buildableProductDirectories:(id)arg5 overridingTestingSpecifiers:(id)arg6 schemeActionRecord:(id)arg7 outError:(id *)arg8 actionCallbackBlock:(CDUnknownBlockType)arg9;
- (id)_filePathsForContainersAndExtensions;
- (void)setSelectedAnalysisToolIdentifier:(id)arg1 forPlatformIdentifier:(id)arg2;
@property(retain) IDERunnable *runnable; // @synthesize runnable=_runnable;
- (void)_updateProfileActionBuildableToUseForMacroExpansion;
- (void)setRunContext:(id)arg1;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)primitiveInvalidate;
- (void)_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

