

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTStackBacktrace, IDEScheme, IDESchemeBuildableReference, NSArray, NSMutableArray, NSString;

@interface IDESchemeAction : NSObject <DVTXMLUnarchiving, DVTInvalidation>
{
    BOOL _hasAwoken;
    IDEScheme *_runContext;
    NSMutableArray *_prePhaseExecutionActions;
    NSMutableArray *_postPhaseExecutionActions;
    IDESchemeBuildableReference *_buildableReferenceToUseForMacroExpansion;
}

+ (BOOL)shouldAllowCustomPhaseActions;
+ (void)initialize;
@property(retain) IDESchemeBuildableReference *buildableReferenceToUseForMacroExpansion; // @synthesize buildableReferenceToUseForMacroExpansion=_buildableReferenceToUseForMacroExpansion;
@property(readonly) IDEScheme *runContext; // @synthesize runContext=_runContext;
- (void)notifyOptimizationProfileCreationFailedWithError:(id)arg1;
- (void)notifyOptimizationProfileCreationSucceeded;
- (void)addOptimizationProfileFromFilePath:(id)arg1 toContainer:(id)arg2;
- (BOOL)mergeOptimizationProfilesFromDirectoryAtPath:(id)arg1 toFileAtPath:(id)arg2 forBuildableProduct:(id)arg3 buildParameters:(id)arg4 returningError:(id *)arg5;
- (id)relevantBuildablesForOptimizationProfileGenerationForSchemeCommand:(id)arg1;
- (BOOL)addOptimizationProfileFilePathToEnvironmentVariables:(id)arg1 forBuildableProduct:(id)arg2 buildParameters:(id)arg3 schemeActionRecord:(id)arg4 outError:(id *)arg5;
- (void)updateSearchPathSettingsInEnvironment:(id)arg1 withBuildProducts:(id)arg2 runDestination:(id)arg3;
- (void)addPostActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPreActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
@property(readonly) NSArray *_postPhaseExecutionActionsProxies;
@property(readonly) NSArray *_prePhaseExecutionActionsProxies;
- (void)schemeObjectGraphSetupComplete;
@property(readonly) BOOL hasAwoken;
- (void)replacePostPhaseExecutionActionsAtIndexes:(id)arg1 withPostPhaseExecutionActions:(id)arg2;
- (void)replaceObjectInPostPhaseExecutionActionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePostPhaseExecutionActionsAtIndexes:(id)arg1;
- (void)insertPostPhaseExecutionActions:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromPostPhaseExecutionActionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPostPhaseExecutionActionsAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *postPhaseExecutionActions; // @dynamic postPhaseExecutionActions;
- (void)replacePrePhaseExecutionActionsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectInPrePhaseExecutionActionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePrePhaseExecutionActionsAtIndexes:(id)arg1;
- (void)insertPrePhaseExecutionActions:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromPrePhaseExecutionActionsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPrePhaseExecutionActionsAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *prePhaseExecutionActions; // @dynamic prePhaseExecutionActions;
- (void)primitiveInvalidate;
- (id)bundleIdentifierFromBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (id)bundleIdentifierWithRunnablePath:(id)arg1;
- (id)expandMacrosInString:(id)arg1 forSchemeCommand:(id)arg2;
- (id)setUpActionDependenciesForCorePhaseOperation:(id)arg1 shouldRunPostActionsBlock:(CDUnknownBlockType)arg2 prePhaseEnvironmentPopulationBlock:(CDUnknownBlockType)arg3 postPhaseEnvironmentPopulationBlock:(CDUnknownBlockType)arg4 buildParameters:(id)arg5 schemeActionResultOperation:(id)arg6 error:(id *)arg7;
- (void)setRunContext:(id)arg1;
@property(readonly) BOOL doesNonActionWork;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *name;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutablePostPhaseExecutionActions; // @dynamic mutablePostPhaseExecutionActions;
@property(readonly) NSMutableArray *mutablePrePhaseExecutionActions; // @dynamic mutablePrePhaseExecutionActions;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

