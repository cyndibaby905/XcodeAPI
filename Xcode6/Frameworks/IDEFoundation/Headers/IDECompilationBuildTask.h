

#import <IDEFoundation/IDECommandLineBuildTask.h>

@interface IDECompilationBuildTask : IDECommandLineBuildTask
{
}

- (NSString *)description;
- (void)main;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;

@end

