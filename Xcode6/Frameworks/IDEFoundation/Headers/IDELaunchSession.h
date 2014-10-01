

#import <Foundation/Foundation.h>

@class DVTFileDataType, DVTFuture, DVTMapTable, DVTObservingToken, DVTPerformanceMetric, IDEExecutionEnvironment, IDEExecutionTracker, IDELaunchParametersSnapshot, IDELocationSimulator, IDERunDestination, IDESchemeActionRecord, IDESchemeCommand;

@protocol IDETraceInferiorSession;

@interface IDELaunchSession : NSObject
{
    NSMutableArray *_debugSessions;
    NSMutableArray *_debuggingAdditions;
    NSMutableSet *_shellXPCLaunchSessions;
    NSMutableSet *_xpcLaunchSessions;
    DVTPerformanceMetric *_xpcDebuggingMetric;
    NSArray *_frameworkNamesIncludingExtensionsLinkedByExecutable;
    NSArray *_frameworkNamesIncludingExtensionsLinkedByExecutableForAllSlices;
    BOOL _allConsoleAdaptorsTerminated;
    NSMutableArray *_prioritizedGaugeLocations;
    NSMutableArray *_nonPrioritizedGaugeLocations;
    NSMutableDictionary *_gaugeLocationsToSortCharacteristic;
    DVTFuture *_appExtensionInstallFuture;
    BOOL _iconChanged;
    BOOL _representsAnXPCService;
    int _state;
    int _runnablePID;
    int _parentPID;
    int _simulatorPID;
    int _targetOutputState;
    IDEExecutionEnvironment *_executionEnvironment;
    IDESchemeActionRecord *_schemeActionRecord;
    IDEExecutionTracker *_executionTracker;
    id <IDEDebugSession> _currentDebugSession;
    id <IDETraceInferiorSession> _currentTraceInferiorSession;
    NSArray *_gaugeLocations;
    IDELaunchParametersSnapshot *_launchParameters;
    DVTFileDataType *_runnableType;
    IDESchemeCommand *_schemeCommand;
    IDERunDestination *_runDestination;
    NSString *_runnableDisplayName;
    IDELocationSimulator *_locationSimulator;
    NSError *_alertError;
    NSString *_explicitActivityViewTitle;
    NSArray *_xpcServices;
    NSMutableSet *_consoleAdaptors;
    DVTMapTable *_targetConsoleAdaptorToTerminationToken;
    DVTObservingToken *_codeModulesObserver;
}

