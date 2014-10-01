

#import <DVTFoundation/DVTOperation.h>

@class IDEActivityLogSection, NSDictionary, NSString;

@interface IDEBuildTask : DVTOperation
{
    NSString *_identifier;
    NSDictionary *_properties;
    IDEActivityLogSection *_activityLogSection;
    CDUnknownBlockType _didStartExecutingBlock;
    CDUnknownBlockType _activityLogSectionDidChangeBlock;
    CDUnknownBlockType _exitCodeWasSetBlock;
    CDUnknownBlockType _updateBuildStatusForBuildTaskBlock;
    BOOL _restorePersistedBuildResults;
    BOOL _dontActuallyRun;
    int _exitCode;
    CDUnknownBlockType _addPostprocessingBlocks;
}

+ (id)defaultProperties;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;
+ (void)initialize;
@property(copy) CDUnknownBlockType addPostprocessingBlocks; // @synthesize addPostprocessingBlocks=_addPostprocessingBlocks;
@property BOOL dontActuallyRun; // @synthesize dontActuallyRun=_dontActuallyRun;
@property(copy) CDUnknownBlockType updateBuildStatusForBuildTask; // @synthesize updateBuildStatusForBuildTask=_updateBuildStatusForBuildTaskBlock;
@property(copy) CDUnknownBlockType exitCodeWasSet; // @synthesize exitCodeWasSet=_exitCodeWasSetBlock;
@property(copy) CDUnknownBlockType activityLogSectionDidChange; // @synthesize activityLogSectionDidChange=_activityLogSectionDidChangeBlock;
@property(copy) CDUnknownBlockType didStartExecuting; // @synthesize didStartExecuting=_didStartExecutingBlock;
@property(nonatomic) int exitCode; // @synthesize exitCode=_exitCode;
@property(retain, nonatomic) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)longDescription;
- (NSString *)description;
- (void)main;
- (void)addStatisticsDataToStatisticsSection:(id)arg1;
- (BOOL)isWrapperForCommand:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;

@end

