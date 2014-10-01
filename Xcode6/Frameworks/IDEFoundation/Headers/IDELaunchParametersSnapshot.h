

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEEntityIdentifier, IDELocationScenarioReference, IDESchemeOptionReference, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;

@interface IDELaunchParametersSnapshot : NSObject
{
    BOOL _askOnLaunchChangedRunnable;
    BOOL _allowLocationSimulation;
    BOOL _showNonLocalizedStrings;
    BOOL _debugAsAService;
    BOOL _testingUsesDirectReportingConnection;
    BOOL _usingCommandLineUnitTesting;
    BOOL _debugXPCServices;
    BOOL _debugAppExtensions;
    BOOL _viewDebuggingEnabled;
    BOOL _shouldGenerateOptimizationProfile;
    int _launchStyle;
    int _launchAutomaticallySubstyle;
    int _runnableType;
    unsigned int _debugProcessAsUID;
    int _enableGPUFrameCaptureMode;
    int _enableGPUValidationMode;
    int _debugServiceFD;
    int _internalIOSLaunchStyle;
    NSMutableDictionary *_testingEnvironmentVariables;
    NSDictionary *_environmentVariables;
    NSArray *_commandLineArgs;
    DVTFilePath *_runnableLocation;
    DVTFilePath *_filePathToBinary;
    IDEEntityIdentifier *_schemeIdentifier;
    NSString *_selectedLauncherIdentifier;
    NSString *_selectedDebuggerIdentifier;
    NSString *_runnableBundleIdentifier;
    NSDictionary *_appExtensionBuiltPaths;
    DVTFilePath *_replacementRunnableLocation;
    DVTFilePath *_workingDirectory;
    NSString *_architecture;
    IDELocationScenarioReference *_locationScenarioReference;
    NSString *_language;
    NSString *_region;
    IDESchemeOptionReference *_routingCoverageFileReference;
    NSString *_sdkPath;
    NSString *_remoteInstallPath;
    id _debugServiceObject;
    id _deviceArbitrationObject;
    NSString *_platformIdentifier;
    NSString *_buildConfiguration;
    id <IDEBuildableProduct> _buildableProduct;
    NSSet *_additionalInstallations;
    NSSet *_buildProductDirectories;
    NSArray *_testingCommandLineArgs;
    NSArray *_testingAdditionalBuiltDependenciesProductPaths;
    NSString *_testScopeFilePath;
    NSString *_testBaselineFilePath;
    NSUUID *_testSessionIdentifier;
    NSString *_testingDirectReportingSocketPath;
    NSDictionary *_additionalDeviceSubstitutionPaths;
    NSString *_deviceAppDataPackage;
    NSString *_optimizationProfilePathString;
    NSString *_internalIOSSubstitutionApp;
    NSString *_customLaunchCommand;
}

