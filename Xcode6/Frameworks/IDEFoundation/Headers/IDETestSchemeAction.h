

#import <IDEFoundation/IDESchemeAction.h>

@class DVTNotificationToken, DVTObservingToken, IDESchemeBuildableReference, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IDETestSchemeAction : IDESchemeAction
{
    NSMutableArray *_testableReferences;
    NSMutableArray *_loadingTestableReferences;
    NSString *_selectedDebuggerIdentifier;
    NSString *_selectedLauncherIdentifier;
    NSMutableArray *_commandLineArgumentEntries;
    NSMutableArray *_environmentVariableEntries;
    BOOL _shouldUseLaunchSchemeArgsEnv;
    DVTObservingToken *_testablesObservingToken;
    DVTObservingToken *_skippedTestsObservingToken;
    DVTObservingToken *_workspaceRunnableProductsToken;
    DVTNotificationToken *_buildablesToken;
    NSString *_buildConfiguration;
    NSArray *_hostBuildableReferences;
    IDESchemeBuildableReference *_testBuildableReferenceToUseForMacroExpansion;
}

+ (id)keyPathsForValuesAffectingBuildableReferenceToUseForMacroExpansion;
+ (id)keyPathsForValuesAffectingTestBuildableReferences;
+ (BOOL)_initializedForUserInteraction;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(nonatomic) BOOL shouldUseLaunchSchemeArgsEnv; // @synthesize shouldUseLaunchSchemeArgsEnv=_shouldUseLaunchSchemeArgsEnv;
@property(copy) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
- (void)setTestOrTestable:(id)arg1 enabled:(BOOL)arg2;
- (void)_disableTestOrTestable:(id)arg1;
- (void)_enableTestOrTestable:(id)arg1;
- (void)_postEnabledStateNotification;
- (BOOL)isTestOrTestableEnabled:(id)arg1;
- (id)_testableReferenceForTest:(id)arg1;
- (BOOL)_isEnabledTestable:(id)arg1;
- (BOOL)_isEnabledTest:(id)arg1;
- (BOOL)_isTestEditable:(id)arg1;
- (BOOL)needsNewSchemeVersionForLocationSimulation;
- (BOOL)needsNewSchemeVersionForAppDataPackages;
- (void)addMacroExpansion:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addEnvironmentVariables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCommandLineArguments:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addTestables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldUseLaunchSchemeArgsEnvFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)primitiveInvalidate;
- (id)_expandMacrosInString:(id)arg1;
- (void)setBuildableReferenceToUseForMacroExpansion:(id)arg1;
- (id)buildableReferenceToUseForMacroExpansion;
- (BOOL)_shouldDebugAppExtensions;
- (BOOL)_shouldDebugXPCServices;
@property(readonly) NSDictionary *environmentVariables;
@property(readonly) NSMutableArray *mutableEnvironmentVariableEntries; // @dynamic mutableEnvironmentVariableEntries;
@property(copy) NSArray *environmentVariableEntries; // @dynamic environmentVariableEntries;
@property(readonly) NSArray *commandLineArguments;
@property(readonly) NSMutableArray *mutableCommandLineArgumentEntries; // @dynamic mutableCommandLineArgumentEntries;
@property(copy) NSArray *commandLineArgumentEntries; // @dynamic commandLineArgumentEntries;
- (void)_updateTestActionBuildableToUseForMacroExpansion;
@property(copy) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
- (void)setRunContext:(id)arg1;
@property(readonly, getter=isTestable) BOOL testable;
@property(readonly) NSArray *testBuildableReferences;
@property(readonly) NSArray *hostBuildableReferences;
- (void)testableDidChangeHost:(id)arg1;
- (id)testOperationWithTestManager:(id)arg1 executionEnvironment:(id)arg2 withBuildOperation:(id)arg3 buildParameters:(id)arg4 schemeCommand:(id)arg5 actionRecord:(id)arg6 overridingTestingSpecifiers:(id)arg7 outError:(id *)arg8 actionCallbackBlock:(CDUnknownBlockType)arg9;
- (id)filePathForOptimizationProfileFile:(id)arg1 withBuildParameters:(id)arg2 schemeCommand:(id)arg3;
- (id)firstBuildableContainingBuildSetting:(id)arg1 withBuildParameters:(id)arg2 schemeCommand:(id)arg3;
- (id)effectiveBlueprintForOptimizationProfileGenerationForSchemeCommand:(id)arg1;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)_commonInit;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableTestableReferences; // @dynamic mutableTestableReferences;
@property(copy) NSArray *testableReferences; // @dynamic testableReferences;

@end

