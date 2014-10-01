

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEBuildSettingsProvider-Protocol.h>
#import <Foundation/Foundation.h>

@class DVTSearchPath, IDEBuildOperationQueueSet, IDEBuildParameters, IDEBuilder, IDEEntityIdentifier, IDEExecutionEnvironment, NSArray, NSMutableSet, NSSet, NSString;

@protocol IDEBuildableOperationManager;

@protocol IDEBuildable <IDEBuildSettingsProvider, DVTInvalidation, NSObject>
@property(readonly, copy) NSString *legacyIdentifier;
@property(readonly) NSSet *pathsOfFilesInCopyFilesBuildPhases;
@property(readonly) NSSet *pathsOfFilesInLinkedBinariesPhase;
@property(readonly) NSSet *namesOfLinkedBinaries;
@property(readonly) BOOL hasRecursiveDependencyCycle;
@property(readonly) NSString *toolTip;
@property(readonly) NSString *displayName;
@property(readonly) id <IDEBlueprint> blueprint;
@property(readonly, copy) IDEEntityIdentifier *entityIdentifier;
@property(readonly, copy) NSString *buildableIdentifier;
- (IDEBuilder *)createBuilderForBuildCommand:(int)arg1 withBuildTaskQueueSet:(IDEBuildOperationQueueSet *)arg2 parameters:(IDEBuildParameters *)arg3 buildOnlyTheseFiles:(NSArray *)arg4 restorePersistedBuildResults:(BOOL)arg5 withManager:(id <IDEBuildableOperationManager>)arg6;
- (NSArray *)implicitDependenciesForBuildParameters:(IDEBuildParameters *)arg1 executionEnvironment:(IDEExecutionEnvironment *)arg2 returningMessages:(id *)arg3;
- (NSArray *)directDependencies;
- (NSArray *)uncachedOrderedRecursiveDependenciesIncludingSelf:(BOOL)arg1 visitedBuildables:(NSMutableSet *)arg2;
- (NSArray *)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1;
- (DVTSearchPath *)toolSearchPathWithBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)absolutePathByEvaluatingBuildSettingExpressionString:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)stringByEvaluatingBuildSettingExpressionString:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)evaluatedStringListValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)evaluatedStringValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)allBuildSettingNamesWithBuildParameters:(IDEBuildParameters *)arg1;

@optional
- (Class)buildOperationManagerClass;
@end

