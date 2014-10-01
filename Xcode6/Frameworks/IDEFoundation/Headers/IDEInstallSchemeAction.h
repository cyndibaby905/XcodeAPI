

#import <IDEFoundation/IDESchemeAction.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSArray, NSString;

@interface IDEInstallSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSString *_buildConfiguration;
    NSString *_customInstallName;
    NSArray *_killProcessList;
}

+ (id)keyPathsForValuesAffectingKillProcessListString;
+ (id)keyPathsForValuesAffectingDefaultInstallName;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (BOOL)allowInstallSchemeAction;
@property(copy) NSArray *killProcessList; // @synthesize killProcessList=_killProcessList;
@property(copy) NSString *customInstallName; // @synthesize customInstallName=_customInstallName;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
- (void)setKillProcessesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCustomInstallNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildConfigurationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (BOOL)hasDefaultValues;
- (id)overridingMacrosForInstallBuildForWorkspaceArena:(id)arg1 destination:(id)arg2;
- (id)installOperationWithExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 schemeActionRecord:(id)arg4 outError:(id *)arg5 actionCallbackBlock:(CDUnknownBlockType)arg6;
@property(copy) NSString *killProcessListString;
@property(readonly) NSString *defaultInstallName;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