+ (id)environmentVariablesToMergeFromTestingEnvironmentVariables;
+ (id)launchParametersWithSchemeIdentifier:(id)arg1 launcherIdentifier:(id)arg2 debuggerIdentifier:(id)arg3 launchStyle:(int)arg4 runnableLocation:(id)arg5 debugProcessAsUID:(unsigned int)arg6 workingDirectory:(id)arg7 commandLineArgs:(id)arg8 environmentVariables:(id)arg9 architecture:(id)arg10 platformIdentifier:(id)arg11 buildConfiguration:(id)arg12 buildableProduct:(id)arg13 deviceAppDataPackage:(id)arg14 allowLocationSimulation:(BOOL)arg15 locationScenarioReference:(id)arg16 showNonLocalizedStrings:(BOOL)arg17 language:(id)arg18 region:(id)arg19 routingCoverageFileReference:(id)arg20 enableGPUFrameCaptureMode:(int)arg21 enableGPUValidationMode:(int)arg22 debugXPCServices:(BOOL)arg23 debugAppExtensions:(BOOL)arg24 internalIOSLaunchStyle:(int)arg25 internalIOSSubstitutionApp:(id)arg26 launchAutomaticallySubstyle:(int)arg27;
+ (id)launchParametersWithSchemeIdentifier:(id)arg1 launcherIdentifier:(id)arg2 debuggerIdentifier:(id)arg3 launchStyle:(int)arg4 runnableLocation:(id)arg5 debugProcessAsUID:(unsigned int)arg6 workingDirectory:(id)arg7 commandLineArgs:(id)arg8 environmentVariables:(id)arg9 architecture:(id)arg10 platformIdentifier:(id)arg11 buildConfiguration:(id)arg12 buildableProduct:(id)arg13 deviceAppDataPackage:(id)arg14 allowLocationSimulation:(BOOL)arg15 locationScenarioReference:(id)arg16 showNonLocalizedStrings:(BOOL)arg17 language:(id)arg18 region:(id)arg19 routingCoverageFileReference:(id)arg20 enableGPUFrameCaptureMode:(int)arg21 enableGPUValidationMode:(int)arg22 simulatorIPhoneDisplay:(id)arg23 simulatorIPadDisplay:(id)arg24 debugXPCServices:(BOOL)arg25 additionalXPCServicesToDebug:(id)arg26 internalIOSLaunchStyle:(int)arg27 internalIOSSubstitutionApp:(id)arg28 launchAutomaticallySubstyle:(int)arg29;
+ (id)launchParametersWithSchemeIdentifier:(id)arg1 launcherIdentifier:(id)arg2 debuggerIdentifier:(id)arg3 launchStyle:(int)arg4 runnableLocation:(id)arg5 debugProcessAsUID:(unsigned int)arg6 workingDirectory:(id)arg7 commandLineArgs:(id)arg8 environmentVariables:(id)arg9 architecture:(id)arg10 platformIdentifier:(id)arg11 buildConfiguration:(id)arg12 buildableProduct:(id)arg13 deviceAppDataPackage:(id)arg14 allowLocationSimulation:(BOOL)arg15 locationScenarioReference:(id)arg16 showNonLocalizedStrings:(BOOL)arg17 language:(id)arg18 region:(id)arg19 routingCoverageFileReference:(id)arg20 enableOpenGLFrameCaptureMode:(int)arg21 enableOpenGLPerformanceAnalysisMode:(int)arg22 simulatorIPhoneDisplay:(id)arg23 simulatorIPadDisplay:(id)arg24 debugXPCServices:(BOOL)arg25 additionalXPCServicesToDebug:(id)arg26 internalIOSLaunchStyle:(int)arg27 internalIOSSubstitutionApp:(id)arg28 launchAutomaticallySubstyle:(int)arg29;
@property(copy) NSString *customLaunchCommand; // @synthesize customLaunchCommand=_customLaunchCommand;
@property(copy) NSString *internalIOSSubstitutionApp; // @synthesize internalIOSSubstitutionApp=_internalIOSSubstitutionApp;
@property(copy, nonatomic) NSString *optimizationProfilePathString; // @synthesize optimizationProfilePathString=_optimizationProfilePathString;
@property BOOL shouldGenerateOptimizationProfile; // @synthesize shouldGenerateOptimizationProfile=_shouldGenerateOptimizationProfile;
@property BOOL viewDebuggingEnabled; // @synthesize viewDebuggingEnabled=_viewDebuggingEnabled;
@property int internalIOSLaunchStyle; // @synthesize internalIOSLaunchStyle=_internalIOSLaunchStyle;
@property(readonly) BOOL debugAppExtensions; // @synthesize debugAppExtensions=_debugAppExtensions;
@property(readonly) BOOL debugXPCServices; // @synthesize debugXPCServices=_debugXPCServices;
@property(readonly) NSString *deviceAppDataPackage; // @synthesize deviceAppDataPackage=_deviceAppDataPackage;
@property(copy) NSDictionary *additionalDeviceSubstitutionPaths; // @synthesize additionalDeviceSubstitutionPaths=_additionalDeviceSubstitutionPaths;
@property(getter=isUsingCommandLineUnitTesting) BOOL usingCommandLineUnitTesting; // @synthesize usingCommandLineUnitTesting=_usingCommandLineUnitTesting;
@property(copy) NSString *testingDirectReportingSocketPath; // @synthesize testingDirectReportingSocketPath=_testingDirectReportingSocketPath;
@property(retain) NSUUID *testSessionIdentifier; // @synthesize testSessionIdentifier=_testSessionIdentifier;
@property BOOL testingUsesDirectReportingConnection; // @synthesize testingUsesDirectReportingConnection=_testingUsesDirectReportingConnection;
@property(copy) NSString *testBaselineFilePath; // @synthesize testBaselineFilePath=_testBaselineFilePath;
@property(copy) NSString *testScopeFilePath; // @synthesize testScopeFilePath=_testScopeFilePath;
@property(copy) NSArray *testingAdditionalBuiltDependenciesProductPaths; // @synthesize testingAdditionalBuiltDependenciesProductPaths=_testingAdditionalBuiltDependenciesProductPaths;
@property(copy) NSArray *testingCommandLineArgs; // @synthesize testingCommandLineArgs=_testingCommandLineArgs;
@property(copy) NSSet *buildProductDirectories; // @synthesize buildProductDirectories=_buildProductDirectories;
@property(copy) NSSet *additionalInstallations; // @synthesize additionalInstallations=_additionalInstallations;
@property(readonly) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
@property(readonly) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(retain) id deviceArbitrationObject; // @synthesize deviceArbitrationObject=_deviceArbitrationObject;
@property(retain) id debugServiceObject; // @synthesize debugServiceObject=_debugServiceObject;
@property int debugServiceFD; // @synthesize debugServiceFD=_debugServiceFD;
@property BOOL debugAsAService; // @synthesize debugAsAService=_debugAsAService;
@property(copy) NSString *remoteInstallPath; // @synthesize remoteInstallPath=_remoteInstallPath;
@property(copy) NSString *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly) int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property(readonly) int enableGPUFrameCaptureMode; // @synthesize enableGPUFrameCaptureMode=_enableGPUFrameCaptureMode;
@property(readonly) IDESchemeOptionReference *routingCoverageFileReference; // @synthesize routingCoverageFileReference=_routingCoverageFileReference;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly) BOOL showNonLocalizedStrings; // @synthesize showNonLocalizedStrings=_showNonLocalizedStrings;
@property(readonly) IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property(readonly) BOOL allowLocationSimulation; // @synthesize allowLocationSimulation=_allowLocationSimulation;
@property(readonly, copy) NSString *architecture; // @synthesize architecture=_architecture;
@property(readonly) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
@property(copy) DVTFilePath *replacementRunnableLocation; // @synthesize replacementRunnableLocation=_replacementRunnableLocation;
@property BOOL askOnLaunchChangedRunnable; // @synthesize askOnLaunchChangedRunnable=_askOnLaunchChangedRunnable;
@property(copy) NSDictionary *appExtensionBuiltPaths; // @synthesize appExtensionBuiltPaths=_appExtensionBuiltPaths;
@property int runnableType; // @synthesize runnableType=_runnableType;
@property(copy) NSString *runnableBundleIdentifier; // @synthesize runnableBundleIdentifier=_runnableBundleIdentifier;
@property(readonly) int launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property(readonly) int launchStyle; // @synthesize launchStyle=_launchStyle;
@property(readonly) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
@property(readonly) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
@property(readonly) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(readonly) int enableOpenGLPerformanceAnalysisMode;
@property(readonly) int enableOpenGLFrameCaptureMode;
- (id)launchParametersByAppendingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByPrependingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByReplacingEnvironmentVariablesWithDictionary:(id)arg1;
- (id)launchParametersByReplacingCommandLineArgsWithArray:(id)arg1;
@property(readonly) DVTFilePath *filePathToBinary; // @synthesize filePathToBinary=_filePathToBinary;
@property(readonly) DVTFilePath *originalRunnableLocation;
@property(readonly, copy) DVTFilePath *runnableLocation; // @synthesize runnableLocation=_runnableLocation;
@property(readonly, copy) NSArray *commandLineArgs; // @synthesize commandLineArgs=_commandLineArgs;
@property(readonly) NSArray *rawCommandLineArgs;
@property(readonly, copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, copy) NSMutableDictionary *testingEnvironmentVariables; // @synthesize testingEnvironmentVariables=_testingEnvironmentVariables;

@end