+ (BOOL)automaticallyNotifiesObserversOfTargetOutputState;
+ (void)terminateLaunchSession:(id)arg1 inWorkspace:(id)arg2;
+ (id)createLaunchSessionForDebuggingAddition:(id)arg1 inWorkspace:(id)arg2 launchParameters:(id)arg3 runnableDisplayName:(id)arg4 runDestination:(id)arg5;
+ (id)launchSessionForReference:(id)arg1;
+ (void)_setLaunchSession:(id)arg1 forReference:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) DVTObservingToken *codeModulesObserver; // @synthesize codeModulesObserver=_codeModulesObserver;
@property(retain, nonatomic) DVTMapTable *targetConsoleAdaptorToTerminationToken; // @synthesize targetConsoleAdaptorToTerminationToken=_targetConsoleAdaptorToTerminationToken;
@property(retain, nonatomic) NSMutableSet *consoleAdaptors; // @synthesize consoleAdaptors=_consoleAdaptors;
@property(copy) NSArray *xpcServices; // @synthesize xpcServices=_xpcServices;
@property BOOL representsAnXPCService; // @synthesize representsAnXPCService=_representsAnXPCService;
@property(copy) NSString *explicitActivityViewTitle; // @synthesize explicitActivityViewTitle=_explicitActivityViewTitle;
@property(copy) NSError *alertError; // @synthesize alertError=_alertError;
@property(readonly) IDELocationSimulator *locationSimulator; // @synthesize locationSimulator=_locationSimulator;
@property(readonly, nonatomic) int targetOutputState; // @synthesize targetOutputState=_targetOutputState;
@property(readonly, copy) NSString *runnableDisplayName; // @synthesize runnableDisplayName=_runnableDisplayName;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property BOOL iconChanged; // @synthesize iconChanged=_iconChanged;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property int parentPID; // @synthesize parentPID=_parentPID;
@property(nonatomic) int runnablePID; // @synthesize runnablePID=_runnablePID;
@property(readonly) DVTFileDataType *runnableType; // @synthesize runnableType=_runnableType;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
@property(copy) NSArray *gaugeLocations; // @synthesize gaugeLocations=_gaugeLocations;
@property(readonly, copy) NSArray *debuggingAdditions; // @synthesize debuggingAdditions=_debuggingAdditions;
@property(retain) id <IDETraceInferiorSession> currentTraceInferiorSession; // @synthesize currentTraceInferiorSession=_currentTraceInferiorSession;
@property(retain, nonatomic) id <IDEDebugSession> currentDebugSession; // @synthesize currentDebugSession=_currentDebugSession;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain) IDEExecutionTracker *executionTracker; // @synthesize executionTracker=_executionTracker;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
- (void)performanceMetric_xpcDebuggingCheckpointWithLabel:(id)arg1;
- (void)performanceMetric_xpcDebuggingCompleted;
- (void)performanceMetric_xpcDebuggingStarted;
- (id)performanceMetric_xpcIdentifierForLaunchSession;
- (void)_handleXPCServiceObservation:(id)arg1;
- (id)_findShellXPCLaunchSessionForServiceName:(id)arg1;
- (id)xpcLaunchSessions;
- (void)_startObservingXPCServicesAndAppExtensionsStage2;
- (void)_startObservingXPCServicesAndAppExtensions;
- (id)_environmentVariablesWithTestingFilteredOut:(id)arg1;
- (id)_createLaunchSessionForXPCServiceName:(id)arg1 withLaunchParameters:(id)arg2;
- (void)_cancelXPCLaunchSessions;
@property(readonly) NSArray *frameworkNamesIncludingExtensionsLinkedByExecutableForAllSlices;
@property(readonly) NSArray *frameworkNamesIncludingExtensionsLinkedByExecutable;
- (id)_frameworkNamesIncludingExtensionsLinkedByExecutableForCpuType:(int)arg1;
- (id)debuggingAdditionMatchingID:(id)arg1;
@property(readonly, copy) NSMutableArray *mutableGaugeLocations;
- (void)_removeAllGaugeLocations;
- (void)removeGaugeLocation:(id)arg1;
- (void)addNewGaugeLocation:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)addNewGaugeLocation:(id)arg1;
- (id)existingGaugeLocationForURL:(id)arg1;
- (id)referenceWhenAlive;
- (BOOL)isAlive;
@property(readonly) BOOL supportsDebugSession;
@property(readonly) BOOL isCurrentlyTracing;
- (void)_willExpire;
- (void)_invalidateExecutionEnvironment;
- (id)_frameworkNamesIncludingExtensionsFromLoadedCodeModules;
- (id)_createDebuggingAdditionForExtension:(id)arg1 availableBinariesNames:(id)arg2 anyMatchCriteriaFailuresDueToAvailableBinaries:(char *)arg3;
- (BOOL)_extensionHasLinkedFrameworkNameMatchCriteria:(id)arg1;
- (void)_didStart;
- (void)_removeConsoleAdaptorObservations:(id)arg1;
- (void)_handleConsoleAdaptorOutputTerminated:(id)arg1;
- (void)_handleConsoleItemAdded:(id)arg1;
- (void)removeConsoleAdaptor:(id)arg1;
- (void)addConsoleAdaptor:(id)arg1;
@property(readonly, copy) NSMutableSet *kvoConsoleAdaptors;
- (void)setTargetOutputState:(int)arg1;
@property(readonly) int CPUType;
- (id)initWithExecutionEnvironment:(id)arg1 launchParameters:(id)arg2 runnableDisplayName:(id)arg3 runnableType:(id)arg4 runDestination:(id)arg5;

// Remaining properties
@property(copy) NSArray *debugSessions; // @dynamic debugSessions;
@property(readonly, copy) NSMutableArray *mutableDebugSessions; // @dynamic mutableDebugSessions;
@property(retain, nonatomic) NSMutableArray *mutableDebuggingAdditions; // @dynamic mutableDebuggingAdditions;

@end

