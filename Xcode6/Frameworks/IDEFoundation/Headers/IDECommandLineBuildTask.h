

#import <IDEFoundation/IDEBuildTask.h>

@class NSArray, NSDictionary, NSString, NSTask;

@interface IDECommandLineBuildTask : IDEBuildTask
{
    NSTask *_task;
}

+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 command:(id)arg3;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 commandLine:(id)arg3;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 commandLine:(id)arg3 workingDirectory:(id)arg4 environmentEntries:(id)arg5;
- (NSString *)description;
- (void)main;
@property(readonly) NSString *workingDirectory;
@property(readonly) NSDictionary *environmentEntries;
@property(readonly) NSArray *commandLine;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;

@end

